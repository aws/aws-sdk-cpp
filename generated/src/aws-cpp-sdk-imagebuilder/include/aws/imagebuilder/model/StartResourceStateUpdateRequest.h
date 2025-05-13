/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/imagebuilder/ImagebuilderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/model/ResourceState.h>
#include <aws/imagebuilder/model/ResourceStateUpdateIncludeResources.h>
#include <aws/imagebuilder/model/ResourceStateUpdateExclusionRules.h>
#include <aws/core/utils/DateTime.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace imagebuilder
{
namespace Model
{

  /**
   */
  class StartResourceStateUpdateRequest : public ImagebuilderRequest
  {
  public:
    AWS_IMAGEBUILDER_API StartResourceStateUpdateRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartResourceStateUpdate"; }

    AWS_IMAGEBUILDER_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ARN of the Image Builder resource that is updated. The state update might
     * also impact associated resources.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    StartResourceStateUpdateRequest& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the lifecycle action to take for this request.</p>
     */
    inline const ResourceState& GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    template<typename StateT = ResourceState>
    void SetState(StateT&& value) { m_stateHasBeenSet = true; m_state = std::forward<StateT>(value); }
    template<typename StateT = ResourceState>
    StartResourceStateUpdateRequest& WithState(StateT&& value) { SetState(std::forward<StateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role that’s used to update
     * image state.</p>
     */
    inline const Aws::String& GetExecutionRole() const { return m_executionRole; }
    inline bool ExecutionRoleHasBeenSet() const { return m_executionRoleHasBeenSet; }
    template<typename ExecutionRoleT = Aws::String>
    void SetExecutionRole(ExecutionRoleT&& value) { m_executionRoleHasBeenSet = true; m_executionRole = std::forward<ExecutionRoleT>(value); }
    template<typename ExecutionRoleT = Aws::String>
    StartResourceStateUpdateRequest& WithExecutionRole(ExecutionRoleT&& value) { SetExecutionRole(std::forward<ExecutionRoleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of image resources to update state for.</p>
     */
    inline const ResourceStateUpdateIncludeResources& GetIncludeResources() const { return m_includeResources; }
    inline bool IncludeResourcesHasBeenSet() const { return m_includeResourcesHasBeenSet; }
    template<typename IncludeResourcesT = ResourceStateUpdateIncludeResources>
    void SetIncludeResources(IncludeResourcesT&& value) { m_includeResourcesHasBeenSet = true; m_includeResources = std::forward<IncludeResourcesT>(value); }
    template<typename IncludeResourcesT = ResourceStateUpdateIncludeResources>
    StartResourceStateUpdateRequest& WithIncludeResources(IncludeResourcesT&& value) { SetIncludeResources(std::forward<IncludeResourcesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Skip action on the image resource and associated resources if specified
     * exclusion rules are met.</p>
     */
    inline const ResourceStateUpdateExclusionRules& GetExclusionRules() const { return m_exclusionRules; }
    inline bool ExclusionRulesHasBeenSet() const { return m_exclusionRulesHasBeenSet; }
    template<typename ExclusionRulesT = ResourceStateUpdateExclusionRules>
    void SetExclusionRules(ExclusionRulesT&& value) { m_exclusionRulesHasBeenSet = true; m_exclusionRules = std::forward<ExclusionRulesT>(value); }
    template<typename ExclusionRulesT = ResourceStateUpdateExclusionRules>
    StartResourceStateUpdateRequest& WithExclusionRules(ExclusionRulesT&& value) { SetExclusionRules(std::forward<ExclusionRulesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp that indicates when resources are updated by a lifecycle
     * action.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateAt() const { return m_updateAt; }
    inline bool UpdateAtHasBeenSet() const { return m_updateAtHasBeenSet; }
    template<typename UpdateAtT = Aws::Utils::DateTime>
    void SetUpdateAt(UpdateAtT&& value) { m_updateAtHasBeenSet = true; m_updateAt = std::forward<UpdateAtT>(value); }
    template<typename UpdateAtT = Aws::Utils::DateTime>
    StartResourceStateUpdateRequest& WithUpdateAt(UpdateAtT&& value) { SetUpdateAt(std::forward<UpdateAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique, case-sensitive identifier you provide to ensure idempotency of the
     * request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    StartResourceStateUpdateRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    ResourceState m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_executionRole;
    bool m_executionRoleHasBeenSet = false;

    ResourceStateUpdateIncludeResources m_includeResources;
    bool m_includeResourcesHasBeenSet = false;

    ResourceStateUpdateExclusionRules m_exclusionRules;
    bool m_exclusionRulesHasBeenSet = false;

    Aws::Utils::DateTime m_updateAt{};
    bool m_updateAtHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
