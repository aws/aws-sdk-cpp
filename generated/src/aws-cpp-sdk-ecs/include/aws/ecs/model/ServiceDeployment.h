/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/model/ServiceRevisionSummary.h>
#include <aws/ecs/model/ServiceDeploymentStatus.h>
#include <aws/ecs/model/ServiceDeploymentLifecycleStage.h>
#include <aws/ecs/model/DeploymentConfiguration.h>
#include <aws/ecs/model/Rollback.h>
#include <aws/ecs/model/ServiceDeploymentCircuitBreaker.h>
#include <aws/ecs/model/ServiceDeploymentAlarms.h>
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
   * <p>Information about the service deployment.</p> <p>Service deployments provide
   * a comprehensive view of your deployments. For information about service
   * deployments, see <a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/service-deployment.html">View
   * service history using Amazon ECS service deployments</a> in the <i> <i>Amazon
   * Elastic Container Service Developer Guide</i> </i>.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ServiceDeployment">AWS
   * API Reference</a></p>
   */
  class ServiceDeployment
  {
  public:
    AWS_ECS_API ServiceDeployment() = default;
    AWS_ECS_API ServiceDeployment(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API ServiceDeployment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the service deployment.</p>
     */
    inline const Aws::String& GetServiceDeploymentArn() const { return m_serviceDeploymentArn; }
    inline bool ServiceDeploymentArnHasBeenSet() const { return m_serviceDeploymentArnHasBeenSet; }
    template<typename ServiceDeploymentArnT = Aws::String>
    void SetServiceDeploymentArn(ServiceDeploymentArnT&& value) { m_serviceDeploymentArnHasBeenSet = true; m_serviceDeploymentArn = std::forward<ServiceDeploymentArnT>(value); }
    template<typename ServiceDeploymentArnT = Aws::String>
    ServiceDeployment& WithServiceDeploymentArn(ServiceDeploymentArnT&& value) { SetServiceDeploymentArn(std::forward<ServiceDeploymentArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the service for this service deployment.</p>
     */
    inline const Aws::String& GetServiceArn() const { return m_serviceArn; }
    inline bool ServiceArnHasBeenSet() const { return m_serviceArnHasBeenSet; }
    template<typename ServiceArnT = Aws::String>
    void SetServiceArn(ServiceArnT&& value) { m_serviceArnHasBeenSet = true; m_serviceArn = std::forward<ServiceArnT>(value); }
    template<typename ServiceArnT = Aws::String>
    ServiceDeployment& WithServiceArn(ServiceArnT&& value) { SetServiceArn(std::forward<ServiceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the cluster that hosts the service.</p>
     */
    inline const Aws::String& GetClusterArn() const { return m_clusterArn; }
    inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }
    template<typename ClusterArnT = Aws::String>
    void SetClusterArn(ClusterArnT&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = std::forward<ClusterArnT>(value); }
    template<typename ClusterArnT = Aws::String>
    ServiceDeployment& WithClusterArn(ClusterArnT&& value) { SetClusterArn(std::forward<ClusterArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the service deployment was created. The format is yyyy-MM-dd
     * HH:mm:ss.SSSSSS.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    ServiceDeployment& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the service deployment statred. The format is yyyy-MM-dd
     * HH:mm:ss.SSSSSS.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
    template<typename StartedAtT = Aws::Utils::DateTime>
    void SetStartedAt(StartedAtT&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::forward<StartedAtT>(value); }
    template<typename StartedAtT = Aws::Utils::DateTime>
    ServiceDeployment& WithStartedAt(StartedAtT&& value) { SetStartedAt(std::forward<StartedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the service deployment finished. The format is yyyy-MM-dd
     * HH:mm:ss.SSSSSS.</p>
     */
    inline const Aws::Utils::DateTime& GetFinishedAt() const { return m_finishedAt; }
    inline bool FinishedAtHasBeenSet() const { return m_finishedAtHasBeenSet; }
    template<typename FinishedAtT = Aws::Utils::DateTime>
    void SetFinishedAt(FinishedAtT&& value) { m_finishedAtHasBeenSet = true; m_finishedAt = std::forward<FinishedAtT>(value); }
    template<typename FinishedAtT = Aws::Utils::DateTime>
    ServiceDeployment& WithFinishedAt(FinishedAtT&& value) { SetFinishedAt(std::forward<FinishedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the service deployment stopped. The format is yyyy-MM-dd
     * HH:mm:ss.SSSSSS.</p> <p>The service deployment stops when any of the following
     * actions happen:</p> <ul> <li> <p>A user manually stops the deployment</p> </li>
     * <li> <p>The rollback option is not in use for the failure detection mechanism
     * (the circuit breaker or alarm-based) and the service fails.</p> </li> </ul>
     */
    inline const Aws::Utils::DateTime& GetStoppedAt() const { return m_stoppedAt; }
    inline bool StoppedAtHasBeenSet() const { return m_stoppedAtHasBeenSet; }
    template<typename StoppedAtT = Aws::Utils::DateTime>
    void SetStoppedAt(StoppedAtT&& value) { m_stoppedAtHasBeenSet = true; m_stoppedAt = std::forward<StoppedAtT>(value); }
    template<typename StoppedAtT = Aws::Utils::DateTime>
    ServiceDeployment& WithStoppedAt(StoppedAtT&& value) { SetStoppedAt(std::forward<StoppedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the service deployment was last updated. The format is
     * yyyy-MM-dd HH:mm:ss.SSSSSS.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    ServiceDeployment& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The currently deployed workload configuration.</p>
     */
    inline const Aws::Vector<ServiceRevisionSummary>& GetSourceServiceRevisions() const { return m_sourceServiceRevisions; }
    inline bool SourceServiceRevisionsHasBeenSet() const { return m_sourceServiceRevisionsHasBeenSet; }
    template<typename SourceServiceRevisionsT = Aws::Vector<ServiceRevisionSummary>>
    void SetSourceServiceRevisions(SourceServiceRevisionsT&& value) { m_sourceServiceRevisionsHasBeenSet = true; m_sourceServiceRevisions = std::forward<SourceServiceRevisionsT>(value); }
    template<typename SourceServiceRevisionsT = Aws::Vector<ServiceRevisionSummary>>
    ServiceDeployment& WithSourceServiceRevisions(SourceServiceRevisionsT&& value) { SetSourceServiceRevisions(std::forward<SourceServiceRevisionsT>(value)); return *this;}
    template<typename SourceServiceRevisionsT = ServiceRevisionSummary>
    ServiceDeployment& AddSourceServiceRevisions(SourceServiceRevisionsT&& value) { m_sourceServiceRevisionsHasBeenSet = true; m_sourceServiceRevisions.emplace_back(std::forward<SourceServiceRevisionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The workload configuration being deployed.</p>
     */
    inline const ServiceRevisionSummary& GetTargetServiceRevision() const { return m_targetServiceRevision; }
    inline bool TargetServiceRevisionHasBeenSet() const { return m_targetServiceRevisionHasBeenSet; }
    template<typename TargetServiceRevisionT = ServiceRevisionSummary>
    void SetTargetServiceRevision(TargetServiceRevisionT&& value) { m_targetServiceRevisionHasBeenSet = true; m_targetServiceRevision = std::forward<TargetServiceRevisionT>(value); }
    template<typename TargetServiceRevisionT = ServiceRevisionSummary>
    ServiceDeployment& WithTargetServiceRevision(TargetServiceRevisionT&& value) { SetTargetServiceRevision(std::forward<TargetServiceRevisionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service deployment state.</p>
     */
    inline ServiceDeploymentStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ServiceDeploymentStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ServiceDeployment& WithStatus(ServiceDeploymentStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about why the service deployment is in the current status. For
     * example, the circuit breaker detected a failure.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    ServiceDeployment& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current lifecycle stage of the deployment. Possible values include:</p>
     * <ul> <li> <p>RECONCILE_SERVICE</p> <p>The reconciliation stage that only happens
     * when you start a new service deployment with more than 1 service revision in an
     * ACTIVE state.</p> </li> <li> <p>PRE_SCALE_UP</p> <p>The green service revision
     * has not started. The blue service revision is handling 100% of the production
     * traffic. There is no test traffic.</p> </li> <li> <p>SCALE_UP</p> <p>The stage
     * when the green service revision scales up to 100% and launches new tasks. The
     * green service revision is not serving any traffic at this point.</p> </li> <li>
     * <p>POST_SCALE_UP</p> <p>The green service revision has started. The blue service
     * revision is handling 100% of the production traffic. There is no test
     * traffic.</p> </li> <li> <p>TEST_TRAFFIC_SHIFT</p> <p>The blue and green service
     * revisions are running. The blue service revision handles 100% of the production
     * traffic. The green service revision is migrating from 0% to 100% of test
     * traffic.</p> </li> <li> <p>POST_TEST_TRAFFIC_SHIFT</p> <p>The test traffic shift
     * is complete. The green service revision handles 100% of the test traffic.</p>
     * </li> <li> <p>PRODUCTION_TRAFFIC_SHIFT</p> <p>Production traffic is shifting to
     * the green service revision. The green service revision is migrating from 0% to
     * 100% of production traffic.</p> </li> <li> <p>POST_PRODUCTION_TRAFFIC_SHIFT</p>
     * <p>The production traffic shift is complete.</p> </li> <li> <p>BAKE_TIME</p>
     * <p>The stage when both blue and green service revisions are running
     * simultaneously after the production traffic has shifted.</p> </li> <li>
     * <p>CLEAN_UP</p> <p>The stage when the blue service revision has completely
     * scaled down to 0 running tasks. The green service revision is now the production
     * service revision after this stage.</p> </li> </ul>
     */
    inline ServiceDeploymentLifecycleStage GetLifecycleStage() const { return m_lifecycleStage; }
    inline bool LifecycleStageHasBeenSet() const { return m_lifecycleStageHasBeenSet; }
    inline void SetLifecycleStage(ServiceDeploymentLifecycleStage value) { m_lifecycleStageHasBeenSet = true; m_lifecycleStage = value; }
    inline ServiceDeployment& WithLifecycleStage(ServiceDeploymentLifecycleStage value) { SetLifecycleStage(value); return *this;}
    ///@}

    ///@{
    
    inline const DeploymentConfiguration& GetDeploymentConfiguration() const { return m_deploymentConfiguration; }
    inline bool DeploymentConfigurationHasBeenSet() const { return m_deploymentConfigurationHasBeenSet; }
    template<typename DeploymentConfigurationT = DeploymentConfiguration>
    void SetDeploymentConfiguration(DeploymentConfigurationT&& value) { m_deploymentConfigurationHasBeenSet = true; m_deploymentConfiguration = std::forward<DeploymentConfigurationT>(value); }
    template<typename DeploymentConfigurationT = DeploymentConfiguration>
    ServiceDeployment& WithDeploymentConfiguration(DeploymentConfigurationT&& value) { SetDeploymentConfiguration(std::forward<DeploymentConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rollback options the service deployment uses when the deployment
     * fails.</p>
     */
    inline const Rollback& GetRollback() const { return m_rollback; }
    inline bool RollbackHasBeenSet() const { return m_rollbackHasBeenSet; }
    template<typename RollbackT = Rollback>
    void SetRollback(RollbackT&& value) { m_rollbackHasBeenSet = true; m_rollback = std::forward<RollbackT>(value); }
    template<typename RollbackT = Rollback>
    ServiceDeployment& WithRollback(RollbackT&& value) { SetRollback(std::forward<RollbackT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The circuit breaker configuration that determines a service deployment
     * failed.</p>
     */
    inline const ServiceDeploymentCircuitBreaker& GetDeploymentCircuitBreaker() const { return m_deploymentCircuitBreaker; }
    inline bool DeploymentCircuitBreakerHasBeenSet() const { return m_deploymentCircuitBreakerHasBeenSet; }
    template<typename DeploymentCircuitBreakerT = ServiceDeploymentCircuitBreaker>
    void SetDeploymentCircuitBreaker(DeploymentCircuitBreakerT&& value) { m_deploymentCircuitBreakerHasBeenSet = true; m_deploymentCircuitBreaker = std::forward<DeploymentCircuitBreakerT>(value); }
    template<typename DeploymentCircuitBreakerT = ServiceDeploymentCircuitBreaker>
    ServiceDeployment& WithDeploymentCircuitBreaker(DeploymentCircuitBreakerT&& value) { SetDeploymentCircuitBreaker(std::forward<DeploymentCircuitBreakerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CloudWatch alarms that determine when a service deployment fails.</p>
     */
    inline const ServiceDeploymentAlarms& GetAlarms() const { return m_alarms; }
    inline bool AlarmsHasBeenSet() const { return m_alarmsHasBeenSet; }
    template<typename AlarmsT = ServiceDeploymentAlarms>
    void SetAlarms(AlarmsT&& value) { m_alarmsHasBeenSet = true; m_alarms = std::forward<AlarmsT>(value); }
    template<typename AlarmsT = ServiceDeploymentAlarms>
    ServiceDeployment& WithAlarms(AlarmsT&& value) { SetAlarms(std::forward<AlarmsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_serviceDeploymentArn;
    bool m_serviceDeploymentArnHasBeenSet = false;

    Aws::String m_serviceArn;
    bool m_serviceArnHasBeenSet = false;

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_startedAt{};
    bool m_startedAtHasBeenSet = false;

    Aws::Utils::DateTime m_finishedAt{};
    bool m_finishedAtHasBeenSet = false;

    Aws::Utils::DateTime m_stoppedAt{};
    bool m_stoppedAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::Vector<ServiceRevisionSummary> m_sourceServiceRevisions;
    bool m_sourceServiceRevisionsHasBeenSet = false;

    ServiceRevisionSummary m_targetServiceRevision;
    bool m_targetServiceRevisionHasBeenSet = false;

    ServiceDeploymentStatus m_status{ServiceDeploymentStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

    ServiceDeploymentLifecycleStage m_lifecycleStage{ServiceDeploymentLifecycleStage::NOT_SET};
    bool m_lifecycleStageHasBeenSet = false;

    DeploymentConfiguration m_deploymentConfiguration;
    bool m_deploymentConfigurationHasBeenSet = false;

    Rollback m_rollback;
    bool m_rollbackHasBeenSet = false;

    ServiceDeploymentCircuitBreaker m_deploymentCircuitBreaker;
    bool m_deploymentCircuitBreakerHasBeenSet = false;

    ServiceDeploymentAlarms m_alarms;
    bool m_alarmsHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
