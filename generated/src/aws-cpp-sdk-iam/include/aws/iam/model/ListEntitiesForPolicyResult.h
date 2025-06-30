/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iam/model/ResponseMetadata.h>
#include <aws/iam/model/PolicyGroup.h>
#include <aws/iam/model/PolicyUser.h>
#include <aws/iam/model/PolicyRole.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace IAM
{
namespace Model
{
  /**
   * <p>Contains the response to a successful <a
   * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_ListEntitiesForPolicy.html">ListEntitiesForPolicy</a>
   * request. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListEntitiesForPolicyResponse">AWS
   * API Reference</a></p>
   */
  class ListEntitiesForPolicyResult
  {
  public:
    AWS_IAM_API ListEntitiesForPolicyResult() = default;
    AWS_IAM_API ListEntitiesForPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_IAM_API ListEntitiesForPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A list of IAM groups that the policy is attached to.</p>
     */
    inline const Aws::Vector<PolicyGroup>& GetPolicyGroups() const { return m_policyGroups; }
    template<typename PolicyGroupsT = Aws::Vector<PolicyGroup>>
    void SetPolicyGroups(PolicyGroupsT&& value) { m_policyGroupsHasBeenSet = true; m_policyGroups = std::forward<PolicyGroupsT>(value); }
    template<typename PolicyGroupsT = Aws::Vector<PolicyGroup>>
    ListEntitiesForPolicyResult& WithPolicyGroups(PolicyGroupsT&& value) { SetPolicyGroups(std::forward<PolicyGroupsT>(value)); return *this;}
    template<typename PolicyGroupsT = PolicyGroup>
    ListEntitiesForPolicyResult& AddPolicyGroups(PolicyGroupsT&& value) { m_policyGroupsHasBeenSet = true; m_policyGroups.emplace_back(std::forward<PolicyGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of IAM users that the policy is attached to.</p>
     */
    inline const Aws::Vector<PolicyUser>& GetPolicyUsers() const { return m_policyUsers; }
    template<typename PolicyUsersT = Aws::Vector<PolicyUser>>
    void SetPolicyUsers(PolicyUsersT&& value) { m_policyUsersHasBeenSet = true; m_policyUsers = std::forward<PolicyUsersT>(value); }
    template<typename PolicyUsersT = Aws::Vector<PolicyUser>>
    ListEntitiesForPolicyResult& WithPolicyUsers(PolicyUsersT&& value) { SetPolicyUsers(std::forward<PolicyUsersT>(value)); return *this;}
    template<typename PolicyUsersT = PolicyUser>
    ListEntitiesForPolicyResult& AddPolicyUsers(PolicyUsersT&& value) { m_policyUsersHasBeenSet = true; m_policyUsers.emplace_back(std::forward<PolicyUsersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of IAM roles that the policy is attached to.</p>
     */
    inline const Aws::Vector<PolicyRole>& GetPolicyRoles() const { return m_policyRoles; }
    template<typename PolicyRolesT = Aws::Vector<PolicyRole>>
    void SetPolicyRoles(PolicyRolesT&& value) { m_policyRolesHasBeenSet = true; m_policyRoles = std::forward<PolicyRolesT>(value); }
    template<typename PolicyRolesT = Aws::Vector<PolicyRole>>
    ListEntitiesForPolicyResult& WithPolicyRoles(PolicyRolesT&& value) { SetPolicyRoles(std::forward<PolicyRolesT>(value)); return *this;}
    template<typename PolicyRolesT = PolicyRole>
    ListEntitiesForPolicyResult& AddPolicyRoles(PolicyRolesT&& value) { m_policyRolesHasBeenSet = true; m_policyRoles.emplace_back(std::forward<PolicyRolesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A flag that indicates whether there are more items to return. If your results
     * were truncated, you can make a subsequent pagination request using the
     * <code>Marker</code> request parameter to retrieve more items. Note that IAM
     * might return fewer than the <code>MaxItems</code> number of results even when
     * there are more results available. We recommend that you check
     * <code>IsTruncated</code> after every call to ensure that you receive all your
     * results.</p>
     */
    inline bool GetIsTruncated() const { return m_isTruncated; }
    inline void SetIsTruncated(bool value) { m_isTruncatedHasBeenSet = true; m_isTruncated = value; }
    inline ListEntitiesForPolicyResult& WithIsTruncated(bool value) { SetIsTruncated(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When <code>IsTruncated</code> is <code>true</code>, this element is present
     * and contains the value to use for the <code>Marker</code> parameter in a
     * subsequent pagination request.</p>
     */
    inline const Aws::String& GetMarker() const { return m_marker; }
    template<typename MarkerT = Aws::String>
    void SetMarker(MarkerT&& value) { m_markerHasBeenSet = true; m_marker = std::forward<MarkerT>(value); }
    template<typename MarkerT = Aws::String>
    ListEntitiesForPolicyResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ListEntitiesForPolicyResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PolicyGroup> m_policyGroups;
    bool m_policyGroupsHasBeenSet = false;

    Aws::Vector<PolicyUser> m_policyUsers;
    bool m_policyUsersHasBeenSet = false;

    Aws::Vector<PolicyRole> m_policyRoles;
    bool m_policyRolesHasBeenSet = false;

    bool m_isTruncated{false};
    bool m_isTruncatedHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
