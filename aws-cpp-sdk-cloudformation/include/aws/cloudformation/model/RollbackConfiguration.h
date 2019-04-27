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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/cloudformation/model/RollbackTrigger.h>
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
   * <p>Structure containing the rollback triggers for AWS CloudFormation to monitor
   * during stack creation and updating operations, and for the specified monitoring
   * period afterwards.</p> <p>Rollback triggers enable you to have AWS
   * CloudFormation monitor the state of your application during stack creation and
   * updating, and to roll back that operation if the application breaches the
   * threshold of any of the alarms you've specified. For more information, see <a
   * href="http://docs.aws.amazon.com/AWSCloudFormation/latest/UserGuide/using-cfn-rollback-triggers.html">Monitor
   * and Roll Back Stack Operations</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudformation-2010-05-15/RollbackConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDFORMATION_API RollbackConfiguration
  {
  public:
    RollbackConfiguration();
    RollbackConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    RollbackConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The triggers to monitor during stack creation or update actions. </p> <p>By
     * default, AWS CloudFormation saves the rollback triggers specified for a stack
     * and applies them to any subsequent update operations for the stack, unless you
     * specify otherwise. If you do specify rollback triggers for this parameter, those
     * triggers replace any list of triggers previously specified for the stack. This
     * means:</p> <ul> <li> <p>To use the rollback triggers previously specified for
     * this stack, if any, don't specify this parameter.</p> </li> <li> <p>To specify
     * new or updated rollback triggers, you must specify <i>all</i> the triggers that
     * you want used for this stack, even triggers you've specifed before (for example,
     * when creating the stack or during a previous stack update). Any triggers that
     * you don't include in the updated list of triggers are no longer applied to the
     * stack.</p> </li> <li> <p>To remove all currently specified triggers, specify an
     * empty list for this parameter.</p> </li> </ul> <p>If a specified trigger is
     * missing, the entire stack operation fails and is rolled back. </p>
     */
    inline const Aws::Vector<RollbackTrigger>& GetRollbackTriggers() const{ return m_rollbackTriggers; }

    /**
     * <p>The triggers to monitor during stack creation or update actions. </p> <p>By
     * default, AWS CloudFormation saves the rollback triggers specified for a stack
     * and applies them to any subsequent update operations for the stack, unless you
     * specify otherwise. If you do specify rollback triggers for this parameter, those
     * triggers replace any list of triggers previously specified for the stack. This
     * means:</p> <ul> <li> <p>To use the rollback triggers previously specified for
     * this stack, if any, don't specify this parameter.</p> </li> <li> <p>To specify
     * new or updated rollback triggers, you must specify <i>all</i> the triggers that
     * you want used for this stack, even triggers you've specifed before (for example,
     * when creating the stack or during a previous stack update). Any triggers that
     * you don't include in the updated list of triggers are no longer applied to the
     * stack.</p> </li> <li> <p>To remove all currently specified triggers, specify an
     * empty list for this parameter.</p> </li> </ul> <p>If a specified trigger is
     * missing, the entire stack operation fails and is rolled back. </p>
     */
    inline bool RollbackTriggersHasBeenSet() const { return m_rollbackTriggersHasBeenSet; }

    /**
     * <p>The triggers to monitor during stack creation or update actions. </p> <p>By
     * default, AWS CloudFormation saves the rollback triggers specified for a stack
     * and applies them to any subsequent update operations for the stack, unless you
     * specify otherwise. If you do specify rollback triggers for this parameter, those
     * triggers replace any list of triggers previously specified for the stack. This
     * means:</p> <ul> <li> <p>To use the rollback triggers previously specified for
     * this stack, if any, don't specify this parameter.</p> </li> <li> <p>To specify
     * new or updated rollback triggers, you must specify <i>all</i> the triggers that
     * you want used for this stack, even triggers you've specifed before (for example,
     * when creating the stack or during a previous stack update). Any triggers that
     * you don't include in the updated list of triggers are no longer applied to the
     * stack.</p> </li> <li> <p>To remove all currently specified triggers, specify an
     * empty list for this parameter.</p> </li> </ul> <p>If a specified trigger is
     * missing, the entire stack operation fails and is rolled back. </p>
     */
    inline void SetRollbackTriggers(const Aws::Vector<RollbackTrigger>& value) { m_rollbackTriggersHasBeenSet = true; m_rollbackTriggers = value; }

    /**
     * <p>The triggers to monitor during stack creation or update actions. </p> <p>By
     * default, AWS CloudFormation saves the rollback triggers specified for a stack
     * and applies them to any subsequent update operations for the stack, unless you
     * specify otherwise. If you do specify rollback triggers for this parameter, those
     * triggers replace any list of triggers previously specified for the stack. This
     * means:</p> <ul> <li> <p>To use the rollback triggers previously specified for
     * this stack, if any, don't specify this parameter.</p> </li> <li> <p>To specify
     * new or updated rollback triggers, you must specify <i>all</i> the triggers that
     * you want used for this stack, even triggers you've specifed before (for example,
     * when creating the stack or during a previous stack update). Any triggers that
     * you don't include in the updated list of triggers are no longer applied to the
     * stack.</p> </li> <li> <p>To remove all currently specified triggers, specify an
     * empty list for this parameter.</p> </li> </ul> <p>If a specified trigger is
     * missing, the entire stack operation fails and is rolled back. </p>
     */
    inline void SetRollbackTriggers(Aws::Vector<RollbackTrigger>&& value) { m_rollbackTriggersHasBeenSet = true; m_rollbackTriggers = std::move(value); }

    /**
     * <p>The triggers to monitor during stack creation or update actions. </p> <p>By
     * default, AWS CloudFormation saves the rollback triggers specified for a stack
     * and applies them to any subsequent update operations for the stack, unless you
     * specify otherwise. If you do specify rollback triggers for this parameter, those
     * triggers replace any list of triggers previously specified for the stack. This
     * means:</p> <ul> <li> <p>To use the rollback triggers previously specified for
     * this stack, if any, don't specify this parameter.</p> </li> <li> <p>To specify
     * new or updated rollback triggers, you must specify <i>all</i> the triggers that
     * you want used for this stack, even triggers you've specifed before (for example,
     * when creating the stack or during a previous stack update). Any triggers that
     * you don't include in the updated list of triggers are no longer applied to the
     * stack.</p> </li> <li> <p>To remove all currently specified triggers, specify an
     * empty list for this parameter.</p> </li> </ul> <p>If a specified trigger is
     * missing, the entire stack operation fails and is rolled back. </p>
     */
    inline RollbackConfiguration& WithRollbackTriggers(const Aws::Vector<RollbackTrigger>& value) { SetRollbackTriggers(value); return *this;}

    /**
     * <p>The triggers to monitor during stack creation or update actions. </p> <p>By
     * default, AWS CloudFormation saves the rollback triggers specified for a stack
     * and applies them to any subsequent update operations for the stack, unless you
     * specify otherwise. If you do specify rollback triggers for this parameter, those
     * triggers replace any list of triggers previously specified for the stack. This
     * means:</p> <ul> <li> <p>To use the rollback triggers previously specified for
     * this stack, if any, don't specify this parameter.</p> </li> <li> <p>To specify
     * new or updated rollback triggers, you must specify <i>all</i> the triggers that
     * you want used for this stack, even triggers you've specifed before (for example,
     * when creating the stack or during a previous stack update). Any triggers that
     * you don't include in the updated list of triggers are no longer applied to the
     * stack.</p> </li> <li> <p>To remove all currently specified triggers, specify an
     * empty list for this parameter.</p> </li> </ul> <p>If a specified trigger is
     * missing, the entire stack operation fails and is rolled back. </p>
     */
    inline RollbackConfiguration& WithRollbackTriggers(Aws::Vector<RollbackTrigger>&& value) { SetRollbackTriggers(std::move(value)); return *this;}

    /**
     * <p>The triggers to monitor during stack creation or update actions. </p> <p>By
     * default, AWS CloudFormation saves the rollback triggers specified for a stack
     * and applies them to any subsequent update operations for the stack, unless you
     * specify otherwise. If you do specify rollback triggers for this parameter, those
     * triggers replace any list of triggers previously specified for the stack. This
     * means:</p> <ul> <li> <p>To use the rollback triggers previously specified for
     * this stack, if any, don't specify this parameter.</p> </li> <li> <p>To specify
     * new or updated rollback triggers, you must specify <i>all</i> the triggers that
     * you want used for this stack, even triggers you've specifed before (for example,
     * when creating the stack or during a previous stack update). Any triggers that
     * you don't include in the updated list of triggers are no longer applied to the
     * stack.</p> </li> <li> <p>To remove all currently specified triggers, specify an
     * empty list for this parameter.</p> </li> </ul> <p>If a specified trigger is
     * missing, the entire stack operation fails and is rolled back. </p>
     */
    inline RollbackConfiguration& AddRollbackTriggers(const RollbackTrigger& value) { m_rollbackTriggersHasBeenSet = true; m_rollbackTriggers.push_back(value); return *this; }

    /**
     * <p>The triggers to monitor during stack creation or update actions. </p> <p>By
     * default, AWS CloudFormation saves the rollback triggers specified for a stack
     * and applies them to any subsequent update operations for the stack, unless you
     * specify otherwise. If you do specify rollback triggers for this parameter, those
     * triggers replace any list of triggers previously specified for the stack. This
     * means:</p> <ul> <li> <p>To use the rollback triggers previously specified for
     * this stack, if any, don't specify this parameter.</p> </li> <li> <p>To specify
     * new or updated rollback triggers, you must specify <i>all</i> the triggers that
     * you want used for this stack, even triggers you've specifed before (for example,
     * when creating the stack or during a previous stack update). Any triggers that
     * you don't include in the updated list of triggers are no longer applied to the
     * stack.</p> </li> <li> <p>To remove all currently specified triggers, specify an
     * empty list for this parameter.</p> </li> </ul> <p>If a specified trigger is
     * missing, the entire stack operation fails and is rolled back. </p>
     */
    inline RollbackConfiguration& AddRollbackTriggers(RollbackTrigger&& value) { m_rollbackTriggersHasBeenSet = true; m_rollbackTriggers.push_back(std::move(value)); return *this; }


    /**
     * <p>The amount of time, in minutes, during which CloudFormation should monitor
     * all the rollback triggers after the stack creation or update operation deploys
     * all necessary resources.</p> <p>The default is 0 minutes.</p> <p>If you specify
     * a monitoring period but do not specify any rollback triggers, CloudFormation
     * still waits the specified period of time before cleaning up old resources after
     * update operations. You can use this monitoring period to perform any manual
     * stack validation desired, and manually cancel the stack creation or update
     * (using <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_CancelUpdateStack.html">CancelUpdateStack</a>,
     * for example) as necessary.</p> <p>If you specify 0 for this parameter,
     * CloudFormation still monitors the specified rollback triggers during stack
     * creation and update operations. Then, for update operations, it begins disposing
     * of old resources immediately once the operation completes.</p>
     */
    inline int GetMonitoringTimeInMinutes() const{ return m_monitoringTimeInMinutes; }

    /**
     * <p>The amount of time, in minutes, during which CloudFormation should monitor
     * all the rollback triggers after the stack creation or update operation deploys
     * all necessary resources.</p> <p>The default is 0 minutes.</p> <p>If you specify
     * a monitoring period but do not specify any rollback triggers, CloudFormation
     * still waits the specified period of time before cleaning up old resources after
     * update operations. You can use this monitoring period to perform any manual
     * stack validation desired, and manually cancel the stack creation or update
     * (using <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_CancelUpdateStack.html">CancelUpdateStack</a>,
     * for example) as necessary.</p> <p>If you specify 0 for this parameter,
     * CloudFormation still monitors the specified rollback triggers during stack
     * creation and update operations. Then, for update operations, it begins disposing
     * of old resources immediately once the operation completes.</p>
     */
    inline bool MonitoringTimeInMinutesHasBeenSet() const { return m_monitoringTimeInMinutesHasBeenSet; }

    /**
     * <p>The amount of time, in minutes, during which CloudFormation should monitor
     * all the rollback triggers after the stack creation or update operation deploys
     * all necessary resources.</p> <p>The default is 0 minutes.</p> <p>If you specify
     * a monitoring period but do not specify any rollback triggers, CloudFormation
     * still waits the specified period of time before cleaning up old resources after
     * update operations. You can use this monitoring period to perform any manual
     * stack validation desired, and manually cancel the stack creation or update
     * (using <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_CancelUpdateStack.html">CancelUpdateStack</a>,
     * for example) as necessary.</p> <p>If you specify 0 for this parameter,
     * CloudFormation still monitors the specified rollback triggers during stack
     * creation and update operations. Then, for update operations, it begins disposing
     * of old resources immediately once the operation completes.</p>
     */
    inline void SetMonitoringTimeInMinutes(int value) { m_monitoringTimeInMinutesHasBeenSet = true; m_monitoringTimeInMinutes = value; }

    /**
     * <p>The amount of time, in minutes, during which CloudFormation should monitor
     * all the rollback triggers after the stack creation or update operation deploys
     * all necessary resources.</p> <p>The default is 0 minutes.</p> <p>If you specify
     * a monitoring period but do not specify any rollback triggers, CloudFormation
     * still waits the specified period of time before cleaning up old resources after
     * update operations. You can use this monitoring period to perform any manual
     * stack validation desired, and manually cancel the stack creation or update
     * (using <a
     * href="https://docs.aws.amazon.com/AWSCloudFormation/latest/APIReference/API_CancelUpdateStack.html">CancelUpdateStack</a>,
     * for example) as necessary.</p> <p>If you specify 0 for this parameter,
     * CloudFormation still monitors the specified rollback triggers during stack
     * creation and update operations. Then, for update operations, it begins disposing
     * of old resources immediately once the operation completes.</p>
     */
    inline RollbackConfiguration& WithMonitoringTimeInMinutes(int value) { SetMonitoringTimeInMinutes(value); return *this;}

  private:

    Aws::Vector<RollbackTrigger> m_rollbackTriggers;
    bool m_rollbackTriggersHasBeenSet;

    int m_monitoringTimeInMinutes;
    bool m_monitoringTimeInMinutesHasBeenSet;
  };

} // namespace Model
} // namespace CloudFormation
} // namespace Aws
