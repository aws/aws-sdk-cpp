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
  class RegisterResourceRequest : public LakeFormationRequest
  {
  public:
    AWS_LAKEFORMATION_API RegisterResourceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "RegisterResource"; }

    AWS_LAKEFORMATION_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the resource that you want to register.</p>
     */
    inline const Aws::String& GetResourceArn() const { return m_resourceArn; }
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }
    template<typename ResourceArnT = Aws::String>
    void SetResourceArn(ResourceArnT&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::forward<ResourceArnT>(value); }
    template<typename ResourceArnT = Aws::String>
    RegisterResourceRequest& WithResourceArn(ResourceArnT&& value) { SetResourceArn(std::forward<ResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Designates an Identity and Access Management (IAM) service-linked role by
     * registering this role with the Data Catalog. A service-linked role is a unique
     * type of IAM role that is linked directly to Lake Formation.</p> <p>For more
     * information, see <a
     * href="https://docs.aws.amazon.com/lake-formation/latest/dg/service-linked-roles.html">Using
     * Service-Linked Roles for Lake Formation</a>.</p>
     */
    inline bool GetUseServiceLinkedRole() const { return m_useServiceLinkedRole; }
    inline bool UseServiceLinkedRoleHasBeenSet() const { return m_useServiceLinkedRoleHasBeenSet; }
    inline void SetUseServiceLinkedRole(bool value) { m_useServiceLinkedRoleHasBeenSet = true; m_useServiceLinkedRole = value; }
    inline RegisterResourceRequest& WithUseServiceLinkedRole(bool value) { SetUseServiceLinkedRole(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the role that registers the resource.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    RegisterResourceRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether or not the resource is a federated resource.</p>
     */
    inline bool GetWithFederation() const { return m_withFederation; }
    inline bool WithFederationHasBeenSet() const { return m_withFederationHasBeenSet; }
    inline void SetWithFederation(bool value) { m_withFederationHasBeenSet = true; m_withFederation = value; }
    inline RegisterResourceRequest& WithWithFederation(bool value) { SetWithFederation(value); return *this;}
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
    inline RegisterResourceRequest& WithHybridAccessEnabled(bool value) { SetHybridAccessEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Grants the calling principal the permissions to perform all supported Lake
     * Formation operations on the registered data location. </p>
     */
    inline bool GetWithPrivilegedAccess() const { return m_withPrivilegedAccess; }
    inline bool WithPrivilegedAccessHasBeenSet() const { return m_withPrivilegedAccessHasBeenSet; }
    inline void SetWithPrivilegedAccess(bool value) { m_withPrivilegedAccessHasBeenSet = true; m_withPrivilegedAccess = value; }
    inline RegisterResourceRequest& WithWithPrivilegedAccess(bool value) { SetWithPrivilegedAccess(value); return *this;}
    ///@}
  private:

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    bool m_useServiceLinkedRole{false};
    bool m_useServiceLinkedRoleHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    bool m_withFederation{false};
    bool m_withFederationHasBeenSet = false;

    bool m_hybridAccessEnabled{false};
    bool m_hybridAccessEnabledHasBeenSet = false;

    bool m_withPrivilegedAccess{false};
    bool m_withPrivilegedAccessHasBeenSet = false;
  };

} // namespace Model
} // namespace LakeFormation
} // namespace Aws
