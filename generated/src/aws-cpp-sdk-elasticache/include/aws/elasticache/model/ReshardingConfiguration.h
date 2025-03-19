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
    AWS_ELASTICACHE_API ReshardingConfiguration() = default;
    AWS_ELASTICACHE_API ReshardingConfiguration(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API ReshardingConfiguration& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Either the ElastiCache supplied 4-digit id or a user supplied id for the node
     * group these configuration values apply to.</p>
     */
    inline const Aws::String& GetNodeGroupId() const { return m_nodeGroupId; }
    inline bool NodeGroupIdHasBeenSet() const { return m_nodeGroupIdHasBeenSet; }
    template<typename NodeGroupIdT = Aws::String>
    void SetNodeGroupId(NodeGroupIdT&& value) { m_nodeGroupIdHasBeenSet = true; m_nodeGroupId = std::forward<NodeGroupIdT>(value); }
    template<typename NodeGroupIdT = Aws::String>
    ReshardingConfiguration& WithNodeGroupId(NodeGroupIdT&& value) { SetNodeGroupId(std::forward<NodeGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of preferred availability zones for the nodes in this cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPreferredAvailabilityZones() const { return m_preferredAvailabilityZones; }
    inline bool PreferredAvailabilityZonesHasBeenSet() const { return m_preferredAvailabilityZonesHasBeenSet; }
    template<typename PreferredAvailabilityZonesT = Aws::Vector<Aws::String>>
    void SetPreferredAvailabilityZones(PreferredAvailabilityZonesT&& value) { m_preferredAvailabilityZonesHasBeenSet = true; m_preferredAvailabilityZones = std::forward<PreferredAvailabilityZonesT>(value); }
    template<typename PreferredAvailabilityZonesT = Aws::Vector<Aws::String>>
    ReshardingConfiguration& WithPreferredAvailabilityZones(PreferredAvailabilityZonesT&& value) { SetPreferredAvailabilityZones(std::forward<PreferredAvailabilityZonesT>(value)); return *this;}
    template<typename PreferredAvailabilityZonesT = Aws::String>
    ReshardingConfiguration& AddPreferredAvailabilityZones(PreferredAvailabilityZonesT&& value) { m_preferredAvailabilityZonesHasBeenSet = true; m_preferredAvailabilityZones.emplace_back(std::forward<PreferredAvailabilityZonesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_nodeGroupId;
    bool m_nodeGroupIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_preferredAvailabilityZones;
    bool m_preferredAvailabilityZonesHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
