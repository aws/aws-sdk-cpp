/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ECS
{
namespace Model
{

  /**
   * <p>One of the methods which provide a way for you to quickly identify when a
   * deployment has failed, and then to optionally roll back the failure to the last
   * working deployment.</p> <p>When the alarms are generated, Amazon ECS sets the
   * service deployment to failed. Set the rollback parameter to have Amazon ECS to
   * roll back your service to the last completed deployment after a failure.</p>
   * <p>You can only use the <code>DeploymentAlarms</code> method to detect failures
   * when the <code>DeploymentController</code> is set to <code>ECS</code> (rolling
   * update).</p> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/deployment-type-ecs.html">Rolling
   * update</a> in the <i> <i>Amazon Elastic Container Service Developer Guide</i>
   * </i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DeploymentAlarms">AWS
   * API Reference</a></p>
   */
  class DeploymentAlarms
  {
  public:
    AWS_ECS_API DeploymentAlarms();
    AWS_ECS_API DeploymentAlarms(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API DeploymentAlarms& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>One or more CloudWatch alarm names. Use a "," to separate the alarms.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAlarmNames() const{ return m_alarmNames; }

    /**
     * <p>One or more CloudWatch alarm names. Use a "," to separate the alarms.</p>
     */
    inline bool AlarmNamesHasBeenSet() const { return m_alarmNamesHasBeenSet; }

    /**
     * <p>One or more CloudWatch alarm names. Use a "," to separate the alarms.</p>
     */
    inline void SetAlarmNames(const Aws::Vector<Aws::String>& value) { m_alarmNamesHasBeenSet = true; m_alarmNames = value; }

    /**
     * <p>One or more CloudWatch alarm names. Use a "," to separate the alarms.</p>
     */
    inline void SetAlarmNames(Aws::Vector<Aws::String>&& value) { m_alarmNamesHasBeenSet = true; m_alarmNames = std::move(value); }

    /**
     * <p>One or more CloudWatch alarm names. Use a "," to separate the alarms.</p>
     */
    inline DeploymentAlarms& WithAlarmNames(const Aws::Vector<Aws::String>& value) { SetAlarmNames(value); return *this;}

    /**
     * <p>One or more CloudWatch alarm names. Use a "," to separate the alarms.</p>
     */
    inline DeploymentAlarms& WithAlarmNames(Aws::Vector<Aws::String>&& value) { SetAlarmNames(std::move(value)); return *this;}

    /**
     * <p>One or more CloudWatch alarm names. Use a "," to separate the alarms.</p>
     */
    inline DeploymentAlarms& AddAlarmNames(const Aws::String& value) { m_alarmNamesHasBeenSet = true; m_alarmNames.push_back(value); return *this; }

    /**
     * <p>One or more CloudWatch alarm names. Use a "," to separate the alarms.</p>
     */
    inline DeploymentAlarms& AddAlarmNames(Aws::String&& value) { m_alarmNamesHasBeenSet = true; m_alarmNames.push_back(std::move(value)); return *this; }

    /**
     * <p>One or more CloudWatch alarm names. Use a "," to separate the alarms.</p>
     */
    inline DeploymentAlarms& AddAlarmNames(const char* value) { m_alarmNamesHasBeenSet = true; m_alarmNames.push_back(value); return *this; }


    /**
     * <p>Determines whether to use the CloudWatch alarm option in the service
     * deployment process.</p>
     */
    inline bool GetEnable() const{ return m_enable; }

    /**
     * <p>Determines whether to use the CloudWatch alarm option in the service
     * deployment process.</p>
     */
    inline bool EnableHasBeenSet() const { return m_enableHasBeenSet; }

    /**
     * <p>Determines whether to use the CloudWatch alarm option in the service
     * deployment process.</p>
     */
    inline void SetEnable(bool value) { m_enableHasBeenSet = true; m_enable = value; }

    /**
     * <p>Determines whether to use the CloudWatch alarm option in the service
     * deployment process.</p>
     */
    inline DeploymentAlarms& WithEnable(bool value) { SetEnable(value); return *this;}


    /**
     * <p>Determines whether to configure Amazon ECS to roll back the service if a
     * service deployment fails. If rollback is used, when a service deployment fails,
     * the service is rolled back to the last deployment that completed
     * successfully.</p>
     */
    inline bool GetRollback() const{ return m_rollback; }

    /**
     * <p>Determines whether to configure Amazon ECS to roll back the service if a
     * service deployment fails. If rollback is used, when a service deployment fails,
     * the service is rolled back to the last deployment that completed
     * successfully.</p>
     */
    inline bool RollbackHasBeenSet() const { return m_rollbackHasBeenSet; }

    /**
     * <p>Determines whether to configure Amazon ECS to roll back the service if a
     * service deployment fails. If rollback is used, when a service deployment fails,
     * the service is rolled back to the last deployment that completed
     * successfully.</p>
     */
    inline void SetRollback(bool value) { m_rollbackHasBeenSet = true; m_rollback = value; }

    /**
     * <p>Determines whether to configure Amazon ECS to roll back the service if a
     * service deployment fails. If rollback is used, when a service deployment fails,
     * the service is rolled back to the last deployment that completed
     * successfully.</p>
     */
    inline DeploymentAlarms& WithRollback(bool value) { SetRollback(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_alarmNames;
    bool m_alarmNamesHasBeenSet = false;

    bool m_enable;
    bool m_enableHasBeenSet = false;

    bool m_rollback;
    bool m_rollbackHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
