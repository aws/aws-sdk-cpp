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
   * <p>Contains information about whether the resource's actual configuration
   * differs, or has <i>drifted</i>, from its expected configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/StackResourceDriftInformation">AWS
   * API Reference</a></p>
   */
  class StackResourceDriftInformation
  {
  public:
    AWS_CLOUDFORMATION_API StackResourceDriftInformation();
    AWS_CLOUDFORMATION_API StackResourceDriftInformation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API StackResourceDriftInformation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Status of the resource's actual configuration compared to its expected
     * configuration</p> <ul> <li> <p> <code>DELETED</code>: The resource differs from
     * its expected configuration in that it has been deleted.</p> </li> <li> <p>
     * <code>MODIFIED</code>: The resource differs from its expected configuration.</p>
     * </li> <li> <p> <code>NOT_CHECKED</code>: CloudFormation has not checked if the
     * resource differs from its expected configuration.</p> <p>Any resources that do
     * not currently support drift detection have a status of <code>NOT_CHECKED</code>.
     * For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/resource-import-supported-resources.html">Resource
     * type support for imports and drift detection</a>.</p> </li> <li> <p>
     * <code>IN_SYNC</code>: The resource's actual configuration matches its expected
     * configuration.</p> </li> </ul>
     */
    inline const StackResourceDriftStatus& GetStackResourceDriftStatus() const{ return m_stackResourceDriftStatus; }
    inline bool StackResourceDriftStatusHasBeenSet() const { return m_stackResourceDriftStatusHasBeenSet; }
    inline void SetStackResourceDriftStatus(const StackResourceDriftStatus& value) { m_stackResourceDriftStatusHasBeenSet = true; m_stackResourceDriftStatus = value; }
    inline void SetStackResourceDriftStatus(StackResourceDriftStatus&& value) { m_stackResourceDriftStatusHasBeenSet = true; m_stackResourceDriftStatus = std::move(value); }
    inline StackResourceDriftInformation& WithStackResourceDriftStatus(const StackResourceDriftStatus& value) { SetStackResourceDriftStatus(value); return *this;}
    inline StackResourceDriftInformation& WithStackResourceDriftStatus(StackResourceDriftStatus&& value) { SetStackResourceDriftStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When CloudFormation last checked if the resource had drifted from its
     * expected configuration.</p>
     */
    inline const Aws::Utils::DateTime& GetLastCheckTimestamp() const{ return m_lastCheckTimestamp; }
    inline bool LastCheckTimestampHasBeenSet() const { return m_lastCheckTimestampHasBeenSet; }
    inline void SetLastCheckTimestamp(const Aws::Utils::DateTime& value) { m_lastCheckTimestampHasBeenSet = true; m_lastCheckTimestamp = value; }
    inline void SetLastCheckTimestamp(Aws::Utils::DateTime&& value) { m_lastCheckTimestampHasBeenSet = true; m_lastCheckTimestamp = std::move(value); }
    inline StackResourceDriftInformation& WithLastCheckTimestamp(const Aws::Utils::DateTime& value) { SetLastCheckTimestamp(value); return *this;}
    inline StackResourceDriftInformation& WithLastCheckTimestamp(Aws::Utils::DateTime&& value) { SetLastCheckTimestamp(std::move(value)); return *this;}
    ///@}
  private:

    StackResourceDriftStatus m_stackResourceDriftStatus;
    bool m_stackResourceDriftStatusHasBeenSet = false;

    Aws::Utils::DateTime m_lastCheckTimestamp;
    bool m_lastCheckTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
