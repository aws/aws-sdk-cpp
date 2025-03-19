/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticache/model/ReshardingConfiguration.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace ElastiCache
{
namespace Model
{

  /**
   * <p>A list of the replication groups </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/RegionalConfiguration">AWS
   * API Reference</a></p>
   */
  class RegionalConfiguration
  {
  public:
    AWS_ELASTICACHE_API RegionalConfiguration() = default;
    AWS_ELASTICACHE_API RegionalConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API RegionalConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the secondary cluster</p>
     */
    inline const Aws::String& GetReplicationGroupId() const { return m_replicationGroupId; }
    inline bool ReplicationGroupIdHasBeenSet() const { return m_replicationGroupIdHasBeenSet; }
    template<typename ReplicationGroupIdT = Aws::String>
    void SetReplicationGroupId(ReplicationGroupIdT&& value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId = std::forward<ReplicationGroupIdT>(value); }
    template<typename ReplicationGroupIdT = Aws::String>
    RegionalConfiguration& WithReplicationGroupId(ReplicationGroupIdT&& value) { SetReplicationGroupId(std::forward<ReplicationGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon region where the cluster is stored</p>
     */
    inline const Aws::String& GetReplicationGroupRegion() const { return m_replicationGroupRegion; }
    inline bool ReplicationGroupRegionHasBeenSet() const { return m_replicationGroupRegionHasBeenSet; }
    template<typename ReplicationGroupRegionT = Aws::String>
    void SetReplicationGroupRegion(ReplicationGroupRegionT&& value) { m_replicationGroupRegionHasBeenSet = true; m_replicationGroupRegion = std::forward<ReplicationGroupRegionT>(value); }
    template<typename ReplicationGroupRegionT = Aws::String>
    RegionalConfiguration& WithReplicationGroupRegion(ReplicationGroupRegionT&& value) { SetReplicationGroupRegion(std::forward<ReplicationGroupRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>PreferredAvailabilityZones</code> objects that specifies the
     * configuration of a node group in the resharded cluster. </p>
     */
    inline const Aws::Vector<ReshardingConfiguration>& GetReshardingConfiguration() const { return m_reshardingConfiguration; }
    inline bool ReshardingConfigurationHasBeenSet() const { return m_reshardingConfigurationHasBeenSet; }
    template<typename ReshardingConfigurationT = Aws::Vector<ReshardingConfiguration>>
    void SetReshardingConfiguration(ReshardingConfigurationT&& value) { m_reshardingConfigurationHasBeenSet = true; m_reshardingConfiguration = std::forward<ReshardingConfigurationT>(value); }
    template<typename ReshardingConfigurationT = Aws::Vector<ReshardingConfiguration>>
    RegionalConfiguration& WithReshardingConfiguration(ReshardingConfigurationT&& value) { SetReshardingConfiguration(std::forward<ReshardingConfigurationT>(value)); return *this;}
    template<typename ReshardingConfigurationT = ReshardingConfiguration>
    RegionalConfiguration& AddReshardingConfiguration(ReshardingConfigurationT&& value) { m_reshardingConfigurationHasBeenSet = true; m_reshardingConfiguration.emplace_back(std::forward<ReshardingConfigurationT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_replicationGroupId;
    bool m_replicationGroupIdHasBeenSet = false;

    Aws::String m_replicationGroupRegion;
    bool m_replicationGroupRegionHasBeenSet = false;

    Aws::Vector<ReshardingConfiguration> m_reshardingConfiguration;
    bool m_reshardingConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
