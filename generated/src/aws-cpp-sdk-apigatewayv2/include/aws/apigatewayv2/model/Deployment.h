﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apigatewayv2/model/DeploymentStatus.h>
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
namespace ApiGatewayV2
{
namespace Model
{

  /**
   * <p>An immutable representation of an API that can be called by users. A
   * Deployment must be associated with a Stage for it to be callable over the
   * internet.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/Deployment">AWS
   * API Reference</a></p>
   */
  class Deployment
  {
  public:
    AWS_APIGATEWAYV2_API Deployment();
    AWS_APIGATEWAYV2_API Deployment(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAYV2_API Deployment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAYV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies whether a deployment was automatically released.</p>
     */
    inline bool GetAutoDeployed() const{ return m_autoDeployed; }
    inline bool AutoDeployedHasBeenSet() const { return m_autoDeployedHasBeenSet; }
    inline void SetAutoDeployed(bool value) { m_autoDeployedHasBeenSet = true; m_autoDeployed = value; }
    inline Deployment& WithAutoDeployed(bool value) { SetAutoDeployed(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when the Deployment resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDateHasBeenSet = true; m_createdDate = value; }
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::move(value); }
    inline Deployment& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}
    inline Deployment& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the deployment.</p>
     */
    inline const Aws::String& GetDeploymentId() const{ return m_deploymentId; }
    inline bool DeploymentIdHasBeenSet() const { return m_deploymentIdHasBeenSet; }
    inline void SetDeploymentId(const Aws::String& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = value; }
    inline void SetDeploymentId(Aws::String&& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = std::move(value); }
    inline void SetDeploymentId(const char* value) { m_deploymentIdHasBeenSet = true; m_deploymentId.assign(value); }
    inline Deployment& WithDeploymentId(const Aws::String& value) { SetDeploymentId(value); return *this;}
    inline Deployment& WithDeploymentId(Aws::String&& value) { SetDeploymentId(std::move(value)); return *this;}
    inline Deployment& WithDeploymentId(const char* value) { SetDeploymentId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the deployment: PENDING, FAILED, or SUCCEEDED.</p>
     */
    inline const DeploymentStatus& GetDeploymentStatus() const{ return m_deploymentStatus; }
    inline bool DeploymentStatusHasBeenSet() const { return m_deploymentStatusHasBeenSet; }
    inline void SetDeploymentStatus(const DeploymentStatus& value) { m_deploymentStatusHasBeenSet = true; m_deploymentStatus = value; }
    inline void SetDeploymentStatus(DeploymentStatus&& value) { m_deploymentStatusHasBeenSet = true; m_deploymentStatus = std::move(value); }
    inline Deployment& WithDeploymentStatus(const DeploymentStatus& value) { SetDeploymentStatus(value); return *this;}
    inline Deployment& WithDeploymentStatus(DeploymentStatus&& value) { SetDeploymentStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>May contain additional feedback on the status of an API deployment.</p>
     */
    inline const Aws::String& GetDeploymentStatusMessage() const{ return m_deploymentStatusMessage; }
    inline bool DeploymentStatusMessageHasBeenSet() const { return m_deploymentStatusMessageHasBeenSet; }
    inline void SetDeploymentStatusMessage(const Aws::String& value) { m_deploymentStatusMessageHasBeenSet = true; m_deploymentStatusMessage = value; }
    inline void SetDeploymentStatusMessage(Aws::String&& value) { m_deploymentStatusMessageHasBeenSet = true; m_deploymentStatusMessage = std::move(value); }
    inline void SetDeploymentStatusMessage(const char* value) { m_deploymentStatusMessageHasBeenSet = true; m_deploymentStatusMessage.assign(value); }
    inline Deployment& WithDeploymentStatusMessage(const Aws::String& value) { SetDeploymentStatusMessage(value); return *this;}
    inline Deployment& WithDeploymentStatusMessage(Aws::String&& value) { SetDeploymentStatusMessage(std::move(value)); return *this;}
    inline Deployment& WithDeploymentStatusMessage(const char* value) { SetDeploymentStatusMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description for the deployment.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline Deployment& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline Deployment& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline Deployment& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}
  private:

    bool m_autoDeployed;
    bool m_autoDeployedHasBeenSet = false;

    Aws::Utils::DateTime m_createdDate;
    bool m_createdDateHasBeenSet = false;

    Aws::String m_deploymentId;
    bool m_deploymentIdHasBeenSet = false;

    DeploymentStatus m_deploymentStatus;
    bool m_deploymentStatusHasBeenSet = false;

    Aws::String m_deploymentStatusMessage;
    bool m_deploymentStatusMessageHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
