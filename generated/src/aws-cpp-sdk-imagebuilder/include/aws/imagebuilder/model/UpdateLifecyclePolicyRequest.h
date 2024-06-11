﻿/**
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


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the lifecycle policy resource.</p>
     */
    inline const Aws::String& GetLifecyclePolicyArn() const{ return m_lifecyclePolicyArn; }
    inline bool LifecyclePolicyArnHasBeenSet() const { return m_lifecyclePolicyArnHasBeenSet; }
    inline void SetLifecyclePolicyArn(const Aws::String& value) { m_lifecyclePolicyArnHasBeenSet = true; m_lifecyclePolicyArn = value; }
    inline void SetLifecyclePolicyArn(Aws::String&& value) { m_lifecyclePolicyArnHasBeenSet = true; m_lifecyclePolicyArn = std::move(value); }
    inline void SetLifecyclePolicyArn(const char* value) { m_lifecyclePolicyArnHasBeenSet = true; m_lifecyclePolicyArn.assign(value); }
    inline UpdateLifecyclePolicyRequest& WithLifecyclePolicyArn(const Aws::String& value) { SetLifecyclePolicyArn(value); return *this;}
    inline UpdateLifecyclePolicyRequest& WithLifecyclePolicyArn(Aws::String&& value) { SetLifecyclePolicyArn(std::move(value)); return *this;}
    inline UpdateLifecyclePolicyRequest& WithLifecyclePolicyArn(const char* value) { SetLifecyclePolicyArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional description for the lifecycle policy.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline UpdateLifecyclePolicyRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline UpdateLifecyclePolicyRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline UpdateLifecyclePolicyRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the lifecycle policy resource is enabled.</p>
     */
    inline const LifecyclePolicyStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const LifecyclePolicyStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(LifecyclePolicyStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline UpdateLifecyclePolicyRequest& WithStatus(const LifecyclePolicyStatus& value) { SetStatus(value); return *this;}
    inline UpdateLifecyclePolicyRequest& WithStatus(LifecyclePolicyStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name or Amazon Resource Name (ARN) of the IAM role that Image Builder
     * uses to update the lifecycle policy.</p>
     */
    inline const Aws::String& GetExecutionRole() const{ return m_executionRole; }
    inline bool ExecutionRoleHasBeenSet() const { return m_executionRoleHasBeenSet; }
    inline void SetExecutionRole(const Aws::String& value) { m_executionRoleHasBeenSet = true; m_executionRole = value; }
    inline void SetExecutionRole(Aws::String&& value) { m_executionRoleHasBeenSet = true; m_executionRole = std::move(value); }
    inline void SetExecutionRole(const char* value) { m_executionRoleHasBeenSet = true; m_executionRole.assign(value); }
    inline UpdateLifecyclePolicyRequest& WithExecutionRole(const Aws::String& value) { SetExecutionRole(value); return *this;}
    inline UpdateLifecyclePolicyRequest& WithExecutionRole(Aws::String&& value) { SetExecutionRole(std::move(value)); return *this;}
    inline UpdateLifecyclePolicyRequest& WithExecutionRole(const char* value) { SetExecutionRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of image resource that the lifecycle policy applies to.</p>
     */
    inline const LifecyclePolicyResourceType& GetResourceType() const{ return m_resourceType; }
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }
    inline void SetResourceType(const LifecyclePolicyResourceType& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }
    inline void SetResourceType(LifecyclePolicyResourceType&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }
    inline UpdateLifecyclePolicyRequest& WithResourceType(const LifecyclePolicyResourceType& value) { SetResourceType(value); return *this;}
    inline UpdateLifecyclePolicyRequest& WithResourceType(LifecyclePolicyResourceType&& value) { SetResourceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration details for a lifecycle policy resource.</p>
     */
    inline const Aws::Vector<LifecyclePolicyDetail>& GetPolicyDetails() const{ return m_policyDetails; }
    inline bool PolicyDetailsHasBeenSet() const { return m_policyDetailsHasBeenSet; }
    inline void SetPolicyDetails(const Aws::Vector<LifecyclePolicyDetail>& value) { m_policyDetailsHasBeenSet = true; m_policyDetails = value; }
    inline void SetPolicyDetails(Aws::Vector<LifecyclePolicyDetail>&& value) { m_policyDetailsHasBeenSet = true; m_policyDetails = std::move(value); }
    inline UpdateLifecyclePolicyRequest& WithPolicyDetails(const Aws::Vector<LifecyclePolicyDetail>& value) { SetPolicyDetails(value); return *this;}
    inline UpdateLifecyclePolicyRequest& WithPolicyDetails(Aws::Vector<LifecyclePolicyDetail>&& value) { SetPolicyDetails(std::move(value)); return *this;}
    inline UpdateLifecyclePolicyRequest& AddPolicyDetails(const LifecyclePolicyDetail& value) { m_policyDetailsHasBeenSet = true; m_policyDetails.push_back(value); return *this; }
    inline UpdateLifecyclePolicyRequest& AddPolicyDetails(LifecyclePolicyDetail&& value) { m_policyDetailsHasBeenSet = true; m_policyDetails.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Selection criteria for resources that the lifecycle policy applies to.</p>
     */
    inline const LifecyclePolicyResourceSelection& GetResourceSelection() const{ return m_resourceSelection; }
    inline bool ResourceSelectionHasBeenSet() const { return m_resourceSelectionHasBeenSet; }
    inline void SetResourceSelection(const LifecyclePolicyResourceSelection& value) { m_resourceSelectionHasBeenSet = true; m_resourceSelection = value; }
    inline void SetResourceSelection(LifecyclePolicyResourceSelection&& value) { m_resourceSelectionHasBeenSet = true; m_resourceSelection = std::move(value); }
    inline UpdateLifecyclePolicyRequest& WithResourceSelection(const LifecyclePolicyResourceSelection& value) { SetResourceSelection(value); return *this;}
    inline UpdateLifecyclePolicyRequest& WithResourceSelection(LifecyclePolicyResourceSelection&& value) { SetResourceSelection(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique, case-sensitive identifier you provide to ensure idempotency of the
     * request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a> in the <i>Amazon EC2 API Reference</i>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline UpdateLifecyclePolicyRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline UpdateLifecyclePolicyRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline UpdateLifecyclePolicyRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}
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
