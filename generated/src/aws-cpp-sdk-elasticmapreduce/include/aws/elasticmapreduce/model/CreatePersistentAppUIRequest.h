/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/elasticmapreduce/EMRRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticmapreduce/model/EMRContainersConfig.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticmapreduce/model/ProfilerType.h>
#include <aws/elasticmapreduce/model/Tag.h>
#include <utility>

namespace Aws
{
namespace EMR
{
namespace Model
{

  /**
   */
  class CreatePersistentAppUIRequest : public EMRRequest
  {
  public:
    AWS_EMR_API CreatePersistentAppUIRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePersistentAppUI"; }

    AWS_EMR_API Aws::String SerializePayload() const override;

    AWS_EMR_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique Amazon Resource Name (ARN) of the target resource.</p>
     */
    inline const Aws::String& GetTargetResourceArn() const { return m_targetResourceArn; }
    inline bool TargetResourceArnHasBeenSet() const { return m_targetResourceArnHasBeenSet; }
    template<typename TargetResourceArnT = Aws::String>
    void SetTargetResourceArn(TargetResourceArnT&& value) { m_targetResourceArnHasBeenSet = true; m_targetResourceArn = std::forward<TargetResourceArnT>(value); }
    template<typename TargetResourceArnT = Aws::String>
    CreatePersistentAppUIRequest& WithTargetResourceArn(TargetResourceArnT&& value) { SetTargetResourceArn(std::forward<TargetResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The EMR containers configuration.</p>
     */
    inline const EMRContainersConfig& GetEMRContainersConfig() const { return m_eMRContainersConfig; }
    inline bool EMRContainersConfigHasBeenSet() const { return m_eMRContainersConfigHasBeenSet; }
    template<typename EMRContainersConfigT = EMRContainersConfig>
    void SetEMRContainersConfig(EMRContainersConfigT&& value) { m_eMRContainersConfigHasBeenSet = true; m_eMRContainersConfig = std::forward<EMRContainersConfigT>(value); }
    template<typename EMRContainersConfigT = EMRContainersConfig>
    CreatePersistentAppUIRequest& WithEMRContainersConfig(EMRContainersConfigT&& value) { SetEMRContainersConfig(std::forward<EMRContainersConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Tags for the persistent application user interface.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreatePersistentAppUIRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreatePersistentAppUIRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The cross reference for the persistent application user interface.</p>
     */
    inline const Aws::String& GetXReferer() const { return m_xReferer; }
    inline bool XRefererHasBeenSet() const { return m_xRefererHasBeenSet; }
    template<typename XRefererT = Aws::String>
    void SetXReferer(XRefererT&& value) { m_xRefererHasBeenSet = true; m_xReferer = std::forward<XRefererT>(value); }
    template<typename XRefererT = Aws::String>
    CreatePersistentAppUIRequest& WithXReferer(XRefererT&& value) { SetXReferer(std::forward<XRefererT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The profiler type for the persistent application user interface.</p>
     */
    inline ProfilerType GetProfilerType() const { return m_profilerType; }
    inline bool ProfilerTypeHasBeenSet() const { return m_profilerTypeHasBeenSet; }
    inline void SetProfilerType(ProfilerType value) { m_profilerTypeHasBeenSet = true; m_profilerType = value; }
    inline CreatePersistentAppUIRequest& WithProfilerType(ProfilerType value) { SetProfilerType(value); return *this;}
    ///@}
  private:

    Aws::String m_targetResourceArn;
    bool m_targetResourceArnHasBeenSet = false;

    EMRContainersConfig m_eMRContainersConfig;
    bool m_eMRContainersConfigHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_xReferer;
    bool m_xRefererHasBeenSet = false;

    ProfilerType m_profilerType{ProfilerType::NOT_SET};
    bool m_profilerTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
