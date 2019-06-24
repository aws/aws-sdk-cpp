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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/service-quotas/model/MetricInfo.h>
#include <aws/service-quotas/model/QuotaPeriod.h>
#include <aws/service-quotas/model/ErrorReason.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ServiceQuotas
{
namespace Model
{

  /**
   * <p>A structure that contains the full set of details that define the service
   * quota.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/service-quotas-2019-06-24/ServiceQuota">AWS
   * API Reference</a></p>
   */
  class AWS_SERVICEQUOTAS_API ServiceQuota
  {
  public:
    ServiceQuota();
    ServiceQuota(Aws::Utils::Json::JsonView jsonValue);
    ServiceQuota& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the service that you want to use.</p>
     */
    inline const Aws::String& GetServiceCode() const{ return m_serviceCode; }

    /**
     * <p>Specifies the service that you want to use.</p>
     */
    inline bool ServiceCodeHasBeenSet() const { return m_serviceCodeHasBeenSet; }

    /**
     * <p>Specifies the service that you want to use.</p>
     */
    inline void SetServiceCode(const Aws::String& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = value; }

    /**
     * <p>Specifies the service that you want to use.</p>
     */
    inline void SetServiceCode(Aws::String&& value) { m_serviceCodeHasBeenSet = true; m_serviceCode = std::move(value); }

    /**
     * <p>Specifies the service that you want to use.</p>
     */
    inline void SetServiceCode(const char* value) { m_serviceCodeHasBeenSet = true; m_serviceCode.assign(value); }

    /**
     * <p>Specifies the service that you want to use.</p>
     */
    inline ServiceQuota& WithServiceCode(const Aws::String& value) { SetServiceCode(value); return *this;}

    /**
     * <p>Specifies the service that you want to use.</p>
     */
    inline ServiceQuota& WithServiceCode(Aws::String&& value) { SetServiceCode(std::move(value)); return *this;}

    /**
     * <p>Specifies the service that you want to use.</p>
     */
    inline ServiceQuota& WithServiceCode(const char* value) { SetServiceCode(value); return *this;}


    /**
     * <p>The name of the AWS service specified in the increase request. </p>
     */
    inline const Aws::String& GetServiceName() const{ return m_serviceName; }

    /**
     * <p>The name of the AWS service specified in the increase request. </p>
     */
    inline bool ServiceNameHasBeenSet() const { return m_serviceNameHasBeenSet; }

    /**
     * <p>The name of the AWS service specified in the increase request. </p>
     */
    inline void SetServiceName(const Aws::String& value) { m_serviceNameHasBeenSet = true; m_serviceName = value; }

    /**
     * <p>The name of the AWS service specified in the increase request. </p>
     */
    inline void SetServiceName(Aws::String&& value) { m_serviceNameHasBeenSet = true; m_serviceName = std::move(value); }

    /**
     * <p>The name of the AWS service specified in the increase request. </p>
     */
    inline void SetServiceName(const char* value) { m_serviceNameHasBeenSet = true; m_serviceName.assign(value); }

    /**
     * <p>The name of the AWS service specified in the increase request. </p>
     */
    inline ServiceQuota& WithServiceName(const Aws::String& value) { SetServiceName(value); return *this;}

    /**
     * <p>The name of the AWS service specified in the increase request. </p>
     */
    inline ServiceQuota& WithServiceName(Aws::String&& value) { SetServiceName(std::move(value)); return *this;}

    /**
     * <p>The name of the AWS service specified in the increase request. </p>
     */
    inline ServiceQuota& WithServiceName(const char* value) { SetServiceName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the service quota.</p>
     */
    inline const Aws::String& GetQuotaArn() const{ return m_quotaArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the service quota.</p>
     */
    inline bool QuotaArnHasBeenSet() const { return m_quotaArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the service quota.</p>
     */
    inline void SetQuotaArn(const Aws::String& value) { m_quotaArnHasBeenSet = true; m_quotaArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the service quota.</p>
     */
    inline void SetQuotaArn(Aws::String&& value) { m_quotaArnHasBeenSet = true; m_quotaArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the service quota.</p>
     */
    inline void SetQuotaArn(const char* value) { m_quotaArnHasBeenSet = true; m_quotaArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the service quota.</p>
     */
    inline ServiceQuota& WithQuotaArn(const Aws::String& value) { SetQuotaArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the service quota.</p>
     */
    inline ServiceQuota& WithQuotaArn(Aws::String&& value) { SetQuotaArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the service quota.</p>
     */
    inline ServiceQuota& WithQuotaArn(const char* value) { SetQuotaArn(value); return *this;}


    /**
     * <p>The code identifier for the service quota specified.</p>
     */
    inline const Aws::String& GetQuotaCode() const{ return m_quotaCode; }

    /**
     * <p>The code identifier for the service quota specified.</p>
     */
    inline bool QuotaCodeHasBeenSet() const { return m_quotaCodeHasBeenSet; }

    /**
     * <p>The code identifier for the service quota specified.</p>
     */
    inline void SetQuotaCode(const Aws::String& value) { m_quotaCodeHasBeenSet = true; m_quotaCode = value; }

    /**
     * <p>The code identifier for the service quota specified.</p>
     */
    inline void SetQuotaCode(Aws::String&& value) { m_quotaCodeHasBeenSet = true; m_quotaCode = std::move(value); }

    /**
     * <p>The code identifier for the service quota specified.</p>
     */
    inline void SetQuotaCode(const char* value) { m_quotaCodeHasBeenSet = true; m_quotaCode.assign(value); }

    /**
     * <p>The code identifier for the service quota specified.</p>
     */
    inline ServiceQuota& WithQuotaCode(const Aws::String& value) { SetQuotaCode(value); return *this;}

    /**
     * <p>The code identifier for the service quota specified.</p>
     */
    inline ServiceQuota& WithQuotaCode(Aws::String&& value) { SetQuotaCode(std::move(value)); return *this;}

    /**
     * <p>The code identifier for the service quota specified.</p>
     */
    inline ServiceQuota& WithQuotaCode(const char* value) { SetQuotaCode(value); return *this;}


    /**
     * <p>The name identifier of the service quota.</p>
     */
    inline const Aws::String& GetQuotaName() const{ return m_quotaName; }

    /**
     * <p>The name identifier of the service quota.</p>
     */
    inline bool QuotaNameHasBeenSet() const { return m_quotaNameHasBeenSet; }

    /**
     * <p>The name identifier of the service quota.</p>
     */
    inline void SetQuotaName(const Aws::String& value) { m_quotaNameHasBeenSet = true; m_quotaName = value; }

    /**
     * <p>The name identifier of the service quota.</p>
     */
    inline void SetQuotaName(Aws::String&& value) { m_quotaNameHasBeenSet = true; m_quotaName = std::move(value); }

    /**
     * <p>The name identifier of the service quota.</p>
     */
    inline void SetQuotaName(const char* value) { m_quotaNameHasBeenSet = true; m_quotaName.assign(value); }

    /**
     * <p>The name identifier of the service quota.</p>
     */
    inline ServiceQuota& WithQuotaName(const Aws::String& value) { SetQuotaName(value); return *this;}

    /**
     * <p>The name identifier of the service quota.</p>
     */
    inline ServiceQuota& WithQuotaName(Aws::String&& value) { SetQuotaName(std::move(value)); return *this;}

    /**
     * <p>The name identifier of the service quota.</p>
     */
    inline ServiceQuota& WithQuotaName(const char* value) { SetQuotaName(value); return *this;}


    /**
     * <p>The value of service quota.</p>
     */
    inline double GetValue() const{ return m_value; }

    /**
     * <p>The value of service quota.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of service quota.</p>
     */
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of service quota.</p>
     */
    inline ServiceQuota& WithValue(double value) { SetValue(value); return *this;}


    /**
     * <p>The unit of measurement for the value of the service quota.</p>
     */
    inline const Aws::String& GetUnit() const{ return m_unit; }

    /**
     * <p>The unit of measurement for the value of the service quota.</p>
     */
    inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }

    /**
     * <p>The unit of measurement for the value of the service quota.</p>
     */
    inline void SetUnit(const Aws::String& value) { m_unitHasBeenSet = true; m_unit = value; }

    /**
     * <p>The unit of measurement for the value of the service quota.</p>
     */
    inline void SetUnit(Aws::String&& value) { m_unitHasBeenSet = true; m_unit = std::move(value); }

    /**
     * <p>The unit of measurement for the value of the service quota.</p>
     */
    inline void SetUnit(const char* value) { m_unitHasBeenSet = true; m_unit.assign(value); }

    /**
     * <p>The unit of measurement for the value of the service quota.</p>
     */
    inline ServiceQuota& WithUnit(const Aws::String& value) { SetUnit(value); return *this;}

    /**
     * <p>The unit of measurement for the value of the service quota.</p>
     */
    inline ServiceQuota& WithUnit(Aws::String&& value) { SetUnit(std::move(value)); return *this;}

    /**
     * <p>The unit of measurement for the value of the service quota.</p>
     */
    inline ServiceQuota& WithUnit(const char* value) { SetUnit(value); return *this;}


    /**
     * <p>Specifies if the quota value can be increased.</p>
     */
    inline bool GetAdjustable() const{ return m_adjustable; }

    /**
     * <p>Specifies if the quota value can be increased.</p>
     */
    inline bool AdjustableHasBeenSet() const { return m_adjustableHasBeenSet; }

    /**
     * <p>Specifies if the quota value can be increased.</p>
     */
    inline void SetAdjustable(bool value) { m_adjustableHasBeenSet = true; m_adjustable = value; }

    /**
     * <p>Specifies if the quota value can be increased.</p>
     */
    inline ServiceQuota& WithAdjustable(bool value) { SetAdjustable(value); return *this;}


    /**
     * <p>Specifies if the quota is global.</p>
     */
    inline bool GetGlobalQuota() const{ return m_globalQuota; }

    /**
     * <p>Specifies if the quota is global.</p>
     */
    inline bool GlobalQuotaHasBeenSet() const { return m_globalQuotaHasBeenSet; }

    /**
     * <p>Specifies if the quota is global.</p>
     */
    inline void SetGlobalQuota(bool value) { m_globalQuotaHasBeenSet = true; m_globalQuota = value; }

    /**
     * <p>Specifies if the quota is global.</p>
     */
    inline ServiceQuota& WithGlobalQuota(bool value) { SetGlobalQuota(value); return *this;}


    /**
     * <p>Specifies the details about the measurement. </p>
     */
    inline const MetricInfo& GetUsageMetric() const{ return m_usageMetric; }

    /**
     * <p>Specifies the details about the measurement. </p>
     */
    inline bool UsageMetricHasBeenSet() const { return m_usageMetricHasBeenSet; }

    /**
     * <p>Specifies the details about the measurement. </p>
     */
    inline void SetUsageMetric(const MetricInfo& value) { m_usageMetricHasBeenSet = true; m_usageMetric = value; }

    /**
     * <p>Specifies the details about the measurement. </p>
     */
    inline void SetUsageMetric(MetricInfo&& value) { m_usageMetricHasBeenSet = true; m_usageMetric = std::move(value); }

    /**
     * <p>Specifies the details about the measurement. </p>
     */
    inline ServiceQuota& WithUsageMetric(const MetricInfo& value) { SetUsageMetric(value); return *this;}

    /**
     * <p>Specifies the details about the measurement. </p>
     */
    inline ServiceQuota& WithUsageMetric(MetricInfo&& value) { SetUsageMetric(std::move(value)); return *this;}


    /**
     * <p>Identifies the unit and value of how time is measured.</p>
     */
    inline const QuotaPeriod& GetPeriod() const{ return m_period; }

    /**
     * <p>Identifies the unit and value of how time is measured.</p>
     */
    inline bool PeriodHasBeenSet() const { return m_periodHasBeenSet; }

    /**
     * <p>Identifies the unit and value of how time is measured.</p>
     */
    inline void SetPeriod(const QuotaPeriod& value) { m_periodHasBeenSet = true; m_period = value; }

    /**
     * <p>Identifies the unit and value of how time is measured.</p>
     */
    inline void SetPeriod(QuotaPeriod&& value) { m_periodHasBeenSet = true; m_period = std::move(value); }

    /**
     * <p>Identifies the unit and value of how time is measured.</p>
     */
    inline ServiceQuota& WithPeriod(const QuotaPeriod& value) { SetPeriod(value); return *this;}

    /**
     * <p>Identifies the unit and value of how time is measured.</p>
     */
    inline ServiceQuota& WithPeriod(QuotaPeriod&& value) { SetPeriod(std::move(value)); return *this;}


    /**
     * <p>Specifies the <code>ErrorCode</code> and <code>ErrorMessage</code> when
     * success isn't achieved.</p>
     */
    inline const ErrorReason& GetErrorReason() const{ return m_errorReason; }

    /**
     * <p>Specifies the <code>ErrorCode</code> and <code>ErrorMessage</code> when
     * success isn't achieved.</p>
     */
    inline bool ErrorReasonHasBeenSet() const { return m_errorReasonHasBeenSet; }

    /**
     * <p>Specifies the <code>ErrorCode</code> and <code>ErrorMessage</code> when
     * success isn't achieved.</p>
     */
    inline void SetErrorReason(const ErrorReason& value) { m_errorReasonHasBeenSet = true; m_errorReason = value; }

    /**
     * <p>Specifies the <code>ErrorCode</code> and <code>ErrorMessage</code> when
     * success isn't achieved.</p>
     */
    inline void SetErrorReason(ErrorReason&& value) { m_errorReasonHasBeenSet = true; m_errorReason = std::move(value); }

    /**
     * <p>Specifies the <code>ErrorCode</code> and <code>ErrorMessage</code> when
     * success isn't achieved.</p>
     */
    inline ServiceQuota& WithErrorReason(const ErrorReason& value) { SetErrorReason(value); return *this;}

    /**
     * <p>Specifies the <code>ErrorCode</code> and <code>ErrorMessage</code> when
     * success isn't achieved.</p>
     */
    inline ServiceQuota& WithErrorReason(ErrorReason&& value) { SetErrorReason(std::move(value)); return *this;}

  private:

    Aws::String m_serviceCode;
    bool m_serviceCodeHasBeenSet;

    Aws::String m_serviceName;
    bool m_serviceNameHasBeenSet;

    Aws::String m_quotaArn;
    bool m_quotaArnHasBeenSet;

    Aws::String m_quotaCode;
    bool m_quotaCodeHasBeenSet;

    Aws::String m_quotaName;
    bool m_quotaNameHasBeenSet;

    double m_value;
    bool m_valueHasBeenSet;

    Aws::String m_unit;
    bool m_unitHasBeenSet;

    bool m_adjustable;
    bool m_adjustableHasBeenSet;

    bool m_globalQuota;
    bool m_globalQuotaHasBeenSet;

    MetricInfo m_usageMetric;
    bool m_usageMetricHasBeenSet;

    QuotaPeriod m_period;
    bool m_periodHasBeenSet;

    ErrorReason m_errorReason;
    bool m_errorReasonHasBeenSet;
  };

} // namespace Model
} // namespace ServiceQuotas
} // namespace Aws
