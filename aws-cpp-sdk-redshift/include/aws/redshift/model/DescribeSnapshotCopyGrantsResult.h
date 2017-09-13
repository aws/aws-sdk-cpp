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
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/ResponseMetadata.h>
#include <aws/redshift/model/SnapshotCopyGrant.h>
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
namespace Redshift
{
namespace Model
{
  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/SnapshotCopyGrantMessage">AWS
   * API Reference</a></p>
   */
  class AWS_REDSHIFT_API DescribeSnapshotCopyGrantsResult
  {
  public:
    DescribeSnapshotCopyGrantsResult();
    DescribeSnapshotCopyGrantsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeSnapshotCopyGrantsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <code>DescribeSnapshotCopyGrant</code>
     * request exceed the value specified in <code>MaxRecords</code>, AWS returns a
     * value in the <code>Marker</code> field of the response. You can retrieve the
     * next set of response records by providing the returned marker value in the
     * <code>Marker</code> parameter and retrying the request. </p> <p>Constraints: You
     * can specify either the <b>SnapshotCopyGrantName</b> parameter or the
     * <b>Marker</b> parameter, but not both. </p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <code>DescribeSnapshotCopyGrant</code>
     * request exceed the value specified in <code>MaxRecords</code>, AWS returns a
     * value in the <code>Marker</code> field of the response. You can retrieve the
     * next set of response records by providing the returned marker value in the
     * <code>Marker</code> parameter and retrying the request. </p> <p>Constraints: You
     * can specify either the <b>SnapshotCopyGrantName</b> parameter or the
     * <b>Marker</b> parameter, but not both. </p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <code>DescribeSnapshotCopyGrant</code>
     * request exceed the value specified in <code>MaxRecords</code>, AWS returns a
     * value in the <code>Marker</code> field of the response. You can retrieve the
     * next set of response records by providing the returned marker value in the
     * <code>Marker</code> parameter and retrying the request. </p> <p>Constraints: You
     * can specify either the <b>SnapshotCopyGrantName</b> parameter or the
     * <b>Marker</b> parameter, but not both. </p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <code>DescribeSnapshotCopyGrant</code>
     * request exceed the value specified in <code>MaxRecords</code>, AWS returns a
     * value in the <code>Marker</code> field of the response. You can retrieve the
     * next set of response records by providing the returned marker value in the
     * <code>Marker</code> parameter and retrying the request. </p> <p>Constraints: You
     * can specify either the <b>SnapshotCopyGrantName</b> parameter or the
     * <b>Marker</b> parameter, but not both. </p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <code>DescribeSnapshotCopyGrant</code>
     * request exceed the value specified in <code>MaxRecords</code>, AWS returns a
     * value in the <code>Marker</code> field of the response. You can retrieve the
     * next set of response records by providing the returned marker value in the
     * <code>Marker</code> parameter and retrying the request. </p> <p>Constraints: You
     * can specify either the <b>SnapshotCopyGrantName</b> parameter or the
     * <b>Marker</b> parameter, but not both. </p>
     */
    inline DescribeSnapshotCopyGrantsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <code>DescribeSnapshotCopyGrant</code>
     * request exceed the value specified in <code>MaxRecords</code>, AWS returns a
     * value in the <code>Marker</code> field of the response. You can retrieve the
     * next set of response records by providing the returned marker value in the
     * <code>Marker</code> parameter and retrying the request. </p> <p>Constraints: You
     * can specify either the <b>SnapshotCopyGrantName</b> parameter or the
     * <b>Marker</b> parameter, but not both. </p>
     */
    inline DescribeSnapshotCopyGrantsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>An optional parameter that specifies the starting point to return a set of
     * response records. When the results of a <code>DescribeSnapshotCopyGrant</code>
     * request exceed the value specified in <code>MaxRecords</code>, AWS returns a
     * value in the <code>Marker</code> field of the response. You can retrieve the
     * next set of response records by providing the returned marker value in the
     * <code>Marker</code> parameter and retrying the request. </p> <p>Constraints: You
     * can specify either the <b>SnapshotCopyGrantName</b> parameter or the
     * <b>Marker</b> parameter, but not both. </p>
     */
    inline DescribeSnapshotCopyGrantsResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>The list of <code>SnapshotCopyGrant</code> objects.</p>
     */
    inline const Aws::Vector<SnapshotCopyGrant>& GetSnapshotCopyGrants() const{ return m_snapshotCopyGrants; }

    /**
     * <p>The list of <code>SnapshotCopyGrant</code> objects.</p>
     */
    inline void SetSnapshotCopyGrants(const Aws::Vector<SnapshotCopyGrant>& value) { m_snapshotCopyGrants = value; }

    /**
     * <p>The list of <code>SnapshotCopyGrant</code> objects.</p>
     */
    inline void SetSnapshotCopyGrants(Aws::Vector<SnapshotCopyGrant>&& value) { m_snapshotCopyGrants = std::move(value); }

    /**
     * <p>The list of <code>SnapshotCopyGrant</code> objects.</p>
     */
    inline DescribeSnapshotCopyGrantsResult& WithSnapshotCopyGrants(const Aws::Vector<SnapshotCopyGrant>& value) { SetSnapshotCopyGrants(value); return *this;}

    /**
     * <p>The list of <code>SnapshotCopyGrant</code> objects.</p>
     */
    inline DescribeSnapshotCopyGrantsResult& WithSnapshotCopyGrants(Aws::Vector<SnapshotCopyGrant>&& value) { SetSnapshotCopyGrants(std::move(value)); return *this;}

    /**
     * <p>The list of <code>SnapshotCopyGrant</code> objects.</p>
     */
    inline DescribeSnapshotCopyGrantsResult& AddSnapshotCopyGrants(const SnapshotCopyGrant& value) { m_snapshotCopyGrants.push_back(value); return *this; }

    /**
     * <p>The list of <code>SnapshotCopyGrant</code> objects.</p>
     */
    inline DescribeSnapshotCopyGrantsResult& AddSnapshotCopyGrants(SnapshotCopyGrant&& value) { m_snapshotCopyGrants.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeSnapshotCopyGrantsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeSnapshotCopyGrantsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_marker;

    Aws::Vector<SnapshotCopyGrant> m_snapshotCopyGrants;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
