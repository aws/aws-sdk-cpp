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
  class AWS_CLOUDFORMATION_API StackResourceDriftInformationSummary
  {
  public:
    StackResourceDriftInformationSummary();
    StackResourceDriftInformationSummary(const Aws::Utils::Xml::XmlNode& xmlNode);
    StackResourceDriftInformationSummary& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Status of the resource's actual configuration compared to its expected
     * configuration</p> <ul> <li> <p> <code>DELETED</code>: The resource differs from
     * its expected configuration in that it has been deleted.</p> </li> <li> <p>
     * <code>MODIFIED</code>: The resource differs from its expected configuration.</p>
     * </li> <li> <p> <code>NOT_CHECKED</code>: AWS CloudFormation has not checked if
     * the resource differs from its expected configuration.</p> <p>Any resources that
     * do not currently support drift detection have a status of
     * <code>NOT_CHECKED</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-stack-drift-resource-list.html">Resources
     * that Support Drift Detection</a>. If you performed an
     * <a>ContinueUpdateRollback</a> operation on a stack, any resources included in
     * <code>ResourcesToSkip</code> will also have a status of
     * <code>NOT_CHECKED</code>. For more information on skipping resources during
     * rollback operations, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-updating-stacks-continueupdaterollback.html">Continue
     * Rolling Back an Update</a> in the AWS CloudFormation User Guide.</p> </li> <li>
     * <p> <code>IN_SYNC</code>: The resources's actual configuration matches its
     * expected configuration.</p> </li> </ul>
     */
    inline const StackResourceDriftStatus& GetStackResourceDriftStatus() const{ return m_stackResourceDriftStatus; }

    /**
     * <p>Status of the resource's actual configuration compared to its expected
     * configuration</p> <ul> <li> <p> <code>DELETED</code>: The resource differs from
     * its expected configuration in that it has been deleted.</p> </li> <li> <p>
     * <code>MODIFIED</code>: The resource differs from its expected configuration.</p>
     * </li> <li> <p> <code>NOT_CHECKED</code>: AWS CloudFormation has not checked if
     * the resource differs from its expected configuration.</p> <p>Any resources that
     * do not currently support drift detection have a status of
     * <code>NOT_CHECKED</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-stack-drift-resource-list.html">Resources
     * that Support Drift Detection</a>. If you performed an
     * <a>ContinueUpdateRollback</a> operation on a stack, any resources included in
     * <code>ResourcesToSkip</code> will also have a status of
     * <code>NOT_CHECKED</code>. For more information on skipping resources during
     * rollback operations, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-updating-stacks-continueupdaterollback.html">Continue
     * Rolling Back an Update</a> in the AWS CloudFormation User Guide.</p> </li> <li>
     * <p> <code>IN_SYNC</code>: The resources's actual configuration matches its
     * expected configuration.</p> </li> </ul>
     */
    inline bool StackResourceDriftStatusHasBeenSet() const { return m_stackResourceDriftStatusHasBeenSet; }

    /**
     * <p>Status of the resource's actual configuration compared to its expected
     * configuration</p> <ul> <li> <p> <code>DELETED</code>: The resource differs from
     * its expected configuration in that it has been deleted.</p> </li> <li> <p>
     * <code>MODIFIED</code>: The resource differs from its expected configuration.</p>
     * </li> <li> <p> <code>NOT_CHECKED</code>: AWS CloudFormation has not checked if
     * the resource differs from its expected configuration.</p> <p>Any resources that
     * do not currently support drift detection have a status of
     * <code>NOT_CHECKED</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-stack-drift-resource-list.html">Resources
     * that Support Drift Detection</a>. If you performed an
     * <a>ContinueUpdateRollback</a> operation on a stack, any resources included in
     * <code>ResourcesToSkip</code> will also have a status of
     * <code>NOT_CHECKED</code>. For more information on skipping resources during
     * rollback operations, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-updating-stacks-continueupdaterollback.html">Continue
     * Rolling Back an Update</a> in the AWS CloudFormation User Guide.</p> </li> <li>
     * <p> <code>IN_SYNC</code>: The resources's actual configuration matches its
     * expected configuration.</p> </li> </ul>
     */
    inline void SetStackResourceDriftStatus(const StackResourceDriftStatus& value) { m_stackResourceDriftStatusHasBeenSet = true; m_stackResourceDriftStatus = value; }

    /**
     * <p>Status of the resource's actual configuration compared to its expected
     * configuration</p> <ul> <li> <p> <code>DELETED</code>: The resource differs from
     * its expected configuration in that it has been deleted.</p> </li> <li> <p>
     * <code>MODIFIED</code>: The resource differs from its expected configuration.</p>
     * </li> <li> <p> <code>NOT_CHECKED</code>: AWS CloudFormation has not checked if
     * the resource differs from its expected configuration.</p> <p>Any resources that
     * do not currently support drift detection have a status of
     * <code>NOT_CHECKED</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-stack-drift-resource-list.html">Resources
     * that Support Drift Detection</a>. If you performed an
     * <a>ContinueUpdateRollback</a> operation on a stack, any resources included in
     * <code>ResourcesToSkip</code> will also have a status of
     * <code>NOT_CHECKED</code>. For more information on skipping resources during
     * rollback operations, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-updating-stacks-continueupdaterollback.html">Continue
     * Rolling Back an Update</a> in the AWS CloudFormation User Guide.</p> </li> <li>
     * <p> <code>IN_SYNC</code>: The resources's actual configuration matches its
     * expected configuration.</p> </li> </ul>
     */
    inline void SetStackResourceDriftStatus(StackResourceDriftStatus&& value) { m_stackResourceDriftStatusHasBeenSet = true; m_stackResourceDriftStatus = std::move(value); }

    /**
     * <p>Status of the resource's actual configuration compared to its expected
     * configuration</p> <ul> <li> <p> <code>DELETED</code>: The resource differs from
     * its expected configuration in that it has been deleted.</p> </li> <li> <p>
     * <code>MODIFIED</code>: The resource differs from its expected configuration.</p>
     * </li> <li> <p> <code>NOT_CHECKED</code>: AWS CloudFormation has not checked if
     * the resource differs from its expected configuration.</p> <p>Any resources that
     * do not currently support drift detection have a status of
     * <code>NOT_CHECKED</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-stack-drift-resource-list.html">Resources
     * that Support Drift Detection</a>. If you performed an
     * <a>ContinueUpdateRollback</a> operation on a stack, any resources included in
     * <code>ResourcesToSkip</code> will also have a status of
     * <code>NOT_CHECKED</code>. For more information on skipping resources during
     * rollback operations, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-updating-stacks-continueupdaterollback.html">Continue
     * Rolling Back an Update</a> in the AWS CloudFormation User Guide.</p> </li> <li>
     * <p> <code>IN_SYNC</code>: The resources's actual configuration matches its
     * expected configuration.</p> </li> </ul>
     */
    inline StackResourceDriftInformationSummary& WithStackResourceDriftStatus(const StackResourceDriftStatus& value) { SetStackResourceDriftStatus(value); return *this;}

    /**
     * <p>Status of the resource's actual configuration compared to its expected
     * configuration</p> <ul> <li> <p> <code>DELETED</code>: The resource differs from
     * its expected configuration in that it has been deleted.</p> </li> <li> <p>
     * <code>MODIFIED</code>: The resource differs from its expected configuration.</p>
     * </li> <li> <p> <code>NOT_CHECKED</code>: AWS CloudFormation has not checked if
     * the resource differs from its expected configuration.</p> <p>Any resources that
     * do not currently support drift detection have a status of
     * <code>NOT_CHECKED</code>. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-stack-drift-resource-list.html">Resources
     * that Support Drift Detection</a>. If you performed an
     * <a>ContinueUpdateRollback</a> operation on a stack, any resources included in
     * <code>ResourcesToSkip</code> will also have a status of
     * <code>NOT_CHECKED</code>. For more information on skipping resources during
     * rollback operations, see <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-updating-stacks-continueupdaterollback.html">Continue
     * Rolling Back an Update</a> in the AWS CloudFormation User Guide.</p> </li> <li>
     * <p> <code>IN_SYNC</code>: The resources's actual configuration matches its
     * expected configuration.</p> </li> </ul>
     */
    inline StackResourceDriftInformationSummary& WithStackResourceDriftStatus(StackResourceDriftStatus&& value) { SetStackResourceDriftStatus(std::move(value)); return *this;}


    /**
     * <p>When AWS CloudFormation last checked if the resource had drifted from its
     * expected configuration.</p>
     */
    inline const Aws::Utils::DateTime& GetLastCheckTimestamp() const{ return m_lastCheckTimestamp; }

    /**
     * <p>When AWS CloudFormation last checked if the resource had drifted from its
     * expected configuration.</p>
     */
    inline bool LastCheckTimestampHasBeenSet() const { return m_lastCheckTimestampHasBeenSet; }

    /**
     * <p>When AWS CloudFormation last checked if the resource had drifted from its
     * expected configuration.</p>
     */
    inline void SetLastCheckTimestamp(const Aws::Utils::DateTime& value) { m_lastCheckTimestampHasBeenSet = true; m_lastCheckTimestamp = value; }

    /**
     * <p>When AWS CloudFormation last checked if the resource had drifted from its
     * expected configuration.</p>
     */
    inline void SetLastCheckTimestamp(Aws::Utils::DateTime&& value) { m_lastCheckTimestampHasBeenSet = true; m_lastCheckTimestamp = std::move(value); }

    /**
     * <p>When AWS CloudFormation last checked if the resource had drifted from its
     * expected configuration.</p>
     */
    inline StackResourceDriftInformationSummary& WithLastCheckTimestamp(const Aws::Utils::DateTime& value) { SetLastCheckTimestamp(value); return *this;}

    /**
     * <p>When AWS CloudFormation last checked if the resource had drifted from its
     * expected configuration.</p>
     */
    inline StackResourceDriftInformationSummary& WithLastCheckTimestamp(Aws::Utils::DateTime&& value) { SetLastCheckTimestamp(std::move(value)); return *this;}

  private:

    StackResourceDriftStatus m_stackResourceDriftStatus;
    bool m_stackResourceDriftStatusHasBeenSet;

    Aws::Utils::DateTime m_lastCheckTimestamp;
    bool m_lastCheckTimestampHasBeenSet;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
