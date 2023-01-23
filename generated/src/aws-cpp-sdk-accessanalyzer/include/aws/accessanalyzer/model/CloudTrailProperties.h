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
    AWS_ACCESSANALYZER_API CloudTrailProperties();
    AWS_ACCESSANALYZER_API CloudTrailProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API CloudTrailProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ACCESSANALYZER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A <code>TrailProperties</code> object that contains settings for trail
     * properties.</p>
     */
    inline const Aws::Vector<TrailProperties>& GetTrailProperties() const{ return m_trailProperties; }

    /**
     * <p>A <code>TrailProperties</code> object that contains settings for trail
     * properties.</p>
     */
    inline bool TrailPropertiesHasBeenSet() const { return m_trailPropertiesHasBeenSet; }

    /**
     * <p>A <code>TrailProperties</code> object that contains settings for trail
     * properties.</p>
     */
    inline void SetTrailProperties(const Aws::Vector<TrailProperties>& value) { m_trailPropertiesHasBeenSet = true; m_trailProperties = value; }

    /**
     * <p>A <code>TrailProperties</code> object that contains settings for trail
     * properties.</p>
     */
    inline void SetTrailProperties(Aws::Vector<TrailProperties>&& value) { m_trailPropertiesHasBeenSet = true; m_trailProperties = std::move(value); }

    /**
     * <p>A <code>TrailProperties</code> object that contains settings for trail
     * properties.</p>
     */
    inline CloudTrailProperties& WithTrailProperties(const Aws::Vector<TrailProperties>& value) { SetTrailProperties(value); return *this;}

    /**
     * <p>A <code>TrailProperties</code> object that contains settings for trail
     * properties.</p>
     */
    inline CloudTrailProperties& WithTrailProperties(Aws::Vector<TrailProperties>&& value) { SetTrailProperties(std::move(value)); return *this;}

    /**
     * <p>A <code>TrailProperties</code> object that contains settings for trail
     * properties.</p>
     */
    inline CloudTrailProperties& AddTrailProperties(const TrailProperties& value) { m_trailPropertiesHasBeenSet = true; m_trailProperties.push_back(value); return *this; }

    /**
     * <p>A <code>TrailProperties</code> object that contains settings for trail
     * properties.</p>
     */
    inline CloudTrailProperties& AddTrailProperties(TrailProperties&& value) { m_trailPropertiesHasBeenSet = true; m_trailProperties.push_back(std::move(value)); return *this; }


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
    inline CloudTrailProperties& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The start of the time range for which IAM Access Analyzer reviews your
     * CloudTrail events. Events with a timestamp before this time are not considered
     * to generate a policy.</p>
     */
    inline CloudTrailProperties& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


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
    inline CloudTrailProperties& WithEndTime(const Aws::Utils::DateTime& value) { SetEndTime(value); return *this;}

    /**
     * <p>The end of the time range for which IAM Access Analyzer reviews your
     * CloudTrail events. Events with a timestamp after this time are not considered to
     * generate a policy. If this is not included in the request, the default value is
     * the current time.</p>
     */
    inline CloudTrailProperties& WithEndTime(Aws::Utils::DateTime&& value) { SetEndTime(std::move(value)); return *this;}

  private:

    Aws::Vector<TrailProperties> m_trailProperties;
    bool m_trailPropertiesHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    Aws::Utils::DateTime m_endTime;
    bool m_endTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace AccessAnalyzer
} // namespace Aws
