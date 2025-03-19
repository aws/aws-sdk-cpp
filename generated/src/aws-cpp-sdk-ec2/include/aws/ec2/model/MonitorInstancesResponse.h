/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/InstanceMonitoring.h>
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
  class MonitorInstancesResponse
  {
  public:
    AWS_EC2_API MonitorInstancesResponse() = default;
    AWS_EC2_API MonitorInstancesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API MonitorInstancesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The monitoring information.</p>
     */
    inline const Aws::Vector<InstanceMonitoring>& GetInstanceMonitorings() const { return m_instanceMonitorings; }
    template<typename InstanceMonitoringsT = Aws::Vector<InstanceMonitoring>>
    void SetInstanceMonitorings(InstanceMonitoringsT&& value) { m_instanceMonitoringsHasBeenSet = true; m_instanceMonitorings = std::forward<InstanceMonitoringsT>(value); }
    template<typename InstanceMonitoringsT = Aws::Vector<InstanceMonitoring>>
    MonitorInstancesResponse& WithInstanceMonitorings(InstanceMonitoringsT&& value) { SetInstanceMonitorings(std::forward<InstanceMonitoringsT>(value)); return *this;}
    template<typename InstanceMonitoringsT = InstanceMonitoring>
    MonitorInstancesResponse& AddInstanceMonitorings(InstanceMonitoringsT&& value) { m_instanceMonitoringsHasBeenSet = true; m_instanceMonitorings.emplace_back(std::forward<InstanceMonitoringsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    MonitorInstancesResponse& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<InstanceMonitoring> m_instanceMonitorings;
    bool m_instanceMonitoringsHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
