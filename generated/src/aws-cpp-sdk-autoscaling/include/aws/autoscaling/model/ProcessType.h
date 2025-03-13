/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace AutoScaling
{
namespace Model
{

  /**
   * <p>Describes a process type.</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-suspend-resume-processes.html#process-types">Types
   * of processes</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/ProcessType">AWS
   * API Reference</a></p>
   */
  class ProcessType
  {
  public:
    AWS_AUTOSCALING_API ProcessType() = default;
    AWS_AUTOSCALING_API ProcessType(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API ProcessType& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>One of the following processes:</p> <ul> <li> <p> <code>Launch</code> </p>
     * </li> <li> <p> <code>Terminate</code> </p> </li> <li> <p>
     * <code>AddToLoadBalancer</code> </p> </li> <li> <p>
     * <code>AlarmNotification</code> </p> </li> <li> <p> <code>AZRebalance</code> </p>
     * </li> <li> <p> <code>HealthCheck</code> </p> </li> <li> <p>
     * <code>InstanceRefresh</code> </p> </li> <li> <p> <code>ReplaceUnhealthy</code>
     * </p> </li> <li> <p> <code>ScheduledActions</code> </p> </li> </ul>
     */
    inline const Aws::String& GetProcessName() const { return m_processName; }
    inline bool ProcessNameHasBeenSet() const { return m_processNameHasBeenSet; }
    template<typename ProcessNameT = Aws::String>
    void SetProcessName(ProcessNameT&& value) { m_processNameHasBeenSet = true; m_processName = std::forward<ProcessNameT>(value); }
    template<typename ProcessNameT = Aws::String>
    ProcessType& WithProcessName(ProcessNameT&& value) { SetProcessName(std::forward<ProcessNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_processName;
    bool m_processNameHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
