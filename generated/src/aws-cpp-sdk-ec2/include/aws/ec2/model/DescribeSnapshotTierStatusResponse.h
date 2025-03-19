/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/SnapshotTierStatus.h>
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
  class DescribeSnapshotTierStatusResponse
  {
  public:
    AWS_EC2_API DescribeSnapshotTierStatusResponse() = default;
    AWS_EC2_API DescribeSnapshotTierStatusResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeSnapshotTierStatusResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the snapshot's storage tier.</p>
     */
    inline const Aws::Vector<SnapshotTierStatus>& GetSnapshotTierStatuses() const { return m_snapshotTierStatuses; }
    template<typename SnapshotTierStatusesT = Aws::Vector<SnapshotTierStatus>>
    void SetSnapshotTierStatuses(SnapshotTierStatusesT&& value) { m_snapshotTierStatusesHasBeenSet = true; m_snapshotTierStatuses = std::forward<SnapshotTierStatusesT>(value); }
    template<typename SnapshotTierStatusesT = Aws::Vector<SnapshotTierStatus>>
    DescribeSnapshotTierStatusResponse& WithSnapshotTierStatuses(SnapshotTierStatusesT&& value) { SetSnapshotTierStatuses(std::forward<SnapshotTierStatusesT>(value)); return *this;}
    template<typename SnapshotTierStatusesT = SnapshotTierStatus>
    DescribeSnapshotTierStatusResponse& AddSnapshotTierStatuses(SnapshotTierStatusesT&& value) { m_snapshotTierStatusesHasBeenSet = true; m_snapshotTierStatuses.emplace_back(std::forward<SnapshotTierStatusesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to include in another request to get the next page of items. This
     * value is <code>null</code> when there are no more items to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeSnapshotTierStatusResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeSnapshotTierStatusResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<SnapshotTierStatus> m_snapshotTierStatuses;
    bool m_snapshotTierStatusesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
