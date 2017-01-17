﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p>Contains the response to a successful <a>GetAccountAuthorizationDetails</a>
   * request. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/GetAccountAuthorizationDetailsResponse">AWS
   * API Reference</a></p>
   */
  class AWS_IAM_API GetAccountAuthorizationDetailsResult
  {
  public:
    GetAccountAuthorizationDetailsResult();
    GetAccountAuthorizationDetailsResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    GetAccountAuthorizationDetailsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>A list containing information about IAM users.</p>
     */
    inline const Aws::Vector<UserDetail>& GetUserDetailList() const{ return m_userDetailList; }

    /**
     * <p>A list containing information about IAM users.</p>
     */
    inline void SetUserDetailList(const Aws::Vector<UserDetail>& value) { m_userDetailList = value; }

    /**
     * <p>A list containing information about IAM users.</p>
     */
    inline void SetUserDetailList(Aws::Vector<UserDetail>&& value) { m_userDetailList = value; }

    /**
     * <p>A list containing information about IAM users.</p>
     */
    inline GetAccountAuthorizationDetailsResult& WithUserDetailList(const Aws::Vector<UserDetail>& value) { SetUserDetailList(value); return *this;}

    /**
     * <p>A list containing information about IAM users.</p>
     */
    inline GetAccountAuthorizationDetailsResult& WithUserDetailList(Aws::Vector<UserDetail>&& value) { SetUserDetailList(value); return *this;}

    /**
     * <p>A list containing information about IAM users.</p>
     */
    inline GetAccountAuthorizationDetailsResult& AddUserDetailList(const UserDetail& value) { m_userDetailList.push_back(value); return *this; }

    /**
     * <p>A list containing information about IAM users.</p>
     */
    inline GetAccountAuthorizationDetailsResult& AddUserDetailList(UserDetail&& value) { m_userDetailList.push_back(value); return *this; }

    /**
     * <p>A list containing information about IAM groups.</p>
     */
    inline const Aws::Vector<GroupDetail>& GetGroupDetailList() const{ return m_groupDetailList; }

    /**
     * <p>A list containing information about IAM groups.</p>
     */
    inline void SetGroupDetailList(const Aws::Vector<GroupDetail>& value) { m_groupDetailList = value; }

    /**
     * <p>A list containing information about IAM groups.</p>
     */
    inline void SetGroupDetailList(Aws::Vector<GroupDetail>&& value) { m_groupDetailList = value; }

    /**
     * <p>A list containing information about IAM groups.</p>
     */
    inline GetAccountAuthorizationDetailsResult& WithGroupDetailList(const Aws::Vector<GroupDetail>& value) { SetGroupDetailList(value); return *this;}

    /**
     * <p>A list containing information about IAM groups.</p>
     */
    inline GetAccountAuthorizationDetailsResult& WithGroupDetailList(Aws::Vector<GroupDetail>&& value) { SetGroupDetailList(value); return *this;}

    /**
     * <p>A list containing information about IAM groups.</p>
     */
    inline GetAccountAuthorizationDetailsResult& AddGroupDetailList(const GroupDetail& value) { m_groupDetailList.push_back(value); return *this; }

    /**
     * <p>A list containing information about IAM groups.</p>
     */
    inline GetAccountAuthorizationDetailsResult& AddGroupDetailList(GroupDetail&& value) { m_groupDetailList.push_back(value); return *this; }

    /**
     * <p>A list containing information about IAM roles.</p>
     */
    inline const Aws::Vector<RoleDetail>& GetRoleDetailList() const{ return m_roleDetailList; }

    /**
     * <p>A list containing information about IAM roles.</p>
     */
    inline void SetRoleDetailList(const Aws::Vector<RoleDetail>& value) { m_roleDetailList = value; }

    /**
     * <p>A list containing information about IAM roles.</p>
     */
    inline void SetRoleDetailList(Aws::Vector<RoleDetail>&& value) { m_roleDetailList = value; }

    /**
     * <p>A list containing information about IAM roles.</p>
     */
    inline GetAccountAuthorizationDetailsResult& WithRoleDetailList(const Aws::Vector<RoleDetail>& value) { SetRoleDetailList(value); return *this;}

    /**
     * <p>A list containing information about IAM roles.</p>
     */
    inline GetAccountAuthorizationDetailsResult& WithRoleDetailList(Aws::Vector<RoleDetail>&& value) { SetRoleDetailList(value); return *this;}

    /**
     * <p>A list containing information about IAM roles.</p>
     */
    inline GetAccountAuthorizationDetailsResult& AddRoleDetailList(const RoleDetail& value) { m_roleDetailList.push_back(value); return *this; }

    /**
     * <p>A list containing information about IAM roles.</p>
     */
    inline GetAccountAuthorizationDetailsResult& AddRoleDetailList(RoleDetail&& value) { m_roleDetailList.push_back(value); return *this; }

    /**
     * <p>A list containing information about managed policies.</p>
     */
    inline const Aws::Vector<ManagedPolicyDetail>& GetPolicies() const{ return m_policies; }

    /**
     * <p>A list containing information about managed policies.</p>
     */
    inline void SetPolicies(const Aws::Vector<ManagedPolicyDetail>& value) { m_policies = value; }

    /**
     * <p>A list containing information about managed policies.</p>
     */
    inline void SetPolicies(Aws::Vector<ManagedPolicyDetail>&& value) { m_policies = value; }

    /**
     * <p>A list containing information about managed policies.</p>
     */
    inline GetAccountAuthorizationDetailsResult& WithPolicies(const Aws::Vector<ManagedPolicyDetail>& value) { SetPolicies(value); return *this;}

    /**
     * <p>A list containing information about managed policies.</p>
     */
    inline GetAccountAuthorizationDetailsResult& WithPolicies(Aws::Vector<ManagedPolicyDetail>&& value) { SetPolicies(value); return *this;}

    /**
     * <p>A list containing information about managed policies.</p>
     */
    inline GetAccountAuthorizationDetailsResult& AddPolicies(const ManagedPolicyDetail& value) { m_policies.push_back(value); return *this; }

    /**
     * <p>A list containing information about managed policies.</p>
     */
    inline GetAccountAuthorizationDetailsResult& AddPolicies(ManagedPolicyDetail&& value) { m_policies.push_back(value); return *this; }

    /**
     * <p>A flag that indicates whether there are more items to return. If your results
     * were truncated, you can make a subsequent pagination request using the
     * <code>Marker</code> request parameter to retrieve more items. Note that IAM
     * might return fewer than the <code>MaxItems</code> number of results even when
     * there are more results available. We recommend that you check
     * <code>IsTruncated</code> after every call to ensure that you receive all of your
     * results.</p>
     */
    inline bool GetIsTruncated() const{ return m_isTruncated; }

    /**
     * <p>A flag that indicates whether there are more items to return. If your results
     * were truncated, you can make a subsequent pagination request using the
     * <code>Marker</code> request parameter to retrieve more items. Note that IAM
     * might return fewer than the <code>MaxItems</code> number of results even when
     * there are more results available. We recommend that you check
     * <code>IsTruncated</code> after every call to ensure that you receive all of your
     * results.</p>
     */
    inline void SetIsTruncated(bool value) { m_isTruncated = value; }

    /**
     * <p>A flag that indicates whether there are more items to return. If your results
     * were truncated, you can make a subsequent pagination request using the
     * <code>Marker</code> request parameter to retrieve more items. Note that IAM
     * might return fewer than the <code>MaxItems</code> number of results even when
     * there are more results available. We recommend that you check
     * <code>IsTruncated</code> after every call to ensure that you receive all of your
     * results.</p>
     */
    inline GetAccountAuthorizationDetailsResult& WithIsTruncated(bool value) { SetIsTruncated(value); return *this;}

    /**
     * <p>When <code>IsTruncated</code> is <code>true</code>, this element is present
     * and contains the value to use for the <code>Marker</code> parameter in a
     * subsequent pagination request.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>When <code>IsTruncated</code> is <code>true</code>, this element is present
     * and contains the value to use for the <code>Marker</code> parameter in a
     * subsequent pagination request.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>When <code>IsTruncated</code> is <code>true</code>, this element is present
     * and contains the value to use for the <code>Marker</code> parameter in a
     * subsequent pagination request.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = value; }

    /**
     * <p>When <code>IsTruncated</code> is <code>true</code>, this element is present
     * and contains the value to use for the <code>Marker</code> parameter in a
     * subsequent pagination request.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>When <code>IsTruncated</code> is <code>true</code>, this element is present
     * and contains the value to use for the <code>Marker</code> parameter in a
     * subsequent pagination request.</p>
     */
    inline GetAccountAuthorizationDetailsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>When <code>IsTruncated</code> is <code>true</code>, this element is present
     * and contains the value to use for the <code>Marker</code> parameter in a
     * subsequent pagination request.</p>
     */
    inline GetAccountAuthorizationDetailsResult& WithMarker(Aws::String&& value) { SetMarker(value); return *this;}

    /**
     * <p>When <code>IsTruncated</code> is <code>true</code>, this element is present
     * and contains the value to use for the <code>Marker</code> parameter in a
     * subsequent pagination request.</p>
     */
    inline GetAccountAuthorizationDetailsResult& WithMarker(const char* value) { SetMarker(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline GetAccountAuthorizationDetailsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline GetAccountAuthorizationDetailsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::Vector<UserDetail> m_userDetailList;
    Aws::Vector<GroupDetail> m_groupDetailList;
    Aws::Vector<RoleDetail> m_roleDetailList;
    Aws::Vector<ManagedPolicyDetail> m_policies;
    bool m_isTruncated;
    Aws::String m_marker;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws