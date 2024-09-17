/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cloudformation/CloudFormation_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>

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
   * <p>Detailed information about the StackSet operation.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/StackSetOperationStatusDetails">AWS
   * API Reference</a></p>
   */
  class StackSetOperationStatusDetails
  {
  public:
    AWS_CLOUDFORMATION_API StackSetOperationStatusDetails();
    AWS_CLOUDFORMATION_API StackSetOperationStatusDetails(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDFORMATION_API StackSetOperationStatusDetails& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDFORMATION_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The number of stack instances for which the StackSet operation failed.</p>
     */
    inline int GetFailedStackInstancesCount() const{ return m_failedStackInstancesCount; }
    inline bool FailedStackInstancesCountHasBeenSet() const { return m_failedStackInstancesCountHasBeenSet; }
    inline void SetFailedStackInstancesCount(int value) { m_failedStackInstancesCountHasBeenSet = true; m_failedStackInstancesCount = value; }
    inline StackSetOperationStatusDetails& WithFailedStackInstancesCount(int value) { SetFailedStackInstancesCount(value); return *this;}
    ///@}
  private:

    int m_failedStackInstancesCount;
    bool m_failedStackInstancesCountHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
