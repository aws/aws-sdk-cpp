﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/service-quotas/ServiceQuotas_EXPORTS.h>
#include <aws/service-quotas/ServiceQuotasRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ServiceQuotas
{
namespace Model
{

  /**
   */
  class AWS_SERVICEQUOTAS_API RequestServiceQuotaIncreaseRequest : public ServiceQuotasRequest
  {
  public:
    RequestServiceQuotaIncreaseRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RequestServiceQuotaIncrease"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The service identifier.</p>
     */
    inline const Aws::String& GetServiceCode() const{ return m_serviceCode; }

    /**
     * <p>The service identifier.</p>
     */
    inline bool ServiceCodeHasBeenSet() const { return m_serviceCodeHasBeenSet; }

    /**
     * <p>The service identifier.</p>
     */
    inline void SetServiceCode(const Aws::String& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = value; }

    /**
     * <p>The service identifier.</p>
     */
    inline void SetServiceCode(Aws::String&& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = std::move(value); }

    /**
     * <p>The service identifier.</p>
     */
    inline void SetServiceCode(const char* value) { m_serviceCodeHasBeenSet = true; m_serviceCode.assign(value); }

    /**
     * <p>The service identifier.</p>
     */
    inline RequestServiceQuotaIncreaseRequest& WithServiceCode(const Aws::String& value) { SetServiceCode(value); return *this;}

    /**
     * <p>The service identifier.</p>
     */
    inline RequestServiceQuotaIncreaseRequest& WithServiceCode(Aws::String&& value) { SetServiceCode(std::move(value)); return *this;}

    /**
     * <p>The service identifier.</p>
     */
    inline RequestServiceQuotaIncreaseRequest& WithServiceCode(const char* value) { SetServiceCode(value); return *this;}


    /**
     * <p>The quota identifier.</p>
     */
    inline const Aws::String& GetQuotaCode() const{ return m_quotaCode; }

    /**
     * <p>The quota identifier.</p>
     */
    inline bool QuotaCodeHasBeenSet() const { return m_quotaCodeHasBeenSet; }

    /**
     * <p>The quota identifier.</p>
     */
    inline void SetQuotaCode(const Aws::String& value) { m_quotaCodeHasBeenSet = true; m_quotaCode = value; }

    /**
     * <p>The quota identifier.</p>
     */
    inline void SetQuotaCode(Aws::String&& value) { m_quotaCodeHasBeenSet = true; m_quotaCode = std::move(value); }

    /**
     * <p>The quota identifier.</p>
     */
    inline void SetQuotaCode(const char* value) { m_quotaCodeHasBeenSet = true; m_quotaCode.assign(value); }

    /**
     * <p>The quota identifier.</p>
     */
    inline RequestServiceQuotaIncreaseRequest& WithQuotaCode(const Aws::String& value) { SetQuotaCode(value); return *this;}

    /**
     * <p>The quota identifier.</p>
     */
    inline RequestServiceQuotaIncreaseRequest& WithQuotaCode(Aws::String&& value) { SetQuotaCode(std::move(value)); return *this;}

    /**
     * <p>The quota identifier.</p>
     */
    inline RequestServiceQuotaIncreaseRequest& WithQuotaCode(const char* value) { SetQuotaCode(value); return *this;}


    /**
     * <p>The new, increased value for the quota.</p>
     */
    inline double GetDesiredValue() const{ return m_desiredValue; }

    /**
     * <p>The new, increased value for the quota.</p>
     */
    inline bool DesiredValueHasBeenSet() const { return m_desiredValueHasBeenSet; }

    /**
     * <p>The new, increased value for the quota.</p>
     */
    inline void SetDesiredValue(double value) { m_desiredValueHasBeenSet = true; m_desiredValue = value; }

    /**
     * <p>The new, increased value for the quota.</p>
     */
    inline RequestServiceQuotaIncreaseRequest& WithDesiredValue(double value) { SetDesiredValue(value); return *this;}

  private:

    Aws::String m_serviceCode;
    bool m_serviceCodeHasBeenSet;

    Aws::String m_quotaCode;
    bool m_quotaCodeHasBeenSet;

    double m_desiredValue;
    bool m_desiredValueHasBeenSet;
  };

} // namespace Model
} // namespace ServiceQuotas
} // namespace Aws
