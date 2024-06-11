﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/LockedSnapshotsInfo.h>
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
  class DescribeLockedSnapshotsResponse
  {
  public:
    AWS_EC2_API DescribeLockedSnapshotsResponse();
    AWS_EC2_API DescribeLockedSnapshotsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeLockedSnapshotsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the snapshots.</p>
     */
    inline const Aws::Vector<LockedSnapshotsInfo>& GetSnapshots() const{ return m_snapshots; }
    inline void SetSnapshots(const Aws::Vector<LockedSnapshotsInfo>& value) { m_snapshots = value; }
    inline void SetSnapshots(Aws::Vector<LockedSnapshotsInfo>&& value) { m_snapshots = std::move(value); }
    inline DescribeLockedSnapshotsResponse& WithSnapshots(const Aws::Vector<LockedSnapshotsInfo>& value) { SetSnapshots(value); return *this;}
    inline DescribeLockedSnapshotsResponse& WithSnapshots(Aws::Vector<LockedSnapshotsInfo>&& value) { SetSnapshots(std::move(value)); return *this;}
    inline DescribeLockedSnapshotsResponse& AddSnapshots(const LockedSnapshotsInfo& value) { m_snapshots.push_back(value); return *this; }
    inline DescribeLockedSnapshotsResponse& AddSnapshots(LockedSnapshotsInfo&& value) { m_snapshots.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to include in another request to get the next page of items. This
     * value is <code>null</code> when there are no more items to return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline DescribeLockedSnapshotsResponse& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeLockedSnapshotsResponse& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeLockedSnapshotsResponse& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DescribeLockedSnapshotsResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DescribeLockedSnapshotsResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<LockedSnapshotsInfo> m_snapshots;

    Aws::String m_nextToken;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
