/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/proton/Proton_EXPORTS.h>
#include <aws/proton/ProtonRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/proton/model/ResourceDeploymentStatus.h>
#include <aws/proton/model/Output.h>
#include <utility>

namespace Aws
{
namespace Proton
{
namespace Model
{

  /**
   */
  class NotifyResourceDeploymentStatusChangeRequest : public ProtonRequest
  {
  public:
    AWS_PROTON_API NotifyResourceDeploymentStatusChangeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "NotifyResourceDeploymentStatusChange"; }

    AWS_PROTON_API Aws::String SerializePayload() const override;

    AWS_PROTON_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The deployment ID for your provisioned resource.</p>
     */
    inline const Aws::String& GetDeploymentId() const{ return m_deploymentId; }

    /**
     * <p>The deployment ID for your provisioned resource.</p>
     */
    inline bool DeploymentIdHasBeenSet() const { return m_deploymentIdHasBeenSet; }

    /**
     * <p>The deployment ID for your provisioned resource.</p>
     */
    inline void SetDeploymentId(const Aws::String& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = value; }

    /**
     * <p>The deployment ID for your provisioned resource.</p>
     */
    inline void SetDeploymentId(Aws::String&& value) { m_deploymentIdHasBeenSet = true; m_deploymentId = std::move(value); }

    /**
     * <p>The deployment ID for your provisioned resource.</p>
     */
    inline void SetDeploymentId(const char* value) { m_deploymentIdHasBeenSet = true; m_deploymentId.assign(value); }

    /**
     * <p>The deployment ID for your provisioned resource.</p>
     */
    inline NotifyResourceDeploymentStatusChangeRequest& WithDeploymentId(const Aws::String& value) { SetDeploymentId(value); return *this;}

    /**
     * <p>The deployment ID for your provisioned resource.</p>
     */
    inline NotifyResourceDeploymentStatusChangeRequest& WithDeploymentId(Aws::String&& value) { SetDeploymentId(std::move(value)); return *this;}

    /**
     * <p>The deployment ID for your provisioned resource.</p>
     */
    inline NotifyResourceDeploymentStatusChangeRequest& WithDeploymentId(const char* value) { SetDeploymentId(value); return *this;}


    /**
     * <p>The provisioned resource state change detail data that's returned by
     * Proton.</p>
     */
    inline const Aws::Vector<Output>& GetOutputs() const{ return m_outputs; }

    /**
     * <p>The provisioned resource state change detail data that's returned by
     * Proton.</p>
     */
    inline bool OutputsHasBeenSet() const { return m_outputsHasBeenSet; }

    /**
     * <p>The provisioned resource state change detail data that's returned by
     * Proton.</p>
     */
    inline void SetOutputs(const Aws::Vector<Output>& value) { m_outputsHasBeenSet = true; m_outputs = value; }

    /**
     * <p>The provisioned resource state change detail data that's returned by
     * Proton.</p>
     */
    inline void SetOutputs(Aws::Vector<Output>&& value) { m_outputsHasBeenSet = true; m_outputs = std::move(value); }

    /**
     * <p>The provisioned resource state change detail data that's returned by
     * Proton.</p>
     */
    inline NotifyResourceDeploymentStatusChangeRequest& WithOutputs(const Aws::Vector<Output>& value) { SetOutputs(value); return *this;}

    /**
     * <p>The provisioned resource state change detail data that's returned by
     * Proton.</p>
     */
    inline NotifyResourceDeploymentStatusChangeRequest& WithOutputs(Aws::Vector<Output>&& value) { SetOutputs(std::move(value)); return *this;}

    /**
     * <p>The provisioned resource state change detail data that's returned by
     * Proton.</p>
     */
    inline NotifyResourceDeploymentStatusChangeRequest& AddOutputs(const Output& value) { m_outputsHasBeenSet = true; m_outputs.push_back(value); return *this; }

    /**
     * <p>The provisioned resource state change detail data that's returned by
     * Proton.</p>
     */
    inline NotifyResourceDeploymentStatusChangeRequest& AddOutputs(Output&& value) { m_outputsHasBeenSet = true; m_outputs.push_back(std::move(value)); return *this; }


    /**
     * <p>The provisioned resource Amazon Resource Name (ARN).</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The provisioned resource Amazon Resource Name (ARN).</p>
     */
    inline bool ResourceArnHasBeenSet() const { return m_resourceArnHasBeenSet; }

    /**
     * <p>The provisioned resource Amazon Resource Name (ARN).</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArnHasBeenSet = true; m_resourceArn = value; }

    /**
     * <p>The provisioned resource Amazon Resource Name (ARN).</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArnHasBeenSet = true; m_resourceArn = std::move(value); }

    /**
     * <p>The provisioned resource Amazon Resource Name (ARN).</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArnHasBeenSet = true; m_resourceArn.assign(value); }

    /**
     * <p>The provisioned resource Amazon Resource Name (ARN).</p>
     */
    inline NotifyResourceDeploymentStatusChangeRequest& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The provisioned resource Amazon Resource Name (ARN).</p>
     */
    inline NotifyResourceDeploymentStatusChangeRequest& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The provisioned resource Amazon Resource Name (ARN).</p>
     */
    inline NotifyResourceDeploymentStatusChangeRequest& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    /**
     * <p>The status of your provisioned resource.</p>
     */
    inline const ResourceDeploymentStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of your provisioned resource.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of your provisioned resource.</p>
     */
    inline void SetStatus(const ResourceDeploymentStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of your provisioned resource.</p>
     */
    inline void SetStatus(ResourceDeploymentStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of your provisioned resource.</p>
     */
    inline NotifyResourceDeploymentStatusChangeRequest& WithStatus(const ResourceDeploymentStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of your provisioned resource.</p>
     */
    inline NotifyResourceDeploymentStatusChangeRequest& WithStatus(ResourceDeploymentStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The deployment status message for your provisioned resource.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>The deployment status message for your provisioned resource.</p>
     */
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }

    /**
     * <p>The deployment status message for your provisioned resource.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }

    /**
     * <p>The deployment status message for your provisioned resource.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }

    /**
     * <p>The deployment status message for your provisioned resource.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }

    /**
     * <p>The deployment status message for your provisioned resource.</p>
     */
    inline NotifyResourceDeploymentStatusChangeRequest& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>The deployment status message for your provisioned resource.</p>
     */
    inline NotifyResourceDeploymentStatusChangeRequest& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>The deployment status message for your provisioned resource.</p>
     */
    inline NotifyResourceDeploymentStatusChangeRequest& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}

  private:

    Aws::String m_deploymentId;
    bool m_deploymentIdHasBeenSet = false;

    Aws::Vector<Output> m_outputs;
    bool m_outputsHasBeenSet = false;

    Aws::String m_resourceArn;
    bool m_resourceArnHasBeenSet = false;

    ResourceDeploymentStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace Proton
} // namespace Aws
