/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
   * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-suspend-resume-processes.html#process-types">Scaling
   * Processes</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/ProcessType">AWS
   * API Reference</a></p>
   */
  class AWS_AUTOSCALING_API ProcessType
  {
  public:
    ProcessType();
    ProcessType(const Aws::Utils::Xml::XmlNode& xmlNode);
    ProcessType& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>One of the following processes:</p> <ul> <li> <p> <code>Launch</code> </p>
     * </li> <li> <p> <code>Terminate</code> </p> </li> <li> <p>
     * <code>AddToLoadBalancer</code> </p> </li> <li> <p>
     * <code>AlarmNotification</code> </p> </li> <li> <p> <code>AZRebalance</code> </p>
     * </li> <li> <p> <code>HealthCheck</code> </p> </li> <li> <p>
     * <code>ReplaceUnhealthy</code> </p> </li> <li> <p> <code>ScheduledActions</code>
     * </p> </li> </ul>
     */
    inline const Aws::String& GetProcessName() const{ return m_processName; }

    /**
     * <p>One of the following processes:</p> <ul> <li> <p> <code>Launch</code> </p>
     * </li> <li> <p> <code>Terminate</code> </p> </li> <li> <p>
     * <code>AddToLoadBalancer</code> </p> </li> <li> <p>
     * <code>AlarmNotification</code> </p> </li> <li> <p> <code>AZRebalance</code> </p>
     * </li> <li> <p> <code>HealthCheck</code> </p> </li> <li> <p>
     * <code>ReplaceUnhealthy</code> </p> </li> <li> <p> <code>ScheduledActions</code>
     * </p> </li> </ul>
     */
    inline bool ProcessNameHasBeenSet() const { return m_processNameHasBeenSet; }

    /**
     * <p>One of the following processes:</p> <ul> <li> <p> <code>Launch</code> </p>
     * </li> <li> <p> <code>Terminate</code> </p> </li> <li> <p>
     * <code>AddToLoadBalancer</code> </p> </li> <li> <p>
     * <code>AlarmNotification</code> </p> </li> <li> <p> <code>AZRebalance</code> </p>
     * </li> <li> <p> <code>HealthCheck</code> </p> </li> <li> <p>
     * <code>ReplaceUnhealthy</code> </p> </li> <li> <p> <code>ScheduledActions</code>
     * </p> </li> </ul>
     */
    inline void SetProcessName(const Aws::String& value) { m_processNameHasBeenSet = true; m_processName = value; }

    /**
     * <p>One of the following processes:</p> <ul> <li> <p> <code>Launch</code> </p>
     * </li> <li> <p> <code>Terminate</code> </p> </li> <li> <p>
     * <code>AddToLoadBalancer</code> </p> </li> <li> <p>
     * <code>AlarmNotification</code> </p> </li> <li> <p> <code>AZRebalance</code> </p>
     * </li> <li> <p> <code>HealthCheck</code> </p> </li> <li> <p>
     * <code>ReplaceUnhealthy</code> </p> </li> <li> <p> <code>ScheduledActions</code>
     * </p> </li> </ul>
     */
    inline void SetProcessName(Aws::String&& value) { m_processNameHasBeenSet = true; m_processName = std::move(value); }

    /**
     * <p>One of the following processes:</p> <ul> <li> <p> <code>Launch</code> </p>
     * </li> <li> <p> <code>Terminate</code> </p> </li> <li> <p>
     * <code>AddToLoadBalancer</code> </p> </li> <li> <p>
     * <code>AlarmNotification</code> </p> </li> <li> <p> <code>AZRebalance</code> </p>
     * </li> <li> <p> <code>HealthCheck</code> </p> </li> <li> <p>
     * <code>ReplaceUnhealthy</code> </p> </li> <li> <p> <code>ScheduledActions</code>
     * </p> </li> </ul>
     */
    inline void SetProcessName(const char* value) { m_processNameHasBeenSet = true; m_processName.assign(value); }

    /**
     * <p>One of the following processes:</p> <ul> <li> <p> <code>Launch</code> </p>
     * </li> <li> <p> <code>Terminate</code> </p> </li> <li> <p>
     * <code>AddToLoadBalancer</code> </p> </li> <li> <p>
     * <code>AlarmNotification</code> </p> </li> <li> <p> <code>AZRebalance</code> </p>
     * </li> <li> <p> <code>HealthCheck</code> </p> </li> <li> <p>
     * <code>ReplaceUnhealthy</code> </p> </li> <li> <p> <code>ScheduledActions</code>
     * </p> </li> </ul>
     */
    inline ProcessType& WithProcessName(const Aws::String& value) { SetProcessName(value); return *this;}

    /**
     * <p>One of the following processes:</p> <ul> <li> <p> <code>Launch</code> </p>
     * </li> <li> <p> <code>Terminate</code> </p> </li> <li> <p>
     * <code>AddToLoadBalancer</code> </p> </li> <li> <p>
     * <code>AlarmNotification</code> </p> </li> <li> <p> <code>AZRebalance</code> </p>
     * </li> <li> <p> <code>HealthCheck</code> </p> </li> <li> <p>
     * <code>ReplaceUnhealthy</code> </p> </li> <li> <p> <code>ScheduledActions</code>
     * </p> </li> </ul>
     */
    inline ProcessType& WithProcessName(Aws::String&& value) { SetProcessName(std::move(value)); return *this;}

    /**
     * <p>One of the following processes:</p> <ul> <li> <p> <code>Launch</code> </p>
     * </li> <li> <p> <code>Terminate</code> </p> </li> <li> <p>
     * <code>AddToLoadBalancer</code> </p> </li> <li> <p>
     * <code>AlarmNotification</code> </p> </li> <li> <p> <code>AZRebalance</code> </p>
     * </li> <li> <p> <code>HealthCheck</code> </p> </li> <li> <p>
     * <code>ReplaceUnhealthy</code> </p> </li> <li> <p> <code>ScheduledActions</code>
     * </p> </li> </ul>
     */
    inline ProcessType& WithProcessName(const char* value) { SetProcessName(value); return *this;}

  private:

    Aws::String m_processName;
    bool m_processNameHasBeenSet;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
