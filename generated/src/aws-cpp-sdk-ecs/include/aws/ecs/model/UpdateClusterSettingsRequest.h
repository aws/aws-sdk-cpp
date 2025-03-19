/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/ECSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/model/ClusterSetting.h>
#include <utility>

namespace Aws
{
namespace ECS
{
namespace Model
{

  /**
   */
  class UpdateClusterSettingsRequest : public ECSRequest
  {
  public:
    AWS_ECS_API UpdateClusterSettingsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateClusterSettings"; }

    AWS_ECS_API Aws::String SerializePayload() const override;

    AWS_ECS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the cluster to modify the settings for.</p>
     */
    inline const Aws::String& GetCluster() const { return m_cluster; }
    inline bool ClusterHasBeenSet() const { return m_clusterHasBeenSet; }
    template<typename ClusterT = Aws::String>
    void SetCluster(ClusterT&& value) { m_clusterHasBeenSet = true; m_cluster = std::forward<ClusterT>(value); }
    template<typename ClusterT = Aws::String>
    UpdateClusterSettingsRequest& WithCluster(ClusterT&& value) { SetCluster(std::forward<ClusterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The setting to use by default for a cluster. This parameter is used to turn
     * on CloudWatch Container Insights for a cluster. If this value is specified, it
     * overrides the <code>containerInsights</code> value set with <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_PutAccountSetting.html">PutAccountSetting</a>
     * or <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_PutAccountSettingDefault.html">PutAccountSettingDefault</a>.</p>
     *  <p>Currently, if you delete an existing cluster that does not have
     * Container Insights turned on, and then create a new cluster with the same name
     * with Container Insights tuned on, Container Insights will not actually be turned
     * on. If you want to preserve the same name for your existing cluster and turn on
     * Container Insights, you must wait 7 days before you can re-create it.</p>
     * 
     */
    inline const Aws::Vector<ClusterSetting>& GetSettings() const { return m_settings; }
    inline bool SettingsHasBeenSet() const { return m_settingsHasBeenSet; }
    template<typename SettingsT = Aws::Vector<ClusterSetting>>
    void SetSettings(SettingsT&& value) { m_settingsHasBeenSet = true; m_settings = std::forward<SettingsT>(value); }
    template<typename SettingsT = Aws::Vector<ClusterSetting>>
    UpdateClusterSettingsRequest& WithSettings(SettingsT&& value) { SetSettings(std::forward<SettingsT>(value)); return *this;}
    template<typename SettingsT = ClusterSetting>
    UpdateClusterSettingsRequest& AddSettings(SettingsT&& value) { m_settingsHasBeenSet = true; m_settings.emplace_back(std::forward<SettingsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_cluster;
    bool m_clusterHasBeenSet = false;

    Aws::Vector<ClusterSetting> m_settings;
    bool m_settingsHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
