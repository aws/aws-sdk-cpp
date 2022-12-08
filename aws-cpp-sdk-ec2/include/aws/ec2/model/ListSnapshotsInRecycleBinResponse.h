/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/SnapshotRecycleBinInfo.h>
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
  class ListSnapshotsInRecycleBinResponse
  {
  public:
    AWS_EC2_API ListSnapshotsInRecycleBinResponse();
    AWS_EC2_API ListSnapshotsInRecycleBinResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API ListSnapshotsInRecycleBinResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>Information about the snapshots.</p>
     */
    inline const Aws::Vector<SnapshotRecycleBinInfo>& GetSnapshots() const{ return m_snapshots; }

    /**
     * <p>Information about the snapshots.</p>
     */
    inline void SetSnapshots(const Aws::Vector<SnapshotRecycleBinInfo>& value) { m_snapshots = value; }

    /**
     * <p>Information about the snapshots.</p>
     */
    inline void SetSnapshots(Aws::Vector<SnapshotRecycleBinInfo>&& value) { m_snapshots = std::move(value); }

    /**
     * <p>Information about the snapshots.</p>
     */
    inline ListSnapshotsInRecycleBinResponse& WithSnapshots(const Aws::Vector<SnapshotRecycleBinInfo>& value) { SetSnapshots(value); return *this;}

    /**
     * <p>Information about the snapshots.</p>
     */
    inline ListSnapshotsInRecycleBinResponse& WithSnapshots(Aws::Vector<SnapshotRecycleBinInfo>&& value) { SetSnapshots(std::move(value)); return *this;}

    /**
     * <p>Information about the snapshots.</p>
     */
    inline ListSnapshotsInRecycleBinResponse& AddSnapshots(const SnapshotRecycleBinInfo& value) { m_snapshots.push_back(value); return *this; }

    /**
     * <p>Information about the snapshots.</p>
     */
    inline ListSnapshotsInRecycleBinResponse& AddSnapshots(SnapshotRecycleBinInfo&& value) { m_snapshots.push_back(std::move(value)); return *this; }


    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline ListSnapshotsInRecycleBinResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline ListSnapshotsInRecycleBinResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results. This value is
     * <code>null</code> when there are no more results to return.</p>
     */
    inline ListSnapshotsInRecycleBinResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline ListSnapshotsInRecycleBinResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline ListSnapshotsInRecycleBinResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<SnapshotRecycleBinInfo> m_snapshots;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
