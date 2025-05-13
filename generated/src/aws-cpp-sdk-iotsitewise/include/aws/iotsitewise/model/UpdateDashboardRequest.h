/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

  /**
   */
  class UpdateDashboardRequest : public IoTSiteWiseRequest
  {
  public:
    AWS_IOTSITEWISE_API UpdateDashboardRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDashboard"; }

    AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the dashboard to update.</p>
     */
    inline const Aws::String& GetDashboardId() const { return m_dashboardId; }
    inline bool DashboardIdHasBeenSet() const { return m_dashboardIdHasBeenSet; }
    template<typename DashboardIdT = Aws::String>
    void SetDashboardId(DashboardIdT&& value) { m_dashboardIdHasBeenSet = true; m_dashboardId = std::forward<DashboardIdT>(value); }
    template<typename DashboardIdT = Aws::String>
    UpdateDashboardRequest& WithDashboardId(DashboardIdT&& value) { SetDashboardId(std::forward<DashboardIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A new friendly name for the dashboard.</p>
     */
    inline const Aws::String& GetDashboardName() const { return m_dashboardName; }
    inline bool DashboardNameHasBeenSet() const { return m_dashboardNameHasBeenSet; }
    template<typename DashboardNameT = Aws::String>
    void SetDashboardName(DashboardNameT&& value) { m_dashboardNameHasBeenSet = true; m_dashboardName = std::forward<DashboardNameT>(value); }
    template<typename DashboardNameT = Aws::String>
    UpdateDashboardRequest& WithDashboardName(DashboardNameT&& value) { SetDashboardName(std::forward<DashboardNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A new description for the dashboard.</p>
     */
    inline const Aws::String& GetDashboardDescription() const { return m_dashboardDescription; }
    inline bool DashboardDescriptionHasBeenSet() const { return m_dashboardDescriptionHasBeenSet; }
    template<typename DashboardDescriptionT = Aws::String>
    void SetDashboardDescription(DashboardDescriptionT&& value) { m_dashboardDescriptionHasBeenSet = true; m_dashboardDescription = std::forward<DashboardDescriptionT>(value); }
    template<typename DashboardDescriptionT = Aws::String>
    UpdateDashboardRequest& WithDashboardDescription(DashboardDescriptionT&& value) { SetDashboardDescription(std::forward<DashboardDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new dashboard definition, as specified in a JSON literal.</p> <ul> <li>
     * <p>IoT SiteWise Monitor (Classic) see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/create-dashboards-using-aws-cli.html">Create
     * dashboards (CLI)</a> </p> </li> <li> <p>IoT SiteWise Monitor (AI-aware) see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/create-dashboards-ai-dashboard-cli.html">Create
     * dashboards (CLI)</a> </p> </li> </ul> <p>in the <i>IoT SiteWise User Guide</i>
     * </p>
     */
    inline const Aws::String& GetDashboardDefinition() const { return m_dashboardDefinition; }
    inline bool DashboardDefinitionHasBeenSet() const { return m_dashboardDefinitionHasBeenSet; }
    template<typename DashboardDefinitionT = Aws::String>
    void SetDashboardDefinition(DashboardDefinitionT&& value) { m_dashboardDefinitionHasBeenSet = true; m_dashboardDefinition = std::forward<DashboardDefinitionT>(value); }
    template<typename DashboardDefinitionT = Aws::String>
    UpdateDashboardRequest& WithDashboardDefinition(DashboardDefinitionT&& value) { SetDashboardDefinition(std::forward<DashboardDefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique case-sensitive identifier that you can provide to ensure the
     * idempotency of the request. Don't reuse this client token if a new idempotent
     * request is required.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    UpdateDashboardRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dashboardId;
    bool m_dashboardIdHasBeenSet = false;

    Aws::String m_dashboardName;
    bool m_dashboardNameHasBeenSet = false;

    Aws::String m_dashboardDescription;
    bool m_dashboardDescriptionHasBeenSet = false;

    Aws::String m_dashboardDefinition;
    bool m_dashboardDefinitionHasBeenSet = false;

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
