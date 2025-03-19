/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/ecs/model/ServiceDeploymentStatus.h>
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
   * <p>The service deployment properties that are retured when you call
   * <code>ListServiceDeployments</code>.</p> <p>This provides a high-level overview
   * of the service deployment. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ServiceDeploymentBrief">AWS
   * API Reference</a></p>
   */
  class ServiceDeploymentBrief
  {
  public:
    AWS_ECS_API ServiceDeploymentBrief() = default;
    AWS_ECS_API ServiceDeploymentBrief(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API ServiceDeploymentBrief& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    ServiceDeploymentBrief& WithServiceDeploymentArn(ServiceDeploymentArnT&& value) { SetServiceDeploymentArn(std::forward<ServiceDeploymentArnT>(value)); return *this;}
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
    ServiceDeploymentBrief& WithServiceArn(ServiceArnT&& value) { SetServiceArn(std::forward<ServiceArnT>(value)); return *this;}
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
    ServiceDeploymentBrief& WithClusterArn(ClusterArnT&& value) { SetClusterArn(std::forward<ClusterArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the service deployment statred. The format is yyyy-MM-dd
     * HH:mm:ss.SSSSSS.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const { return m_startedAt; }
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
    template<typename StartedAtT = Aws::Utils::DateTime>
    void SetStartedAt(StartedAtT&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::forward<StartedAtT>(value); }
    template<typename StartedAtT = Aws::Utils::DateTime>
    ServiceDeploymentBrief& WithStartedAt(StartedAtT&& value) { SetStartedAt(std::forward<StartedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the service deployment was created. The format is yyyy-MM-dd
     * HH:mm:ss.SSSSSS.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    ServiceDeploymentBrief& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the service deployment completed. The format is yyyy-MM-dd
     * HH:mm:ss.SSSSSS.</p>
     */
    inline const Aws::Utils::DateTime& GetFinishedAt() const { return m_finishedAt; }
    inline bool FinishedAtHasBeenSet() const { return m_finishedAtHasBeenSet; }
    template<typename FinishedAtT = Aws::Utils::DateTime>
    void SetFinishedAt(FinishedAtT&& value) { m_finishedAtHasBeenSet = true; m_finishedAt = std::forward<FinishedAtT>(value); }
    template<typename FinishedAtT = Aws::Utils::DateTime>
    ServiceDeploymentBrief& WithFinishedAt(FinishedAtT&& value) { SetFinishedAt(std::forward<FinishedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the service revision being deplyed.</p>
     */
    inline const Aws::String& GetTargetServiceRevisionArn() const { return m_targetServiceRevisionArn; }
    inline bool TargetServiceRevisionArnHasBeenSet() const { return m_targetServiceRevisionArnHasBeenSet; }
    template<typename TargetServiceRevisionArnT = Aws::String>
    void SetTargetServiceRevisionArn(TargetServiceRevisionArnT&& value) { m_targetServiceRevisionArnHasBeenSet = true; m_targetServiceRevisionArn = std::forward<TargetServiceRevisionArnT>(value); }
    template<typename TargetServiceRevisionArnT = Aws::String>
    ServiceDeploymentBrief& WithTargetServiceRevisionArn(TargetServiceRevisionArnT&& value) { SetTargetServiceRevisionArn(std::forward<TargetServiceRevisionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the service deployment</p>
     */
    inline ServiceDeploymentStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ServiceDeploymentStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ServiceDeploymentBrief& WithStatus(ServiceDeploymentStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about why the service deployment is in the current status. For
     * example, the circuit breaker detected a deployment failure.</p>
     */
    inline const Aws::String& GetStatusReason() const { return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    template<typename StatusReasonT = Aws::String>
    void SetStatusReason(StatusReasonT&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::forward<StatusReasonT>(value); }
    template<typename StatusReasonT = Aws::String>
    ServiceDeploymentBrief& WithStatusReason(StatusReasonT&& value) { SetStatusReason(std::forward<StatusReasonT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_serviceDeploymentArn;
    bool m_serviceDeploymentArnHasBeenSet = false;

    Aws::String m_serviceArn;
    bool m_serviceArnHasBeenSet = false;

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet = false;

    Aws::Utils::DateTime m_startedAt{};
    bool m_startedAtHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_finishedAt{};
    bool m_finishedAtHasBeenSet = false;

    Aws::String m_targetServiceRevisionArn;
    bool m_targetServiceRevisionArnHasBeenSet = false;

    ServiceDeploymentStatus m_status{ServiceDeploymentStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
