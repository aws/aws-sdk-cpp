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
    AWS_ECS_API ServiceDeploymentBrief();
    AWS_ECS_API ServiceDeploymentBrief(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API ServiceDeploymentBrief& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline ServiceDeploymentBrief& WithServiceDeploymentArn(const Aws::String& value) { SetServiceDeploymentArn(value); return *this;}
    inline ServiceDeploymentBrief& WithServiceDeploymentArn(Aws::String&& value) { SetServiceDeploymentArn(std::move(value)); return *this;}
    inline ServiceDeploymentBrief& WithServiceDeploymentArn(const char* value) { SetServiceDeploymentArn(value); return *this;}
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
    inline ServiceDeploymentBrief& WithServiceArn(const Aws::String& value) { SetServiceArn(value); return *this;}
    inline ServiceDeploymentBrief& WithServiceArn(Aws::String&& value) { SetServiceArn(std::move(value)); return *this;}
    inline ServiceDeploymentBrief& WithServiceArn(const char* value) { SetServiceArn(value); return *this;}
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
    inline ServiceDeploymentBrief& WithClusterArn(const Aws::String& value) { SetClusterArn(value); return *this;}
    inline ServiceDeploymentBrief& WithClusterArn(Aws::String&& value) { SetClusterArn(std::move(value)); return *this;}
    inline ServiceDeploymentBrief& WithClusterArn(const char* value) { SetClusterArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the service deployment statred. The format is yyyy-MM-dd
     * HH:mm:ss.SSSSSS.</p>
     */
    inline const Aws::Utils::DateTime& GetStartedAt() const{ return m_startedAt; }
    inline bool StartedAtHasBeenSet() const { return m_startedAtHasBeenSet; }
    inline void SetStartedAt(const Aws::Utils::DateTime& value) { m_startedAtHasBeenSet = true; m_startedAt = value; }
    inline void SetStartedAt(Aws::Utils::DateTime&& value) { m_startedAtHasBeenSet = true; m_startedAt = std::move(value); }
    inline ServiceDeploymentBrief& WithStartedAt(const Aws::Utils::DateTime& value) { SetStartedAt(value); return *this;}
    inline ServiceDeploymentBrief& WithStartedAt(Aws::Utils::DateTime&& value) { SetStartedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the service deployment was created. The format is yyyy-MM-dd
     * HH:mm:ss.SSSSSS.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline ServiceDeploymentBrief& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline ServiceDeploymentBrief& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the service deployment completed. The format is yyyy-MM-dd
     * HH:mm:ss.SSSSSS.</p>
     */
    inline const Aws::Utils::DateTime& GetFinishedAt() const{ return m_finishedAt; }
    inline bool FinishedAtHasBeenSet() const { return m_finishedAtHasBeenSet; }
    inline void SetFinishedAt(const Aws::Utils::DateTime& value) { m_finishedAtHasBeenSet = true; m_finishedAt = value; }
    inline void SetFinishedAt(Aws::Utils::DateTime&& value) { m_finishedAtHasBeenSet = true; m_finishedAt = std::move(value); }
    inline ServiceDeploymentBrief& WithFinishedAt(const Aws::Utils::DateTime& value) { SetFinishedAt(value); return *this;}
    inline ServiceDeploymentBrief& WithFinishedAt(Aws::Utils::DateTime&& value) { SetFinishedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the service revision being deplyed.</p>
     */
    inline const Aws::String& GetTargetServiceRevisionArn() const{ return m_targetServiceRevisionArn; }
    inline bool TargetServiceRevisionArnHasBeenSet() const { return m_targetServiceRevisionArnHasBeenSet; }
    inline void SetTargetServiceRevisionArn(const Aws::String& value) { m_targetServiceRevisionArnHasBeenSet = true; m_targetServiceRevisionArn = value; }
    inline void SetTargetServiceRevisionArn(Aws::String&& value) { m_targetServiceRevisionArnHasBeenSet = true; m_targetServiceRevisionArn = std::move(value); }
    inline void SetTargetServiceRevisionArn(const char* value) { m_targetServiceRevisionArnHasBeenSet = true; m_targetServiceRevisionArn.assign(value); }
    inline ServiceDeploymentBrief& WithTargetServiceRevisionArn(const Aws::String& value) { SetTargetServiceRevisionArn(value); return *this;}
    inline ServiceDeploymentBrief& WithTargetServiceRevisionArn(Aws::String&& value) { SetTargetServiceRevisionArn(std::move(value)); return *this;}
    inline ServiceDeploymentBrief& WithTargetServiceRevisionArn(const char* value) { SetTargetServiceRevisionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the service deployment</p>
     */
    inline const ServiceDeploymentStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const ServiceDeploymentStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(ServiceDeploymentStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline ServiceDeploymentBrief& WithStatus(const ServiceDeploymentStatus& value) { SetStatus(value); return *this;}
    inline ServiceDeploymentBrief& WithStatus(ServiceDeploymentStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about why the service deployment is in the current status. For
     * example, the circuit breaker detected a deployment failure.</p>
     */
    inline const Aws::String& GetStatusReason() const{ return m_statusReason; }
    inline bool StatusReasonHasBeenSet() const { return m_statusReasonHasBeenSet; }
    inline void SetStatusReason(const Aws::String& value) { m_statusReasonHasBeenSet = true; m_statusReason = value; }
    inline void SetStatusReason(Aws::String&& value) { m_statusReasonHasBeenSet = true; m_statusReason = std::move(value); }
    inline void SetStatusReason(const char* value) { m_statusReasonHasBeenSet = true; m_statusReason.assign(value); }
    inline ServiceDeploymentBrief& WithStatusReason(const Aws::String& value) { SetStatusReason(value); return *this;}
    inline ServiceDeploymentBrief& WithStatusReason(Aws::String&& value) { SetStatusReason(std::move(value)); return *this;}
    inline ServiceDeploymentBrief& WithStatusReason(const char* value) { SetStatusReason(value); return *this;}
    ///@}
  private:

    Aws::String m_serviceDeploymentArn;
    bool m_serviceDeploymentArnHasBeenSet = false;

    Aws::String m_serviceArn;
    bool m_serviceArnHasBeenSet = false;

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet = false;

    Aws::Utils::DateTime m_startedAt;
    bool m_startedAtHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_finishedAt;
    bool m_finishedAtHasBeenSet = false;

    Aws::String m_targetServiceRevisionArn;
    bool m_targetServiceRevisionArnHasBeenSet = false;

    ServiceDeploymentStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusReason;
    bool m_statusReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
