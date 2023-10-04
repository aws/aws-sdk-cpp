/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/datazone/DataZone_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/datazone/model/DeploymentStatus.h>
#include <aws/datazone/model/DeploymentType.h>
#include <aws/datazone/model/EnvironmentError.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace DataZone
{
namespace Model
{

  /**
   * <p>The details of the last deployment of the environment.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/datazone-2018-05-10/Deployment">AWS
   * API Reference</a></p>
   */
  class Deployment
  {
  public:
    AWS_DATAZONE_API Deployment();
    AWS_DATAZONE_API Deployment(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Deployment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DATAZONE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier of the last deployment of the environment.</p>
     */
    inline const Aws::String& GetDeploymentId() const{ return m_deploymentId; }

    /**
     * <p>The identifier of the last deployment of the environment.</p>
     */
    inline bool DeploymentIdHasBeenSet() const { return m_deploymentIdHasBeenSet; }

    /**
     * <p>The identifier of the last deployment of the environment.</p>
     */
    inline void SetDeploymentId(const Aws::String& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = value; }

    /**
     * <p>The identifier of the last deployment of the environment.</p>
     */
    inline void SetDeploymentId(Aws::String&& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = std::move(value); }

    /**
     * <p>The identifier of the last deployment of the environment.</p>
     */
    inline void SetDeploymentId(const char* value) { m_deploymentIdHasBeenSet = true; m_deploymentId.assign(value); }

    /**
     * <p>The identifier of the last deployment of the environment.</p>
     */
    inline Deployment& WithDeploymentId(const Aws::String& value) { SetDeploymentId(value); return *this;}

    /**
     * <p>The identifier of the last deployment of the environment.</p>
     */
    inline Deployment& WithDeploymentId(Aws::String&& value) { SetDeploymentId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the last deployment of the environment.</p>
     */
    inline Deployment& WithDeploymentId(const char* value) { SetDeploymentId(value); return *this;}


    /**
     * <p>The status of the last deployment of the environment.</p>
     */
    inline const DeploymentStatus& GetDeploymentStatus() const{ return m_deploymentStatus; }

    /**
     * <p>The status of the last deployment of the environment.</p>
     */
    inline bool DeploymentStatusHasBeenSet() const { return m_deploymentStatusHasBeenSet; }

    /**
     * <p>The status of the last deployment of the environment.</p>
     */
    inline void SetDeploymentStatus(const DeploymentStatus& value) { m_deploymentStatusHasBeenSet = true; m_deploymentStatus = value; }

    /**
     * <p>The status of the last deployment of the environment.</p>
     */
    inline void SetDeploymentStatus(DeploymentStatus&& value) { m_deploymentStatusHasBeenSet = true; m_deploymentStatus = std::move(value); }

    /**
     * <p>The status of the last deployment of the environment.</p>
     */
    inline Deployment& WithDeploymentStatus(const DeploymentStatus& value) { SetDeploymentStatus(value); return *this;}

    /**
     * <p>The status of the last deployment of the environment.</p>
     */
    inline Deployment& WithDeploymentStatus(DeploymentStatus&& value) { SetDeploymentStatus(std::move(value)); return *this;}


    /**
     * <p>The type of the last deployment of the environment.</p>
     */
    inline const DeploymentType& GetDeploymentType() const{ return m_deploymentType; }

    /**
     * <p>The type of the last deployment of the environment.</p>
     */
    inline bool DeploymentTypeHasBeenSet() const { return m_deploymentTypeHasBeenSet; }

    /**
     * <p>The type of the last deployment of the environment.</p>
     */
    inline void SetDeploymentType(const DeploymentType& value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = value; }

    /**
     * <p>The type of the last deployment of the environment.</p>
     */
    inline void SetDeploymentType(DeploymentType&& value) { m_deploymentTypeHasBeenSet = true; m_deploymentType = std::move(value); }

    /**
     * <p>The type of the last deployment of the environment.</p>
     */
    inline Deployment& WithDeploymentType(const DeploymentType& value) { SetDeploymentType(value); return *this;}

    /**
     * <p>The type of the last deployment of the environment.</p>
     */
    inline Deployment& WithDeploymentType(DeploymentType&& value) { SetDeploymentType(std::move(value)); return *this;}


    /**
     * <p>The failure reason of the last deployment of the environment.</p>
     */
    inline const EnvironmentError& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>The failure reason of the last deployment of the environment.</p>
     */
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }

    /**
     * <p>The failure reason of the last deployment of the environment.</p>
     */
    inline void SetFailureReason(const EnvironmentError& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }

    /**
     * <p>The failure reason of the last deployment of the environment.</p>
     */
    inline void SetFailureReason(EnvironmentError&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }

    /**
     * <p>The failure reason of the last deployment of the environment.</p>
     */
    inline Deployment& WithFailureReason(const EnvironmentError& value) { SetFailureReason(value); return *this;}

    /**
     * <p>The failure reason of the last deployment of the environment.</p>
     */
    inline Deployment& WithFailureReason(EnvironmentError&& value) { SetFailureReason(std::move(value)); return *this;}


    /**
     * <p>Specifies whether the last deployment of the environment is complete.</p>
     */
    inline bool GetIsDeploymentComplete() const{ return m_isDeploymentComplete; }

    /**
     * <p>Specifies whether the last deployment of the environment is complete.</p>
     */
    inline bool IsDeploymentCompleteHasBeenSet() const { return m_isDeploymentCompleteHasBeenSet; }

    /**
     * <p>Specifies whether the last deployment of the environment is complete.</p>
     */
    inline void SetIsDeploymentComplete(bool value) { m_isDeploymentCompleteHasBeenSet = true; m_isDeploymentComplete = value; }

    /**
     * <p>Specifies whether the last deployment of the environment is complete.</p>
     */
    inline Deployment& WithIsDeploymentComplete(bool value) { SetIsDeploymentComplete(value); return *this;}


    /**
     * <p>The messages of the last deployment of the environment.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMessages() const{ return m_messages; }

    /**
     * <p>The messages of the last deployment of the environment.</p>
     */
    inline bool MessagesHasBeenSet() const { return m_messagesHasBeenSet; }

    /**
     * <p>The messages of the last deployment of the environment.</p>
     */
    inline void SetMessages(const Aws::Vector<Aws::String>& value) { m_messagesHasBeenSet = true; m_messages = value; }

    /**
     * <p>The messages of the last deployment of the environment.</p>
     */
    inline void SetMessages(Aws::Vector<Aws::String>&& value) { m_messagesHasBeenSet = true; m_messages = std::move(value); }

    /**
     * <p>The messages of the last deployment of the environment.</p>
     */
    inline Deployment& WithMessages(const Aws::Vector<Aws::String>& value) { SetMessages(value); return *this;}

    /**
     * <p>The messages of the last deployment of the environment.</p>
     */
    inline Deployment& WithMessages(Aws::Vector<Aws::String>&& value) { SetMessages(std::move(value)); return *this;}

    /**
     * <p>The messages of the last deployment of the environment.</p>
     */
    inline Deployment& AddMessages(const Aws::String& value) { m_messagesHasBeenSet = true; m_messages.push_back(value); return *this; }

    /**
     * <p>The messages of the last deployment of the environment.</p>
     */
    inline Deployment& AddMessages(Aws::String&& value) { m_messagesHasBeenSet = true; m_messages.push_back(std::move(value)); return *this; }

    /**
     * <p>The messages of the last deployment of the environment.</p>
     */
    inline Deployment& AddMessages(const char* value) { m_messagesHasBeenSet = true; m_messages.push_back(value); return *this; }

  private:

    Aws::String m_deploymentId;
    bool m_deploymentIdHasBeenSet = false;

    DeploymentStatus m_deploymentStatus;
    bool m_deploymentStatusHasBeenSet = false;

    DeploymentType m_deploymentType;
    bool m_deploymentTypeHasBeenSet = false;

    EnvironmentError m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    bool m_isDeploymentComplete;
    bool m_isDeploymentCompleteHasBeenSet = false;

    Aws::Vector<Aws::String> m_messages;
    bool m_messagesHasBeenSet = false;
  };

} // namespace Model
} // namespace DataZone
} // namespace Aws
