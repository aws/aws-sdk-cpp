/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <type_traits>

namespace Aws
{
    namespace Utils
    {
        namespace Crypto
        {
            template <typename DataType = uint64_t>
            class SecureRandom
            {
            public:
                SecureRandom() : m_failure(false)
                    { static_assert(std::is_integral<DataType>::value, "Type DataType must be integral"); }

                virtual ~SecureRandom() = default;

                virtual void Reset() = 0;
                virtual DataType operator()() = 0;
                operator bool() const { return !m_failure; }

            protected:
                bool m_failure;
            };

            template<typename DataType>
            class SecureRandomFactory
            {
            public:
                /**
                 * Factory method. Returns SecureRandom implementation.
                 */
                virtual std::shared_ptr<SecureRandom<DataType>> CreateImplementation() const = 0;

                /**
                 * Opportunity to make any static initialization calls you need to make.
                 * Will only be called once.
                 */
                virtual void InitStaticState() {}

                /**
                 * Opportunity to make any static cleanup calls you need to make.
                 * will only be called at the end of the application.
                 */
                virtual void CleanupStaticState() {}
            };
        }
    }
}