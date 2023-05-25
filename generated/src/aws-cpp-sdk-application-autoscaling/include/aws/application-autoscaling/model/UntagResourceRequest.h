/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-autoscaling/ApplicationAutoScaling_EXPORTS.h>
#include <aws/application-autoscaling/ApplicationAutoScalingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace ApplicationAutoScaling
{
namespace Model
{

  /**
   */
  class UntagResourceRequest : public ApplicationAutoScalingRequest
  {
  public:
    AWS_APPLICATIONAUTOSCALING_API UntagResourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UntagResource"; }

    AWS_APPLICATIONAUTOSCALING_API Aws::String SerializePayload() const override;

    AWS_APPLICATIONAUTOSCALING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Identifies the Application Auto Scaling scalable target from which to remove
     * tags.</p> <p>For example:
     * <code>arn:aws:application-autoscaling:us-east-1:123456789012:scalable-target/1234abcd56ab78cd901ef1234567890ab123</code>
     * </p> <p>To get the ARN for a scalable target, use
     * <a>DescribeScalableTargets</a>.</p>
     */
    inline const Aws::String& GetResourceARN() const{ return m_resourceARN; }

    /**
     * <p>Identifies the Application Auto Scaling scalable target from which to remove
     * tags.</p> <p>For example:
     * <code>arn:aws:application-autoscaling:us-east-1:123456789012:scalable-target/1234abcd56ab78cd901ef1234567890ab123</code>
     * </p> <p>To get the ARN for a scalable target, use
     * <a>DescribeScalableTargets</a>.</p>
     */
    inline bool ResourceARNHasBeenSet() const { return m_resourceARNHasBeenSet; }

    /**
     * <p>Identifies the Application Auto Scaling scalable target from which to remove
     * tags.</p> <p>For example:
     * <code>arn:aws:application-autoscaling:us-east-1:123456789012:scalable-target/1234abcd56ab78cd901ef1234567890ab123</code>
     * </p> <p>To get the ARN for a scalable target, use
     * <a>DescribeScalableTargets</a>.</p>
     */
    inline void SetResourceARN(const Aws::String& value) { m_resourceARNHasBeenSet = true; m_resourceARN = value; }

    /**
     * <p>Identifies the Application Auto Scaling scalable target from which to remove
     * tags.</p> <p>For example:
     * <code>arn:aws:application-autoscaling:us-east-1:123456789012:scalable-target/1234abcd56ab78cd901ef1234567890ab123</code>
     * </p> <p>To get the ARN for a scalable target, use
     * <a>DescribeScalableTargets</a>.</p>
     */
    inline void SetResourceARN(Aws::String&& value) { m_resourceARNHasBeenSet = true; m_resourceARN = std::move(value); }

    /**
     * <p>Identifies the Application Auto Scaling scalable target from which to remove
     * tags.</p> <p>For example:
     * <code>arn:aws:application-autoscaling:us-east-1:123456789012:scalable-target/1234abcd56ab78cd901ef1234567890ab123</code>
     * </p> <p>To get the ARN for a scalable target, use
     * <a>DescribeScalableTargets</a>.</p>
     */
    inline void SetResourceARN(const char* value) { m_resourceARNHasBeenSet = true; m_resourceARN.assign(value); }

    /**
     * <p>Identifies the Application Auto Scaling scalable target from which to remove
     * tags.</p> <p>For example:
     * <code>arn:aws:application-autoscaling:us-east-1:123456789012:scalable-target/1234abcd56ab78cd901ef1234567890ab123</code>
     * </p> <p>To get the ARN for a scalable target, use
     * <a>DescribeScalableTargets</a>.</p>
     */
    inline UntagResourceRequest& WithResourceARN(const Aws::String& value) { SetResourceARN(value); return *this;}

    /**
     * <p>Identifies the Application Auto Scaling scalable target from which to remove
     * tags.</p> <p>For example:
     * <code>arn:aws:application-autoscaling:us-east-1:123456789012:scalable-target/1234abcd56ab78cd901ef1234567890ab123</code>
     * </p> <p>To get the ARN for a scalable target, use
     * <a>DescribeScalableTargets</a>.</p>
     */
    inline UntagResourceRequest& WithResourceARN(Aws::String&& value) { SetResourceARN(std::move(value)); return *this;}

    /**
     * <p>Identifies the Application Auto Scaling scalable target from which to remove
     * tags.</p> <p>For example:
     * <code>arn:aws:application-autoscaling:us-east-1:123456789012:scalable-target/1234abcd56ab78cd901ef1234567890ab123</code>
     * </p> <p>To get the ARN for a scalable target, use
     * <a>DescribeScalableTargets</a>.</p>
     */
    inline UntagResourceRequest& WithResourceARN(const char* value) { SetResourceARN(value); return *this;}


    /**
     * <p>One or more tag keys. Specify only the tag keys, not the tag values.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTagKeys() const{ return m_tagKeys; }

    /**
     * <p>One or more tag keys. Specify only the tag keys, not the tag values.</p>
     */
    inline bool TagKeysHasBeenSet() const { return m_tagKeysHasBeenSet; }

    /**
     * <p>One or more tag keys. Specify only the tag keys, not the tag values.</p>
     */
    inline void SetTagKeys(const Aws::Vector<Aws::String>& value) { m_tagKeysHasBeenSet = true; m_tagKeys = value; }

    /**
     * <p>One or more tag keys. Specify only the tag keys, not the tag values.</p>
     */
    inline void SetTagKeys(Aws::Vector<Aws::String>&& value) { m_tagKeysHasBeenSet = true; m_tagKeys = std::move(value); }

    /**
     * <p>One or more tag keys. Specify only the tag keys, not the tag values.</p>
     */
    inline UntagResourceRequest& WithTagKeys(const Aws::Vector<Aws::String>& value) { SetTagKeys(value); return *this;}

    /**
     * <p>One or more tag keys. Specify only the tag keys, not the tag values.</p>
     */
    inline UntagResourceRequest& WithTagKeys(Aws::Vector<Aws::String>&& value) { SetTagKeys(std::move(value)); return *this;}

    /**
     * <p>One or more tag keys. Specify only the tag keys, not the tag values.</p>
     */
    inline UntagResourceRequest& AddTagKeys(const Aws::String& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

    /**
     * <p>One or more tag keys. Specify only the tag keys, not the tag values.</p>
     */
    inline UntagResourceRequest& AddTagKeys(Aws::String&& value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more tag keys. Specify only the tag keys, not the tag values.</p>
     */
    inline UntagResourceRequest& AddTagKeys(const char* value) { m_tagKeysHasBeenSet = true; m_tagKeys.push_back(value); return *this; }

  private:

    Aws::String m_resourceARN;
    bool m_resourceARNHasBeenSet = false;

    Aws::Vector<Aws::String> m_tagKeys;
    bool m_tagKeysHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationAutoScaling
} // namespace Aws
