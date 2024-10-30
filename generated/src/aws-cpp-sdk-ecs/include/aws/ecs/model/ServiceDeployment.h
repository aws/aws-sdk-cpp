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
    AWS_ECS_API ServiceDeployment();
    AWS_ECS_API ServiceDeployment(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API ServiceDeployment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the service deployment.</p>
     */
    inline const Aws::String& GetServiceDeploymentArn() const{ return m_serviceDeploymentArn; }
    inline bool ServiceDeploymentArnHasBeenSet() const { return m_serviceDeploymentArnHasBeenSet; }
    inline void SetServiceDeploymentArn(const Aws::String& value) { m_serviceDeploymentArnHasBeenSet = true; m_serviceDeploymentArn = value; }
    inline void SetServiceDeploymentArn(Aws::String&& value) { m_serviceDeploymentArnHasBeenSet = true; m_serviceDeploymentArn = std::move(value); }
    inline void SetServiceDeploymentArn(const char* value) { m_serviceDeploymentArnHasBeenSet = true; m_serviceDeploymentArn.assign(value); }
    inline ServiceDeployment& WithServiceDeploymentArn(const Aws::String& value) { SetServiceDeploymentArn(value); return *this;}
    inline ServiceDeployment& WithServiceDeploymentArn(Aws::String&& value) { SetServiceDeploymentArn(std::move(value)); return *this;}
    inline ServiceDeployment& WithServiceDeploymentArn(const char* value) { SetServiceDeploymentArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the service for this service deployment.</p>
     */
    inline const Aws::String& GetServiceArn() const{ return m_serviceArn; }
    inline bool ServiceArnHasBeenSet() const { return m_serviceArnHasBeenSet; }
    inline void SetServiceArn(const Aws::String& value) { m_serviceArnHasBeenSet = true; m_serviceArn = value; }
    inline void SetServiceArn(Aws::String&& value) { m_serviceArnHasBeenSet = true; m_serviceArn = std::move(value); }
    inline void SetServiceArn(const char* value) { m_serviceArnHasBeenSet = true; m_serviceArn.assign(value); }
    inline ServiceDeployment& WithServiceArn(const Aws::String& value) { SetServiceArn(value); return *this;}
    inline ServiceDeployment& WithServiceArn(Aws::String&& value) { SetServiceArn(std::move(value)); return *this;}
    inline ServiceDeployment& WithServiceArn(const char* value) { SetServiceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the cluster that hosts the service.</p>
     */
    inline const Aws::String& GetClusterArn() const{ return m_clusterArn; }
    inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }
    inline void SetClusterArn(const Aws::String& value) { m_clusterArnHasBeenSet = true; m_clusterArn = value; }
    inline void SetClusterArn(Aws::String&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = std::move(value); }
    inline void SetClusterArn(const char* value) { m_clusterArnHasBeenSet = true; m_clusterArn.assign(value); }
    inline ServiceDeployment& WithClusterArn(const Aws::String& value) { SetClusterArn(value); return *this;}
    inline ServiceDeployment& WithClusterArn(Aws::String&& value) { SetClusterArn(std::move(value)); return *this;}
    inline ServiceDeployment& WithClusterArn(const char* value) { SetClusterArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the service deployment was created. The format is yyyy-MM-dd
     * HH:mm:ss.SSSSSS.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline ServiceDeployment& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline ServiceDeployment& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the service deployment statred. The format is yyyy-MM-dd
     * HH:mm:ss.SSSSSS.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const{ return m_startedAt; }
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
    inline void SetStartedAt(const Aws::Utils::DateTime& value) { m_startedAtHasBeenSet = true; m_startedAt = value; }
    inline void SetStartedAt(Aws::Utils::DateTime&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::move(value); }
    inline ServiceDeployment& WithStartedAt(const Aws::Utils::DateTime& value) { SetStartedAt(value); return *this;}
    inline ServiceDeployment& WithStartedAt(Aws::Utils::DateTime&& value) { SetStartedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the service deployment finished. The format is yyyy-MM-dd
     * HH:mm:ss.SSSSSS.</p>
     */
    inline const Aws::Utils::DateTime& GetFinishedAt() const{ return m_finishedAt; }
    inline bool FinishedAtHasBeenSet() const { return m_finishedAtHasBeenSet; }
    inline void SetFinishedAt(const Aws::Utils::DateTime& value) { m_finishedAtHasBeenSet = true; m_finishedAt = value; }
    inline void SetFinishedAt(Aws::Utils::DateTime&& value) { m_finishedAtHasBeenSet = true; m_finishedAt = std::move(value); }
    inline ServiceDeployment& WithFinishedAt(const Aws::Utils::DateTime& value) { SetFinishedAt(value); return *this;}
    inline ServiceDeployment& WithFinishedAt(Aws::Utils::DateTime&& value) { SetFinishedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the service deployment stopped. The format is yyyy-MM-dd
     * HH:mm:ss.SSSSSS.</p> <p>The service deployment stops when any of the following
     * actions happen:</p> <ul> <li> <p>A user manually stops the deployment</p> </li>
     * <li> <p>The rollback option is not in use for the failure detection mechanism
     * (the circuit breaker or alarm-based) and the service fails.</p> </li> </ul>
     */
    inline const Aws::Utils::DateTime& GetStoppedAt() const{ return m_stoppedAt; }
    inline bool StoppedAtHasBeenSet() const { return m_stoppedAtHasBeenSet; }
    inline void SetStoppedAt(const Aws::Utils::DateTime& value) { m_stoppedAtHasBeenSet = true; m_stoppedAt = value; }
    inline void SetStoppedAt(Aws::Utils::DateTime&& value) { m_stoppedAtHasBeenSet = true; m_stoppedAt = std::move(value); }
    inline ServiceDeployment& WithStoppedAt(const Aws::Utils::DateTime& value) { SetStoppedAt(value); return *this;}
    inline ServiceDeployment& WithStoppedAt(Aws::Utils::DateTime&& value) { SetStoppedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the service deployment was last updated. The format is
     * yyyy-MM-dd HH:mm:ss.SSSSSS.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }
    inline ServiceDeployment& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}
    inline ServiceDeployment& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The currently deployed workload configuration.</p>
     */
    inline const Aws::Vector<ServiceRevisionSummary>& GetSourceServiceRevisions() const{ return m_sourceServiceRevisions; }
    inline bool SourceServiceRevisionsHasBeenSet() const { return m_sourceServiceRevisionsHasBeenSet; }
    inline void SetSourceServiceRevisions(const Aws::Vector<ServiceRevisionSummary>& value) { m_sourceServiceRevisionsHasBeenSet = true; m_sourceServiceRevisions = value; }
    inline void SetSourceServiceRevisions(Aws::Vector<ServiceRevisionSummary>&& value) { m_sourceServiceRevisionsHasBeenSet = true; m_sourceServiceRevisions = std::move(value); }
    inline ServiceDeployment& WithSourceServiceRevisions(const Aws::Vector<ServiceRevisionSummary>& value) { SetSourceServiceRevisions(value); return *this;}
    inline ServiceDeployment& WithSourceServiceRevisions(Aws::Vector<ServiceRevisionSummary>&& value) { SetSourceServiceRevisions(std::move(value)); return *this;}
    inline ServiceDeployment& AddSourceServiceRevisions(const ServiceRevisionSummary& value) { m_sourceServiceRevisionsHasBeenSet = true; m_sourceServiceRevisions.push_back(value); return *this; }
    inline ServiceDeployment& AddSourceServiceRevisions(ServiceRevisionSummary&& value) { m_sourceServiceRevisionsHasBeenSet = true; m_sourceServiceRevisions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The workload configuration being deployed.</p>
     */
    inline const ServiceRevisionSummary& GetTargetServiceRevision() const{ return m_targetServiceRevision; }
    inline bool TargetServiceRevisionHasBeenSet() const { return m_targetServiceRevisionHasBeenSet; }
    inline void SetTargetServiceRevision(const ServiceRevisionSummary& value) { m_targetServiceRevisionHasBeenSet = true; m_targetServiceRevision = value; }
    inline void SetTargetServiceRevision(ServiceRevisionSummary&& value) { m_targetServiceRevisionHasBeenSet = true; m_targetServiceRevision = std::move(value); }
    inline ServiceDeployment& WithTargetServiceRevision(const ServiceRevisionSummary& value) { SetTargetServiceRevision(value); return *this;}
    inline ServiceDeployment& WithTargetServiceRevision(ServiceRevisionSummary&& value) { SetTargetServiceRevision(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service deployment state.</p>
     */
    inline const ServiceDeploymentStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ServiceDeploymentStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ServiceDeploymentStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ServiceDeployment& WithStatus(const ServiceDeploymentStatus& value) { SetStatus(value); return *this;}
    inline ServiceDeployment& WithStatus(ServiceDeploymentStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about why the service deployment is in the current status. For
     * example, the circuit breaker detected a failure.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }
    inline ServiceDeployment& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}
    inline ServiceDeployment& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}
    inline ServiceDeployment& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}
    ///@}

    ///@{
    
    inline const DeploymentConfiguration& GetDeploymentConfiguration() const{ return m_deploymentConfiguration; }
    inline bool DeploymentConfigurationHasBeenSet() const { return m_deploymentConfigurationHasBeenSet; }
    inline void SetDeploymentConfiguration(const DeploymentConfiguration& value) { m_deploymentConfigurationHasBeenSet = true; m_deploymentConfiguration = value; }
    inline void SetDeploymentConfiguration(DeploymentConfiguration&& value) { m_deploymentConfigurationHasBeenSet = true; m_deploymentConfiguration = std::move(value); }
    inline ServiceDeployment& WithDeploymentConfiguration(const DeploymentConfiguration& value) { SetDeploymentConfiguration(value); return *this;}
    inline ServiceDeployment& WithDeploymentConfiguration(DeploymentConfiguration&& value) { SetDeploymentConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rollback options the service deployment uses when the deployment
     * fails.</p>
     */
    inline const Rollback& GetRollback() const{ return m_rollback; }
    inline bool RollbackHasBeenSet() const { return m_rollbackHasBeenSet; }
    inline void SetRollback(const Rollback& value) { m_rollbackHasBeenSet = true; m_rollback = value; }
    inline void SetRollback(Rollback&& value) { m_rollbackHasBeenSet = true; m_rollback = std::move(value); }
    inline ServiceDeployment& WithRollback(const Rollback& value) { SetRollback(value); return *this;}
    inline ServiceDeployment& WithRollback(Rollback&& value) { SetRollback(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The circuit breaker configuration that determines a service deployment
     * failed.</p>
     */
    inline const ServiceDeploymentCircuitBreaker& GetDeploymentCircuitBreaker() const{ return m_deploymentCircuitBreaker; }
    inline bool DeploymentCircuitBreakerHasBeenSet() const { return m_deploymentCircuitBreakerHasBeenSet; }
    inline void SetDeploymentCircuitBreaker(const ServiceDeploymentCircuitBreaker& value) { m_deploymentCircuitBreakerHasBeenSet = true; m_deploymentCircuitBreaker = value; }
    inline void SetDeploymentCircuitBreaker(ServiceDeploymentCircuitBreaker&& value) { m_deploymentCircuitBreakerHasBeenSet = true; m_deploymentCircuitBreaker = std::move(value); }
    inline ServiceDeployment& WithDeploymentCircuitBreaker(const ServiceDeploymentCircuitBreaker& value) { SetDeploymentCircuitBreaker(value); return *this;}
    inline ServiceDeployment& WithDeploymentCircuitBreaker(ServiceDeploymentCircuitBreaker&& value) { SetDeploymentCircuitBreaker(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CloudWatch alarms that determine when a service deployment fails.</p>
     */
    inline const ServiceDeploymentAlarms& GetAlarms() const{ return m_alarms; }
    inline bool AlarmsHasBeenSet() const { return m_alarmsHasBeenSet; }
    inline void SetAlarms(const ServiceDeploymentAlarms& value) { m_alarmsHasBeenSet = true; m_alarms = value; }
    inline void SetAlarms(ServiceDeploymentAlarms&& value) { m_alarmsHasBeenSet = true; m_alarms = std::move(value); }
    inline ServiceDeployment& WithAlarms(const ServiceDeploymentAlarms& value) { SetAlarms(value); return *this;}
    inline ServiceDeployment& WithAlarms(ServiceDeploymentAlarms&& value) { SetAlarms(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_serviceDeploymentArn;
    bool m_serviceDeploymentArnHasBeenSet = false;

    Aws::String m_serviceArn;
    bool m_serviceArnHasBeenSet = false;

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_startedAt;
    bool m_startedAtHasBeenSet = false;

    Aws::Utils::DateTime m_finishedAt;
    bool m_finishedAtHasBeenSet = false;

    Aws::Utils::DateTime m_stoppedAt;
    bool m_stoppedAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    Aws::Vector<ServiceRevisionSummary> m_sourceServiceRevisions;
    bool m_sourceServiceRevisionsHasBeenSet = false;

    ServiceRevisionSummary m_targetServiceRevision;
    bool m_targetServiceRevisionHasBeenSet = false;

    ServiceDeploymentStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;

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
