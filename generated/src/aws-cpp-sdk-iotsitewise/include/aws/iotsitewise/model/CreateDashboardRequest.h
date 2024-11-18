/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class CreateDashboardRequest : public IoTSiteWiseRequest
  {
  public:
    AWS_IOTSITEWISE_API CreateDashboardRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDashboard"; }

    AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the project in which to create the dashboard.</p>
     */
    inline const Aws::String& GetProjectId() const{ return m_projectId; }
    inline bool ProjectIdHasBeenSet() const { return m_projectIdHasBeenSet; }
    inline void SetProjectId(const Aws::String& value) { m_projectIdHasBeenSet = true; m_projectId = value; }
    inline void SetProjectId(Aws::String&& value) { m_projectIdHasBeenSet = true; m_projectId = std::move(value); }
    inline void SetProjectId(const char* value) { m_projectIdHasBeenSet = true; m_projectId.assign(value); }
    inline CreateDashboardRequest& WithProjectId(const Aws::String& value) { SetProjectId(value); return *this;}
    inline CreateDashboardRequest& WithProjectId(Aws::String&& value) { SetProjectId(std::move(value)); return *this;}
    inline CreateDashboardRequest& WithProjectId(const char* value) { SetProjectId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A friendly name for the dashboard.</p>
     */
    inline const Aws::String& GetDashboardName() const{ return m_dashboardName; }
    inline bool DashboardNameHasBeenSet() const { return m_dashboardNameHasBeenSet; }
    inline void SetDashboardName(const Aws::String& value) { m_dashboardNameHasBeenSet = true; m_dashboardName = value; }
    inline void SetDashboardName(Aws::String&& value) { m_dashboardNameHasBeenSet = true; m_dashboardName = std::move(value); }
    inline void SetDashboardName(const char* value) { m_dashboardNameHasBeenSet = true; m_dashboardName.assign(value); }
    inline CreateDashboardRequest& WithDashboardName(const Aws::String& value) { SetDashboardName(value); return *this;}
    inline CreateDashboardRequest& WithDashboardName(Aws::String&& value) { SetDashboardName(std::move(value)); return *this;}
    inline CreateDashboardRequest& WithDashboardName(const char* value) { SetDashboardName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the dashboard.</p>
     */
    inline const Aws::String& GetDashboardDescription() const{ return m_dashboardDescription; }
    inline bool DashboardDescriptionHasBeenSet() const { return m_dashboardDescriptionHasBeenSet; }
    inline void SetDashboardDescription(const Aws::String& value) { m_dashboardDescriptionHasBeenSet = true; m_dashboardDescription = value; }
    inline void SetDashboardDescription(Aws::String&& value) { m_dashboardDescriptionHasBeenSet = true; m_dashboardDescription = std::move(value); }
    inline void SetDashboardDescription(const char* value) { m_dashboardDescriptionHasBeenSet = true; m_dashboardDescription.assign(value); }
    inline CreateDashboardRequest& WithDashboardDescription(const Aws::String& value) { SetDashboardDescription(value); return *this;}
    inline CreateDashboardRequest& WithDashboardDescription(Aws::String&& value) { SetDashboardDescription(std::move(value)); return *this;}
    inline CreateDashboardRequest& WithDashboardDescription(const char* value) { SetDashboardDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The dashboard definition specified in a JSON literal.</p> <ul> <li> <p>IoT
     * SiteWise Monitor (Classic) see <a
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
    inline CreateDashboardRequest& WithDashboardDefinition(const Aws::String& value) { SetDashboardDefinition(value); return *this;}
    inline CreateDashboardRequest& WithDashboardDefinition(Aws::String&& value) { SetDashboardDefinition(std::move(value)); return *this;}
    inline CreateDashboardRequest& WithDashboardDefinition(const char* value) { SetDashboardDefinition(value); return *this;}
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
    inline CreateDashboardRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateDashboardRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateDashboardRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of key-value pairs that contain metadata for the dashboard. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/tag-resources.html">Tagging
     * your IoT SiteWise resources</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateDashboardRequest& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}
    inline CreateDashboardRequest& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateDashboardRequest& AddTags(const Aws::String& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    inline CreateDashboardRequest& AddTags(Aws::String&& key, const Aws::String& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateDashboardRequest& AddTags(const Aws::String& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateDashboardRequest& AddTags(Aws::String&& key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateDashboardRequest& AddTags(const char* key, Aws::String&& value) { m_tagsHasBeenSet = true; m_tags.emplace(key, std::move(value)); return *this; }
    inline CreateDashboardRequest& AddTags(Aws::String&& key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(std::move(key), value); return *this; }
    inline CreateDashboardRequest& AddTags(const char* key, const char* value) { m_tagsHasBeenSet = true; m_tags.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_projectId;
    bool m_projectIdHasBeenSet = false;

    Aws::String m_dashboardName;
    bool m_dashboardNameHasBeenSet = false;

    Aws::String m_dashboardDescription;
    bool m_dashboardDescriptionHasBeenSet = false;

    Aws::String m_dashboardDefinition;
    bool m_dashboardDefinitionHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
