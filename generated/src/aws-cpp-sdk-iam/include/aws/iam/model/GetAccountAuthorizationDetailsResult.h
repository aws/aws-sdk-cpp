/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iam/IAM_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iam/model/ResponseMetadata.h>
#include <aws/iam/model/UserDetail.h>
#include <aws/iam/model/GroupDetail.h>
#include <aws/iam/model/RoleDetail.h>
#include <aws/iam/model/ManagedPolicyDetail.h>
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
   * href="https://docs.aws.amazon.com/IAM/latest/APIReference/API_GetAccountAuthorizationDetails.html">GetAccountAuthorizationDetails</a>
   * request. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetAccountAuthorizationDetailsResponse">AWS
   * API Reference</a></p>
   */
  class GetAccountAuthorizationDetailsResult
  {
  public:
    AWS_IAM_API GetAccountAuthorizationDetailsResult() = default;
    AWS_IAM_API GetAccountAuthorizationDetailsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_IAM_API GetAccountAuthorizationDetailsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A list containing information about IAM users.</p>
     */
    inline const Aws::Vector<UserDetail>& GetUserDetailList() const { return m_userDetailList; }
    template<typename UserDetailListT = Aws::Vector<UserDetail>>
    void SetUserDetailList(UserDetailListT&& value) { m_userDetailListHasBeenSet = true; m_userDetailList = std::forward<UserDetailListT>(value); }
    template<typename UserDetailListT = Aws::Vector<UserDetail>>
    GetAccountAuthorizationDetailsResult& WithUserDetailList(UserDetailListT&& value) { SetUserDetailList(std::forward<UserDetailListT>(value)); return *this;}
    template<typename UserDetailListT = UserDetail>
    GetAccountAuthorizationDetailsResult& AddUserDetailList(UserDetailListT&& value) { m_userDetailListHasBeenSet = true; m_userDetailList.emplace_back(std::forward<UserDetailListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list containing information about IAM groups.</p>
     */
    inline const Aws::Vector<GroupDetail>& GetGroupDetailList() const { return m_groupDetailList; }
    template<typename GroupDetailListT = Aws::Vector<GroupDetail>>
    void SetGroupDetailList(GroupDetailListT&& value) { m_groupDetailListHasBeenSet = true; m_groupDetailList = std::forward<GroupDetailListT>(value); }
    template<typename GroupDetailListT = Aws::Vector<GroupDetail>>
    GetAccountAuthorizationDetailsResult& WithGroupDetailList(GroupDetailListT&& value) { SetGroupDetailList(std::forward<GroupDetailListT>(value)); return *this;}
    template<typename GroupDetailListT = GroupDetail>
    GetAccountAuthorizationDetailsResult& AddGroupDetailList(GroupDetailListT&& value) { m_groupDetailListHasBeenSet = true; m_groupDetailList.emplace_back(std::forward<GroupDetailListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list containing information about IAM roles.</p>
     */
    inline const Aws::Vector<RoleDetail>& GetRoleDetailList() const { return m_roleDetailList; }
    template<typename RoleDetailListT = Aws::Vector<RoleDetail>>
    void SetRoleDetailList(RoleDetailListT&& value) { m_roleDetailListHasBeenSet = true; m_roleDetailList = std::forward<RoleDetailListT>(value); }
    template<typename RoleDetailListT = Aws::Vector<RoleDetail>>
    GetAccountAuthorizationDetailsResult& WithRoleDetailList(RoleDetailListT&& value) { SetRoleDetailList(std::forward<RoleDetailListT>(value)); return *this;}
    template<typename RoleDetailListT = RoleDetail>
    GetAccountAuthorizationDetailsResult& AddRoleDetailList(RoleDetailListT&& value) { m_roleDetailListHasBeenSet = true; m_roleDetailList.emplace_back(std::forward<RoleDetailListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list containing information about managed policies.</p>
     */
    inline const Aws::Vector<ManagedPolicyDetail>& GetPolicies() const { return m_policies; }
    template<typename PoliciesT = Aws::Vector<ManagedPolicyDetail>>
    void SetPolicies(PoliciesT&& value) { m_policiesHasBeenSet = true; m_policies = std::forward<PoliciesT>(value); }
    template<typename PoliciesT = Aws::Vector<ManagedPolicyDetail>>
    GetAccountAuthorizationDetailsResult& WithPolicies(PoliciesT&& value) { SetPolicies(std::forward<PoliciesT>(value)); return *this;}
    template<typename PoliciesT = ManagedPolicyDetail>
    GetAccountAuthorizationDetailsResult& AddPolicies(PoliciesT&& value) { m_policiesHasBeenSet = true; m_policies.emplace_back(std::forward<PoliciesT>(value)); return *this; }
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
    inline GetAccountAuthorizationDetailsResult& WithIsTruncated(bool value) { SetIsTruncated(value); return *this;}
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
    GetAccountAuthorizationDetailsResult& WithMarker(MarkerT&& value) { SetMarker(std::forward<MarkerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    GetAccountAuthorizationDetailsResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<UserDetail> m_userDetailList;
    bool m_userDetailListHasBeenSet = false;

    Aws::Vector<GroupDetail> m_groupDetailList;
    bool m_groupDetailListHasBeenSet = false;

    Aws::Vector<RoleDetail> m_roleDetailList;
    bool m_roleDetailListHasBeenSet = false;

    Aws::Vector<ManagedPolicyDetail> m_policies;
    bool m_policiesHasBeenSet = false;

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
