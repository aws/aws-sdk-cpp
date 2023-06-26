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
    AWS_ELASTICACHE_API RegionalConfiguration();
    AWS_ELASTICACHE_API RegionalConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API RegionalConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the secondary cluster</p>
     */
    inline const Aws::String& GetReplicationGroupId() const{ return m_replicationGroupId; }

    /**
     * <p>The name of the secondary cluster</p>
     */
    inline bool ReplicationGroupIdHasBeenSet() const { return m_replicationGroupIdHasBeenSet; }

    /**
     * <p>The name of the secondary cluster</p>
     */
    inline void SetReplicationGroupId(const Aws::String& value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId = value; }

    /**
     * <p>The name of the secondary cluster</p>
     */
    inline void SetReplicationGroupId(Aws::String&& value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId = std::move(value); }

    /**
     * <p>The name of the secondary cluster</p>
     */
    inline void SetReplicationGroupId(const char* value) { m_replicationGroupIdHasBeenSet = true; m_replicationGroupId.assign(value); }

    /**
     * <p>The name of the secondary cluster</p>
     */
    inline RegionalConfiguration& WithReplicationGroupId(const Aws::String& value) { SetReplicationGroupId(value); return *this;}

    /**
     * <p>The name of the secondary cluster</p>
     */
    inline RegionalConfiguration& WithReplicationGroupId(Aws::String&& value) { SetReplicationGroupId(std::move(value)); return *this;}

    /**
     * <p>The name of the secondary cluster</p>
     */
    inline RegionalConfiguration& WithReplicationGroupId(const char* value) { SetReplicationGroupId(value); return *this;}


    /**
     * <p>The Amazon region where the cluster is stored</p>
     */
    inline const Aws::String& GetReplicationGroupRegion() const{ return m_replicationGroupRegion; }

    /**
     * <p>The Amazon region where the cluster is stored</p>
     */
    inline bool ReplicationGroupRegionHasBeenSet() const { return m_replicationGroupRegionHasBeenSet; }

    /**
     * <p>The Amazon region where the cluster is stored</p>
     */
    inline void SetReplicationGroupRegion(const Aws::String& value) { m_replicationGroupRegionHasBeenSet = true; m_replicationGroupRegion = value; }

    /**
     * <p>The Amazon region where the cluster is stored</p>
     */
    inline void SetReplicationGroupRegion(Aws::String&& value) { m_replicationGroupRegionHasBeenSet = true; m_replicationGroupRegion = std::move(value); }

    /**
     * <p>The Amazon region where the cluster is stored</p>
     */
    inline void SetReplicationGroupRegion(const char* value) { m_replicationGroupRegionHasBeenSet = true; m_replicationGroupRegion.assign(value); }

    /**
     * <p>The Amazon region where the cluster is stored</p>
     */
    inline RegionalConfiguration& WithReplicationGroupRegion(const Aws::String& value) { SetReplicationGroupRegion(value); return *this;}

    /**
     * <p>The Amazon region where the cluster is stored</p>
     */
    inline RegionalConfiguration& WithReplicationGroupRegion(Aws::String&& value) { SetReplicationGroupRegion(std::move(value)); return *this;}

    /**
     * <p>The Amazon region where the cluster is stored</p>
     */
    inline RegionalConfiguration& WithReplicationGroupRegion(const char* value) { SetReplicationGroupRegion(value); return *this;}


    /**
     * <p>A list of <code>PreferredAvailabilityZones</code> objects that specifies the
     * configuration of a node group in the resharded cluster. </p>
     */
    inline const Aws::Vector<ReshardingConfiguration>& GetReshardingConfiguration() const{ return m_reshardingConfiguration; }

    /**
     * <p>A list of <code>PreferredAvailabilityZones</code> objects that specifies the
     * configuration of a node group in the resharded cluster. </p>
     */
    inline bool ReshardingConfigurationHasBeenSet() const { return m_reshardingConfigurationHasBeenSet; }

    /**
     * <p>A list of <code>PreferredAvailabilityZones</code> objects that specifies the
     * configuration of a node group in the resharded cluster. </p>
     */
    inline void SetReshardingConfiguration(const Aws::Vector<ReshardingConfiguration>& value) { m_reshardingConfigurationHasBeenSet = true; m_reshardingConfiguration = value; }

    /**
     * <p>A list of <code>PreferredAvailabilityZones</code> objects that specifies the
     * configuration of a node group in the resharded cluster. </p>
     */
    inline void SetReshardingConfiguration(Aws::Vector<ReshardingConfiguration>&& value) { m_reshardingConfigurationHasBeenSet = true; m_reshardingConfiguration = std::move(value); }

    /**
     * <p>A list of <code>PreferredAvailabilityZones</code> objects that specifies the
     * configuration of a node group in the resharded cluster. </p>
     */
    inline RegionalConfiguration& WithReshardingConfiguration(const Aws::Vector<ReshardingConfiguration>& value) { SetReshardingConfiguration(value); return *this;}

    /**
     * <p>A list of <code>PreferredAvailabilityZones</code> objects that specifies the
     * configuration of a node group in the resharded cluster. </p>
     */
    inline RegionalConfiguration& WithReshardingConfiguration(Aws::Vector<ReshardingConfiguration>&& value) { SetReshardingConfiguration(std::move(value)); return *this;}

    /**
     * <p>A list of <code>PreferredAvailabilityZones</code> objects that specifies the
     * configuration of a node group in the resharded cluster. </p>
     */
    inline RegionalConfiguration& AddReshardingConfiguration(const ReshardingConfiguration& value) { m_reshardingConfigurationHasBeenSet = true; m_reshardingConfiguration.push_back(value); return *this; }

    /**
     * <p>A list of <code>PreferredAvailabilityZones</code> objects that specifies the
     * configuration of a node group in the resharded cluster. </p>
     */
    inline RegionalConfiguration& AddReshardingConfiguration(ReshardingConfiguration&& value) { m_reshardingConfigurationHasBeenSet = true; m_reshardingConfiguration.push_back(std::move(value)); return *this; }

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
