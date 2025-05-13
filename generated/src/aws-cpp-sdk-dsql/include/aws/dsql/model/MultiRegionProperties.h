/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dsql/DSQL_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace DSQL
{
namespace Model
{

  /**
   * <p>Defines the structure for multi-Region cluster configurations, containing the
   * witness region and linked cluster settings.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/dsql-2018-05-10/MultiRegionProperties">AWS
   * API Reference</a></p>
   */
  class MultiRegionProperties
  {
  public:
    AWS_DSQL_API MultiRegionProperties() = default;
    AWS_DSQL_API MultiRegionProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_DSQL_API MultiRegionProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DSQL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The that serves as the witness region for a multi-Region cluster. The witness
     * region helps maintain cluster consistency and quorum.</p>
     */
    inline const Aws::String& GetWitnessRegion() const { return m_witnessRegion; }
    inline bool WitnessRegionHasBeenSet() const { return m_witnessRegionHasBeenSet; }
    template<typename WitnessRegionT = Aws::String>
    void SetWitnessRegion(WitnessRegionT&& value) { m_witnessRegionHasBeenSet = true; m_witnessRegion = std::forward<WitnessRegionT>(value); }
    template<typename WitnessRegionT = Aws::String>
    MultiRegionProperties& WithWitnessRegion(WitnessRegionT&& value) { SetWitnessRegion(std::forward<WitnessRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The set of linked clusters that form the multi-Region cluster configuration.
     * Each linked cluster represents a database instance in a different Region.</p>
     */
    inline const Aws::Vector<Aws::String>& GetClusters() const { return m_clusters; }
    inline bool ClustersHasBeenSet() const { return m_clustersHasBeenSet; }
    template<typename ClustersT = Aws::Vector<Aws::String>>
    void SetClusters(ClustersT&& value) { m_clustersHasBeenSet = true; m_clusters = std::forward<ClustersT>(value); }
    template<typename ClustersT = Aws::Vector<Aws::String>>
    MultiRegionProperties& WithClusters(ClustersT&& value) { SetClusters(std::forward<ClustersT>(value)); return *this;}
    template<typename ClustersT = Aws::String>
    MultiRegionProperties& AddClusters(ClustersT&& value) { m_clustersHasBeenSet = true; m_clusters.emplace_back(std::forward<ClustersT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_witnessRegion;
    bool m_witnessRegionHasBeenSet = false;

    Aws::Vector<Aws::String> m_clusters;
    bool m_clustersHasBeenSet = false;
  };

} // namespace Model
} // namespace DSQL
} // namespace Aws
