/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/cloudformation/model/StackDriftStatus.h>
#include <aws/core/utils/DateTime.h>
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
namespace CloudFormation
{
namespace Model
{

  /**
   * <p>Contains information about whether the stack's actual configuration differs,
   * or has <i>drifted</i>, from its expected configuration, as defined in the stack
   * template and any values specified as template parameters. A stack is considered
   * to have drifted if one or more of its resources have drifted.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/StackDriftInformationSummary">AWS
   * API Reference</a></p>
   */
  class StackDriftInformationSummary
  {
  public:
    AWS_CLOUDFORMATION_API StackDriftInformationSummary() = default;
    AWS_CLOUDFORMATION_API StackDriftInformationSummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API StackDriftInformationSummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Status of the stack's actual configuration compared to its expected template
     * configuration.</p> <ul> <li> <p> <code>DRIFTED</code>: The stack differs from
     * its expected template configuration. A stack is considered to have drifted if
     * one or more of its resources have drifted.</p> </li> <li> <p>
     * <code>NOT_CHECKED</code>: CloudFormation hasn't checked if the stack differs
     * from its expected template configuration.</p> </li> <li> <p>
     * <code>IN_SYNC</code>: The stack's actual configuration matches its expected
     * template configuration.</p> </li> <li> <p> <code>UNKNOWN</code>: CloudFormation
     * could not run drift detection for a resource in the stack.</p> </li> </ul>
     */
    inline StackDriftStatus GetStackDriftStatus() const { return m_stackDriftStatus; }
    inline bool StackDriftStatusHasBeenSet() const { return m_stackDriftStatusHasBeenSet; }
    inline void SetStackDriftStatus(StackDriftStatus value) { m_stackDriftStatusHasBeenSet = true; m_stackDriftStatus = value; }
    inline StackDriftInformationSummary& WithStackDriftStatus(StackDriftStatus value) { SetStackDriftStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Most recent time when a drift detection operation was initiated on the stack,
     * or any of its individual resources that support drift detection.</p>
     */
    inline const Aws::Utils::DateTime& GetLastCheckTimestamp() const { return m_lastCheckTimestamp; }
    inline bool LastCheckTimestampHasBeenSet() const { return m_lastCheckTimestampHasBeenSet; }
    template<typename LastCheckTimestampT = Aws::Utils::DateTime>
    void SetLastCheckTimestamp(LastCheckTimestampT&& value) { m_lastCheckTimestampHasBeenSet = true; m_lastCheckTimestamp = std::forward<LastCheckTimestampT>(value); }
    template<typename LastCheckTimestampT = Aws::Utils::DateTime>
    StackDriftInformationSummary& WithLastCheckTimestamp(LastCheckTimestampT&& value) { SetLastCheckTimestamp(std::forward<LastCheckTimestampT>(value)); return *this;}
    ///@}
  private:

    StackDriftStatus m_stackDriftStatus{StackDriftStatus::NOT_SET};
    bool m_stackDriftStatusHasBeenSet = false;

    Aws::Utils::DateTime m_lastCheckTimestamp{};
    bool m_lastCheckTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
