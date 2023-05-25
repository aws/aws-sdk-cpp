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
   * <p>Contains the response to a successful <a>ListEntitiesForPolicy</a> request.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iam-2010-05-08/ListEntitiesForPolicyResponse">AWS
   * API Reference</a></p>
   */
  class ListEntitiesForPolicyResult
  {
  public:
    AWS_IAM_API ListEntitiesForPolicyResult();
    AWS_IAM_API ListEntitiesForPolicyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_IAM_API ListEntitiesForPolicyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A list of IAM groups that the policy is attached to.</p>
     */
    inline const Aws::Vector<PolicyGroup>& GetPolicyGroups() const{ return m_policyGroups; }

    /**
     * <p>A list of IAM groups that the policy is attached to.</p>
     */
    inline void SetPolicyGroups(const Aws::Vector<PolicyGroup>& value) { m_policyGroups = value; }

    /**
     * <p>A list of IAM groups that the policy is attached to.</p>
     */
    inline void SetPolicyGroups(Aws::Vector<PolicyGroup>&& value) { m_policyGroups = std::move(value); }

    /**
     * <p>A list of IAM groups that the policy is attached to.</p>
     */
    inline ListEntitiesForPolicyResult& WithPolicyGroups(const Aws::Vector<PolicyGroup>& value) { SetPolicyGroups(value); return *this;}

    /**
     * <p>A list of IAM groups that the policy is attached to.</p>
     */
    inline ListEntitiesForPolicyResult& WithPolicyGroups(Aws::Vector<PolicyGroup>&& value) { SetPolicyGroups(std::move(value)); return *this;}

    /**
     * <p>A list of IAM groups that the policy is attached to.</p>
     */
    inline ListEntitiesForPolicyResult& AddPolicyGroups(const PolicyGroup& value) { m_policyGroups.push_back(value); return *this; }

    /**
     * <p>A list of IAM groups that the policy is attached to.</p>
     */
    inline ListEntitiesForPolicyResult& AddPolicyGroups(PolicyGroup&& value) { m_policyGroups.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of IAM users that the policy is attached to.</p>
     */
    inline const Aws::Vector<PolicyUser>& GetPolicyUsers() const{ return m_policyUsers; }

    /**
     * <p>A list of IAM users that the policy is attached to.</p>
     */
    inline void SetPolicyUsers(const Aws::Vector<PolicyUser>& value) { m_policyUsers = value; }

    /**
     * <p>A list of IAM users that the policy is attached to.</p>
     */
    inline void SetPolicyUsers(Aws::Vector<PolicyUser>&& value) { m_policyUsers = std::move(value); }

    /**
     * <p>A list of IAM users that the policy is attached to.</p>
     */
    inline ListEntitiesForPolicyResult& WithPolicyUsers(const Aws::Vector<PolicyUser>& value) { SetPolicyUsers(value); return *this;}

    /**
     * <p>A list of IAM users that the policy is attached to.</p>
     */
    inline ListEntitiesForPolicyResult& WithPolicyUsers(Aws::Vector<PolicyUser>&& value) { SetPolicyUsers(std::move(value)); return *this;}

    /**
     * <p>A list of IAM users that the policy is attached to.</p>
     */
    inline ListEntitiesForPolicyResult& AddPolicyUsers(const PolicyUser& value) { m_policyUsers.push_back(value); return *this; }

    /**
     * <p>A list of IAM users that the policy is attached to.</p>
     */
    inline ListEntitiesForPolicyResult& AddPolicyUsers(PolicyUser&& value) { m_policyUsers.push_back(std::move(value)); return *this; }


    /**
     * <p>A list of IAM roles that the policy is attached to.</p>
     */
    inline const Aws::Vector<PolicyRole>& GetPolicyRoles() const{ return m_policyRoles; }

    /**
     * <p>A list of IAM roles that the policy is attached to.</p>
     */
    inline void SetPolicyRoles(const Aws::Vector<PolicyRole>& value) { m_policyRoles = value; }

    /**
     * <p>A list of IAM roles that the policy is attached to.</p>
     */
    inline void SetPolicyRoles(Aws::Vector<PolicyRole>&& value) { m_policyRoles = std::move(value); }

    /**
     * <p>A list of IAM roles that the policy is attached to.</p>
     */
    inline ListEntitiesForPolicyResult& WithPolicyRoles(const Aws::Vector<PolicyRole>& value) { SetPolicyRoles(value); return *this;}

    /**
     * <p>A list of IAM roles that the policy is attached to.</p>
     */
    inline ListEntitiesForPolicyResult& WithPolicyRoles(Aws::Vector<PolicyRole>&& value) { SetPolicyRoles(std::move(value)); return *this;}

    /**
     * <p>A list of IAM roles that the policy is attached to.</p>
     */
    inline ListEntitiesForPolicyResult& AddPolicyRoles(const PolicyRole& value) { m_policyRoles.push_back(value); return *this; }

    /**
     * <p>A list of IAM roles that the policy is attached to.</p>
     */
    inline ListEntitiesForPolicyResult& AddPolicyRoles(PolicyRole&& value) { m_policyRoles.push_back(std::move(value)); return *this; }


    /**
     * <p>A flag that indicates whether there are more items to return. If your results
     * were truncated, you can make a subsequent pagination request using the
     * <code>Marker</code> request parameter to retrieve more items. Note that IAM
     * might return fewer than the <code>MaxItems</code> number of results even when
     * there are more results available. We recommend that you check
     * <code>IsTruncated</code> after every call to ensure that you receive all your
     * results.</p>
     */
    inline bool GetIsTruncated() const{ return m_isTruncated; }

    /**
     * <p>A flag that indicates whether there are more items to return. If your results
     * were truncated, you can make a subsequent pagination request using the
     * <code>Marker</code> request parameter to retrieve more items. Note that IAM
     * might return fewer than the <code>MaxItems</code> number of results even when
     * there are more results available. We recommend that you check
     * <code>IsTruncated</code> after every call to ensure that you receive all your
     * results.</p>
     */
    inline void SetIsTruncated(bool value) { m_isTruncated = value; }

    /**
     * <p>A flag that indicates whether there are more items to return. If your results
     * were truncated, you can make a subsequent pagination request using the
     * <code>Marker</code> request parameter to retrieve more items. Note that IAM
     * might return fewer than the <code>MaxItems</code> number of results even when
     * there are more results available. We recommend that you check
     * <code>IsTruncated</code> after every call to ensure that you receive all your
     * results.</p>
     */
    inline ListEntitiesForPolicyResult& WithIsTruncated(bool value) { SetIsTruncated(value); return *this;}


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
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

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
    inline ListEntitiesForPolicyResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>When <code>IsTruncated</code> is <code>true</code>, this element is present
     * and contains the value to use for the <code>Marker</code> parameter in a
     * subsequent pagination request.</p>
     */
    inline ListEntitiesForPolicyResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>When <code>IsTruncated</code> is <code>true</code>, this element is present
     * and contains the value to use for the <code>Marker</code> parameter in a
     * subsequent pagination request.</p>
     */
    inline ListEntitiesForPolicyResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ListEntitiesForPolicyResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ListEntitiesForPolicyResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<PolicyGroup> m_policyGroups;

    Aws::Vector<PolicyUser> m_policyUsers;

    Aws::Vector<PolicyRole> m_policyRoles;

    bool m_isTruncated;

    Aws::String m_marker;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
