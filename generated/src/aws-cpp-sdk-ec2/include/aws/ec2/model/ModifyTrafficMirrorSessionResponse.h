/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/TrafficMirrorSession.h>
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
  class ModifyTrafficMirrorSessionResponse
  {
  public:
    AWS_EC2_API ModifyTrafficMirrorSessionResponse() = default;
    AWS_EC2_API ModifyTrafficMirrorSessionResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API ModifyTrafficMirrorSessionResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>Information about the Traffic Mirror session.</p>
     */
    inline const TrafficMirrorSession& GetTrafficMirrorSession() const { return m_trafficMirrorSession; }
    template<typename TrafficMirrorSessionT = TrafficMirrorSession>
    void SetTrafficMirrorSession(TrafficMirrorSessionT&& value) { m_trafficMirrorSessionHasBeenSet = true; m_trafficMirrorSession = std::forward<TrafficMirrorSessionT>(value); }
    template<typename TrafficMirrorSessionT = TrafficMirrorSession>
    ModifyTrafficMirrorSessionResponse& WithTrafficMirrorSession(TrafficMirrorSessionT&& value) { SetTrafficMirrorSession(std::forward<TrafficMirrorSessionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ModifyTrafficMirrorSessionResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    TrafficMirrorSession m_trafficMirrorSession;
    bool m_trafficMirrorSessionHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
