/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/elasticache/ElastiCacheRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticache/model/RegionalConfiguration.h>
#include <utility>

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

  /**
   */
  class IncreaseNodeGroupsInGlobalReplicationGroupRequest : public ElastiCacheRequest
  {
  public:
    AWS_ELASTICACHE_API IncreaseNodeGroupsInGlobalReplicationGroupRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "IncreaseNodeGroupsInGlobalReplicationGroup"; }

    AWS_ELASTICACHE_API Aws::String SerializePayload() const override;

  protected:
    AWS_ELASTICACHE_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the Global datastore</p>
     */
    inline const Aws::String& GetGlobalReplicationGroupId() const { return m_globalReplicationGroupId; }
    inline bool GlobalReplicationGroupIdHasBeenSet() const { return m_globalReplicationGroupIdHasBeenSet; }
    template<typename GlobalReplicationGroupIdT = Aws::String>
    void SetGlobalReplicationGroupId(GlobalReplicationGroupIdT&& value) { m_globalReplicationGroupIdHasBeenSet = true; m_globalReplicationGroupId = std::forward<GlobalReplicationGroupIdT>(value); }
    template<typename GlobalReplicationGroupIdT = Aws::String>
    IncreaseNodeGroupsInGlobalReplicationGroupRequest& WithGlobalReplicationGroupId(GlobalReplicationGroupIdT&& value) { SetGlobalReplicationGroupId(std::forward<GlobalReplicationGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Total number of node groups you want</p>
     */
    inline int GetNodeGroupCount() const { return m_nodeGroupCount; }
    inline bool NodeGroupCountHasBeenSet() const { return m_nodeGroupCountHasBeenSet; }
    inline void SetNodeGroupCount(int value) { m_nodeGroupCountHasBeenSet = true; m_nodeGroupCount = value; }
    inline IncreaseNodeGroupsInGlobalReplicationGroupRequest& WithNodeGroupCount(int value) { SetNodeGroupCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the replication group IDs, the Amazon regions where they are stored
     * and the shard configuration for each that comprise the Global datastore</p>
     */
    inline const Aws::Vector<RegionalConfiguration>& GetRegionalConfigurations() const { return m_regionalConfigurations; }
    inline bool RegionalConfigurationsHasBeenSet() const { return m_regionalConfigurationsHasBeenSet; }
    template<typename RegionalConfigurationsT = Aws::Vector<RegionalConfiguration>>
    void SetRegionalConfigurations(RegionalConfigurationsT&& value) { m_regionalConfigurationsHasBeenSet = true; m_regionalConfigurations = std::forward<RegionalConfigurationsT>(value); }
    template<typename RegionalConfigurationsT = Aws::Vector<RegionalConfiguration>>
    IncreaseNodeGroupsInGlobalReplicationGroupRequest& WithRegionalConfigurations(RegionalConfigurationsT&& value) { SetRegionalConfigurations(std::forward<RegionalConfigurationsT>(value)); return *this;}
    template<typename RegionalConfigurationsT = RegionalConfiguration>
    IncreaseNodeGroupsInGlobalReplicationGroupRequest& AddRegionalConfigurations(RegionalConfigurationsT&& value) { m_regionalConfigurationsHasBeenSet = true; m_regionalConfigurations.emplace_back(std::forward<RegionalConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates that the process begins immediately. At present, the only permitted
     * value for this parameter is true.</p>
     */
    inline bool GetApplyImmediately() const { return m_applyImmediately; }
    inline bool ApplyImmediatelyHasBeenSet() const { return m_applyImmediatelyHasBeenSet; }
    inline void SetApplyImmediately(bool value) { m_applyImmediatelyHasBeenSet = true; m_applyImmediately = value; }
    inline IncreaseNodeGroupsInGlobalReplicationGroupRequest& WithApplyImmediately(bool value) { SetApplyImmediately(value); return *this;}
    ///@}
  private:

    Aws::String m_globalReplicationGroupId;
    bool m_globalReplicationGroupIdHasBeenSet = false;

    int m_nodeGroupCount{0};
    bool m_nodeGroupCountHasBeenSet = false;

    Aws::Vector<RegionalConfiguration> m_regionalConfigurations;
    bool m_regionalConfigurationsHasBeenSet = false;

    bool m_applyImmediately{false};
    bool m_applyImmediatelyHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
