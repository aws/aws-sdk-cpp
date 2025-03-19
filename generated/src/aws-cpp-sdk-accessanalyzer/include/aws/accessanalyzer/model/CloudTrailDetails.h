/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/accessanalyzer/model/Trail.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/CloudTrailDetails">AWS
   * API Reference</a></p>
   */
  class CloudTrailDetails
  {
  public:
    AWS_ACCESSANALYZER_API CloudTrailDetails() = default;
    AWS_ACCESSANALYZER_API CloudTrailDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API CloudTrailDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A <code>Trail</code> object that contains settings for a trail.</p>
     */
    inline const Aws::Vector<Trail>& GetTrails() const { return m_trails; }
    inline bool TrailsHasBeenSet() const { return m_trailsHasBeenSet; }
    template<typename TrailsT = Aws::Vector<Trail>>
    void SetTrails(TrailsT&& value) { m_trailsHasBeenSet = true; m_trails = std::forward<TrailsT>(value); }
    template<typename TrailsT = Aws::Vector<Trail>>
    CloudTrailDetails& WithTrails(TrailsT&& value) { SetTrails(std::forward<TrailsT>(value)); return *this;}
    template<typename TrailsT = Trail>
    CloudTrailDetails& AddTrails(TrailsT&& value) { m_trailsHasBeenSet = true; m_trails.emplace_back(std::forward<TrailsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ARN of the service role that IAM Access Analyzer uses to access your
     * CloudTrail trail and service last accessed information.</p>
     */
    inline const Aws::String& GetAccessRole() const { return m_accessRole; }
    inline bool AccessRoleHasBeenSet() const { return m_accessRoleHasBeenSet; }
    template<typename AccessRoleT = Aws::String>
    void SetAccessRole(AccessRoleT&& value) { m_accessRoleHasBeenSet = true; m_accessRole = std::forward<AccessRoleT>(value); }
    template<typename AccessRoleT = Aws::String>
    CloudTrailDetails& WithAccessRole(AccessRoleT&& value) { SetAccessRole(std::forward<AccessRoleT>(value)); return *this;}
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
    CloudTrailDetails& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
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
    CloudTrailDetails& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Trail> m_trails;
    bool m_trailsHasBeenSet = false;

    Aws::String m_accessRole;
    bool m_accessRoleHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime{};
    bool m_endTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
