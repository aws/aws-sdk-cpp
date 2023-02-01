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
   * href="https://docs.aws.amazon.com/autoscaling/ec2/userguide/as-suspend-resume-processes.html#process-types">Scaling
   * processes</a> in the <i>Amazon EC2 Auto Scaling User Guide</i>.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/SuspendedProcess">AWS
   * API Reference</a></p>
   */
  class SuspendedProcess
  {
  public:
    AWS_AUTOSCALING_API SuspendedProcess();
    AWS_AUTOSCALING_API SuspendedProcess(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API SuspendedProcess& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the suspended process.</p>
     */
    inline const Aws::String& GetProcessName() const{ return m_processName; }

    /**
     * <p>The name of the suspended process.</p>
     */
    inline bool ProcessNameHasBeenSet() const { return m_processNameHasBeenSet; }

    /**
     * <p>The name of the suspended process.</p>
     */
    inline void SetProcessName(const Aws::String& value) { m_processNameHasBeenSet = true; m_processName = value; }

    /**
     * <p>The name of the suspended process.</p>
     */
    inline void SetProcessName(Aws::String&& value) { m_processNameHasBeenSet = true; m_processName = std::move(value); }

    /**
     * <p>The name of the suspended process.</p>
     */
    inline void SetProcessName(const char* value) { m_processNameHasBeenSet = true; m_processName.assign(value); }

    /**
     * <p>The name of the suspended process.</p>
     */
    inline SuspendedProcess& WithProcessName(const Aws::String& value) { SetProcessName(value); return *this;}

    /**
     * <p>The name of the suspended process.</p>
     */
    inline SuspendedProcess& WithProcessName(Aws::String&& value) { SetProcessName(std::move(value)); return *this;}

    /**
     * <p>The name of the suspended process.</p>
     */
    inline SuspendedProcess& WithProcessName(const char* value) { SetProcessName(value); return *this;}


    /**
     * <p>The reason that the process was suspended.</p>
     */
    inline const Aws::String& GetSuspensionReason() const{ return m_suspensionReason; }

    /**
     * <p>The reason that the process was suspended.</p>
     */
    inline bool SuspensionReasonHasBeenSet() const { return m_suspensionReasonHasBeenSet; }

    /**
     * <p>The reason that the process was suspended.</p>
     */
    inline void SetSuspensionReason(const Aws::String& value) { m_suspensionReasonHasBeenSet = true; m_suspensionReason = value; }

    /**
     * <p>The reason that the process was suspended.</p>
     */
    inline void SetSuspensionReason(Aws::String&& value) { m_suspensionReasonHasBeenSet = true; m_suspensionReason = std::move(value); }

    /**
     * <p>The reason that the process was suspended.</p>
     */
    inline void SetSuspensionReason(const char* value) { m_suspensionReasonHasBeenSet = true; m_suspensionReason.assign(value); }

    /**
     * <p>The reason that the process was suspended.</p>
     */
    inline SuspendedProcess& WithSuspensionReason(const Aws::String& value) { SetSuspensionReason(value); return *this;}

    /**
     * <p>The reason that the process was suspended.</p>
     */
    inline SuspendedProcess& WithSuspensionReason(Aws::String&& value) { SetSuspensionReason(std::move(value)); return *this;}

    /**
     * <p>The reason that the process was suspended.</p>
     */
    inline SuspendedProcess& WithSuspensionReason(const char* value) { SetSuspensionReason(value); return *this;}

  private:

    Aws::String m_processName;
    bool m_processNameHasBeenSet = false;

    Aws::String m_suspensionReason;
    bool m_suspensionReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
