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
    AWS_IOTSITEWISE_API CreateDashboardRequest() = default;

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
    inline const Aws::String& GetProjectId() const { return m_projectId; }
    inline bool ProjectIdHasBeenSet() const { return m_projectIdHasBeenSet; }
    template<typename ProjectIdT = Aws::String>
    void SetProjectId(ProjectIdT&& value) { m_projectIdHasBeenSet = true; m_projectId = std::forward<ProjectIdT>(value); }
    template<typename ProjectIdT = Aws::String>
    CreateDashboardRequest& WithProjectId(ProjectIdT&& value) { SetProjectId(std::forward<ProjectIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A friendly name for the dashboard.</p>
     */
    inline const Aws::String& GetDashboardName() const { return m_dashboardName; }
    inline bool DashboardNameHasBeenSet() const { return m_dashboardNameHasBeenSet; }
    template<typename DashboardNameT = Aws::String>
    void SetDashboardName(DashboardNameT&& value) { m_dashboardNameHasBeenSet = true; m_dashboardName = std::forward<DashboardNameT>(value); }
    template<typename DashboardNameT = Aws::String>
    CreateDashboardRequest& WithDashboardName(DashboardNameT&& value) { SetDashboardName(std::forward<DashboardNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description for the dashboard.</p>
     */
    inline const Aws::String& GetDashboardDescription() const { return m_dashboardDescription; }
    inline bool DashboardDescriptionHasBeenSet() const { return m_dashboardDescriptionHasBeenSet; }
    template<typename DashboardDescriptionT = Aws::String>
    void SetDashboardDescription(DashboardDescriptionT&& value) { m_dashboardDescriptionHasBeenSet = true; m_dashboardDescription = std::forward<DashboardDescriptionT>(value); }
    template<typename DashboardDescriptionT = Aws::String>
    CreateDashboardRequest& WithDashboardDescription(DashboardDescriptionT&& value) { SetDashboardDescription(std::forward<DashboardDescriptionT>(value)); return *this;}
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
    inline const Aws::String& GetDashboardDefinition() const { return m_dashboardDefinition; }
    inline bool DashboardDefinitionHasBeenSet() const { return m_dashboardDefinitionHasBeenSet; }
    template<typename DashboardDefinitionT = Aws::String>
    void SetDashboardDefinition(DashboardDefinitionT&& value) { m_dashboardDefinitionHasBeenSet = true; m_dashboardDefinition = std::forward<DashboardDefinitionT>(value); }
    template<typename DashboardDefinitionT = Aws::String>
    CreateDashboardRequest& WithDashboardDefinition(DashboardDefinitionT&& value) { SetDashboardDefinition(std::forward<DashboardDefinitionT>(value)); return *this;}
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
    CreateDashboardRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of key-value pairs that contain metadata for the dashboard. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/tag-resources.html">Tagging
     * your IoT SiteWise resources</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Map<Aws::String, Aws::String>>
    CreateDashboardRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsKeyT = Aws::String, typename TagsValueT = Aws::String>
    CreateDashboardRequest& AddTags(TagsKeyT&& key, TagsValueT&& value) {
      m_tagsHasBeenSet = true; m_tags.emplace(std::forward<TagsKeyT>(key), std::forward<TagsValueT>(value)); return *this;
    }
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

    Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientTokenHasBeenSet = true;

    Aws::Map<Aws::String, Aws::String> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
