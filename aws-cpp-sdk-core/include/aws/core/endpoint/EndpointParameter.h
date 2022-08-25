/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */


#pragma once

#include <aws/core/client/AWSError.h>

namespace Aws
{
    namespace Endpoint
    {
        // IDK how to express the level of ugliness of this "interface".
        class AWS_CORE_API EndpointParameter
        {
        public:
            enum class ParameterType
            {
                BOOLEAN,
                STRING
            };
            enum class ParameterOrigin
            {
                STATIC_CONTEXT,
                OPERATION_CONTEXT,
                CLIENT_CONTEXT
            };

            EndpointParameter(ParameterType storedType, ParameterOrigin parameterOrigin, Aws::String name)
              : m_storedType(storedType),
                m_parameterOrigin(parameterOrigin),
                m_name(std::move(name))
            {}

            inline ParameterType GetStoredType() const
            {
                return m_storedType;
            }

            inline ParameterOrigin GetParameterOrigin() const
            {
                return m_parameterOrigin;
            }

            inline const Aws::String& GetName() const
            {
                return m_name;
            }

            enum class GetSetResult
            {
                SUCCESS,
                ERROR_WRONG_TYPE
            };

            inline GetSetResult GetBool(bool& ioValue) const
            {
                if(m_storedType != ParameterType::BOOLEAN)
                    return GetSetResult::ERROR_WRONG_TYPE;
                ioValue = m_boolValue;
                return GetSetResult::SUCCESS;
            }

            inline GetSetResult GetString(Aws::String& ioValue) const
            {
                // disabled RTTI...
                if(m_storedType != ParameterType::STRING)
                    return GetSetResult::ERROR_WRONG_TYPE;
                ioValue = m_stringValue;
                return GetSetResult::SUCCESS;
            }

            inline GetSetResult SetBool(bool iValue)
            {
                if(m_storedType != ParameterType::BOOLEAN)
                    return GetSetResult::ERROR_WRONG_TYPE;
                m_boolValue = iValue;
                return GetSetResult::SUCCESS;
            }

            inline GetSetResult SetString(Aws::String iValue)
            {
                if(m_storedType != ParameterType::STRING)
                    return GetSetResult::ERROR_WRONG_TYPE;
                m_stringValue = std::move(iValue);
                return GetSetResult::SUCCESS;
            }

        protected:
            const ParameterType m_storedType;
            const ParameterOrigin m_parameterOrigin;
            const Aws::String m_name;

            bool m_boolValue = false;
            Aws::String m_stringValue;
        };
    } // namespace Endpoint
} // namespace Aws
