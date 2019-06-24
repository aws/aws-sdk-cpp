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
#include <aws/service-quotas/model/ServiceQuotaTemplateAssociationStatus.h>
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
  class AWS_SERVICEQUOTAS_API GetAssociationForServiceQuotaTemplateResult
  {
  public:
    GetAssociationForServiceQuotaTemplateResult();
    GetAssociationForServiceQuotaTemplateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetAssociationForServiceQuotaTemplateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Specifies whether the template is <code>ASSOCIATED</code> or
     * <code>DISASSOCIATED</code>. If the template is <code>ASSOCIATED</code>, then it
     * requests service quota increases for all new accounts created in your
     * organization. </p>
     */
    inline const ServiceQuotaTemplateAssociationStatus& GetServiceQuotaTemplateAssociationStatus() const{ return m_serviceQuotaTemplateAssociationStatus; }

    /**
     * <p>Specifies whether the template is <code>ASSOCIATED</code> or
     * <code>DISASSOCIATED</code>. If the template is <code>ASSOCIATED</code>, then it
     * requests service quota increases for all new accounts created in your
     * organization. </p>
     */
    inline void SetServiceQuotaTemplateAssociationStatus(const ServiceQuotaTemplateAssociationStatus& value) { m_serviceQuotaTemplateAssociationStatus = value; }

    /**
     * <p>Specifies whether the template is <code>ASSOCIATED</code> or
     * <code>DISASSOCIATED</code>. If the template is <code>ASSOCIATED</code>, then it
     * requests service quota increases for all new accounts created in your
     * organization. </p>
     */
    inline void SetServiceQuotaTemplateAssociationStatus(ServiceQuotaTemplateAssociationStatus&& value) { m_serviceQuotaTemplateAssociationStatus = std::move(value); }

    /**
     * <p>Specifies whether the template is <code>ASSOCIATED</code> or
     * <code>DISASSOCIATED</code>. If the template is <code>ASSOCIATED</code>, then it
     * requests service quota increases for all new accounts created in your
     * organization. </p>
     */
    inline GetAssociationForServiceQuotaTemplateResult& WithServiceQuotaTemplateAssociationStatus(const ServiceQuotaTemplateAssociationStatus& value) { SetServiceQuotaTemplateAssociationStatus(value); return *this;}

    /**
     * <p>Specifies whether the template is <code>ASSOCIATED</code> or
     * <code>DISASSOCIATED</code>. If the template is <code>ASSOCIATED</code>, then it
     * requests service quota increases for all new accounts created in your
     * organization. </p>
     */
    inline GetAssociationForServiceQuotaTemplateResult& WithServiceQuotaTemplateAssociationStatus(ServiceQuotaTemplateAssociationStatus&& value) { SetServiceQuotaTemplateAssociationStatus(std::move(value)); return *this;}

  private:

    ServiceQuotaTemplateAssociationStatus m_serviceQuotaTemplateAssociationStatus;
  };

} // namespace Model
} // namespace ServiceQuotas
} // namespace Aws
