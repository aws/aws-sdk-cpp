/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/model/TrafficMirrorFilter.h>
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
  class ModifyTrafficMirrorFilterNetworkServicesResponse
  {
  public:
    AWS_EC2_API ModifyTrafficMirrorFilterNetworkServicesResponse() = default;
    AWS_EC2_API ModifyTrafficMirrorFilterNetworkServicesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API ModifyTrafficMirrorFilterNetworkServicesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The Traffic Mirror filter that the network service is associated with.</p>
     */
    inline const TrafficMirrorFilter& GetTrafficMirrorFilter() const { return m_trafficMirrorFilter; }
    template<typename TrafficMirrorFilterT = TrafficMirrorFilter>
    void SetTrafficMirrorFilter(TrafficMirrorFilterT&& value) { m_trafficMirrorFilterHasBeenSet = true; m_trafficMirrorFilter = std::forward<TrafficMirrorFilterT>(value); }
    template<typename TrafficMirrorFilterT = TrafficMirrorFilter>
    ModifyTrafficMirrorFilterNetworkServicesResponse& WithTrafficMirrorFilter(TrafficMirrorFilterT&& value) { SetTrafficMirrorFilter(std::forward<TrafficMirrorFilterT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    ModifyTrafficMirrorFilterNetworkServicesResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    TrafficMirrorFilter m_trafficMirrorFilter;
    bool m_trafficMirrorFilterHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
