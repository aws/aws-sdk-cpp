/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/iam/model/ListPoliciesGrantingServiceAccessEntry.h>
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
  class AWS_IAM_API ListPoliciesGrantingServiceAccessResult
  {
  public:
    ListPoliciesGrantingServiceAccessResult();
    ListPoliciesGrantingServiceAccessResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ListPoliciesGrantingServiceAccessResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A <code>ListPoliciesGrantingServiceAccess</code> object that contains details
     * about the permissions policies attached to the specified identity (user, group,
     * or role).</p>
     */
    inline const Aws::Vector<ListPoliciesGrantingServiceAccessEntry>& GetPoliciesGrantingServiceAccess() const{ return m_policiesGrantingServiceAccess; }

    /**
     * <p>A <code>ListPoliciesGrantingServiceAccess</code> object that contains details
     * about the permissions policies attached to the specified identity (user, group,
     * or role).</p>
     */
    inline void SetPoliciesGrantingServiceAccess(const Aws::Vector<ListPoliciesGrantingServiceAccessEntry>& value) { m_policiesGrantingServiceAccess = value; }

    /**
     * <p>A <code>ListPoliciesGrantingServiceAccess</code> object that contains details
     * about the permissions policies attached to the specified identity (user, group,
     * or role).</p>
     */
    inline void SetPoliciesGrantingServiceAccess(Aws::Vector<ListPoliciesGrantingServiceAccessEntry>&& value) { m_policiesGrantingServiceAccess = std::move(value); }

    /**
     * <p>A <code>ListPoliciesGrantingServiceAccess</code> object that contains details
     * about the permissions policies attached to the specified identity (user, group,
     * or role).</p>
     */
    inline ListPoliciesGrantingServiceAccessResult& WithPoliciesGrantingServiceAccess(const Aws::Vector<ListPoliciesGrantingServiceAccessEntry>& value) { SetPoliciesGrantingServiceAccess(value); return *this;}

    /**
     * <p>A <code>ListPoliciesGrantingServiceAccess</code> object that contains details
     * about the permissions policies attached to the specified identity (user, group,
     * or role).</p>
     */
    inline ListPoliciesGrantingServiceAccessResult& WithPoliciesGrantingServiceAccess(Aws::Vector<ListPoliciesGrantingServiceAccessEntry>&& value) { SetPoliciesGrantingServiceAccess(std::move(value)); return *this;}

    /**
     * <p>A <code>ListPoliciesGrantingServiceAccess</code> object that contains details
     * about the permissions policies attached to the specified identity (user, group,
     * or role).</p>
     */
    inline ListPoliciesGrantingServiceAccessResult& AddPoliciesGrantingServiceAccess(const ListPoliciesGrantingServiceAccessEntry& value) { m_policiesGrantingServiceAccess.push_back(value); return *this; }

    /**
     * <p>A <code>ListPoliciesGrantingServiceAccess</code> object that contains details
     * about the permissions policies attached to the specified identity (user, group,
     * or role).</p>
     */
    inline ListPoliciesGrantingServiceAccessResult& AddPoliciesGrantingServiceAccess(ListPoliciesGrantingServiceAccessEntry&& value) { m_policiesGrantingServiceAccess.push_back(std::move(value)); return *this; }


    /**
     * <p>A flag that indicates whether there are more items to return. If your results
     * were truncated, you can make a subsequent pagination request using the
     * <code>Marker</code> request parameter to retrieve more items. We recommend that
     * you check <code>IsTruncated</code> after every call to ensure that you receive
     * all your results.</p>
     */
    inline bool GetIsTruncated() const{ return m_isTruncated; }

    /**
     * <p>A flag that indicates whether there are more items to return. If your results
     * were truncated, you can make a subsequent pagination request using the
     * <code>Marker</code> request parameter to retrieve more items. We recommend that
     * you check <code>IsTruncated</code> after every call to ensure that you receive
     * all your results.</p>
     */
    inline void SetIsTruncated(bool value) { m_isTruncated = value; }

    /**
     * <p>A flag that indicates whether there are more items to return. If your results
     * were truncated, you can make a subsequent pagination request using the
     * <code>Marker</code> request parameter to retrieve more items. We recommend that
     * you check <code>IsTruncated</code> after every call to ensure that you receive
     * all your results.</p>
     */
    inline ListPoliciesGrantingServiceAccessResult& WithIsTruncated(bool value) { SetIsTruncated(value); return *this;}


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
    inline ListPoliciesGrantingServiceAccessResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>When <code>IsTruncated</code> is <code>true</code>, this element is present
     * and contains the value to use for the <code>Marker</code> parameter in a
     * subsequent pagination request.</p>
     */
    inline ListPoliciesGrantingServiceAccessResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>When <code>IsTruncated</code> is <code>true</code>, this element is present
     * and contains the value to use for the <code>Marker</code> parameter in a
     * subsequent pagination request.</p>
     */
    inline ListPoliciesGrantingServiceAccessResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ListPoliciesGrantingServiceAccessResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ListPoliciesGrantingServiceAccessResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<ListPoliciesGrantingServiceAccessEntry> m_policiesGrantingServiceAccess;

    bool m_isTruncated;

    Aws::String m_marker;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws
