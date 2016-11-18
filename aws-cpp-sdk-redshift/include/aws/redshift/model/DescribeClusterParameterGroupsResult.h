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
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/ResponseMetadata.h>
#include <aws/redshift/model/ClusterParameterGroup.h>

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
namespace Redshift
{
namespace Model
{
  /**
   * <p>Contains the output from the <a>DescribeClusterParameterGroups</a> action.
   * </p>
   */
  class AWS_REDSHIFT_API DescribeClusterParameterGroupsResult
  {
  public:
    DescribeClusterParameterGroupsResult();
    DescribeClusterParameterGroupsResult(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeClusterParameterGroupsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * <code>Marker</code> parameter and retrying the command. If the
     * <code>Marker</code> field is empty, all response records have been retrieved for
     * the request. </p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * <code>Marker</code> parameter and retrying the command. If the
     * <code>Marker</code> field is empty, all response records have been retrieved for
     * the request. </p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * <code>Marker</code> parameter and retrying the command. If the
     * <code>Marker</code> field is empty, all response records have been retrieved for
     * the request. </p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = value; }

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * <code>Marker</code> parameter and retrying the command. If the
     * <code>Marker</code> field is empty, all response records have been retrieved for
     * the request. </p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * <code>Marker</code> parameter and retrying the command. If the
     * <code>Marker</code> field is empty, all response records have been retrieved for
     * the request. </p>
     */
    inline DescribeClusterParameterGroupsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * <code>Marker</code> parameter and retrying the command. If the
     * <code>Marker</code> field is empty, all response records have been retrieved for
     * the request. </p>
     */
    inline DescribeClusterParameterGroupsResult& WithMarker(Aws::String&& value) { SetMarker(value); return *this;}

    /**
     * <p>A value that indicates the starting point for the next set of response
     * records in a subsequent request. If a value is returned in a response, you can
     * retrieve the next set of records by providing this returned marker value in the
     * <code>Marker</code> parameter and retrying the command. If the
     * <code>Marker</code> field is empty, all response records have been retrieved for
     * the request. </p>
     */
    inline DescribeClusterParameterGroupsResult& WithMarker(const char* value) { SetMarker(value); return *this;}

    /**
     * <p>A list of <a>ClusterParameterGroup</a> instances. Each instance describes one
     * cluster parameter group. </p>
     */
    inline const Aws::Vector<ClusterParameterGroup>& GetParameterGroups() const{ return m_parameterGroups; }

    /**
     * <p>A list of <a>ClusterParameterGroup</a> instances. Each instance describes one
     * cluster parameter group. </p>
     */
    inline void SetParameterGroups(const Aws::Vector<ClusterParameterGroup>& value) { m_parameterGroups = value; }

    /**
     * <p>A list of <a>ClusterParameterGroup</a> instances. Each instance describes one
     * cluster parameter group. </p>
     */
    inline void SetParameterGroups(Aws::Vector<ClusterParameterGroup>&& value) { m_parameterGroups = value; }

    /**
     * <p>A list of <a>ClusterParameterGroup</a> instances. Each instance describes one
     * cluster parameter group. </p>
     */
    inline DescribeClusterParameterGroupsResult& WithParameterGroups(const Aws::Vector<ClusterParameterGroup>& value) { SetParameterGroups(value); return *this;}

    /**
     * <p>A list of <a>ClusterParameterGroup</a> instances. Each instance describes one
     * cluster parameter group. </p>
     */
    inline DescribeClusterParameterGroupsResult& WithParameterGroups(Aws::Vector<ClusterParameterGroup>&& value) { SetParameterGroups(value); return *this;}

    /**
     * <p>A list of <a>ClusterParameterGroup</a> instances. Each instance describes one
     * cluster parameter group. </p>
     */
    inline DescribeClusterParameterGroupsResult& AddParameterGroups(const ClusterParameterGroup& value) { m_parameterGroups.push_back(value); return *this; }

    /**
     * <p>A list of <a>ClusterParameterGroup</a> instances. Each instance describes one
     * cluster parameter group. </p>
     */
    inline DescribeClusterParameterGroupsResult& AddParameterGroups(ClusterParameterGroup&& value) { m_parameterGroups.push_back(value); return *this; }

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline DescribeClusterParameterGroupsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeClusterParameterGroupsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::String m_marker;
    Aws::Vector<ClusterParameterGroup> m_parameterGroups;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws