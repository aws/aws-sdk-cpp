/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/VolumeStatusItem.h>
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
  class DescribeVolumeStatusResponse
  {
  public:
    AWS_EC2_API DescribeVolumeStatusResponse() = default;
    AWS_EC2_API DescribeVolumeStatusResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeVolumeStatusResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The token to include in another request to get the next page of items. This
     * value is <code>null</code> when there are no more items to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeVolumeStatusResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the status of the volumes.</p>
     */
    inline const Aws::Vector<VolumeStatusItem>& GetVolumeStatuses() const { return m_volumeStatuses; }
    template<typename VolumeStatusesT = Aws::Vector<VolumeStatusItem>>
    void SetVolumeStatuses(VolumeStatusesT&& value) { m_volumeStatusesHasBeenSet = true; m_volumeStatuses = std::forward<VolumeStatusesT>(value); }
    template<typename VolumeStatusesT = Aws::Vector<VolumeStatusItem>>
    DescribeVolumeStatusResponse& WithVolumeStatuses(VolumeStatusesT&& value) { SetVolumeStatuses(std::forward<VolumeStatusesT>(value)); return *this;}
    template<typename VolumeStatusesT = VolumeStatusItem>
    DescribeVolumeStatusResponse& AddVolumeStatuses(VolumeStatusesT&& value) { m_volumeStatusesHasBeenSet = true; m_volumeStatuses.emplace_back(std::forward<VolumeStatusesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeVolumeStatusResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<VolumeStatusItem> m_volumeStatuses;
    bool m_volumeStatusesHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
