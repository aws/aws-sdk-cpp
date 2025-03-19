/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/ServiceDeploymentRollbackMonitorsStatus.h>
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
   * <p>The CloudWatch alarms used to determine a service deployment failed. </p>
   * <p>Amazon ECS considers the service deployment as failed when any of the alarms
   * move to the <code>ALARM</code> state. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/deployment-alarm-failure.html">How
   * CloudWatch alarms detect Amazon ECS deployment failures</a> in the Amazon ECS
   * Developer Guide.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ServiceDeploymentAlarms">AWS
   * API Reference</a></p>
   */
  class ServiceDeploymentAlarms
  {
  public:
    AWS_ECS_API ServiceDeploymentAlarms() = default;
    AWS_ECS_API ServiceDeploymentAlarms(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API ServiceDeploymentAlarms& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status of the alarms check. Amazon ECS is not using alarms for service
     * deployment failures when the status is <code>DISABLED</code>.</p>
     */
    inline ServiceDeploymentRollbackMonitorsStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ServiceDeploymentRollbackMonitorsStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ServiceDeploymentAlarms& WithStatus(ServiceDeploymentRollbackMonitorsStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the CloudWatch alarms that determine when a service deployment
     * failed. A "," separates the alarms.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAlarmNames() const { return m_alarmNames; }
    inline bool AlarmNamesHasBeenSet() const { return m_alarmNamesHasBeenSet; }
    template<typename AlarmNamesT = Aws::Vector<Aws::String>>
    void SetAlarmNames(AlarmNamesT&& value) { m_alarmNamesHasBeenSet = true; m_alarmNames = std::forward<AlarmNamesT>(value); }
    template<typename AlarmNamesT = Aws::Vector<Aws::String>>
    ServiceDeploymentAlarms& WithAlarmNames(AlarmNamesT&& value) { SetAlarmNames(std::forward<AlarmNamesT>(value)); return *this;}
    template<typename AlarmNamesT = Aws::String>
    ServiceDeploymentAlarms& AddAlarmNames(AlarmNamesT&& value) { m_alarmNamesHasBeenSet = true; m_alarmNames.emplace_back(std::forward<AlarmNamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>One or more CloudWatch alarm names that have been triggered during the
     * service deployment. A "," separates the alarm names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTriggeredAlarmNames() const { return m_triggeredAlarmNames; }
    inline bool TriggeredAlarmNamesHasBeenSet() const { return m_triggeredAlarmNamesHasBeenSet; }
    template<typename TriggeredAlarmNamesT = Aws::Vector<Aws::String>>
    void SetTriggeredAlarmNames(TriggeredAlarmNamesT&& value) { m_triggeredAlarmNamesHasBeenSet = true; m_triggeredAlarmNames = std::forward<TriggeredAlarmNamesT>(value); }
    template<typename TriggeredAlarmNamesT = Aws::Vector<Aws::String>>
    ServiceDeploymentAlarms& WithTriggeredAlarmNames(TriggeredAlarmNamesT&& value) { SetTriggeredAlarmNames(std::forward<TriggeredAlarmNamesT>(value)); return *this;}
    template<typename TriggeredAlarmNamesT = Aws::String>
    ServiceDeploymentAlarms& AddTriggeredAlarmNames(TriggeredAlarmNamesT&& value) { m_triggeredAlarmNamesHasBeenSet = true; m_triggeredAlarmNames.emplace_back(std::forward<TriggeredAlarmNamesT>(value)); return *this; }
    ///@}
  private:

    ServiceDeploymentRollbackMonitorsStatus m_status{ServiceDeploymentRollbackMonitorsStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Vector<Aws::String> m_alarmNames;
    bool m_alarmNamesHasBeenSet = false;

    Aws::Vector<Aws::String> m_triggeredAlarmNames;
    bool m_triggeredAlarmNamesHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
