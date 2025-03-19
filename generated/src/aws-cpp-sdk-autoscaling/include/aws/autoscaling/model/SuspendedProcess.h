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
   * <p>Describes an auto scaling process that has been suspended.</p> <p>For more
   * information, see <a
   * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-suspend-resume-processes.html#process-types">Types
   * of processes</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/SuspendedProcess">AWS
   * API Reference</a></p>
   */
  class SuspendedProcess
  {
  public:
    AWS_AUTOSCALING_API SuspendedProcess() = default;
    AWS_AUTOSCALING_API SuspendedProcess(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API SuspendedProcess& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the suspended process.</p>
     */
    inline const Aws::String& GetProcessName() const { return m_processName; }
    inline bool ProcessNameHasBeenSet() const { return m_processNameHasBeenSet; }
    template<typename ProcessNameT = Aws::String>
    void SetProcessName(ProcessNameT&& value) { m_processNameHasBeenSet = true; m_processName = std::forward<ProcessNameT>(value); }
    template<typename ProcessNameT = Aws::String>
    SuspendedProcess& WithProcessName(ProcessNameT&& value) { SetProcessName(std::forward<ProcessNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason that the process was suspended.</p>
     */
    inline const Aws::String& GetSuspensionReason() const { return m_suspensionReason; }
    inline bool SuspensionReasonHasBeenSet() const { return m_suspensionReasonHasBeenSet; }
    template<typename SuspensionReasonT = Aws::String>
    void SetSuspensionReason(SuspensionReasonT&& value) { m_suspensionReasonHasBeenSet = true; m_suspensionReason = std::forward<SuspensionReasonT>(value); }
    template<typename SuspensionReasonT = Aws::String>
    SuspendedProcess& WithSuspensionReason(SuspensionReasonT&& value) { SetSuspensionReason(std::forward<SuspensionReasonT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_processName;
    bool m_processNameHasBeenSet = false;

    Aws::String m_suspensionReason;
    bool m_suspensionReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
