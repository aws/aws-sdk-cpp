﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/amp/PrometheusServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Array.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace PrometheusService
{
namespace Model
{

  /**
   * <p>Represents the input of a <code>CreateAlertManagerDefinition</code>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/amp-2020-08-01/CreateAlertManagerDefinitionRequest">AWS
   * API Reference</a></p>
   */
  class CreateAlertManagerDefinitionRequest : public PrometheusServiceRequest
  {
  public:
    AWS_PROMETHEUSSERVICE_API CreateAlertManagerDefinitionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAlertManagerDefinition"; }

    AWS_PROMETHEUSSERVICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A unique identifier that you can provide to ensure the idempotency of the
     * request. Case-sensitive.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateAlertManagerDefinitionRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateAlertManagerDefinitionRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateAlertManagerDefinitionRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The alert manager definition to add. A base64-encoded version of the YAML
     * alert manager definition file.</p> <p>For details about the alert manager
     * definition, see <a
     * href="https://docs.aws.amazon.com/prometheus/latest/APIReference/yaml-AlertManagerDefinitionData.html">AlertManagedDefinitionData</a>.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetData() const{ return m_data; }
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }
    inline void SetData(const Aws::Utils::ByteBuffer& value) { m_dataHasBeenSet = true; m_data = value; }
    inline void SetData(Aws::Utils::ByteBuffer&& value) { m_dataHasBeenSet = true; m_data = std::move(value); }
    inline CreateAlertManagerDefinitionRequest& WithData(const Aws::Utils::ByteBuffer& value) { SetData(value); return *this;}
    inline CreateAlertManagerDefinitionRequest& WithData(Aws::Utils::ByteBuffer&& value) { SetData(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the workspace to add the alert manager definition to.</p>
     */
    inline const Aws::String& GetWorkspaceId() const{ return m_workspaceId; }
    inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }
    inline void SetWorkspaceId(const Aws::String& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = value; }
    inline void SetWorkspaceId(Aws::String&& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = std::move(value); }
    inline void SetWorkspaceId(const char* value) { m_workspaceIdHasBeenSet = true; m_workspaceId.assign(value); }
    inline CreateAlertManagerDefinitionRequest& WithWorkspaceId(const Aws::String& value) { SetWorkspaceId(value); return *this;}
    inline CreateAlertManagerDefinitionRequest& WithWorkspaceId(Aws::String&& value) { SetWorkspaceId(std::move(value)); return *this;}
    inline CreateAlertManagerDefinitionRequest& WithWorkspaceId(const char* value) { SetWorkspaceId(value); return *this;}
    ///@}
  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Utils::ByteBuffer m_data;
    bool m_dataHasBeenSet = false;

    Aws::String m_workspaceId;
    bool m_workspaceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
