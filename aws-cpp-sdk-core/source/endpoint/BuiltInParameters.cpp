/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/endpoint/BuiltInParameters.h>

namespace Aws
{
namespace Endpoint
{
    static const BuiltInParameters::EndpointParameter NOT_FOUND_PARAMETER("PARAMETER_NOT_SET", false, EndpointParameter::ParameterOrigin::CLIENT_CONTEXT);

    const BuiltInParameters::EndpointParameter& BuiltInParameters::GetParameter(const Aws::String& name) const
    {
        const auto foundIt = std::find_if(m_params.begin(), m_params.end(),
                                          [name](const BuiltInParameters::EndpointParameter& item)
                                          {
                                              return item.GetName() == name;
                                          });

        if (foundIt != m_params.end())
        {
            return *foundIt;
        }
        else
        {
            return NOT_FOUND_PARAMETER;
        }
    }

    void BuiltInParameters::SetParameter(EndpointParameter param)
    {
        const auto foundIt = std::find_if(m_params.begin(), m_params.end(),
                                          [param](const BuiltInParameters::EndpointParameter& item)
                                          {
                                              return item.GetName() == param.GetName();
                                          });

        if (foundIt != m_params.end())
        {
            m_params.erase(foundIt);
        }
        m_params.emplace_back(std::move(param));
    }

    void BuiltInParameters::SetStringParameter(Aws::String name, Aws::String value)
    {
        return SetParameter(EndpointParameter(std::move(name), std::move(value), EndpointParameter::ParameterOrigin::BUILT_IN));
    }

    void BuiltInParameters::SetBooleanParameter(Aws::String name, bool value)
    {
        return SetParameter(EndpointParameter(std::move(name), value, EndpointParameter::ParameterOrigin::BUILT_IN));
    }

    const Aws::Vector<BuiltInParameters::EndpointParameter>& BuiltInParameters::GetAllParameters() const
    {
        return m_params;
    }
} // namespace Endpoint
} // namespace Aws