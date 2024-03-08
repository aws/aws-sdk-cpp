/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/imagebuilder/ImagebuilderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/model/LifecyclePolicyStatus.h>
#include <aws/imagebuilder/model/LifecyclePolicyResourceType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/imagebuilder/model/LifecyclePolicyResourceSelection.h>
#include <aws/imagebuilder/model/LifecyclePolicyDetail.h>
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
  class UpdateLifecyclePolicyRequest : public ImagebuilderRequest
  {
  public:
    AWS_IMAGEBUILDER_API UpdateLifecyclePolicyRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateLifecyclePolicy"; }

    AWS_IMAGEBUILDER_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle policy resource.</p>
     */
    inline const Aws::String& GetLifecyclePolicyArn() const{ return m_lifecyclePolicyArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle policy resource.</p>
     */
    inline bool LifecyclePolicyArnHasBeenSet() const { return m_lifecyclePolicyArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle policy resource.</p>
     */
    inline void SetLifecyclePolicyArn(const Aws::String& value) { m_lifecyclePolicyArnHasBeenSet = true; m_lifecyclePolicyArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle policy resource.</p>
     */
    inline void SetLifecyclePolicyArn(Aws::String&& value) { m_lifecyclePolicyArnHasBeenSet = true; m_lifecyclePolicyArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle policy resource.</p>
     */
    inline void SetLifecyclePolicyArn(const char* value) { m_lifecyclePolicyArnHasBeenSet = true; m_lifecyclePolicyArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle policy resource.</p>
     */
    inline UpdateLifecyclePolicyRequest& WithLifecyclePolicyArn(const Aws::String& value) { SetLifecyclePolicyArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle policy resource.</p>
     */
    inline UpdateLifecyclePolicyRequest& WithLifecyclePolicyArn(Aws::String&& value) { SetLifecyclePolicyArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle policy resource.</p>
     */
    inline UpdateLifecyclePolicyRequest& WithLifecyclePolicyArn(const char* value) { SetLifecyclePolicyArn(value); return *this;}


    /**
     * <p>Optional description for the lifecycle policy.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Optional description for the lifecycle policy.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Optional description for the lifecycle policy.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Optional description for the lifecycle policy.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Optional description for the lifecycle policy.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Optional description for the lifecycle policy.</p>
     */
    inline UpdateLifecyclePolicyRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Optional description for the lifecycle policy.</p>
     */
    inline UpdateLifecyclePolicyRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Optional description for the lifecycle policy.</p>
     */
    inline UpdateLifecyclePolicyRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Indicates whether the lifecycle policy resource is enabled.</p>
     */
    inline const LifecyclePolicyStatus& GetStatus() const{ return m_status; }

    /**
     * <p>Indicates whether the lifecycle policy resource is enabled.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>Indicates whether the lifecycle policy resource is enabled.</p>
     */
    inline void SetStatus(const LifecyclePolicyStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>Indicates whether the lifecycle policy resource is enabled.</p>
     */
    inline void SetStatus(LifecyclePolicyStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>Indicates whether the lifecycle policy resource is enabled.</p>
     */
    inline UpdateLifecyclePolicyRequest& WithStatus(const LifecyclePolicyStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>Indicates whether the lifecycle policy resource is enabled.</p>
     */
    inline UpdateLifecyclePolicyRequest& WithStatus(LifecyclePolicyStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role that Image Builder
     * uses to update the lifecycle policy.</p>
     */
    inline const Aws::String& GetExecutionRole() const{ return m_executionRole; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role that Image Builder
     * uses to update the lifecycle policy.</p>
     */
    inline bool ExecutionRoleHasBeenSet() const { return m_executionRoleHasBeenSet; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role that Image Builder
     * uses to update the lifecycle policy.</p>
     */
    inline void SetExecutionRole(const Aws::String& value) { m_executionRoleHasBeenSet = true; m_executionRole = value; }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role that Image Builder
     * uses to update the lifecycle policy.</p>
     */
    inline void SetExecutionRole(Aws::String&& value) { m_executionRoleHasBeenSet = true; m_executionRole = std::move(value); }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role that Image Builder
     * uses to update the lifecycle policy.</p>
     */
    inline void SetExecutionRole(const char* value) { m_executionRoleHasBeenSet = true; m_executionRole.assign(value); }

    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role that Image Builder
     * uses to update the lifecycle policy.</p>
     */
    inline UpdateLifecyclePolicyRequest& WithExecutionRole(const Aws::String& value) { SetExecutionRole(value); return *this;}

    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role that Image Builder
     * uses to update the lifecycle policy.</p>
     */
    inline UpdateLifecyclePolicyRequest& WithExecutionRole(Aws::String&& value) { SetExecutionRole(std::move(value)); return *this;}

    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role that Image Builder
     * uses to update the lifecycle policy.</p>
     */
    inline UpdateLifecyclePolicyRequest& WithExecutionRole(const char* value) { SetExecutionRole(value); return *this;}


    /**
     * <p>The type of image resource that the lifecycle policy applies to.</p>
     */
    inline const LifecyclePolicyResourceType& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The type of image resource that the lifecycle policy applies to.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The type of image resource that the lifecycle policy applies to.</p>
     */
    inline void SetResourceType(const LifecyclePolicyResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The type of image resource that the lifecycle policy applies to.</p>
     */
    inline void SetResourceType(LifecyclePolicyResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The type of image resource that the lifecycle policy applies to.</p>
     */
    inline UpdateLifecyclePolicyRequest& WithResourceType(const LifecyclePolicyResourceType& value) { SetResourceType(value); return *this;}

    /**
     * <p>The type of image resource that the lifecycle policy applies to.</p>
     */
    inline UpdateLifecyclePolicyRequest& WithResourceType(LifecyclePolicyResourceType&& value) { SetResourceType(std::move(value)); return *this;}


    /**
     * <p>The configuration details for a lifecycle policy resource.</p>
     */
    inline const Aws::Vector<LifecyclePolicyDetail>& GetPolicyDetails() const{ return m_policyDetails; }

    /**
     * <p>The configuration details for a lifecycle policy resource.</p>
     */
    inline bool PolicyDetailsHasBeenSet() const { return m_policyDetailsHasBeenSet; }

    /**
     * <p>The configuration details for a lifecycle policy resource.</p>
     */
    inline void SetPolicyDetails(const Aws::Vector<LifecyclePolicyDetail>& value) { m_policyDetailsHasBeenSet = true; m_policyDetails = value; }

    /**
     * <p>The configuration details for a lifecycle policy resource.</p>
     */
    inline void SetPolicyDetails(Aws::Vector<LifecyclePolicyDetail>&& value) { m_policyDetailsHasBeenSet = true; m_policyDetails = std::move(value); }

    /**
     * <p>The configuration details for a lifecycle policy resource.</p>
     */
    inline UpdateLifecyclePolicyRequest& WithPolicyDetails(const Aws::Vector<LifecyclePolicyDetail>& value) { SetPolicyDetails(value); return *this;}

    /**
     * <p>The configuration details for a lifecycle policy resource.</p>
     */
    inline UpdateLifecyclePolicyRequest& WithPolicyDetails(Aws::Vector<LifecyclePolicyDetail>&& value) { SetPolicyDetails(std::move(value)); return *this;}

    /**
     * <p>The configuration details for a lifecycle policy resource.</p>
     */
    inline UpdateLifecyclePolicyRequest& AddPolicyDetails(const LifecyclePolicyDetail& value) { m_policyDetailsHasBeenSet = true; m_policyDetails.push_back(value); return *this; }

    /**
     * <p>The configuration details for a lifecycle policy resource.</p>
     */
    inline UpdateLifecyclePolicyRequest& AddPolicyDetails(LifecyclePolicyDetail&& value) { m_policyDetailsHasBeenSet = true; m_policyDetails.push_back(std::move(value)); return *this; }


    /**
     * <p>Selection criteria for resources that the lifecycle policy applies to.</p>
     */
    inline const LifecyclePolicyResourceSelection& GetResourceSelection() const{ return m_resourceSelection; }

    /**
     * <p>Selection criteria for resources that the lifecycle policy applies to.</p>
     */
    inline bool ResourceSelectionHasBeenSet() const { return m_resourceSelectionHasBeenSet; }

    /**
     * <p>Selection criteria for resources that the lifecycle policy applies to.</p>
     */
    inline void SetResourceSelection(const LifecyclePolicyResourceSelection& value) { m_resourceSelectionHasBeenSet = true; m_resourceSelection = value; }

    /**
     * <p>Selection criteria for resources that the lifecycle policy applies to.</p>
     */
    inline void SetResourceSelection(LifecyclePolicyResourceSelection&& value) { m_resourceSelectionHasBeenSet = true; m_resourceSelection = std::move(value); }

    /**
     * <p>Selection criteria for resources that the lifecycle policy applies to.</p>
     */
    inline UpdateLifecyclePolicyRequest& WithResourceSelection(const LifecyclePolicyResourceSelection& value) { SetResourceSelection(value); return *this;}

    /**
     * <p>Selection criteria for resources that the lifecycle policy applies to.</p>
     */
    inline UpdateLifecyclePolicyRequest& WithResourceSelection(LifecyclePolicyResourceSelection&& value) { SetResourceSelection(std::move(value)); return *this;}


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
    inline UpdateLifecyclePolicyRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure idempotency of the
     * request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline UpdateLifecyclePolicyRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>Unique, case-sensitive identifier you provide to ensure idempotency of the
     * request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline UpdateLifecyclePolicyRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

  private:

    Aws::String m_lifecyclePolicyArn;
    bool m_lifecyclePolicyArnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    LifecyclePolicyStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_executionRole;
    bool m_executionRoleHasBeenSet = false;

    LifecyclePolicyResourceType m_resourceType;
    bool m_resourceTypeHasBeenSet = false;

    Aws::Vector<LifecyclePolicyDetail> m_policyDetails;
    bool m_policyDetailsHasBeenSet = false;

    LifecyclePolicyResourceSelection m_resourceSelection;
    bool m_resourceSelectionHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
