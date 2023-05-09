/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-autoscaling/ApplicationAutoScaling_EXPORTS.h>
#include <aws/application-autoscaling/ApplicationAutoScalingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace ApplicationAutoScaling
{
namespace Model
{

  /**
   */
  class TagResourceRequest : public ApplicationAutoScalingRequest
  {
  public:
    AWS_APPLICATIONAUTOSCALING_API TagResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TagResource"; }

    AWS_APPLICATIONAUTOSCALING_API Aws::String SerializePayload() const override;

    AWS_APPLICATIONAUTOSCALING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Identifies the Application Auto Scaling scalable target that you want to
     * apply tags to.</p> <p>For example:
     * <code>arn:aws:application-autoscaling:us-east-1:123456789012:scalable-target/1234abcd56ab78cd901ef1234567890ab123</code>
     * </p> <p>To get the ARN for a scalable target, use
     * <a>DescribeScalableTargets</a>.</p>
     */
    inline const Aws::String& GetResourceARN() const{ return m_resourceARN; }

    /**
     * <p>Identifies the Application Auto Scaling scalable target that you want to
     * apply tags to.</p> <p>For example:
     * <code>arn:aws:application-autoscaling:us-east-1:123456789012:scalable-target/1234abcd56ab78cd901ef1234567890ab123</code>
     * </p> <p>To get the ARN for a scalable target, use
     * <a>DescribeScalableTargets</a>.</p>
     */
    inline bool ResourceARNHasBeenSet() const { return m_resourceARNHasBeenSet; }

    /**
     * <p>Identifies the Application Auto Scaling scalable target that you want to
     * apply tags to.</p> <p>For example:
     * <code>arn:aws:application-autoscaling:us-east-1:123456789012:scalable-target/1234abcd56ab78cd901ef1234567890ab123</code>
     * </p> <p>To get the ARN for a scalable target, use
     * <a>DescribeScalableTargets</a>.</p>
     */
    inline void SetResourceARN(const Aws::String& value) { m_resourceARNHasBeenSet = true; m_resourceARN = value; }

    /**
     * <p>Identifies the Application Auto Scaling scalable target that you want to
     * apply tags to.</p> <p>For example:
     * <code>arn:aws:application-autoscaling:us-east-1:123456789012:scalable-target/1234abcd56ab78cd901ef1234567890ab123</code>
     * </p> <p>To get the ARN for a scalable target, use
     * <a>DescribeScalableTargets</a>.</p>
     */
    inline void SetResourceARN(Aws::String&& value) { m_resourceARNHasBeenSet = true; m_resourceARN = std::move(value); }

    /**
     * <p>Identifies the Application Auto Scaling scalable target that you want to
     * apply tags to.</p> <p>For example:
     * <code>arn:aws:application-autoscaling:us-east-1:123456789012:scalable-target/1234abcd56ab78cd901ef1234567890ab123</code>
     * </p> <p>To get the ARN for a scalable target, use
     * <a>DescribeScalableTargets</a>.</p>
     */
    inline void SetResourceARN(const char* value) { m_resourceARNHasBeenSet = true; m_resourceARN.assign(value); }

    /**
     * <p>Identifies the Application Auto Scaling scalable target that you want to
     * apply tags to.</p> <p>For example:
     * <code>arn:aws:application-autoscaling:us-east-1:123456789012:scalable-target/1234abcd56ab78cd901ef1234567890ab123</code>
     * </p> <p>To get the ARN for a scalable target, use
     * <a>DescribeScalableTargets</a>.</p>
     */
    inline TagResourceRequest& WithResourceARN(const Aws::String& value) { SetResourceARN(value); return *this;}

    /**
     * <p>Identifies the Application Auto Scaling scalable target that you want to
     * apply tags to.</p> <p>For example:
     * <code>arn:aws:application-autoscaling:us-east-1:123456789012:scalable-target/1234abcd56ab78cd901ef1234567890ab123</code>
     * </p> <p>To get the ARN for a scalable target, use
     * <a>DescribeScalableTargets</a>.</p>
     */
    inline TagResourceRequest& WithResourceARN(Aws::String&& value) { SetResourceARN(std::move(value)); return *this;}

    /**
     * <p>Identifies the Application Auto Scaling scalable target that you want to
     * apply tags to.</p> <p>For example:
     * <code>arn:aws:application-autoscaling:us-east-1:123456789012:scalable-target/1234abcd56ab78cd901ef1234567890ab123</code>
     * </p> <p>To get the ARN for a scalable target, use
     * <a>DescribeScalableTargets</a>.</p>
     */
    inline TagResourceRequest& WithResourceARN(const char* value) { SetResourceARN(value); return *this;}


    /**
     * <p>The tags assigned to the resource. A tag is a label that you assign to an
     * Amazon Web Services resource.</p> <p>Each tag consists of a tag key and a tag
     * value.</p> <p>You cannot have more than one tag on an Application Auto Scaling
     * scalable target with the same tag key. If you specify an existing tag key with a
     * different tag value, Application Auto Scaling replaces the current tag value
     * with the specified one.</p> <p>For information about the rules that apply to tag
     * keys and tag values, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/allocation-tag-restrictions.html">User-defined
     * tag restrictions</a> in the <i>Amazon Web Services Billing and Cost Management
     * User Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags assigned to the resource. A tag is a label that you assign to an
     * Amazon Web Services resource.</p> <p>Each tag consists of a tag key and a tag
     * value.</p> <p>You cannot have more than one tag on an Application Auto Scaling
     * scalable target with the same tag key. If you specify an existing tag key with a
     * different tag value, Application Auto Scaling replaces the current tag value
     * with the specified one.</p> <p>For information about the rules that apply to tag
     * keys and tag values, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/allocation-tag-restrictions.html">User-defined
     * tag restrictions</a> in the <i>Amazon Web Services Billing and Cost Management
     * User Guide</i>.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags assigned to the resource. A tag is a label that you assign to an
     * Amazon Web Services resource.</p> <p>Each tag consists of a tag key and a tag
     * value.</p> <p>You cannot have more than one tag on an Application Auto Scaling
     * scalable target with the same tag key. If you specify an existing tag key with a
     * different tag value, Application Auto Scaling replaces the current tag value
     * with the specified one.</p> <p>For information about the rules that apply to tag
     * keys and tag values, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/allocation-tag-restrictions.html">User-defined
     * tag restrictions</a> in the <i>Amazon Web Services Billing and Cost Management
     * User Guide</i>.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags assigned to the resource. A tag is a label that you assign to an
     * Amazon Web Services resource.</p> <p>Each tag consists of a tag key and a tag
     * value.</p> <p>You cannot have more than one tag on an Application Auto Scaling
     * scalable target with the same tag key. If you specify an existing tag key with a
     * different tag value, Application Auto Scaling replaces the current tag value
     * with the specified one.</p> <p>For information about the rules that apply to tag
     * keys and tag values, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/allocation-tag-restrictions.html">User-defined
     * tag restrictions</a> in the <i>Amazon Web Services Billing and Cost Management
     * User Guide</i>.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags assigned to the resource. A tag is a label that you assign to an
     * Amazon Web Services resource.</p> <p>Each tag consists of a tag key and a tag
     * value.</p> <p>You cannot have more than one tag on an Application Auto Scaling
     * scalable target with the same tag key. If you specify an existing tag key with a
     * different tag value, Application Auto Scaling replaces the current tag value
     * with the specified one.</p> <p>For information about the rules that apply to tag
     * keys and tag values, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/allocation-tag-restrictions.html">User-defined
     * tag restrictions</a> in the <i>Amazon Web Services Billing and Cost Management
     * User Guide</i>.</p>
     */
    inline TagResourceRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags assigned to the resource. A tag is a label that you assign to an
     * Amazon Web Services resource.</p> <p>Each tag consists of a tag key and a tag
     * value.</p> <p>You cannot have more than one tag on an Application Auto Scaling
     * scalable target with the same tag key. If you specify an existing tag key with a
     * different tag value, Application Auto Scaling replaces the current tag value
     * with the specified one.</p> <p>For information about the rules that apply to tag
     * keys and tag values, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/allocation-tag-restrictions.html">User-defined
     * tag restrictions</a> in the <i>Amazon Web Services Billing and Cost Management
     * User Guide</i>.</p>
     */
    inline TagResourceRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags assigned to the resource. A tag is a label that you assign to an
     * Amazon Web Services resource.</p> <p>Each tag consists of a tag key and a tag
     * value.</p> <p>You cannot have more than one tag on an Application Auto Scaling
     * scalable target with the same tag key. If you specify an existing tag key with a
     * different tag value, Application Auto Scaling replaces the current tag value
     * with the specified one.</p> <p>For information about the rules that apply to tag
     * keys and tag values, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/allocation-tag-restrictions.html">User-defined
     * tag restrictions</a> in the <i>Amazon Web Services Billing and Cost Management
     * User Guide</i>.</p>
     */
    inline TagResourceRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

    /**
     * <p>The tags assigned to the resource. A tag is a label that you assign to an
     * Amazon Web Services resource.</p> <p>Each tag consists of a tag key and a tag
     * value.</p> <p>You cannot have more than one tag on an Application Auto Scaling
     * scalable target with the same tag key. If you specify an existing tag key with a
     * different tag value, Application Auto Scaling replaces the current tag value
     * with the specified one.</p> <p>For information about the rules that apply to tag
     * keys and tag values, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/allocation-tag-restrictions.html">User-defined
     * tag restrictions</a> in the <i>Amazon Web Services Billing and Cost Management
     * User Guide</i>.</p>
     */
    inline TagResourceRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags assigned to the resource. A tag is a label that you assign to an
     * Amazon Web Services resource.</p> <p>Each tag consists of a tag key and a tag
     * value.</p> <p>You cannot have more than one tag on an Application Auto Scaling
     * scalable target with the same tag key. If you specify an existing tag key with a
     * different tag value, Application Auto Scaling replaces the current tag value
     * with the specified one.</p> <p>For information about the rules that apply to tag
     * keys and tag values, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/allocation-tag-restrictions.html">User-defined
     * tag restrictions</a> in the <i>Amazon Web Services Billing and Cost Management
     * User Guide</i>.</p>
     */
    inline TagResourceRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags assigned to the resource. A tag is a label that you assign to an
     * Amazon Web Services resource.</p> <p>Each tag consists of a tag key and a tag
     * value.</p> <p>You cannot have more than one tag on an Application Auto Scaling
     * scalable target with the same tag key. If you specify an existing tag key with a
     * different tag value, Application Auto Scaling replaces the current tag value
     * with the specified one.</p> <p>For information about the rules that apply to tag
     * keys and tag values, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/allocation-tag-restrictions.html">User-defined
     * tag restrictions</a> in the <i>Amazon Web Services Billing and Cost Management
     * User Guide</i>.</p>
     */
    inline TagResourceRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The tags assigned to the resource. A tag is a label that you assign to an
     * Amazon Web Services resource.</p> <p>Each tag consists of a tag key and a tag
     * value.</p> <p>You cannot have more than one tag on an Application Auto Scaling
     * scalable target with the same tag key. If you specify an existing tag key with a
     * different tag value, Application Auto Scaling replaces the current tag value
     * with the specified one.</p> <p>For information about the rules that apply to tag
     * keys and tag values, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/allocation-tag-restrictions.html">User-defined
     * tag restrictions</a> in the <i>Amazon Web Services Billing and Cost Management
     * User Guide</i>.</p>
     */
    inline TagResourceRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The tags assigned to the resource. A tag is a label that you assign to an
     * Amazon Web Services resource.</p> <p>Each tag consists of a tag key and a tag
     * value.</p> <p>You cannot have more than one tag on an Application Auto Scaling
     * scalable target with the same tag key. If you specify an existing tag key with a
     * different tag value, Application Auto Scaling replaces the current tag value
     * with the specified one.</p> <p>For information about the rules that apply to tag
     * keys and tag values, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/allocation-tag-restrictions.html">User-defined
     * tag restrictions</a> in the <i>Amazon Web Services Billing and Cost Management
     * User Guide</i>.</p>
     */
    inline TagResourceRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>The tags assigned to the resource. A tag is a label that you assign to an
     * Amazon Web Services resource.</p> <p>Each tag consists of a tag key and a tag
     * value.</p> <p>You cannot have more than one tag on an Application Auto Scaling
     * scalable target with the same tag key. If you specify an existing tag key with a
     * different tag value, Application Auto Scaling replaces the current tag value
     * with the specified one.</p> <p>For information about the rules that apply to tag
     * keys and tag values, see <a
     * href="https://docs.aws.amazon.com/awsaccountbilling/latest/aboutv2/allocation-tag-restrictions.html">User-defined
     * tag restrictions</a> in the <i>Amazon Web Services Billing and Cost Management
     * User Guide</i>.</p>
     */
    inline TagResourceRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }

  private:

    Aws::String m_resourceARN;
    bool m_resourceARNHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws
