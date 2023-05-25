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
    AWS_EC2_API MonitorInstancesResponse();
    AWS_EC2_API MonitorInstancesResponse(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_EC2_API MonitorInstancesResponse& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    /**
     * <p>The monitoring information.</p>
     */
    inline const Aws::Vector<InstanceMonitoring>& GetInstanceMonitorings() const{ return m_instanceMonitorings; }

    /**
     * <p>The monitoring information.</p>
     */
    inline void SetInstanceMonitorings(const Aws::Vector<InstanceMonitoring>& value) { m_instanceMonitorings = value; }

    /**
     * <p>The monitoring information.</p>
     */
    inline void SetInstanceMonitorings(Aws::Vector<InstanceMonitoring>&& value) { m_instanceMonitorings = std::move(value); }

    /**
     * <p>The monitoring information.</p>
     */
    inline MonitorInstancesResponse& WithInstanceMonitorings(const Aws::Vector<InstanceMonitoring>& value) { SetInstanceMonitorings(value); return *this;}

    /**
     * <p>The monitoring information.</p>
     */
    inline MonitorInstancesResponse& WithInstanceMonitorings(Aws::Vector<InstanceMonitoring>&& value) { SetInstanceMonitorings(std::move(value)); return *this;}

    /**
     * <p>The monitoring information.</p>
     */
    inline MonitorInstancesResponse& AddInstanceMonitorings(const InstanceMonitoring& value) { m_instanceMonitorings.push_back(value); return *this; }

    /**
     * <p>The monitoring information.</p>
     */
    inline MonitorInstancesResponse& AddInstanceMonitorings(InstanceMonitoring&& value) { m_instanceMonitorings.push_back(std::move(value)); return *this; }


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline MonitorInstancesResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline MonitorInstancesResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::Vector<InstanceMonitoring> m_instanceMonitorings;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
