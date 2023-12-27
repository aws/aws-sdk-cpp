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
    AWS_IMAGEBUILDER_API StartResourceStateUpdateRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartResourceStateUpdate"; }

    AWS_IMAGEBUILDER_API Aws::String SerializePayload() const override;


    /**
     * <p>The ARN of the Image Builder resource that is updated. The state update might
     * also impact associated resources.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The ARN of the Image Builder resource that is updated. The state update might
     * also impact associated resources.</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The ARN of the Image Builder resource that is updated. The state update might
     * also impact associated resources.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The ARN of the Image Builder resource that is updated. The state update might
     * also impact associated resources.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The ARN of the Image Builder resource that is updated. The state update might
     * also impact associated resources.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The ARN of the Image Builder resource that is updated. The state update might
     * also impact associated resources.</p>
     */
    inline StartResourceStateUpdateRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The ARN of the Image Builder resource that is updated. The state update might
     * also impact associated resources.</p>
     */
    inline StartResourceStateUpdateRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the Image Builder resource that is updated. The state update might
     * also impact associated resources.</p>
     */
    inline StartResourceStateUpdateRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>Indicates the lifecycle action to take for this request.</p>
     */
    inline const ResourceState& GetState() const{ return m_state; }

    /**
     * <p>Indicates the lifecycle action to take for this request.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>Indicates the lifecycle action to take for this request.</p>
     */
    inline void SetState(const ResourceState& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>Indicates the lifecycle action to take for this request.</p>
     */
    inline void SetState(ResourceState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>Indicates the lifecycle action to take for this request.</p>
     */
    inline StartResourceStateUpdateRequest& WithState(const ResourceState& value) { SetState(value); return *this;}

    /**
     * <p>Indicates the lifecycle action to take for this request.</p>
     */
    inline StartResourceStateUpdateRequest& WithState(ResourceState&& value) { SetState(std::move(value)); return *this;}


    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role that’s used to update
     * image state.</p>
     */
    inline const Aws::String& GetExecutionRole() const{ return m_executionRole; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role that’s used to update
     * image state.</p>
     */
    inline bool ExecutionRoleHasBeenSet() const { return m_executionRoleHasBeenSet; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role that’s used to update
     * image state.</p>
     */
    inline void SetExecutionRole(const Aws::String& value) { m_executionRoleHasBeenSet = true; m_executionRole = value; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role that’s used to update
     * image state.</p>
     */
    inline void SetExecutionRole(Aws::String&& value) { m_executionRoleHasBeenSet = true; m_executionRole = std::move(value); }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role that’s used to update
     * image state.</p>
     */
    inline void SetExecutionRole(const char* value) { m_executionRoleHasBeenSet = true; m_executionRole.assign(value); }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role that’s used to update
     * image state.</p>
     */
    inline StartResourceStateUpdateRequest& WithExecutionRole(const Aws::String& value) { SetExecutionRole(value); return *this;}

    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role that’s used to update
     * image state.</p>
     */
    inline StartResourceStateUpdateRequest& WithExecutionRole(Aws::String&& value) { SetExecutionRole(std::move(value)); return *this;}

    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role that’s used to update
     * image state.</p>
     */
    inline StartResourceStateUpdateRequest& WithExecutionRole(const char* value) { SetExecutionRole(value); return *this;}


    /**
     * <p>A list of image resources to update state for.</p>
     */
    inline const ResourceStateUpdateIncludeResources& GetIncludeResources() const{ return m_includeResources; }

    /**
     * <p>A list of image resources to update state for.</p>
     */
    inline bool IncludeResourcesHasBeenSet() const { return m_includeResourcesHasBeenSet; }

    /**
     * <p>A list of image resources to update state for.</p>
     */
    inline void SetIncludeResources(const ResourceStateUpdateIncludeResources& value) { m_includeResourcesHasBeenSet = true; m_includeResources = value; }

    /**
     * <p>A list of image resources to update state for.</p>
     */
    inline void SetIncludeResources(ResourceStateUpdateIncludeResources&& value) { m_includeResourcesHasBeenSet = true; m_includeResources = std::move(value); }

    /**
     * <p>A list of image resources to update state for.</p>
     */
    inline StartResourceStateUpdateRequest& WithIncludeResources(const ResourceStateUpdateIncludeResources& value) { SetIncludeResources(value); return *this;}

    /**
     * <p>A list of image resources to update state for.</p>
     */
    inline StartResourceStateUpdateRequest& WithIncludeResources(ResourceStateUpdateIncludeResources&& value) { SetIncludeResources(std::move(value)); return *this;}


    /**
     * <p>Skip action on the image resource and associated resources if specified
     * exclusion rules are met.</p>
     */
    inline const ResourceStateUpdateExclusionRules& GetExclusionRules() const{ return m_exclusionRules; }

    /**
     * <p>Skip action on the image resource and associated resources if specified
     * exclusion rules are met.</p>
     */
    inline bool ExclusionRulesHasBeenSet() const { return m_exclusionRulesHasBeenSet; }

    /**
     * <p>Skip action on the image resource and associated resources if specified
     * exclusion rules are met.</p>
     */
    inline void SetExclusionRules(const ResourceStateUpdateExclusionRules& value) { m_exclusionRulesHasBeenSet = true; m_exclusionRules = value; }

    /**
     * <p>Skip action on the image resource and associated resources if specified
     * exclusion rules are met.</p>
     */
    inline void SetExclusionRules(ResourceStateUpdateExclusionRules&& value) { m_exclusionRulesHasBeenSet = true; m_exclusionRules = std::move(value); }

    /**
     * <p>Skip action on the image resource and associated resources if specified
     * exclusion rules are met.</p>
     */
    inline StartResourceStateUpdateRequest& WithExclusionRules(const ResourceStateUpdateExclusionRules& value) { SetExclusionRules(value); return *this;}

    /**
     * <p>Skip action on the image resource and associated resources if specified
     * exclusion rules are met.</p>
     */
    inline StartResourceStateUpdateRequest& WithExclusionRules(ResourceStateUpdateExclusionRules&& value) { SetExclusionRules(std::move(value)); return *this;}


    /**
     * <p>The timestamp that indicates when resources are updated by a lifecycle
     * action.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateAt() const{ return m_updateAt; }

    /**
     * <p>The timestamp that indicates when resources are updated by a lifecycle
     * action.</p>
     */
    inline bool UpdateAtHasBeenSet() const { return m_updateAtHasBeenSet; }

    /**
     * <p>The timestamp that indicates when resources are updated by a lifecycle
     * action.</p>
     */
    inline void SetUpdateAt(const Aws::Utils::DateTime& value) { m_updateAtHasBeenSet = true; m_updateAt = value; }

    /**
     * <p>The timestamp that indicates when resources are updated by a lifecycle
     * action.</p>
     */
    inline void SetUpdateAt(Aws::Utils::DateTime&& value) { m_updateAtHasBeenSet = true; m_updateAt = std::move(value); }

    /**
     * <p>The timestamp that indicates when resources are updated by a lifecycle
     * action.</p>
     */
    inline StartResourceStateUpdateRequest& WithUpdateAt(const Aws::Utils::DateTime& value) { SetUpdateAt(value); return *this;}

    /**
     * <p>The timestamp that indicates when resources are updated by a lifecycle
     * action.</p>
     */
    inline StartResourceStateUpdateRequest& WithUpdateAt(Aws::Utils::DateTime&& value) { SetUpdateAt(std::move(value)); return *this;}


    /**
     * <p>Unique, case-sensitive identifier you provide to ensure idempotency of the
     * request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure idempotency of the
     * request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure idempotency of the
     * request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure idempotency of the
     * request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure idempotency of the
     * request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure idempotency of the
     * request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline StartResourceStateUpdateRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure idempotency of the
     * request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline StartResourceStateUpdateRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure idempotency of the
     * request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline StartResourceStateUpdateRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

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

    Aws::Utils::DateTime m_updateAt;
    bool m_updateAtHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
