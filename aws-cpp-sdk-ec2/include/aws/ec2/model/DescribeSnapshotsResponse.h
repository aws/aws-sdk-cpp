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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/Snapshot.h>
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
namespace EC2
{
namespace Model
{
  /**
   * <p>Contains the output of DescribeSnapshots.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeSnapshotsResult">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API DescribeSnapshotsResponse
  {
  public:
    DescribeSnapshotsResponse();
    DescribeSnapshotsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    DescribeSnapshotsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the snapshots.</p>
     */
    inline const Aws::Vector<Snapshot>& GetSnapshots() const{ return m_snapshots; }

    /**
     * <p>Information about the snapshots.</p>
     */
    inline void SetSnapshots(const Aws::Vector<Snapshot>& value) { m_snapshots = value; }

    /**
     * <p>Information about the snapshots.</p>
     */
    inline void SetSnapshots(Aws::Vector<Snapshot>&& value) { m_snapshots = std::move(value); }

    /**
     * <p>Information about the snapshots.</p>
     */
    inline DescribeSnapshotsResponse& WithSnapshots(const Aws::Vector<Snapshot>& value) { SetSnapshots(value); return *this;}

    /**
     * <p>Information about the snapshots.</p>
     */
    inline DescribeSnapshotsResponse& WithSnapshots(Aws::Vector<Snapshot>&& value) { SetSnapshots(std::move(value)); return *this;}

    /**
     * <p>Information about the snapshots.</p>
     */
    inline DescribeSnapshotsResponse& AddSnapshots(const Snapshot& value) { m_snapshots.push_back(value); return *this; }

    /**
     * <p>Information about the snapshots.</p>
     */
    inline DescribeSnapshotsResponse& AddSnapshots(Snapshot&& value) { m_snapshots.push_back(std::move(value)); return *this; }


    /**
     * <p>The <code>NextToken</code> value to include in a future
     * <code>DescribeSnapshots</code> request. When the results of a
     * <code>DescribeSnapshots</code> request exceed <code>MaxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>NextToken</code> value to include in a future
     * <code>DescribeSnapshots</code> request. When the results of a
     * <code>DescribeSnapshots</code> request exceed <code>MaxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The <code>NextToken</code> value to include in a future
     * <code>DescribeSnapshots</code> request. When the results of a
     * <code>DescribeSnapshots</code> request exceed <code>MaxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The <code>NextToken</code> value to include in a future
     * <code>DescribeSnapshots</code> request. When the results of a
     * <code>DescribeSnapshots</code> request exceed <code>MaxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The <code>NextToken</code> value to include in a future
     * <code>DescribeSnapshots</code> request. When the results of a
     * <code>DescribeSnapshots</code> request exceed <code>MaxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeSnapshotsResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>NextToken</code> value to include in a future
     * <code>DescribeSnapshots</code> request. When the results of a
     * <code>DescribeSnapshots</code> request exceed <code>MaxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeSnapshotsResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>NextToken</code> value to include in a future
     * <code>DescribeSnapshots</code> request. When the results of a
     * <code>DescribeSnapshots</code> request exceed <code>MaxResults</code>, this
     * value can be used to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline DescribeSnapshotsResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline DescribeSnapshotsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DescribeSnapshotsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<Snapshot> m_snapshots;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
