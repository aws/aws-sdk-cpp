/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_ECR_API LifecyclePolicyPreviewResult
  {
  public:
    LifecyclePolicyPreviewResult();
    LifecyclePolicyPreviewResult(Aws::Utils::Json::JsonView jsonValue);
    LifecyclePolicyPreviewResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The list of tags associated with this image.</p>
     */
    inline const Aws::Vector<Aws::String>& GetImageTags() const{ return m_imageTags; }

    /**
     * <p>The list of tags associated with this image.</p>
     */
    inline bool ImageTagsHasBeenSet() const { return m_imageTagsHasBeenSet; }

    /**
     * <p>The list of tags associated with this image.</p>
     */
    inline void SetImageTags(const Aws::Vector<Aws::String>& value) { m_imageTagsHasBeenSet = true; m_imageTags = value; }

    /**
     * <p>The list of tags associated with this image.</p>
     */
    inline void SetImageTags(Aws::Vector<Aws::String>&& value) { m_imageTagsHasBeenSet = true; m_imageTags = std::move(value); }

    /**
     * <p>The list of tags associated with this image.</p>
     */
    inline LifecyclePolicyPreviewResult& WithImageTags(const Aws::Vector<Aws::String>& value) { SetImageTags(value); return *this;}

    /**
     * <p>The list of tags associated with this image.</p>
     */
    inline LifecyclePolicyPreviewResult& WithImageTags(Aws::Vector<Aws::String>&& value) { SetImageTags(std::move(value)); return *this;}

    /**
     * <p>The list of tags associated with this image.</p>
     */
    inline LifecyclePolicyPreviewResult& AddImageTags(const Aws::String& value) { m_imageTagsHasBeenSet = true; m_imageTags.push_back(value); return *this; }

    /**
     * <p>The list of tags associated with this image.</p>
     */
    inline LifecyclePolicyPreviewResult& AddImageTags(Aws::String&& value) { m_imageTagsHasBeenSet = true; m_imageTags.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of tags associated with this image.</p>
     */
    inline LifecyclePolicyPreviewResult& AddImageTags(const char* value) { m_imageTagsHasBeenSet = true; m_imageTags.push_back(value); return *this; }


    /**
     * <p>The <code>sha256</code> digest of the image manifest.</p>
     */
    inline const Aws::String& GetImageDigest() const{ return m_imageDigest; }

    /**
     * <p>The <code>sha256</code> digest of the image manifest.</p>
     */
    inline bool ImageDigestHasBeenSet() const { return m_imageDigestHasBeenSet; }

    /**
     * <p>The <code>sha256</code> digest of the image manifest.</p>
     */
    inline void SetImageDigest(const Aws::String& value) { m_imageDigestHasBeenSet = true; m_imageDigest = value; }

    /**
     * <p>The <code>sha256</code> digest of the image manifest.</p>
     */
    inline void SetImageDigest(Aws::String&& value) { m_imageDigestHasBeenSet = true; m_imageDigest = std::move(value); }

    /**
     * <p>The <code>sha256</code> digest of the image manifest.</p>
     */
    inline void SetImageDigest(const char* value) { m_imageDigestHasBeenSet = true; m_imageDigest.assign(value); }

    /**
     * <p>The <code>sha256</code> digest of the image manifest.</p>
     */
    inline LifecyclePolicyPreviewResult& WithImageDigest(const Aws::String& value) { SetImageDigest(value); return *this;}

    /**
     * <p>The <code>sha256</code> digest of the image manifest.</p>
     */
    inline LifecyclePolicyPreviewResult& WithImageDigest(Aws::String&& value) { SetImageDigest(std::move(value)); return *this;}

    /**
     * <p>The <code>sha256</code> digest of the image manifest.</p>
     */
    inline LifecyclePolicyPreviewResult& WithImageDigest(const char* value) { SetImageDigest(value); return *this;}


    /**
     * <p>The date and time, expressed in standard JavaScript date format, at which the
     * current image was pushed to the repository.</p>
     */
    inline const Aws::Utils::DateTime& GetImagePushedAt() const{ return m_imagePushedAt; }

    /**
     * <p>The date and time, expressed in standard JavaScript date format, at which the
     * current image was pushed to the repository.</p>
     */
    inline bool ImagePushedAtHasBeenSet() const { return m_imagePushedAtHasBeenSet; }

    /**
     * <p>The date and time, expressed in standard JavaScript date format, at which the
     * current image was pushed to the repository.</p>
     */
    inline void SetImagePushedAt(const Aws::Utils::DateTime& value) { m_imagePushedAtHasBeenSet = true; m_imagePushedAt = value; }

    /**
     * <p>The date and time, expressed in standard JavaScript date format, at which the
     * current image was pushed to the repository.</p>
     */
    inline void SetImagePushedAt(Aws::Utils::DateTime&& value) { m_imagePushedAtHasBeenSet = true; m_imagePushedAt = std::move(value); }

    /**
     * <p>The date and time, expressed in standard JavaScript date format, at which the
     * current image was pushed to the repository.</p>
     */
    inline LifecyclePolicyPreviewResult& WithImagePushedAt(const Aws::Utils::DateTime& value) { SetImagePushedAt(value); return *this;}

    /**
     * <p>The date and time, expressed in standard JavaScript date format, at which the
     * current image was pushed to the repository.</p>
     */
    inline LifecyclePolicyPreviewResult& WithImagePushedAt(Aws::Utils::DateTime&& value) { SetImagePushedAt(std::move(value)); return *this;}


    /**
     * <p>The type of action to be taken.</p>
     */
    inline const LifecyclePolicyRuleAction& GetAction() const{ return m_action; }

    /**
     * <p>The type of action to be taken.</p>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>The type of action to be taken.</p>
     */
    inline void SetAction(const LifecyclePolicyRuleAction& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The type of action to be taken.</p>
     */
    inline void SetAction(LifecyclePolicyRuleAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>The type of action to be taken.</p>
     */
    inline LifecyclePolicyPreviewResult& WithAction(const LifecyclePolicyRuleAction& value) { SetAction(value); return *this;}

    /**
     * <p>The type of action to be taken.</p>
     */
    inline LifecyclePolicyPreviewResult& WithAction(LifecyclePolicyRuleAction&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>The priority of the applied rule.</p>
     */
    inline int GetAppliedRulePriority() const{ return m_appliedRulePriority; }

    /**
     * <p>The priority of the applied rule.</p>
     */
    inline bool AppliedRulePriorityHasBeenSet() const { return m_appliedRulePriorityHasBeenSet; }

    /**
     * <p>The priority of the applied rule.</p>
     */
    inline void SetAppliedRulePriority(int value) { m_appliedRulePriorityHasBeenSet = true; m_appliedRulePriority = value; }

    /**
     * <p>The priority of the applied rule.</p>
     */
    inline LifecyclePolicyPreviewResult& WithAppliedRulePriority(int value) { SetAppliedRulePriority(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_imageTags;
    bool m_imageTagsHasBeenSet;

    Aws::String m_imageDigest;
    bool m_imageDigestHasBeenSet;

    Aws::Utils::DateTime m_imagePushedAt;
    bool m_imagePushedAtHasBeenSet;

    LifecyclePolicyRuleAction m_action;
    bool m_actionHasBeenSet;

    int m_appliedRulePriority;
    bool m_appliedRulePriorityHasBeenSet;
  };

} // namespace Model
} // namespace ECR
} // namespace Aws
