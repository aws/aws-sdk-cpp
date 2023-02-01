/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace CloudWatchEvidently
{
namespace Model
{

  /**
   * <p>This structure contains information about one audience <i>segment</i>. You
   * can use segments in your experiments and launches to narrow the user sessions
   * used for experiment or launch to only the user sessions that match one or more
   * criteria.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/Segment">AWS
   * API Reference</a></p>
   */
  class Segment
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API Segment();
    AWS_CLOUDWATCHEVIDENTLY_API Segment(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API Segment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ARN of the segment.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The ARN of the segment.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The ARN of the segment.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The ARN of the segment.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The ARN of the segment.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The ARN of the segment.</p>
     */
    inline Segment& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The ARN of the segment.</p>
     */
    inline Segment& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the segment.</p>
     */
    inline Segment& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The date and time that this segment was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedTime() const{ return m_createdTime; }

    /**
     * <p>The date and time that this segment was created.</p>
     */
    inline bool CreatedTimeHasBeenSet() const { return m_createdTimeHasBeenSet; }

    /**
     * <p>The date and time that this segment was created.</p>
     */
    inline void SetCreatedTime(const Aws::Utils::DateTime& value) { m_createdTimeHasBeenSet = true; m_createdTime = value; }

    /**
     * <p>The date and time that this segment was created.</p>
     */
    inline void SetCreatedTime(Aws::Utils::DateTime&& value) { m_createdTimeHasBeenSet = true; m_createdTime = std::move(value); }

    /**
     * <p>The date and time that this segment was created.</p>
     */
    inline Segment& WithCreatedTime(const Aws::Utils::DateTime& value) { SetCreatedTime(value); return *this;}

    /**
     * <p>The date and time that this segment was created.</p>
     */
    inline Segment& WithCreatedTime(Aws::Utils::DateTime&& value) { SetCreatedTime(std::move(value)); return *this;}


    /**
     * <p>The customer-created description for this segment.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The customer-created description for this segment.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The customer-created description for this segment.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The customer-created description for this segment.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The customer-created description for this segment.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The customer-created description for this segment.</p>
     */
    inline Segment& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The customer-created description for this segment.</p>
     */
    inline Segment& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The customer-created description for this segment.</p>
     */
    inline Segment& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The number of experiments that this segment is used in. This count includes
     * all current experiments, not just those that are currently running.</p>
     */
    inline long long GetExperimentCount() const{ return m_experimentCount; }

    /**
     * <p>The number of experiments that this segment is used in. This count includes
     * all current experiments, not just those that are currently running.</p>
     */
    inline bool ExperimentCountHasBeenSet() const { return m_experimentCountHasBeenSet; }

    /**
     * <p>The number of experiments that this segment is used in. This count includes
     * all current experiments, not just those that are currently running.</p>
     */
    inline void SetExperimentCount(long long value) { m_experimentCountHasBeenSet = true; m_experimentCount = value; }

    /**
     * <p>The number of experiments that this segment is used in. This count includes
     * all current experiments, not just those that are currently running.</p>
     */
    inline Segment& WithExperimentCount(long long value) { SetExperimentCount(value); return *this;}


    /**
     * <p>The date and time that this segment was most recently updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedTime() const{ return m_lastUpdatedTime; }

    /**
     * <p>The date and time that this segment was most recently updated.</p>
     */
    inline bool LastUpdatedTimeHasBeenSet() const { return m_lastUpdatedTimeHasBeenSet; }

    /**
     * <p>The date and time that this segment was most recently updated.</p>
     */
    inline void SetLastUpdatedTime(const Aws::Utils::DateTime& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = value; }

    /**
     * <p>The date and time that this segment was most recently updated.</p>
     */
    inline void SetLastUpdatedTime(Aws::Utils::DateTime&& value) { m_lastUpdatedTimeHasBeenSet = true; m_lastUpdatedTime = std::move(value); }

    /**
     * <p>The date and time that this segment was most recently updated.</p>
     */
    inline Segment& WithLastUpdatedTime(const Aws::Utils::DateTime& value) { SetLastUpdatedTime(value); return *this;}

    /**
     * <p>The date and time that this segment was most recently updated.</p>
     */
    inline Segment& WithLastUpdatedTime(Aws::Utils::DateTime&& value) { SetLastUpdatedTime(std::move(value)); return *this;}


    /**
     * <p>The number of launches that this segment is used in. This count includes all
     * current launches, not just those that are currently running.</p>
     */
    inline long long GetLaunchCount() const{ return m_launchCount; }

    /**
     * <p>The number of launches that this segment is used in. This count includes all
     * current launches, not just those that are currently running.</p>
     */
    inline bool LaunchCountHasBeenSet() const { return m_launchCountHasBeenSet; }

    /**
     * <p>The number of launches that this segment is used in. This count includes all
     * current launches, not just those that are currently running.</p>
     */
    inline void SetLaunchCount(long long value) { m_launchCountHasBeenSet = true; m_launchCount = value; }

    /**
     * <p>The number of launches that this segment is used in. This count includes all
     * current launches, not just those that are currently running.</p>
     */
    inline Segment& WithLaunchCount(long long value) { SetLaunchCount(value); return *this;}


    /**
     * <p>The name of the segment.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the segment.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the segment.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the segment.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the segment.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the segment.</p>
     */
    inline Segment& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the segment.</p>
     */
    inline Segment& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the segment.</p>
     */
    inline Segment& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The pattern that defines the attributes to use to evalute whether a user
     * session will be in the segment. For more information about the pattern syntax,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-Evidently-segments.html">Segment
     * rule pattern syntax</a>.</p>
     */
    inline const Aws::String& GetPattern() const{ return m_pattern; }

    /**
     * <p>The pattern that defines the attributes to use to evalute whether a user
     * session will be in the segment. For more information about the pattern syntax,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-Evidently-segments.html">Segment
     * rule pattern syntax</a>.</p>
     */
    inline bool PatternHasBeenSet() const { return m_patternHasBeenSet; }

    /**
     * <p>The pattern that defines the attributes to use to evalute whether a user
     * session will be in the segment. For more information about the pattern syntax,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-Evidently-segments.html">Segment
     * rule pattern syntax</a>.</p>
     */
    inline void SetPattern(const Aws::String& value) { m_patternHasBeenSet = true; m_pattern = value; }

    /**
     * <p>The pattern that defines the attributes to use to evalute whether a user
     * session will be in the segment. For more information about the pattern syntax,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-Evidently-segments.html">Segment
     * rule pattern syntax</a>.</p>
     */
    inline void SetPattern(Aws::String&& value) { m_patternHasBeenSet = true; m_pattern = std::move(value); }

    /**
     * <p>The pattern that defines the attributes to use to evalute whether a user
     * session will be in the segment. For more information about the pattern syntax,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-Evidently-segments.html">Segment
     * rule pattern syntax</a>.</p>
     */
    inline void SetPattern(const char* value) { m_patternHasBeenSet = true; m_pattern.assign(value); }

    /**
     * <p>The pattern that defines the attributes to use to evalute whether a user
     * session will be in the segment. For more information about the pattern syntax,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-Evidently-segments.html">Segment
     * rule pattern syntax</a>.</p>
     */
    inline Segment& WithPattern(const Aws::String& value) { SetPattern(value); return *this;}

    /**
     * <p>The pattern that defines the attributes to use to evalute whether a user
     * session will be in the segment. For more information about the pattern syntax,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-Evidently-segments.html">Segment
     * rule pattern syntax</a>.</p>
     */
    inline Segment& WithPattern(Aws::String&& value) { SetPattern(std::move(value)); return *this;}

    /**
     * <p>The pattern that defines the attributes to use to evalute whether a user
     * session will be in the segment. For more information about the pattern syntax,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-Evidently-segments.html">Segment
     * rule pattern syntax</a>.</p>
     */
    inline Segment& WithPattern(const char* value) { SetPattern(value); return *this;}


    /**
     * <p>The list of tag keys and values associated with this launch.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The list of tag keys and values associated with this launch.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The list of tag keys and values associated with this launch.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The list of tag keys and values associated with this launch.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The list of tag keys and values associated with this launch.</p>
     */
    inline Segment& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The list of tag keys and values associated with this launch.</p>
     */
    inline Segment& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The list of tag keys and values associated with this launch.</p>
     */
    inline Segment& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The list of tag keys and values associated with this launch.</p>
     */
    inline Segment& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of tag keys and values associated with this launch.</p>
     */
    inline Segment& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of tag keys and values associated with this launch.</p>
     */
    inline Segment& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The list of tag keys and values associated with this launch.</p>
     */
    inline Segment& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The list of tag keys and values associated with this launch.</p>
     */
    inline Segment& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The list of tag keys and values associated with this launch.</p>
     */
    inline Segment& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Utils::DateTime m_createdTime;
    bool m_createdTimeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    long long m_experimentCount;
    bool m_experimentCountHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedTime;
    bool m_lastUpdatedTimeHasBeenSet = false;

    long long m_launchCount;
    bool m_launchCountHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_pattern;
    bool m_patternHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
