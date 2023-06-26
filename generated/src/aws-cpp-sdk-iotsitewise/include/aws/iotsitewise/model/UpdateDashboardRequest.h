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


    /**
     * <p>The ID of the dashboard to update.</p>
     */
    inline const Aws::String& GetDashboardId() const{ return m_dashboardId; }

    /**
     * <p>The ID of the dashboard to update.</p>
     */
    inline bool DashboardIdHasBeenSet() const { return m_dashboardIdHasBeenSet; }

    /**
     * <p>The ID of the dashboard to update.</p>
     */
    inline void SetDashboardId(const Aws::String& value) { m_dashboardIdHasBeenSet = true; m_dashboardId = value; }

    /**
     * <p>The ID of the dashboard to update.</p>
     */
    inline void SetDashboardId(Aws::String&& value) { m_dashboardIdHasBeenSet = true; m_dashboardId = std::move(value); }

    /**
     * <p>The ID of the dashboard to update.</p>
     */
    inline void SetDashboardId(const char* value) { m_dashboardIdHasBeenSet = true; m_dashboardId.assign(value); }

    /**
     * <p>The ID of the dashboard to update.</p>
     */
    inline UpdateDashboardRequest& WithDashboardId(const Aws::String& value) { SetDashboardId(value); return *this;}

    /**
     * <p>The ID of the dashboard to update.</p>
     */
    inline UpdateDashboardRequest& WithDashboardId(Aws::String&& value) { SetDashboardId(std::move(value)); return *this;}

    /**
     * <p>The ID of the dashboard to update.</p>
     */
    inline UpdateDashboardRequest& WithDashboardId(const char* value) { SetDashboardId(value); return *this;}


    /**
     * <p>A new friendly name for the dashboard.</p>
     */
    inline const Aws::String& GetDashboardName() const{ return m_dashboardName; }

    /**
     * <p>A new friendly name for the dashboard.</p>
     */
    inline bool DashboardNameHasBeenSet() const { return m_dashboardNameHasBeenSet; }

    /**
     * <p>A new friendly name for the dashboard.</p>
     */
    inline void SetDashboardName(const Aws::String& value) { m_dashboardNameHasBeenSet = true; m_dashboardName = value; }

    /**
     * <p>A new friendly name for the dashboard.</p>
     */
    inline void SetDashboardName(Aws::String&& value) { m_dashboardNameHasBeenSet = true; m_dashboardName = std::move(value); }

    /**
     * <p>A new friendly name for the dashboard.</p>
     */
    inline void SetDashboardName(const char* value) { m_dashboardNameHasBeenSet = true; m_dashboardName.assign(value); }

    /**
     * <p>A new friendly name for the dashboard.</p>
     */
    inline UpdateDashboardRequest& WithDashboardName(const Aws::String& value) { SetDashboardName(value); return *this;}

    /**
     * <p>A new friendly name for the dashboard.</p>
     */
    inline UpdateDashboardRequest& WithDashboardName(Aws::String&& value) { SetDashboardName(std::move(value)); return *this;}

    /**
     * <p>A new friendly name for the dashboard.</p>
     */
    inline UpdateDashboardRequest& WithDashboardName(const char* value) { SetDashboardName(value); return *this;}


    /**
     * <p>A new description for the dashboard.</p>
     */
    inline const Aws::String& GetDashboardDescription() const{ return m_dashboardDescription; }

    /**
     * <p>A new description for the dashboard.</p>
     */
    inline bool DashboardDescriptionHasBeenSet() const { return m_dashboardDescriptionHasBeenSet; }

    /**
     * <p>A new description for the dashboard.</p>
     */
    inline void SetDashboardDescription(const Aws::String& value) { m_dashboardDescriptionHasBeenSet = true; m_dashboardDescription = value; }

    /**
     * <p>A new description for the dashboard.</p>
     */
    inline void SetDashboardDescription(Aws::String&& value) { m_dashboardDescriptionHasBeenSet = true; m_dashboardDescription = std::move(value); }

    /**
     * <p>A new description for the dashboard.</p>
     */
    inline void SetDashboardDescription(const char* value) { m_dashboardDescriptionHasBeenSet = true; m_dashboardDescription.assign(value); }

    /**
     * <p>A new description for the dashboard.</p>
     */
    inline UpdateDashboardRequest& WithDashboardDescription(const Aws::String& value) { SetDashboardDescription(value); return *this;}

    /**
     * <p>A new description for the dashboard.</p>
     */
    inline UpdateDashboardRequest& WithDashboardDescription(Aws::String&& value) { SetDashboardDescription(std::move(value)); return *this;}

    /**
     * <p>A new description for the dashboard.</p>
     */
    inline UpdateDashboardRequest& WithDashboardDescription(const char* value) { SetDashboardDescription(value); return *this;}


    /**
     * <p>The new dashboard definition, as specified in a JSON literal. For detailed
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/create-dashboards-using-aws-cli.html">Creating
     * dashboards (CLI)</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline const Aws::String& GetDashboardDefinition() const{ return m_dashboardDefinition; }

    /**
     * <p>The new dashboard definition, as specified in a JSON literal. For detailed
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/create-dashboards-using-aws-cli.html">Creating
     * dashboards (CLI)</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline bool DashboardDefinitionHasBeenSet() const { return m_dashboardDefinitionHasBeenSet; }

    /**
     * <p>The new dashboard definition, as specified in a JSON literal. For detailed
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/create-dashboards-using-aws-cli.html">Creating
     * dashboards (CLI)</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline void SetDashboardDefinition(const Aws::String& value) { m_dashboardDefinitionHasBeenSet = true; m_dashboardDefinition = value; }

    /**
     * <p>The new dashboard definition, as specified in a JSON literal. For detailed
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/create-dashboards-using-aws-cli.html">Creating
     * dashboards (CLI)</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline void SetDashboardDefinition(Aws::String&& value) { m_dashboardDefinitionHasBeenSet = true; m_dashboardDefinition = std::move(value); }

    /**
     * <p>The new dashboard definition, as specified in a JSON literal. For detailed
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/create-dashboards-using-aws-cli.html">Creating
     * dashboards (CLI)</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline void SetDashboardDefinition(const char* value) { m_dashboardDefinitionHasBeenSet = true; m_dashboardDefinition.assign(value); }

    /**
     * <p>The new dashboard definition, as specified in a JSON literal. For detailed
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/create-dashboards-using-aws-cli.html">Creating
     * dashboards (CLI)</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline UpdateDashboardRequest& WithDashboardDefinition(const Aws::String& value) { SetDashboardDefinition(value); return *this;}

    /**
     * <p>The new dashboard definition, as specified in a JSON literal. For detailed
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/create-dashboards-using-aws-cli.html">Creating
     * dashboards (CLI)</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline UpdateDashboardRequest& WithDashboardDefinition(Aws::String&& value) { SetDashboardDefinition(std::move(value)); return *this;}

    /**
     * <p>The new dashboard definition, as specified in a JSON literal. For detailed
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/create-dashboards-using-aws-cli.html">Creating
     * dashboards (CLI)</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline UpdateDashboardRequest& WithDashboardDefinition(const char* value) { SetDashboardDefinition(value); return *this;}


    /**
     * <p>A unique case-sensitive identifier that you can provide to ensure the
     * idempotency of the request. Don't reuse this client token if a new idempotent
     * request is required.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique case-sensitive identifier that you can provide to ensure the
     * idempotency of the request. Don't reuse this client token if a new idempotent
     * request is required.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique case-sensitive identifier that you can provide to ensure the
     * idempotency of the request. Don't reuse this client token if a new idempotent
     * request is required.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique case-sensitive identifier that you can provide to ensure the
     * idempotency of the request. Don't reuse this client token if a new idempotent
     * request is required.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique case-sensitive identifier that you can provide to ensure the
     * idempotency of the request. Don't reuse this client token if a new idempotent
     * request is required.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique case-sensitive identifier that you can provide to ensure the
     * idempotency of the request. Don't reuse this client token if a new idempotent
     * request is required.</p>
     */
    inline UpdateDashboardRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique case-sensitive identifier that you can provide to ensure the
     * idempotency of the request. Don't reuse this client token if a new idempotent
     * request is required.</p>
     */
    inline UpdateDashboardRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique case-sensitive identifier that you can provide to ensure the
     * idempotency of the request. Don't reuse this client token if a new idempotent
     * request is required.</p>
     */
    inline UpdateDashboardRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}

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
