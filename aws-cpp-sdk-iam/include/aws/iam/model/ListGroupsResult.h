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
#include <aws/iam/model/Group.h>

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
   * <p>Contains the response to a successful <a>ListGroups</a> request. </p>
   */
  class AWS_IAM_API ListGroupsResult
  {
  public:
    ListGroupsResult();
    ListGroupsResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    ListGroupsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>A list of groups.</p>
     */
    inline const Aws::Vector<Group>& GetGroups() const{ return m_groups; }

    /**
     * <p>A list of groups.</p>
     */
    inline void SetGroups(const Aws::Vector<Group>& value) { m_groups = value; }

    /**
     * <p>A list of groups.</p>
     */
    inline void SetGroups(Aws::Vector<Group>&& value) { m_groups = value; }

    /**
     * <p>A list of groups.</p>
     */
    inline ListGroupsResult& WithGroups(const Aws::Vector<Group>& value) { SetGroups(value); return *this;}

    /**
     * <p>A list of groups.</p>
     */
    inline ListGroupsResult& WithGroups(Aws::Vector<Group>&& value) { SetGroups(value); return *this;}

    /**
     * <p>A list of groups.</p>
     */
    inline ListGroupsResult& AddGroups(const Group& value) { m_groups.push_back(value); return *this; }

    /**
     * <p>A list of groups.</p>
     */
    inline ListGroupsResult& AddGroups(Group&& value) { m_groups.push_back(value); return *this; }

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
    inline ListGroupsResult& WithIsTruncated(bool value) { SetIsTruncated(value); return *this;}

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
    inline ListGroupsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>When <code>IsTruncated</code> is <code>true</code>, this element is present
     * and contains the value to use for the <code>Marker</code> parameter in a
     * subsequent pagination request.</p>
     */
    inline ListGroupsResult& WithMarker(Aws::String&& value) { SetMarker(value); return *this;}

    /**
     * <p>When <code>IsTruncated</code> is <code>true</code>, this element is present
     * and contains the value to use for the <code>Marker</code> parameter in a
     * subsequent pagination request.</p>
     */
    inline ListGroupsResult& WithMarker(const char* value) { SetMarker(value); return *this;}

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline ListGroupsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ListGroupsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::Vector<Group> m_groups;
    bool m_isTruncated;
    Aws::String m_marker;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace IAM
} // namespace Aws