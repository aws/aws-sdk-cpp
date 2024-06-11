/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecr/ECR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ecr/model/LifecyclePolicyRuleAction.h>
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
namespace ECR
{
namespace Model
{

  /**
   * <p>The result of the lifecycle policy preview.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecr-2015-09-21/LifecyclePolicyPreviewResult">AWS
   * API Reference</a></p>
   */
  class LifecyclePolicyPreviewResult
  {
  public:
    AWS_ECR_API LifecyclePolicyPreviewResult();
    AWS_ECR_API LifecyclePolicyPreviewResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API LifecyclePolicyPreviewResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of tags associated with this image.</p>
     */
    inline const Aws::Vector<Aws::String>& GetImageTags() const{ return m_imageTags; }
    inline bool ImageTagsHasBeenSet() const { return m_imageTagsHasBeenSet; }
    inline void SetImageTags(const Aws::Vector<Aws::String>& value) { m_imageTagsHasBeenSet = true; m_imageTags = value; }
    inline void SetImageTags(Aws::Vector<Aws::String>&& value) { m_imageTagsHasBeenSet = true; m_imageTags = std::move(value); }
    inline LifecyclePolicyPreviewResult& WithImageTags(const Aws::Vector<Aws::String>& value) { SetImageTags(value); return *this;}
    inline LifecyclePolicyPreviewResult& WithImageTags(Aws::Vector<Aws::String>&& value) { SetImageTags(std::move(value)); return *this;}
    inline LifecyclePolicyPreviewResult& AddImageTags(const Aws::String& value) { m_imageTagsHasBeenSet = true; m_imageTags.push_back(value); return *this; }
    inline LifecyclePolicyPreviewResult& AddImageTags(Aws::String&& value) { m_imageTagsHasBeenSet = true; m_imageTags.push_back(std::move(value)); return *this; }
    inline LifecyclePolicyPreviewResult& AddImageTags(const char* value) { m_imageTagsHasBeenSet = true; m_imageTags.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>sha256</code> digest of the image manifest.</p>
     */
    inline const Aws::String& GetImageDigest() const{ return m_imageDigest; }
    inline bool ImageDigestHasBeenSet() const { return m_imageDigestHasBeenSet; }
    inline void SetImageDigest(const Aws::String& value) { m_imageDigestHasBeenSet = true; m_imageDigest = value; }
    inline void SetImageDigest(Aws::String&& value) { m_imageDigestHasBeenSet = true; m_imageDigest = std::move(value); }
    inline void SetImageDigest(const char* value) { m_imageDigestHasBeenSet = true; m_imageDigest.assign(value); }
    inline LifecyclePolicyPreviewResult& WithImageDigest(const Aws::String& value) { SetImageDigest(value); return *this;}
    inline LifecyclePolicyPreviewResult& WithImageDigest(Aws::String&& value) { SetImageDigest(std::move(value)); return *this;}
    inline LifecyclePolicyPreviewResult& WithImageDigest(const char* value) { SetImageDigest(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, expressed in standard JavaScript date format, at which the
     * current image was pushed to the repository.</p>
     */
    inline const Aws::Utils::DateTime& GetImagePushedAt() const{ return m_imagePushedAt; }
    inline bool ImagePushedAtHasBeenSet() const { return m_imagePushedAtHasBeenSet; }
    inline void SetImagePushedAt(const Aws::Utils::DateTime& value) { m_imagePushedAtHasBeenSet = true; m_imagePushedAt = value; }
    inline void SetImagePushedAt(Aws::Utils::DateTime&& value) { m_imagePushedAtHasBeenSet = true; m_imagePushedAt = std::move(value); }
    inline LifecyclePolicyPreviewResult& WithImagePushedAt(const Aws::Utils::DateTime& value) { SetImagePushedAt(value); return *this;}
    inline LifecyclePolicyPreviewResult& WithImagePushedAt(Aws::Utils::DateTime&& value) { SetImagePushedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of action to be taken.</p>
     */
    inline const LifecyclePolicyRuleAction& GetAction() const{ return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    inline void SetAction(const LifecyclePolicyRuleAction& value) { m_actionHasBeenSet = true; m_action = value; }
    inline void SetAction(LifecyclePolicyRuleAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }
    inline LifecyclePolicyPreviewResult& WithAction(const LifecyclePolicyRuleAction& value) { SetAction(value); return *this;}
    inline LifecyclePolicyPreviewResult& WithAction(LifecyclePolicyRuleAction&& value) { SetAction(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The priority of the applied rule.</p>
     */
    inline int GetAppliedRulePriority() const{ return m_appliedRulePriority; }
    inline bool AppliedRulePriorityHasBeenSet() const { return m_appliedRulePriorityHasBeenSet; }
    inline void SetAppliedRulePriority(int value) { m_appliedRulePriorityHasBeenSet = true; m_appliedRulePriority = value; }
    inline LifecyclePolicyPreviewResult& WithAppliedRulePriority(int value) { SetAppliedRulePriority(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_imageTags;
    bool m_imageTagsHasBeenSet = false;

    Aws::String m_imageDigest;
    bool m_imageDigestHasBeenSet = false;

    Aws::Utils::DateTime m_imagePushedAt;
    bool m_imagePushedAtHasBeenSet = false;

    LifecyclePolicyRuleAction m_action;
    bool m_actionHasBeenSet = false;

    int m_appliedRulePriority;
    bool m_appliedRulePriorityHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
