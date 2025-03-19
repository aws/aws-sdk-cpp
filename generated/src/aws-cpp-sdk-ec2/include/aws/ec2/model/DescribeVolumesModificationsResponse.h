/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/VolumeModification.h>
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
  class DescribeVolumesModificationsResponse
  {
  public:
    AWS_EC2_API DescribeVolumesModificationsResponse() = default;
    AWS_EC2_API DescribeVolumesModificationsResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DescribeVolumesModificationsResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The token to include in another request to get the next page of items. This
     * value is <code>null</code> when there are no more items to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeVolumesModificationsResponse& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the volume modifications.</p>
     */
    inline const Aws::Vector<VolumeModification>& GetVolumesModifications() const { return m_volumesModifications; }
    template<typename VolumesModificationsT = Aws::Vector<VolumeModification>>
    void SetVolumesModifications(VolumesModificationsT&& value) { m_volumesModificationsHasBeenSet = true; m_volumesModifications = std::forward<VolumesModificationsT>(value); }
    template<typename VolumesModificationsT = Aws::Vector<VolumeModification>>
    DescribeVolumesModificationsResponse& WithVolumesModifications(VolumesModificationsT&& value) { SetVolumesModifications(std::forward<VolumesModificationsT>(value)); return *this;}
    template<typename VolumesModificationsT = VolumeModification>
    DescribeVolumesModificationsResponse& AddVolumesModifications(VolumesModificationsT&& value) { m_volumesModificationsHasBeenSet = true; m_volumesModifications.emplace_back(std::forward<VolumesModificationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DescribeVolumesModificationsResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<VolumeModification> m_volumesModifications;
    bool m_volumesModificationsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
