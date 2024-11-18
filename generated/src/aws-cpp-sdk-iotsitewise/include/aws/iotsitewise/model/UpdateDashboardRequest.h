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
    AWS_IOTSITEWISE_API UpdateDashboardRequest();

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
    inline const Aws::String& GetDashboardId() const{ return m_dashboardId; }
    inline bool DashboardIdHasBeenSet() const { return m_dashboardIdHasBeenSet; }
    inline void SetDashboardId(const Aws::String& value) { m_dashboardIdHasBeenSet = true; m_dashboardId = value; }
    inline void SetDashboardId(Aws::String&& value) { m_dashboardIdHasBeenSet = true; m_dashboardId = std::move(value); }
    inline void SetDashboardId(const char* value) { m_dashboardIdHasBeenSet = true; m_dashboardId.assign(value); }
    inline UpdateDashboardRequest& WithDashboardId(const Aws::String& value) { SetDashboardId(value); return *this;}
    inline UpdateDashboardRequest& WithDashboardId(Aws::String&& value) { SetDashboardId(std::move(value)); return *this;}
    inline UpdateDashboardRequest& WithDashboardId(const char* value) { SetDashboardId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A new friendly name for the dashboard.</p>
     */
    inline const Aws::String& GetDashboardName() const{ return m_dashboardName; }
    inline bool DashboardNameHasBeenSet() const { return m_dashboardNameHasBeenSet; }
    inline void SetDashboardName(const Aws::String& value) { m_dashboardNameHasBeenSet = true; m_dashboardName = value; }
    inline void SetDashboardName(Aws::String&& value) { m_dashboardNameHasBeenSet = true; m_dashboardName = std::move(value); }
    inline void SetDashboardName(const char* value) { m_dashboardNameHasBeenSet = true; m_dashboardName.assign(value); }
    inline UpdateDashboardRequest& WithDashboardName(const Aws::String& value) { SetDashboardName(value); return *this;}
    inline UpdateDashboardRequest& WithDashboardName(Aws::String&& value) { SetDashboardName(std::move(value)); return *this;}
    inline UpdateDashboardRequest& WithDashboardName(const char* value) { SetDashboardName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A new description for the dashboard.</p>
     */
    inline const Aws::String& GetDashboardDescription() const{ return m_dashboardDescription; }
    inline bool DashboardDescriptionHasBeenSet() const { return m_dashboardDescriptionHasBeenSet; }
    inline void SetDashboardDescription(const Aws::String& value) { m_dashboardDescriptionHasBeenSet = true; m_dashboardDescription = value; }
    inline void SetDashboardDescription(Aws::String&& value) { m_dashboardDescriptionHasBeenSet = true; m_dashboardDescription = std::move(value); }
    inline void SetDashboardDescription(const char* value) { m_dashboardDescriptionHasBeenSet = true; m_dashboardDescription.assign(value); }
    inline UpdateDashboardRequest& WithDashboardDescription(const Aws::String& value) { SetDashboardDescription(value); return *this;}
    inline UpdateDashboardRequest& WithDashboardDescription(Aws::String&& value) { SetDashboardDescription(std::move(value)); return *this;}
    inline UpdateDashboardRequest& WithDashboardDescription(const char* value) { SetDashboardDescription(value); return *this;}
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
    inline const Aws::String& GetDashboardDefinition() const{ return m_dashboardDefinition; }
    inline bool DashboardDefinitionHasBeenSet() const { return m_dashboardDefinitionHasBeenSet; }
    inline void SetDashboardDefinition(const Aws::String& value) { m_dashboardDefinitionHasBeenSet = true; m_dashboardDefinition = value; }
    inline void SetDashboardDefinition(Aws::String&& value) { m_dashboardDefinitionHasBeenSet = true; m_dashboardDefinition = std::move(value); }
    inline void SetDashboardDefinition(const char* value) { m_dashboardDefinitionHasBeenSet = true; m_dashboardDefinition.assign(value); }
    inline UpdateDashboardRequest& WithDashboardDefinition(const Aws::String& value) { SetDashboardDefinition(value); return *this;}
    inline UpdateDashboardRequest& WithDashboardDefinition(Aws::String&& value) { SetDashboardDefinition(std::move(value)); return *this;}
    inline UpdateDashboardRequest& WithDashboardDefinition(const char* value) { SetDashboardDefinition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique case-sensitive identifier that you can provide to ensure the
     * idempotency of the request. Don't reuse this client token if a new idempotent
     * request is required.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline UpdateDashboardRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline UpdateDashboardRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline UpdateDashboardRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
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

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
