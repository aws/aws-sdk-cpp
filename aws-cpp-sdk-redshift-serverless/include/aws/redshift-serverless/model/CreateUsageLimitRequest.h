/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/redshift-serverless/RedshiftServerlessRequest.h>
#include <aws/redshift-serverless/model/UsageLimitBreachAction.h>
#include <aws/redshift-serverless/model/UsageLimitPeriod.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift-serverless/model/UsageLimitUsageType.h>
#include <utility>

namespace Aws
{
namespace RedshiftServerless
{
namespace Model
{

  /**
   */
  class CreateUsageLimitRequest : public RedshiftServerlessRequest
  {
  public:
    AWS_REDSHIFTSERVERLESS_API CreateUsageLimitRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateUsageLimit"; }

    AWS_REDSHIFTSERVERLESS_API Aws::String SerializePayload() const override;

    AWS_REDSHIFTSERVERLESS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The limit amount. If time-based, this amount is in Redshift Processing Units
     * (RPU) consumed per hour. If data-based, this amount is in terabytes (TB) of data
     * transferred between Regions in cross-account sharing. The value must be a
     * positive number.</p>
     */
    inline long long GetAmount() const{ return m_amount; }

    /**
     * <p>The limit amount. If time-based, this amount is in Redshift Processing Units
     * (RPU) consumed per hour. If data-based, this amount is in terabytes (TB) of data
     * transferred between Regions in cross-account sharing. The value must be a
     * positive number.</p>
     */
    inline bool AmountHasBeenSet() const { return m_amountHasBeenSet; }

    /**
     * <p>The limit amount. If time-based, this amount is in Redshift Processing Units
     * (RPU) consumed per hour. If data-based, this amount is in terabytes (TB) of data
     * transferred between Regions in cross-account sharing. The value must be a
     * positive number.</p>
     */
    inline void SetAmount(long long value) { m_amountHasBeenSet = true; m_amount = value; }

    /**
     * <p>The limit amount. If time-based, this amount is in Redshift Processing Units
     * (RPU) consumed per hour. If data-based, this amount is in terabytes (TB) of data
     * transferred between Regions in cross-account sharing. The value must be a
     * positive number.</p>
     */
    inline CreateUsageLimitRequest& WithAmount(long long value) { SetAmount(value); return *this;}


    /**
     * <p>The action that Amazon Redshift Serverless takes when the limit is reached.
     * The default is log.</p>
     */
    inline const UsageLimitBreachAction& GetBreachAction() const{ return m_breachAction; }

    /**
     * <p>The action that Amazon Redshift Serverless takes when the limit is reached.
     * The default is log.</p>
     */
    inline bool BreachActionHasBeenSet() const { return m_breachActionHasBeenSet; }

    /**
     * <p>The action that Amazon Redshift Serverless takes when the limit is reached.
     * The default is log.</p>
     */
    inline void SetBreachAction(const UsageLimitBreachAction& value) { m_breachActionHasBeenSet = true; m_breachAction = value; }

    /**
     * <p>The action that Amazon Redshift Serverless takes when the limit is reached.
     * The default is log.</p>
     */
    inline void SetBreachAction(UsageLimitBreachAction&& value) { m_breachActionHasBeenSet = true; m_breachAction = std::move(value); }

    /**
     * <p>The action that Amazon Redshift Serverless takes when the limit is reached.
     * The default is log.</p>
     */
    inline CreateUsageLimitRequest& WithBreachAction(const UsageLimitBreachAction& value) { SetBreachAction(value); return *this;}

    /**
     * <p>The action that Amazon Redshift Serverless takes when the limit is reached.
     * The default is log.</p>
     */
    inline CreateUsageLimitRequest& WithBreachAction(UsageLimitBreachAction&& value) { SetBreachAction(std::move(value)); return *this;}


    /**
     * <p>The time period that the amount applies to. A weekly period begins on Sunday.
     * The default is monthly.</p>
     */
    inline const UsageLimitPeriod& GetPeriod() const{ return m_period; }

    /**
     * <p>The time period that the amount applies to. A weekly period begins on Sunday.
     * The default is monthly.</p>
     */
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }

    /**
     * <p>The time period that the amount applies to. A weekly period begins on Sunday.
     * The default is monthly.</p>
     */
    inline void SetPeriod(const UsageLimitPeriod& value) { m_periodHasBeenSet = true; m_period = value; }

    /**
     * <p>The time period that the amount applies to. A weekly period begins on Sunday.
     * The default is monthly.</p>
     */
    inline void SetPeriod(UsageLimitPeriod&& value) { m_periodHasBeenSet = true; m_period = std::move(value); }

    /**
     * <p>The time period that the amount applies to. A weekly period begins on Sunday.
     * The default is monthly.</p>
     */
    inline CreateUsageLimitRequest& WithPeriod(const UsageLimitPeriod& value) { SetPeriod(value); return *this;}

    /**
     * <p>The time period that the amount applies to. A weekly period begins on Sunday.
     * The default is monthly.</p>
     */
    inline CreateUsageLimitRequest& WithPeriod(UsageLimitPeriod&& value) { SetPeriod(std::move(value)); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Redshift Serverless resource to
     * create the usage limit for.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Redshift Serverless resource to
     * create the usage limit for.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Redshift Serverless resource to
     * create the usage limit for.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Redshift Serverless resource to
     * create the usage limit for.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Redshift Serverless resource to
     * create the usage limit for.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Redshift Serverless resource to
     * create the usage limit for.</p>
     */
    inline CreateUsageLimitRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Redshift Serverless resource to
     * create the usage limit for.</p>
     */
    inline CreateUsageLimitRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Redshift Serverless resource to
     * create the usage limit for.</p>
     */
    inline CreateUsageLimitRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>The type of Amazon Redshift Serverless usage to create a usage limit for.</p>
     */
    inline const UsageLimitUsageType& GetUsageType() const{ return m_usageType; }

    /**
     * <p>The type of Amazon Redshift Serverless usage to create a usage limit for.</p>
     */
    inline bool UsageTypeHasBeenSet() const { return m_usageTypeHasBeenSet; }

    /**
     * <p>The type of Amazon Redshift Serverless usage to create a usage limit for.</p>
     */
    inline void SetUsageType(const UsageLimitUsageType& value) { m_usageTypeHasBeenSet = true; m_usageType = value; }

    /**
     * <p>The type of Amazon Redshift Serverless usage to create a usage limit for.</p>
     */
    inline void SetUsageType(UsageLimitUsageType&& value) { m_usageTypeHasBeenSet = true; m_usageType = std::move(value); }

    /**
     * <p>The type of Amazon Redshift Serverless usage to create a usage limit for.</p>
     */
    inline CreateUsageLimitRequest& WithUsageType(const UsageLimitUsageType& value) { SetUsageType(value); return *this;}

    /**
     * <p>The type of Amazon Redshift Serverless usage to create a usage limit for.</p>
     */
    inline CreateUsageLimitRequest& WithUsageType(UsageLimitUsageType&& value) { SetUsageType(std::move(value)); return *this;}

  private:

    long long m_amount;
    bool m_amountHasBeenSet = false;

    UsageLimitBreachAction m_breachAction;
    bool m_breachActionHasBeenSet = false;

    UsageLimitPeriod m_period;
    bool m_periodHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    UsageLimitUsageType m_usageType;
    bool m_usageTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
