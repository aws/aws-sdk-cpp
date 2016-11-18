/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/ResponseMetadata.h>
#include <aws/ec2/model/InstanceMonitoring.h>

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
  /**
   * <p>Contains the output of MonitorInstances.</p>
   */
  class AWS_EC2_API MonitorInstancesResponse
  {
  public:
    MonitorInstancesResponse();
    MonitorInstancesResponse(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    MonitorInstancesResponse& operator=(const AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);

    /**
     * <p>Monitoring information for one or more instances.</p>
     */
    inline const Aws::Vector<InstanceMonitoring>& GetInstanceMonitorings() const{ return m_instanceMonitorings; }

    /**
     * <p>Monitoring information for one or more instances.</p>
     */
    inline void SetInstanceMonitorings(const Aws::Vector<InstanceMonitoring>& value) { m_instanceMonitorings = value; }

    /**
     * <p>Monitoring information for one or more instances.</p>
     */
    inline void SetInstanceMonitorings(Aws::Vector<InstanceMonitoring>&& value) { m_instanceMonitorings = value; }

    /**
     * <p>Monitoring information for one or more instances.</p>
     */
    inline MonitorInstancesResponse& WithInstanceMonitorings(const Aws::Vector<InstanceMonitoring>& value) { SetInstanceMonitorings(value); return *this;}

    /**
     * <p>Monitoring information for one or more instances.</p>
     */
    inline MonitorInstancesResponse& WithInstanceMonitorings(Aws::Vector<InstanceMonitoring>&& value) { SetInstanceMonitorings(value); return *this;}

    /**
     * <p>Monitoring information for one or more instances.</p>
     */
    inline MonitorInstancesResponse& AddInstanceMonitorings(const InstanceMonitoring& value) { m_instanceMonitorings.push_back(value); return *this; }

    /**
     * <p>Monitoring information for one or more instances.</p>
     */
    inline MonitorInstancesResponse& AddInstanceMonitorings(InstanceMonitoring&& value) { m_instanceMonitorings.push_back(value); return *this; }

    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = value; }

    
    inline MonitorInstancesResponse& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline MonitorInstancesResponse& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(value); return *this;}

  private:
    Aws::Vector<InstanceMonitoring> m_instanceMonitorings;
    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws