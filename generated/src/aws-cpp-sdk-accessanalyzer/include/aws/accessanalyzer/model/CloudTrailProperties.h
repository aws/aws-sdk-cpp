/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/accessanalyzer/model/TrailProperties.h>
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
namespace AccessAnalyzer
{
namespace Model
{

  /**
   * <p>Contains information about CloudTrail access.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/CloudTrailProperties">AWS
   * API Reference</a></p>
   */
  class CloudTrailProperties
  {
  public:
    AWS_ACCESSANALYZER_API CloudTrailProperties() = default;
    AWS_ACCESSANALYZER_API CloudTrailProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API CloudTrailProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A <code>TrailProperties</code> object that contains settings for trail
     * properties.</p>
     */
    inline const Aws::Vector<TrailProperties>& GetTrailProperties() const { return m_trailProperties; }
    inline bool TrailPropertiesHasBeenSet() const { return m_trailPropertiesHasBeenSet; }
    template<typename TrailPropertiesT = Aws::Vector<TrailProperties>>
    void SetTrailProperties(TrailPropertiesT&& value) { m_trailPropertiesHasBeenSet = true; m_trailProperties = std::forward<TrailPropertiesT>(value); }
    template<typename TrailPropertiesT = Aws::Vector<TrailProperties>>
    CloudTrailProperties& WithTrailProperties(TrailPropertiesT&& value) { SetTrailProperties(std::forward<TrailPropertiesT>(value)); return *this;}
    template<typename TrailPropertiesT = TrailProperties>
    CloudTrailProperties& AddTrailProperties(TrailPropertiesT&& value) { m_trailPropertiesHasBeenSet = true; m_trailProperties.emplace_back(std::forward<TrailPropertiesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The start of the time range for which IAM Access Analyzer reviews your
     * CloudTrail events. Events with a timestamp before this time are not considered
     * to generate a policy.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    CloudTrailProperties& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end of the time range for which IAM Access Analyzer reviews your
     * CloudTrail events. Events with a timestamp after this time are not considered to
     * generate a policy. If this is not included in the request, the default value is
     * the current time.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = Aws::Utils::DateTime>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = Aws::Utils::DateTime>
    CloudTrailProperties& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TrailProperties> m_trailProperties;
    bool m_trailPropertiesHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
