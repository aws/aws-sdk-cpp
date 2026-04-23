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
#include <aws/xray/XRay_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
namespace XRay
{
namespace Model
{

  /**
   * <p>Temporary changes to a sampling rule configuration. To meet the global
   * sampling target for a rule, X-Ray calculates a new reservoir for each service
   * based on the recent sampling results of all services that called
   * <a>GetSamplingTargets</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/xray-2016-04-12/SamplingTargetDocument">AWS
   * API Reference</a></p>
   */
  class AWS_XRAY_API SamplingTargetDocument
  {
  public:
    SamplingTargetDocument();
    SamplingTargetDocument(Aws::Utils::Json::JsonView jsonValue);
    SamplingTargetDocument& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the sampling rule.</p>
     */
    inline const Aws::String& GetRuleName() const{ return m_ruleName; }

    /**
     * <p>The name of the sampling rule.</p>
     */
    inline bool RuleNameHasBeenSet() const { return m_ruleNameHasBeenSet; }

    /**
     * <p>The name of the sampling rule.</p>
     */
    inline void SetRuleName(const Aws::String& value) { m_ruleNameHasBeenSet = true; m_ruleName = value; }

    /**
     * <p>The name of the sampling rule.</p>
     */
    inline void SetRuleName(Aws::String&& value) { m_ruleNameHasBeenSet = true; m_ruleName = std::move(value); }

    /**
     * <p>The name of the sampling rule.</p>
     */
    inline void SetRuleName(const char* value) { m_ruleNameHasBeenSet = true; m_ruleName.assign(value); }

    /**
     * <p>The name of the sampling rule.</p>
     */
    inline SamplingTargetDocument& WithRuleName(const Aws::String& value) { SetRuleName(value); return *this;}

    /**
     * <p>The name of the sampling rule.</p>
     */
    inline SamplingTargetDocument& WithRuleName(Aws::String&& value) { SetRuleName(std::move(value)); return *this;}

    /**
     * <p>The name of the sampling rule.</p>
     */
    inline SamplingTargetDocument& WithRuleName(const char* value) { SetRuleName(value); return *this;}


    /**
     * <p>The percentage of matching requests to instrument, after the reservoir is
     * exhausted.</p>
     */
    inline double GetFixedRate() const{ return m_fixedRate; }

    /**
     * <p>The percentage of matching requests to instrument, after the reservoir is
     * exhausted.</p>
     */
    inline bool FixedRateHasBeenSet() const { return m_fixedRateHasBeenSet; }

    /**
     * <p>The percentage of matching requests to instrument, after the reservoir is
     * exhausted.</p>
     */
    inline void SetFixedRate(double value) { m_fixedRateHasBeenSet = true; m_fixedRate = value; }

    /**
     * <p>The percentage of matching requests to instrument, after the reservoir is
     * exhausted.</p>
     */
    inline SamplingTargetDocument& WithFixedRate(double value) { SetFixedRate(value); return *this;}


    /**
     * <p>The number of requests per second that X-Ray allocated this service.</p>
     */
    inline int GetReservoirQuota() const{ return m_reservoirQuota; }

    /**
     * <p>The number of requests per second that X-Ray allocated this service.</p>
     */
    inline bool ReservoirQuotaHasBeenSet() const { return m_reservoirQuotaHasBeenSet; }

    /**
     * <p>The number of requests per second that X-Ray allocated this service.</p>
     */
    inline void SetReservoirQuota(int value) { m_reservoirQuotaHasBeenSet = true; m_reservoirQuota = value; }

    /**
     * <p>The number of requests per second that X-Ray allocated this service.</p>
     */
    inline SamplingTargetDocument& WithReservoirQuota(int value) { SetReservoirQuota(value); return *this;}


    /**
     * <p>When the reservoir quota expires.</p>
     */
    inline const Aws::Utils::DateTime& GetReservoirQuotaTTL() const{ return m_reservoirQuotaTTL; }

    /**
     * <p>When the reservoir quota expires.</p>
     */
    inline bool ReservoirQuotaTTLHasBeenSet() const { return m_reservoirQuotaTTLHasBeenSet; }

    /**
     * <p>When the reservoir quota expires.</p>
     */
    inline void SetReservoirQuotaTTL(const Aws::Utils::DateTime& value) { m_reservoirQuotaTTLHasBeenSet = true; m_reservoirQuotaTTL = value; }

    /**
     * <p>When the reservoir quota expires.</p>
     */
    inline void SetReservoirQuotaTTL(Aws::Utils::DateTime&& value) { m_reservoirQuotaTTLHasBeenSet = true; m_reservoirQuotaTTL = std::move(value); }

    /**
     * <p>When the reservoir quota expires.</p>
     */
    inline SamplingTargetDocument& WithReservoirQuotaTTL(const Aws::Utils::DateTime& value) { SetReservoirQuotaTTL(value); return *this;}

    /**
     * <p>When the reservoir quota expires.</p>
     */
    inline SamplingTargetDocument& WithReservoirQuotaTTL(Aws::Utils::DateTime&& value) { SetReservoirQuotaTTL(std::move(value)); return *this;}


    /**
     * <p>The number of seconds for the service to wait before getting sampling targets
     * again.</p>
     */
    inline int GetInterval() const{ return m_interval; }

    /**
     * <p>The number of seconds for the service to wait before getting sampling targets
     * again.</p>
     */
    inline bool IntervalHasBeenSet() const { return m_intervalHasBeenSet; }

    /**
     * <p>The number of seconds for the service to wait before getting sampling targets
     * again.</p>
     */
    inline void SetInterval(int value) { m_intervalHasBeenSet = true; m_interval = value; }

    /**
     * <p>The number of seconds for the service to wait before getting sampling targets
     * again.</p>
     */
    inline SamplingTargetDocument& WithInterval(int value) { SetInterval(value); return *this;}

  private:

    Aws::String m_ruleName;
    bool m_ruleNameHasBeenSet;

    double m_fixedRate;
    bool m_fixedRateHasBeenSet;

    int m_reservoirQuota;
    bool m_reservoirQuotaHasBeenSet;

    Aws::Utils::DateTime m_reservoirQuotaTTL;
    bool m_reservoirQuotaTTLHasBeenSet;

    int m_interval;
    bool m_intervalHasBeenSet;
  };

} // namespace Model
} // namespace XRay
} // namespace Aws
