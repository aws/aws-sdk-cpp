/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cognito-identity/CognitoIdentity_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/cognito-identity/model/RoleMapping.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace CognitoIdentity
{
namespace Model
{
  /**
   * <p>Returned in response to a successful <code>GetIdentityPoolRoles</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-identity-2014-06-30/GetIdentityPoolRolesResponse">AWS
   * API Reference</a></p>
   */
  class GetIdentityPoolRolesResult
  {
  public:
    AWS_COGNITOIDENTITY_API GetIdentityPoolRolesResult() = default;
    AWS_COGNITOIDENTITY_API GetIdentityPoolRolesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_COGNITOIDENTITY_API GetIdentityPoolRolesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An identity pool ID in the format REGION:GUID.</p>
     */
    inline const Aws::String& GetIdentityPoolId() const { return m_identityPoolId; }
    template<typename IdentityPoolIdT = Aws::String>
    void SetIdentityPoolId(IdentityPoolIdT&& value) { m_identityPoolIdHasBeenSet = true; m_identityPoolId = std::forward<IdentityPoolIdT>(value); }
    template<typename IdentityPoolIdT = Aws::String>
    GetIdentityPoolRolesResult& WithIdentityPoolId(IdentityPoolIdT&& value) { SetIdentityPoolId(std::forward<IdentityPoolIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The map of roles associated with this pool. Currently only authenticated and
     * unauthenticated roles are supported.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRoles() const { return m_roles; }
    template<typename RolesT = Aws::Map<Aws::String, Aws::String>>
    void SetRoles(RolesT&& value) { m_rolesHasBeenSet = true; m_roles = std::forward<RolesT>(value); }
    template<typename RolesT = Aws::Map<Aws::String, Aws::String>>
    GetIdentityPoolRolesResult& WithRoles(RolesT&& value) { SetRoles(std::forward<RolesT>(value)); return *this;}
    template<typename RolesKeyT = Aws::String, typename RolesValueT = Aws::String>
    GetIdentityPoolRolesResult& AddRoles(RolesKeyT&& key, RolesValueT&& value) {
      m_rolesHasBeenSet = true; m_roles.emplace(std::forward<RolesKeyT>(key), std::forward<RolesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>How users for a specific identity provider are to mapped to roles. This is a
     * String-to-<a>RoleMapping</a> object map. The string identifies the identity
     * provider, for example, <code>graph.facebook.com</code> or
     * <code>cognito-idp.us-east-1.amazonaws.com/us-east-1_abcdefghi:app_client_id</code>.</p>
     */
    inline const Aws::Map<Aws::String, RoleMapping>& GetRoleMappings() const { return m_roleMappings; }
    template<typename RoleMappingsT = Aws::Map<Aws::String, RoleMapping>>
    void SetRoleMappings(RoleMappingsT&& value) { m_roleMappingsHasBeenSet = true; m_roleMappings = std::forward<RoleMappingsT>(value); }
    template<typename RoleMappingsT = Aws::Map<Aws::String, RoleMapping>>
    GetIdentityPoolRolesResult& WithRoleMappings(RoleMappingsT&& value) { SetRoleMappings(std::forward<RoleMappingsT>(value)); return *this;}
    template<typename RoleMappingsKeyT = Aws::String, typename RoleMappingsValueT = RoleMapping>
    GetIdentityPoolRolesResult& AddRoleMappings(RoleMappingsKeyT&& key, RoleMappingsValueT&& value) {
      m_roleMappingsHasBeenSet = true; m_roleMappings.emplace(std::forward<RoleMappingsKeyT>(key), std::forward<RoleMappingsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetIdentityPoolRolesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_identityPoolId;
    bool m_identityPoolIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_roles;
    bool m_rolesHasBeenSet = false;

    Aws::Map<Aws::String, RoleMapping> m_roleMappings;
    bool m_roleMappingsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentity
} // namespace Aws
