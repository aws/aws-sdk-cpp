/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>A list of <code>PreferredAvailabilityZones</code> objects that specifies the
   * configuration of a node group in the resharded cluster.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/ReshardingConfiguration">AWS
   * API Reference</a></p>
   */
  class ReshardingConfiguration
  {
  public:
    AWS_ELASTICACHE_API ReshardingConfiguration();
    AWS_ELASTICACHE_API ReshardingConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API ReshardingConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Either the ElastiCache for Redis supplied 4-digit id or a user supplied id
     * for the node group these configuration values apply to.</p>
     */
    inline const Aws::String& GetNodeGroupId() const{ return m_nodeGroupId; }

    /**
     * <p>Either the ElastiCache for Redis supplied 4-digit id or a user supplied id
     * for the node group these configuration values apply to.</p>
     */
    inline bool NodeGroupIdHasBeenSet() const { return m_nodeGroupIdHasBeenSet; }

    /**
     * <p>Either the ElastiCache for Redis supplied 4-digit id or a user supplied id
     * for the node group these configuration values apply to.</p>
     */
    inline void SetNodeGroupId(const Aws::String& value) { m_nodeGroupIdHasBeenSet = true; m_nodeGroupId = value; }

    /**
     * <p>Either the ElastiCache for Redis supplied 4-digit id or a user supplied id
     * for the node group these configuration values apply to.</p>
     */
    inline void SetNodeGroupId(Aws::String&& value) { m_nodeGroupIdHasBeenSet = true; m_nodeGroupId = std::move(value); }

    /**
     * <p>Either the ElastiCache for Redis supplied 4-digit id or a user supplied id
     * for the node group these configuration values apply to.</p>
     */
    inline void SetNodeGroupId(const char* value) { m_nodeGroupIdHasBeenSet = true; m_nodeGroupId.assign(value); }

    /**
     * <p>Either the ElastiCache for Redis supplied 4-digit id or a user supplied id
     * for the node group these configuration values apply to.</p>
     */
    inline ReshardingConfiguration& WithNodeGroupId(const Aws::String& value) { SetNodeGroupId(value); return *this;}

    /**
     * <p>Either the ElastiCache for Redis supplied 4-digit id or a user supplied id
     * for the node group these configuration values apply to.</p>
     */
    inline ReshardingConfiguration& WithNodeGroupId(Aws::String&& value) { SetNodeGroupId(std::move(value)); return *this;}

    /**
     * <p>Either the ElastiCache for Redis supplied 4-digit id or a user supplied id
     * for the node group these configuration values apply to.</p>
     */
    inline ReshardingConfiguration& WithNodeGroupId(const char* value) { SetNodeGroupId(value); return *this;}


    /**
     * <p>A list of preferred availability zones for the nodes in this cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPreferredAvailabilityZones() const{ return m_preferredAvailabilityZones; }

    /**
     * <p>A list of preferred availability zones for the nodes in this cluster.</p>
     */
    inline bool PreferredAvailabilityZonesHasBeenSet() const { return m_preferredAvailabilityZonesHasBeenSet; }

    /**
     * <p>A list of preferred availability zones for the nodes in this cluster.</p>
     */
    inline void SetPreferredAvailabilityZones(const Aws::Vector<Aws::String>& value) { m_preferredAvailabilityZonesHasBeenSet = true; m_preferredAvailabilityZones = value; }

    /**
     * <p>A list of preferred availability zones for the nodes in this cluster.</p>
     */
    inline void SetPreferredAvailabilityZones(Aws::Vector<Aws::String>&& value) { m_preferredAvailabilityZonesHasBeenSet = true; m_preferredAvailabilityZones = std::move(value); }

    /**
     * <p>A list of preferred availability zones for the nodes in this cluster.</p>
     */
    inline ReshardingConfiguration& WithPreferredAvailabilityZones(const Aws::Vector<Aws::String>& value) { SetPreferredAvailabilityZones(value); return *this;}

    /**
     * <p>A list of preferred availability zones for the nodes in this cluster.</p>
     */
    inline ReshardingConfiguration& WithPreferredAvailabilityZones(Aws::Vector<Aws::String>&& value) { SetPreferredAvailabilityZones(std::move(value)); return *this;}

    /**
     * <p>A list of preferred availability zones for the nodes in this cluster.</p>
     */
    inline ReshardingConfiguration& AddPreferredAvailabilityZones(const Aws::String& value) { m_preferredAvailabilityZonesHasBeenSet = true; m_preferredAvailabilityZones.push_back(value); return *this; }

    /**
     * <p>A list of preferred availability zones for the nodes in this cluster.</p>
     */
    inline ReshardingConfiguration& AddPreferredAvailabilityZones(Aws::String&& value) { m_preferredAvailabilityZonesHasBeenSet = true; m_preferredAvailabilityZones.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of preferred availability zones for the nodes in this cluster.</p>
     */
    inline ReshardingConfiguration& AddPreferredAvailabilityZones(const char* value) { m_preferredAvailabilityZonesHasBeenSet = true; m_preferredAvailabilityZones.push_back(value); return *this; }

  private:

    Aws::String m_nodeGroupId;
    bool m_nodeGroupIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_preferredAvailabilityZones;
    bool m_preferredAvailabilityZonesHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
