/**
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
    AWS_PROMETHEUSSERVICE_API CreateAlertManagerDefinitionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAlertManagerDefinition"; }

    AWS_PROMETHEUSSERVICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the workspace to add the alert manager definition to.</p>
     */
    inline const Aws::String& GetWorkspaceId() const { return m_workspaceId; }
    inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }
    template<typename WorkspaceIdT = Aws::String>
    void SetWorkspaceId(WorkspaceIdT&& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = std::forward<WorkspaceIdT>(value); }
    template<typename WorkspaceIdT = Aws::String>
    CreateAlertManagerDefinitionRequest& WithWorkspaceId(WorkspaceIdT&& value) { SetWorkspaceId(std::forward<WorkspaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The alert manager definition to add. A base64-encoded version of the YAML
     * alert manager definition file.</p> <p>For details about the alert manager
     * definition, see <a
     * href="https://docs.aws.amazon.com/prometheus/latest/APIReference/yaml-AlertManagerDefinitionData.html">AlertManagedDefinitionData</a>.</p>
     */
    inline const Aws::Utils::ByteBuffer& GetData() const { return m_data; }
    inline bool DataHasBeenSet() const { return m_dataHasBeenSet; }
    template<typename DataT = Aws::Utils::ByteBuffer>
    void SetData(DataT&& value) { m_dataHasBeenSet = true; m_data = std::forward<DataT>(value); }
    template<typename DataT = Aws::Utils::ByteBuffer>
    CreateAlertManagerDefinitionRequest& WithData(DataT&& value) { SetData(std::forward<DataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique identifier that you can provide to ensure the idempotency of the
     * request. Case-sensitive.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateAlertManagerDefinitionRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_workspaceId;
    bool m_workspaceIdHasBeenSet = false;

    Aws::Utils::ByteBuffer m_data{};
    bool m_dataHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
