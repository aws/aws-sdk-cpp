/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/Monitoring.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes the monitoring of an instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/InstanceMonitoring">AWS
   * API Reference</a></p>
   */
  class InstanceMonitoring
  {
  public:
    AWS_EC2_API InstanceMonitoring() = default;
    AWS_EC2_API InstanceMonitoring(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API InstanceMonitoring& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    InstanceMonitoring& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The monitoring for the instance.</p>
     */
    inline const Monitoring& GetMonitoring() const { return m_monitoring; }
    inline bool MonitoringHasBeenSet() const { return m_monitoringHasBeenSet; }
    template<typename MonitoringT = Monitoring>
    void SetMonitoring(MonitoringT&& value) { m_monitoringHasBeenSet = true; m_monitoring = std::forward<MonitoringT>(value); }
    template<typename MonitoringT = Monitoring>
    InstanceMonitoring& WithMonitoring(MonitoringT&& value) { SetMonitoring(std::forward<MonitoringT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Monitoring m_monitoring;
    bool m_monitoringHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
