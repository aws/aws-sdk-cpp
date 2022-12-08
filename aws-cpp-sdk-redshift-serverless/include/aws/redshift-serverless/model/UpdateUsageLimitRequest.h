/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/redshift-serverless/RedshiftServerlessRequest.h>
#include <aws/redshift-serverless/model/UsageLimitBreachAction.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace RedshiftServerless
{
namespace Model
{

  /**
   */
  class UpdateUsageLimitRequest : public RedshiftServerlessRequest
  {
  public:
    AWS_REDSHIFTSERVERLESS_API UpdateUsageLimitRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateUsageLimit"; }

    AWS_REDSHIFTSERVERLESS_API Aws::String SerializePayload() const override;

    AWS_REDSHIFTSERVERLESS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The new limit amount. If time-based, this amount is in Redshift Processing
     * Units (RPU) consumed per hour. If data-based, this amount is in terabytes (TB)
     * of data transferred between Regions in cross-account sharing. The value must be
     * a positive number.</p>
     */
    inline long long GetAmount() const{ return m_amount; }

    /**
     * <p>The new limit amount. If time-based, this amount is in Redshift Processing
     * Units (RPU) consumed per hour. If data-based, this amount is in terabytes (TB)
     * of data transferred between Regions in cross-account sharing. The value must be
     * a positive number.</p>
     */
    inline bool AmountHasBeenSet() const { return m_amountHasBeenSet; }

    /**
     * <p>The new limit amount. If time-based, this amount is in Redshift Processing
     * Units (RPU) consumed per hour. If data-based, this amount is in terabytes (TB)
     * of data transferred between Regions in cross-account sharing. The value must be
     * a positive number.</p>
     */
    inline void SetAmount(long long value) { m_amountHasBeenSet = true; m_amount = value; }

    /**
     * <p>The new limit amount. If time-based, this amount is in Redshift Processing
     * Units (RPU) consumed per hour. If data-based, this amount is in terabytes (TB)
     * of data transferred between Regions in cross-account sharing. The value must be
     * a positive number.</p>
     */
    inline UpdateUsageLimitRequest& WithAmount(long long value) { SetAmount(value); return *this;}


    /**
     * <p>The new action that Amazon Redshift Serverless takes when the limit is
     * reached.</p>
     */
    inline const UsageLimitBreachAction& GetBreachAction() const{ return m_breachAction; }

    /**
     * <p>The new action that Amazon Redshift Serverless takes when the limit is
     * reached.</p>
     */
    inline bool BreachActionHasBeenSet() const { return m_breachActionHasBeenSet; }

    /**
     * <p>The new action that Amazon Redshift Serverless takes when the limit is
     * reached.</p>
     */
    inline void SetBreachAction(const UsageLimitBreachAction& value) { m_breachActionHasBeenSet = true; m_breachAction = value; }

    /**
     * <p>The new action that Amazon Redshift Serverless takes when the limit is
     * reached.</p>
     */
    inline void SetBreachAction(UsageLimitBreachAction&& value) { m_breachActionHasBeenSet = true; m_breachAction = std::move(value); }

    /**
     * <p>The new action that Amazon Redshift Serverless takes when the limit is
     * reached.</p>
     */
    inline UpdateUsageLimitRequest& WithBreachAction(const UsageLimitBreachAction& value) { SetBreachAction(value); return *this;}

    /**
     * <p>The new action that Amazon Redshift Serverless takes when the limit is
     * reached.</p>
     */
    inline UpdateUsageLimitRequest& WithBreachAction(UsageLimitBreachAction&& value) { SetBreachAction(std::move(value)); return *this;}


    /**
     * <p>The identifier of the usage limit to update.</p>
     */
    inline const Aws::String& GetUsageLimitId() const{ return m_usageLimitId; }

    /**
     * <p>The identifier of the usage limit to update.</p>
     */
    inline bool UsageLimitIdHasBeenSet() const { return m_usageLimitIdHasBeenSet; }

    /**
     * <p>The identifier of the usage limit to update.</p>
     */
    inline void SetUsageLimitId(const Aws::String& value) { m_usageLimitIdHasBeenSet = true; m_usageLimitId = value; }

    /**
     * <p>The identifier of the usage limit to update.</p>
     */
    inline void SetUsageLimitId(Aws::String&& value) { m_usageLimitIdHasBeenSet = true; m_usageLimitId = std::move(value); }

    /**
     * <p>The identifier of the usage limit to update.</p>
     */
    inline void SetUsageLimitId(const char* value) { m_usageLimitIdHasBeenSet = true; m_usageLimitId.assign(value); }

    /**
     * <p>The identifier of the usage limit to update.</p>
     */
    inline UpdateUsageLimitRequest& WithUsageLimitId(const Aws::String& value) { SetUsageLimitId(value); return *this;}

    /**
     * <p>The identifier of the usage limit to update.</p>
     */
    inline UpdateUsageLimitRequest& WithUsageLimitId(Aws::String&& value) { SetUsageLimitId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the usage limit to update.</p>
     */
    inline UpdateUsageLimitRequest& WithUsageLimitId(const char* value) { SetUsageLimitId(value); return *this;}

  private:

    long long m_amount;
    bool m_amountHasBeenSet = false;

    UsageLimitBreachAction m_breachAction;
    bool m_breachActionHasBeenSet = false;

    Aws::String m_usageLimitId;
    bool m_usageLimitIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
