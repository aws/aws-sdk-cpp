/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
#include <aws/evidently/CloudWatchEvidentlyRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace CloudWatchEvidently
{
namespace Model
{

  /**
   */
  class CreateSegmentRequest : public CloudWatchEvidentlyRequest
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API CreateSegmentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSegment"; }

    AWS_CLOUDWATCHEVIDENTLY_API Aws::String SerializePayload() const override;


    /**
     * <p>An optional description for this segment.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>An optional description for this segment.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>An optional description for this segment.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>An optional description for this segment.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>An optional description for this segment.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>An optional description for this segment.</p>
     */
    inline CreateSegmentRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>An optional description for this segment.</p>
     */
    inline CreateSegmentRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>An optional description for this segment.</p>
     */
    inline CreateSegmentRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>A name for the segment.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A name for the segment.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A name for the segment.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A name for the segment.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A name for the segment.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A name for the segment.</p>
     */
    inline CreateSegmentRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A name for the segment.</p>
     */
    inline CreateSegmentRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A name for the segment.</p>
     */
    inline CreateSegmentRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The pattern to use for the segment. For more information about pattern
     * syntax, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-Evidently-segments.html#CloudWatch-Evidently-segments-syntax.html">
     * Segment rule pattern syntax</a>.</p>
     */
    inline const Aws::String& GetPattern() const{ return m_pattern; }

    /**
     * <p>The pattern to use for the segment. For more information about pattern
     * syntax, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-Evidently-segments.html#CloudWatch-Evidently-segments-syntax.html">
     * Segment rule pattern syntax</a>.</p>
     */
    inline bool PatternHasBeenSet() const { return m_patternHasBeenSet; }

    /**
     * <p>The pattern to use for the segment. For more information about pattern
     * syntax, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-Evidently-segments.html#CloudWatch-Evidently-segments-syntax.html">
     * Segment rule pattern syntax</a>.</p>
     */
    inline void SetPattern(const Aws::String& value) { m_patternHasBeenSet = true; m_pattern = value; }

    /**
     * <p>The pattern to use for the segment. For more information about pattern
     * syntax, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-Evidently-segments.html#CloudWatch-Evidently-segments-syntax.html">
     * Segment rule pattern syntax</a>.</p>
     */
    inline void SetPattern(Aws::String&& value) { m_patternHasBeenSet = true; m_pattern = std::move(value); }

    /**
     * <p>The pattern to use for the segment. For more information about pattern
     * syntax, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-Evidently-segments.html#CloudWatch-Evidently-segments-syntax.html">
     * Segment rule pattern syntax</a>.</p>
     */
    inline void SetPattern(const char* value) { m_patternHasBeenSet = true; m_pattern.assign(value); }

    /**
     * <p>The pattern to use for the segment. For more information about pattern
     * syntax, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-Evidently-segments.html#CloudWatch-Evidently-segments-syntax.html">
     * Segment rule pattern syntax</a>.</p>
     */
    inline CreateSegmentRequest& WithPattern(const Aws::String& value) { SetPattern(value); return *this;}

    /**
     * <p>The pattern to use for the segment. For more information about pattern
     * syntax, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-Evidently-segments.html#CloudWatch-Evidently-segments-syntax.html">
     * Segment rule pattern syntax</a>.</p>
     */
    inline CreateSegmentRequest& WithPattern(Aws::String&& value) { SetPattern(std::move(value)); return *this;}

    /**
     * <p>The pattern to use for the segment. For more information about pattern
     * syntax, see <a
     * href="https://docs.aws.amazon.com/AmazonCloudWatch/latest/monitoring/CloudWatch-Evidently-segments.html#CloudWatch-Evidently-segments-syntax.html">
     * Segment rule pattern syntax</a>.</p>
     */
    inline CreateSegmentRequest& WithPattern(const char* value) { SetPattern(value); return *this;}


    /**
     * <p>Assigns one or more tags (key-value pairs) to the segment.</p> <p>Tags can
     * help you organize and categorize your resources. You can also use them to scope
     * user permissions by granting a user permission to access or change only
     * resources with certain tag values.</p> <p>Tags don't have any semantic meaning
     * to Amazon Web Services and are interpreted strictly as strings of
     * characters.</p> <pre><code> &lt;p&gt;You can associate as many as 50 tags with a
     * segment.&lt;/p&gt; &lt;p&gt;For more information, see &lt;a
     * href=&quot;https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html&quot;&gt;Tagging
     * Amazon Web Services resources&lt;/a&gt;.&lt;/p&gt; </code></pre>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>Assigns one or more tags (key-value pairs) to the segment.</p> <p>Tags can
     * help you organize and categorize your resources. You can also use them to scope
     * user permissions by granting a user permission to access or change only
     * resources with certain tag values.</p> <p>Tags don't have any semantic meaning
     * to Amazon Web Services and are interpreted strictly as strings of
     * characters.</p> <pre><code> &lt;p&gt;You can associate as many as 50 tags with a
     * segment.&lt;/p&gt; &lt;p&gt;For more information, see &lt;a
     * href=&quot;https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html&quot;&gt;Tagging
     * Amazon Web Services resources&lt;/a&gt;.&lt;/p&gt; </code></pre>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>Assigns one or more tags (key-value pairs) to the segment.</p> <p>Tags can
     * help you organize and categorize your resources. You can also use them to scope
     * user permissions by granting a user permission to access or change only
     * resources with certain tag values.</p> <p>Tags don't have any semantic meaning
     * to Amazon Web Services and are interpreted strictly as strings of
     * characters.</p> <pre><code> &lt;p&gt;You can associate as many as 50 tags with a
     * segment.&lt;/p&gt; &lt;p&gt;For more information, see &lt;a
     * href=&quot;https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html&quot;&gt;Tagging
     * Amazon Web Services resources&lt;/a&gt;.&lt;/p&gt; </code></pre>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>Assigns one or more tags (key-value pairs) to the segment.</p> <p>Tags can
     * help you organize and categorize your resources. You can also use them to scope
     * user permissions by granting a user permission to access or change only
     * resources with certain tag values.</p> <p>Tags don't have any semantic meaning
     * to Amazon Web Services and are interpreted strictly as strings of
     * characters.</p> <pre><code> &lt;p&gt;You can associate as many as 50 tags with a
     * segment.&lt;/p&gt; &lt;p&gt;For more information, see &lt;a
     * href=&quot;https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html&quot;&gt;Tagging
     * Amazon Web Services resources&lt;/a&gt;.&lt;/p&gt; </code></pre>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>Assigns one or more tags (key-value pairs) to the segment.</p> <p>Tags can
     * help you organize and categorize your resources. You can also use them to scope
     * user permissions by granting a user permission to access or change only
     * resources with certain tag values.</p> <p>Tags don't have any semantic meaning
     * to Amazon Web Services and are interpreted strictly as strings of
     * characters.</p> <pre><code> &lt;p&gt;You can associate as many as 50 tags with a
     * segment.&lt;/p&gt; &lt;p&gt;For more information, see &lt;a
     * href=&quot;https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html&quot;&gt;Tagging
     * Amazon Web Services resources&lt;/a&gt;.&lt;/p&gt; </code></pre>
     */
    inline CreateSegmentRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>Assigns one or more tags (key-value pairs) to the segment.</p> <p>Tags can
     * help you organize and categorize your resources. You can also use them to scope
     * user permissions by granting a user permission to access or change only
     * resources with certain tag values.</p> <p>Tags don't have any semantic meaning
     * to Amazon Web Services and are interpreted strictly as strings of
     * characters.</p> <pre><code> &lt;p&gt;You can associate as many as 50 tags with a
     * segment.&lt;/p&gt; &lt;p&gt;For more information, see &lt;a
     * href=&quot;https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html&quot;&gt;Tagging
     * Amazon Web Services resources&lt;/a&gt;.&lt;/p&gt; </code></pre>
     */
    inline CreateSegmentRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>Assigns one or more tags (key-value pairs) to the segment.</p> <p>Tags can
     * help you organize and categorize your resources. You can also use them to scope
     * user permissions by granting a user permission to access or change only
     * resources with certain tag values.</p> <p>Tags don't have any semantic meaning
     * to Amazon Web Services and are interpreted strictly as strings of
     * characters.</p> <pre><code> &lt;p&gt;You can associate as many as 50 tags with a
     * segment.&lt;/p&gt; &lt;p&gt;For more information, see &lt;a
     * href=&quot;https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html&quot;&gt;Tagging
     * Amazon Web Services resources&lt;/a&gt;.&lt;/p&gt; </code></pre>
     */
    inline CreateSegmentRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>Assigns one or more tags (key-value pairs) to the segment.</p> <p>Tags can
     * help you organize and categorize your resources. You can also use them to scope
     * user permissions by granting a user permission to access or change only
     * resources with certain tag values.</p> <p>Tags don't have any semantic meaning
     * to Amazon Web Services and are interpreted strictly as strings of
     * characters.</p> <pre><code> &lt;p&gt;You can associate as many as 50 tags with a
     * segment.&lt;/p&gt; &lt;p&gt;For more information, see &lt;a
     * href=&quot;https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html&quot;&gt;Tagging
     * Amazon Web Services resources&lt;/a&gt;.&lt;/p&gt; </code></pre>
     */
    inline CreateSegmentRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Assigns one or more tags (key-value pairs) to the segment.</p> <p>Tags can
     * help you organize and categorize your resources. You can also use them to scope
     * user permissions by granting a user permission to access or change only
     * resources with certain tag values.</p> <p>Tags don't have any semantic meaning
     * to Amazon Web Services and are interpreted strictly as strings of
     * characters.</p> <pre><code> &lt;p&gt;You can associate as many as 50 tags with a
     * segment.&lt;/p&gt; &lt;p&gt;For more information, see &lt;a
     * href=&quot;https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html&quot;&gt;Tagging
     * Amazon Web Services resources&lt;/a&gt;.&lt;/p&gt; </code></pre>
     */
    inline CreateSegmentRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Assigns one or more tags (key-value pairs) to the segment.</p> <p>Tags can
     * help you organize and categorize your resources. You can also use them to scope
     * user permissions by granting a user permission to access or change only
     * resources with certain tag values.</p> <p>Tags don't have any semantic meaning
     * to Amazon Web Services and are interpreted strictly as strings of
     * characters.</p> <pre><code> &lt;p&gt;You can associate as many as 50 tags with a
     * segment.&lt;/p&gt; &lt;p&gt;For more information, see &lt;a
     * href=&quot;https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html&quot;&gt;Tagging
     * Amazon Web Services resources&lt;/a&gt;.&lt;/p&gt; </code></pre>
     */
    inline CreateSegmentRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Assigns one or more tags (key-value pairs) to the segment.</p> <p>Tags can
     * help you organize and categorize your resources. You can also use them to scope
     * user permissions by granting a user permission to access or change only
     * resources with certain tag values.</p> <p>Tags don't have any semantic meaning
     * to Amazon Web Services and are interpreted strictly as strings of
     * characters.</p> <pre><code> &lt;p&gt;You can associate as many as 50 tags with a
     * segment.&lt;/p&gt; &lt;p&gt;For more information, see &lt;a
     * href=&quot;https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html&quot;&gt;Tagging
     * Amazon Web Services resources&lt;/a&gt;.&lt;/p&gt; </code></pre>
     */
    inline CreateSegmentRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Assigns one or more tags (key-value pairs) to the segment.</p> <p>Tags can
     * help you organize and categorize your resources. You can also use them to scope
     * user permissions by granting a user permission to access or change only
     * resources with certain tag values.</p> <p>Tags don't have any semantic meaning
     * to Amazon Web Services and are interpreted strictly as strings of
     * characters.</p> <pre><code> &lt;p&gt;You can associate as many as 50 tags with a
     * segment.&lt;/p&gt; &lt;p&gt;For more information, see &lt;a
     * href=&quot;https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html&quot;&gt;Tagging
     * Amazon Web Services resources&lt;/a&gt;.&lt;/p&gt; </code></pre>
     */
    inline CreateSegmentRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>Assigns one or more tags (key-value pairs) to the segment.</p> <p>Tags can
     * help you organize and categorize your resources. You can also use them to scope
     * user permissions by granting a user permission to access or change only
     * resources with certain tag values.</p> <p>Tags don't have any semantic meaning
     * to Amazon Web Services and are interpreted strictly as strings of
     * characters.</p> <pre><code> &lt;p&gt;You can associate as many as 50 tags with a
     * segment.&lt;/p&gt; &lt;p&gt;For more information, see &lt;a
     * href=&quot;https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html&quot;&gt;Tagging
     * Amazon Web Services resources&lt;/a&gt;.&lt;/p&gt; </code></pre>
     */
    inline CreateSegmentRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

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
