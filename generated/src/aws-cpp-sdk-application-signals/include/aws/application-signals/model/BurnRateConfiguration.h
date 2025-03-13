/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>

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
namespace ApplicationSignals
{
namespace Model
{

  /**
   * <p>This object defines the length of the look-back window used to calculate one
   * burn rate metric for this SLO. The burn rate measures how fast the service is
   * consuming the error budget, relative to the attainment goal of the SLO. A burn
   * rate of exactly 1 indicates that the SLO goal will be met exactly.</p> <p>For
   * example, if you specify 60 as the number of minutes in the look-back window, the
   * burn rate is calculated as the following:</p> <p> <i>burn rate = error rate over
   * the look-back window / (100% - attainment goal percentage)</i> </p> <p>For more
   * information about burn rates, see <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-ServiceLevelObjectives.html#CloudWatch-ServiceLevelObjectives-burn">Calculate
   * burn rates</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/BurnRateConfiguration">AWS
   * API Reference</a></p>
   */
  class BurnRateConfiguration
  {
  public:
    AWS_APPLICATIONSIGNALS_API BurnRateConfiguration() = default;
    AWS_APPLICATIONSIGNALS_API BurnRateConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONSIGNALS_API BurnRateConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONSIGNALS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of minutes to use as the look-back window.</p>
     */
    inline int GetLookBackWindowMinutes() const { return m_lookBackWindowMinutes; }
    inline bool LookBackWindowMinutesHasBeenSet() const { return m_lookBackWindowMinutesHasBeenSet; }
    inline void SetLookBackWindowMinutes(int value) { m_lookBackWindowMinutesHasBeenSet = true; m_lookBackWindowMinutes = value; }
    inline BurnRateConfiguration& WithLookBackWindowMinutes(int value) { SetLookBackWindowMinutes(value); return *this;}
    ///@}
  private:

    int m_lookBackWindowMinutes{0};
    bool m_lookBackWindowMinutesHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
