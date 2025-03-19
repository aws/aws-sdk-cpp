/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ResponseMetadata.h>
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
  class DeleteTrafficMirrorTargetResponse
  {
  public:
    AWS_EC2_API DeleteTrafficMirrorTargetResponse() = default;
    AWS_EC2_API DeleteTrafficMirrorTargetResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API DeleteTrafficMirrorTargetResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The ID of the deleted Traffic Mirror target.</p>
     */
    inline const Aws::String& GetTrafficMirrorTargetId() const { return m_trafficMirrorTargetId; }
    template<typename TrafficMirrorTargetIdT = Aws::String>
    void SetTrafficMirrorTargetId(TrafficMirrorTargetIdT&& value) { m_trafficMirrorTargetIdHasBeenSet = true; m_trafficMirrorTargetId = std::forward<TrafficMirrorTargetIdT>(value); }
    template<typename TrafficMirrorTargetIdT = Aws::String>
    DeleteTrafficMirrorTargetResponse& WithTrafficMirrorTargetId(TrafficMirrorTargetIdT&& value) { SetTrafficMirrorTargetId(std::forward<TrafficMirrorTargetIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DeleteTrafficMirrorTargetResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_trafficMirrorTargetId;
    bool m_trafficMirrorTargetIdHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
