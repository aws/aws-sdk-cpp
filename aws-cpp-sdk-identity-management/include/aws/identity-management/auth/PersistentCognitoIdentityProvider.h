/*
  * Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

namespace Aws
{
    class String;
    template<typename K, typename E>
    class Map;

    namespace Auth
    {
        class PersistentCognitoIdentityProvider
        {
        public:
            virtual bool HasIdentityId() const = 0;
            virtual bool HasLogins() const = 0;
            virtual Aws::String GetIdentityId() const = 0;
            virtual Aws::Map<Aws::String, Aws::String> GetLogins() const = 0;
            virtual void PersistIdentityId(const Aws::String&) = 0;
            virtual void PersistLogins(const Aws::Map<Aws::String, Aws::String>&) = 0;
        };
    }
}