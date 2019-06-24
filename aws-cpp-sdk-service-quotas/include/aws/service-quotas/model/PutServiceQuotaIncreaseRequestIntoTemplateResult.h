/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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

#pragma once
#include <aws/service-quotas/ServiceQuotas_EXPORTS.h>
#include <aws/service-quotas/model/ServiceQuotaIncreaseRequestInTemplate.h>
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
namespace ServiceQuotas
{
namespace Model
{
  class AWS_SERVICEQUOTAS_API PutServiceQuotaIncreaseRequestIntoTemplateResult
  {
  public:
    PutServiceQuotaIncreaseRequestIntoTemplateResult();
    PutServiceQuotaIncreaseRequestIntoTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    PutServiceQuotaIncreaseRequestIntoTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A structure that contains information about one service quota increase
     * request.</p>
     */
    inline const ServiceQuotaIncreaseRequestInTemplate& GetServiceQuotaIncreaseRequestInTemplate() const{ return m_serviceQuotaIncreaseRequestInTemplate; }

    /**
     * <p>A structure that contains information about one service quota increase
     * request.</p>
     */
    inline void SetServiceQuotaIncreaseRequestInTemplate(const ServiceQuotaIncreaseRequestInTemplate& value) { m_serviceQuotaIncreaseRequestInTemplate = value; }

    /**
     * <p>A structure that contains information about one service quota increase
     * request.</p>
     */
    inline void SetServiceQuotaIncreaseRequestInTemplate(ServiceQuotaIncreaseRequestInTemplate&& value) { m_serviceQuotaIncreaseRequestInTemplate = std::move(value); }

    /**
     * <p>A structure that contains information about one service quota increase
     * request.</p>
     */
    inline PutServiceQuotaIncreaseRequestIntoTemplateResult& WithServiceQuotaIncreaseRequestInTemplate(const ServiceQuotaIncreaseRequestInTemplate& value) { SetServiceQuotaIncreaseRequestInTemplate(value); return *this;}

    /**
     * <p>A structure that contains information about one service quota increase
     * request.</p>
     */
    inline PutServiceQuotaIncreaseRequestIntoTemplateResult& WithServiceQuotaIncreaseRequestInTemplate(ServiceQuotaIncreaseRequestInTemplate&& value) { SetServiceQuotaIncreaseRequestInTemplate(std::move(value)); return *this;}

  private:

    ServiceQuotaIncreaseRequestInTemplate m_serviceQuotaIncreaseRequestInTemplate;
  };

} // namespace Model
} // namespace ServiceQuotas
} // namespace Aws
