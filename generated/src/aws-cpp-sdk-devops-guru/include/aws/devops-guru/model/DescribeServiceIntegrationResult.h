/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/model/ServiceIntegrationConfig.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace DevOpsGuru
{
namespace Model
{
  class DescribeServiceIntegrationResult
  {
  public:
    AWS_DEVOPSGURU_API DescribeServiceIntegrationResult() = default;
    AWS_DEVOPSGURU_API DescribeServiceIntegrationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVOPSGURU_API DescribeServiceIntegrationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const ServiceIntegrationConfig& GetServiceIntegration() const { return m_serviceIntegration; }
    template<typename ServiceIntegrationT = ServiceIntegrationConfig>
    void SetServiceIntegration(ServiceIntegrationT&& value) { m_serviceIntegrationHasBeenSet = true; m_serviceIntegration = std::forward<ServiceIntegrationT>(value); }
    template<typename ServiceIntegrationT = ServiceIntegrationConfig>
    DescribeServiceIntegrationResult& WithServiceIntegration(ServiceIntegrationT&& value) { SetServiceIntegration(std::forward<ServiceIntegrationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeServiceIntegrationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    ServiceIntegrationConfig m_serviceIntegration;
    bool m_serviceIntegrationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
