/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
