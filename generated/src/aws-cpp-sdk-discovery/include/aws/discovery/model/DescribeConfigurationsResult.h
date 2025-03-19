/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/discovery/ApplicationDiscoveryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ApplicationDiscoveryService
{
namespace Model
{
  class DescribeConfigurationsResult
  {
  public:
    AWS_APPLICATIONDISCOVERYSERVICE_API DescribeConfigurationsResult() = default;
    AWS_APPLICATIONDISCOVERYSERVICE_API DescribeConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPLICATIONDISCOVERYSERVICE_API DescribeConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A key in the response map. The value is an array of data.</p>
     */
    inline const Aws::Vector<Aws::Map<Aws::String, Aws::String>>& GetConfigurations() const { return m_configurations; }
    template<typename ConfigurationsT = Aws::Vector<Aws::Map<Aws::String, Aws::String>>>
    void SetConfigurations(ConfigurationsT&& value) { m_configurationsHasBeenSet = true; m_configurations = std::forward<ConfigurationsT>(value); }
    template<typename ConfigurationsT = Aws::Vector<Aws::Map<Aws::String, Aws::String>>>
    DescribeConfigurationsResult& WithConfigurations(ConfigurationsT&& value) { SetConfigurations(std::forward<ConfigurationsT>(value)); return *this;}
    template<typename ConfigurationsT = Aws::Map<Aws::String, Aws::String>>
    DescribeConfigurationsResult& AddConfigurations(ConfigurationsT&& value) { m_configurationsHasBeenSet = true; m_configurations.emplace_back(std::forward<ConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeConfigurationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::Map<Aws::String, Aws::String>> m_configurations;
    bool m_configurationsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationDiscoveryService
} // namespace Aws
