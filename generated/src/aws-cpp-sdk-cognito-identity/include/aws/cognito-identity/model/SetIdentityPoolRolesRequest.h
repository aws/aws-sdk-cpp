/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-identity/CognitoIdentity_EXPORTS.h>
#include <aws/cognito-identity/CognitoIdentityRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/cognito-identity/model/RoleMapping.h>
#include <utility>

namespace Aws
{
namespace CognitoIdentity
{
namespace Model
{

  /**
   * <p>Input to the <code>SetIdentityPoolRoles</code> action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/SetIdentityPoolRolesInput">AWS
   * API Reference</a></p>
   */
  class SetIdentityPoolRolesRequest : public CognitoIdentityRequest
  {
  public:
    AWS_COGNITOIDENTITY_API SetIdentityPoolRolesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetIdentityPoolRoles"; }

    AWS_COGNITOIDENTITY_API Aws::String SerializePayload() const override;

    AWS_COGNITOIDENTITY_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>An identity pool ID in the format REGION:GUID.</p>
     */
    inline const Aws::String& GetIdentityPoolId() const { return m_identityPoolId; }
    inline bool IdentityPoolIdHasBeenSet() const { return m_identityPoolIdHasBeenSet; }
    template<typename IdentityPoolIdT = Aws::String>
    void SetIdentityPoolId(IdentityPoolIdT&& value) { m_identityPoolIdHasBeenSet = true; m_identityPoolId = std::forward<IdentityPoolIdT>(value); }
    template<typename IdentityPoolIdT = Aws::String>
    SetIdentityPoolRolesRequest& WithIdentityPoolId(IdentityPoolIdT&& value) { SetIdentityPoolId(std::forward<IdentityPoolIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The map of roles associated with this pool. For a given role, the key will be
     * either "authenticated" or "unauthenticated" and the value will be the Role
     * ARN.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRoles() const { return m_roles; }
    inline bool RolesHasBeenSet() const { return m_rolesHasBeenSet; }
    template<typename RolesT = Aws::Map<Aws::String, Aws::String>>
    void SetRoles(RolesT&& value) { m_rolesHasBeenSet = true; m_roles = std::forward<RolesT>(value); }
    template<typename RolesT = Aws::Map<Aws::String, Aws::String>>
    SetIdentityPoolRolesRequest& WithRoles(RolesT&& value) { SetRoles(std::forward<RolesT>(value)); return *this;}
    template<typename RolesKeyT = Aws::String, typename RolesValueT = Aws::String>
    SetIdentityPoolRolesRequest& AddRoles(RolesKeyT&& key, RolesValueT&& value) {
      m_rolesHasBeenSet = true; m_roles.emplace(std::forward<RolesKeyT>(key), std::forward<RolesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>How users for a specific identity provider are to mapped to roles. This is a
     * string to <a>RoleMapping</a> object map. The string identifies the identity
     * provider, for example, <code>graph.facebook.com</code> or
     * <code>cognito-idp.us-east-1.amazonaws.com/us-east-1_abcdefghi:app_client_id</code>.</p>
     * <p>Up to 25 rules can be specified per identity provider.</p>
     */
    inline const Aws::Map<Aws::String, RoleMapping>& GetRoleMappings() const { return m_roleMappings; }
    inline bool RoleMappingsHasBeenSet() const { return m_roleMappingsHasBeenSet; }
    template<typename RoleMappingsT = Aws::Map<Aws::String, RoleMapping>>
    void SetRoleMappings(RoleMappingsT&& value) { m_roleMappingsHasBeenSet = true; m_roleMappings = std::forward<RoleMappingsT>(value); }
    template<typename RoleMappingsT = Aws::Map<Aws::String, RoleMapping>>
    SetIdentityPoolRolesRequest& WithRoleMappings(RoleMappingsT&& value) { SetRoleMappings(std::forward<RoleMappingsT>(value)); return *this;}
    template<typename RoleMappingsKeyT = Aws::String, typename RoleMappingsValueT = RoleMapping>
    SetIdentityPoolRolesRequest& AddRoleMappings(RoleMappingsKeyT&& key, RoleMappingsValueT&& value) {
      m_roleMappingsHasBeenSet = true; m_roleMappings.emplace(std::forward<RoleMappingsKeyT>(key), std::forward<RoleMappingsValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_identityPoolId;
    bool m_identityPoolIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_roles;
    bool m_rolesHasBeenSet = false;

    Aws::Map<Aws::String, RoleMapping> m_roleMappings;
    bool m_roleMappingsHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentity
} // namespace Aws
