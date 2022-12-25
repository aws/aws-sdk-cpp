/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/devops-guru/DevOpsGuru_EXPORTS.h>
#include <aws/devops-guru/model/ServiceIntegrationConfig.h>
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
    AWS_DEVOPSGURU_API DescribeServiceIntegrationResult();
    AWS_DEVOPSGURU_API DescribeServiceIntegrationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DEVOPSGURU_API DescribeServiceIntegrationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const ServiceIntegrationConfig& GetServiceIntegration() const{ return m_serviceIntegration; }

    
    inline void SetServiceIntegration(const ServiceIntegrationConfig& value) { m_serviceIntegration = value; }

    
    inline void SetServiceIntegration(ServiceIntegrationConfig&& value) { m_serviceIntegration = std::move(value); }

    
    inline DescribeServiceIntegrationResult& WithServiceIntegration(const ServiceIntegrationConfig& value) { SetServiceIntegration(value); return *this;}

    
    inline DescribeServiceIntegrationResult& WithServiceIntegration(ServiceIntegrationConfig&& value) { SetServiceIntegration(std::move(value)); return *this;}

  private:

    ServiceIntegrationConfig m_serviceIntegration;
  };

} // namespace Model
} // namespace DevOpsGuru
} // namespace Aws
