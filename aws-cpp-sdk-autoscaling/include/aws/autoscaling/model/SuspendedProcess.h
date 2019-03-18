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
   * <p>Describes an automatic scaling process that has been suspended. For more
   * information, see <a>ProcessType</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/SuspendedProcess">AWS
   * API Reference</a></p>
   */
  class AWS_AUTOSCALING_API SuspendedProcess
  {
  public:
    SuspendedProcess();
    SuspendedProcess(const Aws::Utils::Xml::XmlNode& xmlNode);
    SuspendedProcess& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


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
    bool m_processNameHasBeenSet;

    Aws::String m_suspensionReason;
    bool m_suspensionReasonHasBeenSet;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
