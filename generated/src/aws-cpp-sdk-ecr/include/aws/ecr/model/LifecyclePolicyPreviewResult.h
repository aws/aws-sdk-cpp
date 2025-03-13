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
    AWS_ECR_API LifecyclePolicyPreviewResult() = default;
    AWS_ECR_API LifecyclePolicyPreviewResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API LifecyclePolicyPreviewResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of tags associated with this image.</p>
     */
    inline const Aws::Vector<Aws::String>& GetImageTags() const { return m_imageTags; }
    inline bool ImageTagsHasBeenSet() const { return m_imageTagsHasBeenSet; }
    template<typename ImageTagsT = Aws::Vector<Aws::String>>
    void SetImageTags(ImageTagsT&& value) { m_imageTagsHasBeenSet = true; m_imageTags = std::forward<ImageTagsT>(value); }
    template<typename ImageTagsT = Aws::Vector<Aws::String>>
    LifecyclePolicyPreviewResult& WithImageTags(ImageTagsT&& value) { SetImageTags(std::forward<ImageTagsT>(value)); return *this;}
    template<typename ImageTagsT = Aws::String>
    LifecyclePolicyPreviewResult& AddImageTags(ImageTagsT&& value) { m_imageTagsHasBeenSet = true; m_imageTags.emplace_back(std::forward<ImageTagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>sha256</code> digest of the image manifest.</p>
     */
    inline const Aws::String& GetImageDigest() const { return m_imageDigest; }
    inline bool ImageDigestHasBeenSet() const { return m_imageDigestHasBeenSet; }
    template<typename ImageDigestT = Aws::String>
    void SetImageDigest(ImageDigestT&& value) { m_imageDigestHasBeenSet = true; m_imageDigest = std::forward<ImageDigestT>(value); }
    template<typename ImageDigestT = Aws::String>
    LifecyclePolicyPreviewResult& WithImageDigest(ImageDigestT&& value) { SetImageDigest(std::forward<ImageDigestT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time, expressed in standard JavaScript date format, at which the
     * current image was pushed to the repository.</p>
     */
    inline const Aws::Utils::DateTime& GetImagePushedAt() const { return m_imagePushedAt; }
    inline bool ImagePushedAtHasBeenSet() const { return m_imagePushedAtHasBeenSet; }
    template<typename ImagePushedAtT = Aws::Utils::DateTime>
    void SetImagePushedAt(ImagePushedAtT&& value) { m_imagePushedAtHasBeenSet = true; m_imagePushedAt = std::forward<ImagePushedAtT>(value); }
    template<typename ImagePushedAtT = Aws::Utils::DateTime>
    LifecyclePolicyPreviewResult& WithImagePushedAt(ImagePushedAtT&& value) { SetImagePushedAt(std::forward<ImagePushedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of action to be taken.</p>
     */
    inline const LifecyclePolicyRuleAction& GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    template<typename ActionT = LifecyclePolicyRuleAction>
    void SetAction(ActionT&& value) { m_actionHasBeenSet = true; m_action = std::forward<ActionT>(value); }
    template<typename ActionT = LifecyclePolicyRuleAction>
    LifecyclePolicyPreviewResult& WithAction(ActionT&& value) { SetAction(std::forward<ActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The priority of the applied rule.</p>
     */
    inline int GetAppliedRulePriority() const { return m_appliedRulePriority; }
    inline bool AppliedRulePriorityHasBeenSet() const { return m_appliedRulePriorityHasBeenSet; }
    inline void SetAppliedRulePriority(int value) { m_appliedRulePriorityHasBeenSet = true; m_appliedRulePriority = value; }
    inline LifecyclePolicyPreviewResult& WithAppliedRulePriority(int value) { SetAppliedRulePriority(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_imageTags;
    bool m_imageTagsHasBeenSet = false;

    Aws::String m_imageDigest;
    bool m_imageDigestHasBeenSet = false;

    Aws::Utils::DateTime m_imagePushedAt{};
    bool m_imagePushedAtHasBeenSet = false;

    LifecyclePolicyRuleAction m_action;
    bool m_actionHasBeenSet = false;

    int m_appliedRulePriority{0};
    bool m_appliedRulePriorityHasBeenSet = false;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
