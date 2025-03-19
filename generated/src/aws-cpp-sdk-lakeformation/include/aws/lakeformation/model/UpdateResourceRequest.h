/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lakeformation/LakeFormation_EXPORTS.h>
#include <aws/lakeformation/LakeFormationRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace LakeFormation
{
namespace Model
{

  /**
   */
  class UpdateResourceRequest : public LakeFormationRequest
  {
  public:
    AWS_LAKEFORMATION_API UpdateResourceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateResource"; }

    AWS_LAKEFORMATION_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The new role to use for the given resource registered in Lake Formation.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    UpdateResourceRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The resource ARN.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    UpdateResourceRequest& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether or not the resource is a federated resource.</p>
     */
    inline bool GetWithFederation() const { return m_withFederation; }
    inline bool WithFederationHasBeenSet() const { return m_withFederationHasBeenSet; }
    inline void SetWithFederation(bool value) { m_withFederationHasBeenSet = true; m_withFederation = value; }
    inline UpdateResourceRequest& WithWithFederation(bool value) { SetWithFederation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies whether the data access of tables pointing to the location can be
     * managed by both Lake Formation permissions as well as Amazon S3 bucket policies.
     * </p>
     */
    inline bool GetHybridAccessEnabled() const { return m_hybridAccessEnabled; }
    inline bool HybridAccessEnabledHasBeenSet() const { return m_hybridAccessEnabledHasBeenSet; }
    inline void SetHybridAccessEnabled(bool value) { m_hybridAccessEnabledHasBeenSet = true; m_hybridAccessEnabled = value; }
    inline UpdateResourceRequest& WithHybridAccessEnabled(bool value) { SetHybridAccessEnabled(value); return *this;}
    ///@}
  private:

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    bool m_withFederation{false};
    bool m_withFederationHasBeenSet = false;

    bool m_hybridAccessEnabled{false};
    bool m_hybridAccessEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
