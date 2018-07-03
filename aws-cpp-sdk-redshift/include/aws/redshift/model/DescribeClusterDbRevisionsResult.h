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
#include <aws/redshift/model/ClusterDbRevision.h>
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
  class AWS_REDSHIFT_API DescribeClusterDbRevisionsResult
  {
  public:
    DescribeClusterDbRevisionsResult();
    DescribeClusterDbRevisionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeClusterDbRevisionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>A string representing the starting point for the next set of revisions. If a
     * value is returned in a response, you can retrieve the next set of revisions by
     * providing the value in the <code>marker</code> parameter and retrying the
     * command. If the <code>marker</code> field is empty, all revisions have already
     * been returned.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }

    /**
     * <p>A string representing the starting point for the next set of revisions. If a
     * value is returned in a response, you can retrieve the next set of revisions by
     * providing the value in the <code>marker</code> parameter and retrying the
     * command. If the <code>marker</code> field is empty, all revisions have already
     * been returned.</p>
     */
    inline void SetMarker(const Aws::String& value) { m_marker = value; }

    /**
     * <p>A string representing the starting point for the next set of revisions. If a
     * value is returned in a response, you can retrieve the next set of revisions by
     * providing the value in the <code>marker</code> parameter and retrying the
     * command. If the <code>marker</code> field is empty, all revisions have already
     * been returned.</p>
     */
    inline void SetMarker(Aws::String&& value) { m_marker = std::move(value); }

    /**
     * <p>A string representing the starting point for the next set of revisions. If a
     * value is returned in a response, you can retrieve the next set of revisions by
     * providing the value in the <code>marker</code> parameter and retrying the
     * command. If the <code>marker</code> field is empty, all revisions have already
     * been returned.</p>
     */
    inline void SetMarker(const char* value) { m_marker.assign(value); }

    /**
     * <p>A string representing the starting point for the next set of revisions. If a
     * value is returned in a response, you can retrieve the next set of revisions by
     * providing the value in the <code>marker</code> parameter and retrying the
     * command. If the <code>marker</code> field is empty, all revisions have already
     * been returned.</p>
     */
    inline DescribeClusterDbRevisionsResult& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}

    /**
     * <p>A string representing the starting point for the next set of revisions. If a
     * value is returned in a response, you can retrieve the next set of revisions by
     * providing the value in the <code>marker</code> parameter and retrying the
     * command. If the <code>marker</code> field is empty, all revisions have already
     * been returned.</p>
     */
    inline DescribeClusterDbRevisionsResult& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}

    /**
     * <p>A string representing the starting point for the next set of revisions. If a
     * value is returned in a response, you can retrieve the next set of revisions by
     * providing the value in the <code>marker</code> parameter and retrying the
     * command. If the <code>marker</code> field is empty, all revisions have already
     * been returned.</p>
     */
    inline DescribeClusterDbRevisionsResult& WithMarker(const char* value) { SetMarker(value); return *this;}


    /**
     * <p>A list of revisions.</p>
     */
    inline const Aws::Vector<ClusterDbRevision>& GetClusterDbRevisions() const{ return m_clusterDbRevisions; }

    /**
     * <p>A list of revisions.</p>
     */
    inline void SetClusterDbRevisions(const Aws::Vector<ClusterDbRevision>& value) { m_clusterDbRevisions = value; }

    /**
     * <p>A list of revisions.</p>
     */
    inline void SetClusterDbRevisions(Aws::Vector<ClusterDbRevision>&& value) { m_clusterDbRevisions = std::move(value); }

    /**
     * <p>A list of revisions.</p>
     */
    inline DescribeClusterDbRevisionsResult& WithClusterDbRevisions(const Aws::Vector<ClusterDbRevision>& value) { SetClusterDbRevisions(value); return *this;}

    /**
     * <p>A list of revisions.</p>
     */
    inline DescribeClusterDbRevisionsResult& WithClusterDbRevisions(Aws::Vector<ClusterDbRevision>&& value) { SetClusterDbRevisions(std::move(value)); return *this;}

    /**
     * <p>A list of revisions.</p>
     */
    inline DescribeClusterDbRevisionsResult& AddClusterDbRevisions(const ClusterDbRevision& value) { m_clusterDbRevisions.push_back(value); return *this; }

    /**
     * <p>A list of revisions.</p>
     */
    inline DescribeClusterDbRevisionsResult& AddClusterDbRevisions(ClusterDbRevision&& value) { m_clusterDbRevisions.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeClusterDbRevisionsResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeClusterDbRevisionsResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_marker;

    Aws::Vector<ClusterDbRevision> m_clusterDbRevisions;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
