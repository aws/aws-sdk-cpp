/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/cloudformation/model/StackInstanceDetailedStatus.h>
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
   * <p>The detailed status of the stack instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/StackInstanceComprehensiveStatus">AWS
   * API Reference</a></p>
   */
  class StackInstanceComprehensiveStatus
  {
  public:
    AWS_CLOUDFORMATION_API StackInstanceComprehensiveStatus();
    AWS_CLOUDFORMATION_API StackInstanceComprehensiveStatus(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API StackInstanceComprehensiveStatus& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <ul> <li> <p> <code>CANCELLED</code>: The operation in the specified account and
     * Region has been canceled. This is either because a user has stopped the stack
     * set operation, or because the failure tolerance of the stack set operation has
     * been exceeded.</p> </li> <li> <p> <code>FAILED</code>: The operation in the
     * specified account and Region failed. If the stack set operation fails in enough
     * accounts within a Region, the failure tolerance for the stack set operation as a
     * whole might be exceeded.</p> </li> <li> <p> <code>FAILED_IMPORT</code>: The
     * import of the stack instance in the specified account and Region failed and left
     * the stack in an unstable state. Once the issues causing the failure are fixed,
     * the import operation can be retried. If enough stack set operations fail in
     * enough accounts within a Region, the failure tolerance for the stack set
     * operation as a whole might be exceeded.</p> </li> <li> <p>
     * <code>INOPERABLE</code>: A <code>DeleteStackInstances</code> operation has
     * failed and left the stack in an unstable state. Stacks in this state are
     * excluded from further <code>UpdateStackSet</code> operations. You might need to
     * perform a <code>DeleteStackInstances</code> operation, with
     * <code>RetainStacks</code> set to <code>true</code>, to delete the stack
     * instance, and then delete the stack manually.</p> </li> <li> <p>
     * <code>PENDING</code>: The operation in the specified account and Region has yet
     * to start.</p> </li> <li> <p> <code>RUNNING</code>: The operation in the
     * specified account and Region is currently in progress.</p> </li> <li> <p>
     * <code>SKIPPED_SUSPENDED_ACCOUNT</code>: The operation in the specified account
     * and Region has been skipped because the account was suspended at the time of the
     * operation.</p> </li> <li> <p> <code>SUCCEEDED</code>: The operation in the
     * specified account and Region completed successfully.</p> </li> </ul>
     */
    inline const StackInstanceDetailedStatus& GetDetailedStatus() const{ return m_detailedStatus; }
    inline bool DetailedStatusHasBeenSet() const { return m_detailedStatusHasBeenSet; }
    inline void SetDetailedStatus(const StackInstanceDetailedStatus& value) { m_detailedStatusHasBeenSet = true; m_detailedStatus = value; }
    inline void SetDetailedStatus(StackInstanceDetailedStatus&& value) { m_detailedStatusHasBeenSet = true; m_detailedStatus = std::move(value); }
    inline StackInstanceComprehensiveStatus& WithDetailedStatus(const StackInstanceDetailedStatus& value) { SetDetailedStatus(value); return *this;}
    inline StackInstanceComprehensiveStatus& WithDetailedStatus(StackInstanceDetailedStatus&& value) { SetDetailedStatus(std::move(value)); return *this;}
    ///@}
  private:

    StackInstanceDetailedStatus m_detailedStatus;
    bool m_detailedStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
