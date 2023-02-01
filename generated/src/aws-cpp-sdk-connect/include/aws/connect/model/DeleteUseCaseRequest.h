/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/ConnectRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Connect
{
namespace Model
{

  /**
   */
  class DeleteUseCaseRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API DeleteUseCaseRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteUseCase"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline DeleteUseCaseRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline DeleteUseCaseRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Connect instance. You can find the instanceId in
     * the ARN of the instance.</p>
     */
    inline DeleteUseCaseRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The identifier for the integration association.</p>
     */
    inline const Aws::String& GetIntegrationAssociationId() const{ return m_integrationAssociationId; }

    /**
     * <p>The identifier for the integration association.</p>
     */
    inline bool IntegrationAssociationIdHasBeenSet() const { return m_integrationAssociationIdHasBeenSet; }

    /**
     * <p>The identifier for the integration association.</p>
     */
    inline void SetIntegrationAssociationId(const Aws::String& value) { m_integrationAssociationIdHasBeenSet = true; m_integrationAssociationId = value; }

    /**
     * <p>The identifier for the integration association.</p>
     */
    inline void SetIntegrationAssociationId(Aws::String&& value) { m_integrationAssociationIdHasBeenSet = true; m_integrationAssociationId = std::move(value); }

    /**
     * <p>The identifier for the integration association.</p>
     */
    inline void SetIntegrationAssociationId(const char* value) { m_integrationAssociationIdHasBeenSet = true; m_integrationAssociationId.assign(value); }

    /**
     * <p>The identifier for the integration association.</p>
     */
    inline DeleteUseCaseRequest& WithIntegrationAssociationId(const Aws::String& value) { SetIntegrationAssociationId(value); return *this;}

    /**
     * <p>The identifier for the integration association.</p>
     */
    inline DeleteUseCaseRequest& WithIntegrationAssociationId(Aws::String&& value) { SetIntegrationAssociationId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the integration association.</p>
     */
    inline DeleteUseCaseRequest& WithIntegrationAssociationId(const char* value) { SetIntegrationAssociationId(value); return *this;}


    /**
     * <p>The identifier for the use case.</p>
     */
    inline const Aws::String& GetUseCaseId() const{ return m_useCaseId; }

    /**
     * <p>The identifier for the use case.</p>
     */
    inline bool UseCaseIdHasBeenSet() const { return m_useCaseIdHasBeenSet; }

    /**
     * <p>The identifier for the use case.</p>
     */
    inline void SetUseCaseId(const Aws::String& value) { m_useCaseIdHasBeenSet = true; m_useCaseId = value; }

    /**
     * <p>The identifier for the use case.</p>
     */
    inline void SetUseCaseId(Aws::String&& value) { m_useCaseIdHasBeenSet = true; m_useCaseId = std::move(value); }

    /**
     * <p>The identifier for the use case.</p>
     */
    inline void SetUseCaseId(const char* value) { m_useCaseIdHasBeenSet = true; m_useCaseId.assign(value); }

    /**
     * <p>The identifier for the use case.</p>
     */
    inline DeleteUseCaseRequest& WithUseCaseId(const Aws::String& value) { SetUseCaseId(value); return *this;}

    /**
     * <p>The identifier for the use case.</p>
     */
    inline DeleteUseCaseRequest& WithUseCaseId(Aws::String&& value) { SetUseCaseId(std::move(value)); return *this;}

    /**
     * <p>The identifier for the use case.</p>
     */
    inline DeleteUseCaseRequest& WithUseCaseId(const char* value) { SetUseCaseId(value); return *this;}

  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_integrationAssociationId;
    bool m_integrationAssociationIdHasBeenSet = false;

    Aws::String m_useCaseId;
    bool m_useCaseIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
