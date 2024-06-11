﻿/**
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
  class DeleteIntegrationAssociationRequest : public ConnectRequest
  {
  public:
    AWS_CONNECT_API DeleteIntegrationAssociationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteIntegrationAssociation"; }

    AWS_CONNECT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Connect instance. You can <a
     * href="https://docs.aws.amazon.com/connect/latest/adminguide/find-instance-arn.html">find
     * the instance ID</a> in the Amazon Resource Name (ARN) of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }
    inline DeleteIntegrationAssociationRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}
    inline DeleteIntegrationAssociationRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}
    inline DeleteIntegrationAssociationRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the integration association.</p>
     */
    inline const Aws::String& GetIntegrationAssociationId() const{ return m_integrationAssociationId; }
    inline bool IntegrationAssociationIdHasBeenSet() const { return m_integrationAssociationIdHasBeenSet; }
    inline void SetIntegrationAssociationId(const Aws::String& value) { m_integrationAssociationIdHasBeenSet = true; m_integrationAssociationId = value; }
    inline void SetIntegrationAssociationId(Aws::String&& value) { m_integrationAssociationIdHasBeenSet = true; m_integrationAssociationId = std::move(value); }
    inline void SetIntegrationAssociationId(const char* value) { m_integrationAssociationIdHasBeenSet = true; m_integrationAssociationId.assign(value); }
    inline DeleteIntegrationAssociationRequest& WithIntegrationAssociationId(const Aws::String& value) { SetIntegrationAssociationId(value); return *this;}
    inline DeleteIntegrationAssociationRequest& WithIntegrationAssociationId(Aws::String&& value) { SetIntegrationAssociationId(std::move(value)); return *this;}
    inline DeleteIntegrationAssociationRequest& WithIntegrationAssociationId(const char* value) { SetIntegrationAssociationId(value); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    Aws::String m_integrationAssociationId;
    bool m_integrationAssociationIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
