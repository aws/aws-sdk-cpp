/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot-managed-integrations/model/MatterCluster.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace IoTManagedIntegrations
{
namespace Model
{

  /**
   * <p>Structure describing a managed thing.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/MatterEndpoint">AWS
   * API Reference</a></p>
   */
  class MatterEndpoint
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API MatterEndpoint() = default;
    AWS_IOTMANAGEDINTEGRATIONS_API MatterEndpoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API MatterEndpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Matter endpoint id.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    MatterEndpoint& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of Matter clusters for a managed thing.</p>
     */
    inline const Aws::Vector<MatterCluster>& GetClusters() const { return m_clusters; }
    inline bool ClustersHasBeenSet() const { return m_clustersHasBeenSet; }
    template<typename ClustersT = Aws::Vector<MatterCluster>>
    void SetClusters(ClustersT&& value) { m_clustersHasBeenSet = true; m_clusters = std::forward<ClustersT>(value); }
    template<typename ClustersT = Aws::Vector<MatterCluster>>
    MatterEndpoint& WithClusters(ClustersT&& value) { SetClusters(std::forward<ClustersT>(value)); return *this;}
    template<typename ClustersT = MatterCluster>
    MatterEndpoint& AddClusters(ClustersT&& value) { m_clustersHasBeenSet = true; m_clusters.emplace_back(std::forward<ClustersT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Vector<MatterCluster> m_clusters;
    bool m_clustersHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
