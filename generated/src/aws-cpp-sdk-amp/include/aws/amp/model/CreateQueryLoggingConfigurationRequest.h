/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/amp/PrometheusService_EXPORTS.h>
#include <aws/amp/PrometheusServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/amp/model/LoggingDestination.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace PrometheusService
{
namespace Model
{

  /**
   */
  class CreateQueryLoggingConfigurationRequest : public PrometheusServiceRequest
  {
  public:
    AWS_PROMETHEUSSERVICE_API CreateQueryLoggingConfigurationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateQueryLoggingConfiguration"; }

    AWS_PROMETHEUSSERVICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the workspace for which to create the query logging
     * configuration.</p>
     */
    inline const Aws::String& GetWorkspaceId() const { return m_workspaceId; }
    inline bool WorkspaceIdHasBeenSet() const { return m_workspaceIdHasBeenSet; }
    template<typename WorkspaceIdT = Aws::String>
    void SetWorkspaceId(WorkspaceIdT&& value) { m_workspaceIdHasBeenSet = true; m_workspaceId = std::forward<WorkspaceIdT>(value); }
    template<typename WorkspaceIdT = Aws::String>
    CreateQueryLoggingConfigurationRequest& WithWorkspaceId(WorkspaceIdT&& value) { SetWorkspaceId(std::forward<WorkspaceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The destinations where query logs will be sent. Only CloudWatch Logs
     * destination is supported. The list must contain exactly one element.</p>
     */
    inline const Aws::Vector<LoggingDestination>& GetDestinations() const { return m_destinations; }
    inline bool DestinationsHasBeenSet() const { return m_destinationsHasBeenSet; }
    template<typename DestinationsT = Aws::Vector<LoggingDestination>>
    void SetDestinations(DestinationsT&& value) { m_destinationsHasBeenSet = true; m_destinations = std::forward<DestinationsT>(value); }
    template<typename DestinationsT = Aws::Vector<LoggingDestination>>
    CreateQueryLoggingConfigurationRequest& WithDestinations(DestinationsT&& value) { SetDestinations(std::forward<DestinationsT>(value)); return *this;}
    template<typename DestinationsT = LoggingDestination>
    CreateQueryLoggingConfigurationRequest& AddDestinations(DestinationsT&& value) { m_destinationsHasBeenSet = true; m_destinations.emplace_back(std::forward<DestinationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>(Optional) A unique, case-sensitive identifier that you can provide to ensure
     * the idempotency of the request.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateQueryLoggingConfigurationRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_workspaceId;
    bool m_workspaceIdHasBeenSet = false;

    Aws::Vector<LoggingDestination> m_destinations;
    bool m_destinationsHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
