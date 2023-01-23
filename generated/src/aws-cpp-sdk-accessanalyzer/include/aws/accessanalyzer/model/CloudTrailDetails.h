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
    AWS_ACCESSANALYZER_API CloudTrailDetails();
    AWS_ACCESSANALYZER_API CloudTrailDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API CloudTrailDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A <code>Trail</code> object that contains settings for a trail.</p>
     */
    inline const Aws::Vector<Trail>& GetTrails() const{ return m_trails; }

    /**
     * <p>A <code>Trail</code> object that contains settings for a trail.</p>
     */
    inline bool TrailsHasBeenSet() const { return m_trailsHasBeenSet; }

    /**
     * <p>A <code>Trail</code> object that contains settings for a trail.</p>
     */
    inline void SetTrails(const Aws::Vector<Trail>& value) { m_trailsHasBeenSet = true; m_trails = value; }

    /**
     * <p>A <code>Trail</code> object that contains settings for a trail.</p>
     */
    inline void SetTrails(Aws::Vector<Trail>&& value) { m_trailsHasBeenSet = true; m_trails = std::move(value); }

    /**
     * <p>A <code>Trail</code> object that contains settings for a trail.</p>
     */
    inline CloudTrailDetails& WithTrails(const Aws::Vector<Trail>& value) { SetTrails(value); return *this;}

    /**
     * <p>A <code>Trail</code> object that contains settings for a trail.</p>
     */
    inline CloudTrailDetails& WithTrails(Aws::Vector<Trail>&& value) { SetTrails(std::move(value)); return *this;}

    /**
     * <p>A <code>Trail</code> object that contains settings for a trail.</p>
     */
    inline CloudTrailDetails& AddTrails(const Trail& value) { m_trailsHasBeenSet = true; m_trails.push_back(value); return *this; }

    /**
     * <p>A <code>Trail</code> object that contains settings for a trail.</p>
     */
    inline CloudTrailDetails& AddTrails(Trail&& value) { m_trailsHasBeenSet = true; m_trails.push_back(std::move(value)); return *this; }


    /**
     * <p>The ARN of the service role that IAM Access Analyzer uses to access your
     * CloudTrail trail and service last accessed information.</p>
     */
    inline const Aws::String& GetAccessRole() const{ return m_accessRole; }

    /**
     * <p>The ARN of the service role that IAM Access Analyzer uses to access your
     * CloudTrail trail and service last accessed information.</p>
     */
    inline bool AccessRoleHasBeenSet() const { return m_accessRoleHasBeenSet; }

    /**
     * <p>The ARN of the service role that IAM Access Analyzer uses to access your
     * CloudTrail trail and service last accessed information.</p>
     */
    inline void SetAccessRole(const Aws::String& value) { m_accessRoleHasBeenSet = true; m_accessRole = value; }

    /**
     * <p>The ARN of the service role that IAM Access Analyzer uses to access your
     * CloudTrail trail and service last accessed information.</p>
     */
    inline void SetAccessRole(Aws::String&& value) { m_accessRoleHasBeenSet = true; m_accessRole = std::move(value); }

    /**
     * <p>The ARN of the service role that IAM Access Analyzer uses to access your
     * CloudTrail trail and service last accessed information.</p>
     */
    inline void SetAccessRole(const char* value) { m_accessRoleHasBeenSet = true; m_accessRole.assign(value); }

    /**
     * <p>The ARN of the service role that IAM Access Analyzer uses to access your
     * CloudTrail trail and service last accessed information.</p>
     */
    inline CloudTrailDetails& WithAccessRole(const Aws::String& value) { SetAccessRole(value); return *this;}

    /**
     * <p>The ARN of the service role that IAM Access Analyzer uses to access your
     * CloudTrail trail and service last accessed information.</p>
     */
    inline CloudTrailDetails& WithAccessRole(Aws::String&& value) { SetAccessRole(std::move(value)); return *this;}

    /**
     * <p>The ARN of the service role that IAM Access Analyzer uses to access your
     * CloudTrail trail and service last accessed information.</p>
     */
    inline CloudTrailDetails& WithAccessRole(const char* value) { SetAccessRole(value); return *this;}


    /**
     * <p>The start of the time range for which IAM Access Analyzer reviews your
     * CloudTrail events. Events with a timestamp before this time are not considered
     * to generate a policy.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The start of the time range for which IAM Access Analyzer reviews your
     * CloudTrail events. Events with a timestamp before this time are not considered
     * to generate a policy.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The start of the time range for which IAM Access Analyzer reviews your
     * CloudTrail events. Events with a timestamp before this time are not considered
     * to generate a policy.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The start of the time range for which IAM Access Analyzer reviews your
     * CloudTrail events. Events with a timestamp before this time are not considered
     * to generate a policy.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The start of the time range for which IAM Access Analyzer reviews your
     * CloudTrail events. Events with a timestamp before this time are not considered
     * to generate a policy.</p>
     */
    inline CloudTrailDetails& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The start of the time range for which IAM Access Analyzer reviews your
     * CloudTrail events. Events with a timestamp before this time are not considered
     * to generate a policy.</p>
     */
    inline CloudTrailDetails& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The end of the time range for which IAM Access Analyzer reviews your
     * CloudTrail events. Events with a timestamp after this time are not considered to
     * generate a policy. If this is not included in the request, the default value is
     * the current time.</p>
     */
    inline const Aws::Utils::DateTime& GetEndTime() const{ return m_endTime; }

    /**
     * <p>The end of the time range for which IAM Access Analyzer reviews your
     * CloudTrail events. Events with a timestamp after this time are not considered to
     * generate a policy. If this is not included in the request, the default value is
     * the current time.</p>
     */
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }

    /**
     * <p>The end of the time range for which IAM Access Analyzer reviews your
     * CloudTrail events. Events with a timestamp after this time are not considered to
     * generate a policy. If this is not included in the request, the default value is
     * the current time.</p>
     */
    inline void SetEndTime(const Aws::Utils::DateTime& value) { m_endTimeHasBeenSet = true; m_endTime = value; }

    /**
     * <p>The end of the time range for which IAM Access Analyzer reviews your
     * CloudTrail events. Events with a timestamp after this time are not considered to
     * generate a policy. If this is not included in the request, the default value is
     * the current time.</p>
     */
    inline void SetEndTime(Aws::Utils::DateTime&& value) { m_endTimeHasBeenSet = true; m_endTime = std::move(value); }

    /**
     * <p>The end of the time range for which IAM Access Analyzer reviews your
     * CloudTrail events. Events with a timestamp after this time are not considered to
     * generate a policy. If this is not included in the request, the default value is
     * the current time.</p>
     */
    inline CloudTrailDetails& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The end of the time range for which IAM Access Analyzer reviews your
     * CloudTrail events. Events with a timestamp after this time are not considered to
     * generate a policy. If this is not included in the request, the default value is
     * the current time.</p>
     */
    inline CloudTrailDetails& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}

  private:

    Aws::Vector<Trail> m_trails;
    bool m_trailsHasBeenSet = false;

    Aws::String m_accessRole;
    bool m_accessRoleHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
