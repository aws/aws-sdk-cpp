/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/cloudformation/model/StackResourceDriftStatus.h>
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
   * <p>Summarizes information about whether the resource's actual configuration
   * differs, or has <i>drifted</i>, from its expected configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/StackResourceDriftInformationSummary">AWS
   * API Reference</a></p>
   */
  class StackResourceDriftInformationSummary
  {
  public:
    AWS_CLOUDFORMATION_API StackResourceDriftInformationSummary() = default;
    AWS_CLOUDFORMATION_API StackResourceDriftInformationSummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API StackResourceDriftInformationSummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Status of the resource's actual configuration compared to its expected
     * configuration.</p> <ul> <li> <p> <code>DELETED</code>: The resource differs from
     * its expected configuration in that it has been deleted.</p> </li> <li> <p>
     * <code>MODIFIED</code>: The resource differs from its expected configuration.</p>
     * </li> <li> <p> <code>NOT_CHECKED</code>: CloudFormation hasn't checked if the
     * resource differs from its expected configuration.</p> <p>Any resources that
     * don't currently support drift detection have a status of
     * <code>NOT_CHECKED</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/resource-import-supported-resources.html">Resource
     * type support for imports and drift detection</a>. If you performed an
     * <a>ContinueUpdateRollback</a> operation on a stack, any resources included in
     * <code>ResourcesToSkip</code> will also have a status of
     * <code>NOT_CHECKED</code>. For more information about skipping resources during
     * rollback operations, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-updating-stacks-continueupdaterollback.html">Continue
     * rolling back an update</a> in the <i>CloudFormation User Guide</i>.</p> </li>
     * <li> <p> <code>IN_SYNC</code>: The resource's actual configuration matches its
     * expected configuration.</p> </li> </ul>
     */
    inline StackResourceDriftStatus GetStackResourceDriftStatus() const { return m_stackResourceDriftStatus; }
    inline bool StackResourceDriftStatusHasBeenSet() const { return m_stackResourceDriftStatusHasBeenSet; }
    inline void SetStackResourceDriftStatus(StackResourceDriftStatus value) { m_stackResourceDriftStatusHasBeenSet = true; m_stackResourceDriftStatus = value; }
    inline StackResourceDriftInformationSummary& WithStackResourceDriftStatus(StackResourceDriftStatus value) { SetStackResourceDriftStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When CloudFormation last checked if the resource had drifted from its
     * expected configuration.</p>
     */
    inline const Aws::Utils::DateTime& GetLastCheckTimestamp() const { return m_lastCheckTimestamp; }
    inline bool LastCheckTimestampHasBeenSet() const { return m_lastCheckTimestampHasBeenSet; }
    template<typename LastCheckTimestampT = Aws::Utils::DateTime>
    void SetLastCheckTimestamp(LastCheckTimestampT&& value) { m_lastCheckTimestampHasBeenSet = true; m_lastCheckTimestamp = std::forward<LastCheckTimestampT>(value); }
    template<typename LastCheckTimestampT = Aws::Utils::DateTime>
    StackResourceDriftInformationSummary& WithLastCheckTimestamp(LastCheckTimestampT&& value) { SetLastCheckTimestamp(std::forward<LastCheckTimestampT>(value)); return *this;}
    ///@}
  private:

    StackResourceDriftStatus m_stackResourceDriftStatus{StackResourceDriftStatus::NOT_SET};
    bool m_stackResourceDriftStatusHasBeenSet = false;

    Aws::Utils::DateTime m_lastCheckTimestamp{};
    bool m_lastCheckTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
