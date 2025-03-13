/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/ECSRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/model/ClusterField.h>
#include <utility>

namespace Aws
{
namespace ECS
{
namespace Model
{

  /**
   */
  class DescribeClustersRequest : public ECSRequest
  {
  public:
    AWS_ECS_API DescribeClustersRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeClusters"; }

    AWS_ECS_API Aws::String SerializePayload() const override;

    AWS_ECS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A list of up to 100 cluster names or full cluster Amazon Resource Name (ARN)
     * entries. If you do not specify a cluster, the default cluster is assumed.</p>
     */
    inline const Aws::Vector<Aws::String>& GetClusters() const { return m_clusters; }
    inline bool ClustersHasBeenSet() const { return m_clustersHasBeenSet; }
    template<typename ClustersT = Aws::Vector<Aws::String>>
    void SetClusters(ClustersT&& value) { m_clustersHasBeenSet = true; m_clusters = std::forward<ClustersT>(value); }
    template<typename ClustersT = Aws::Vector<Aws::String>>
    DescribeClustersRequest& WithClusters(ClustersT&& value) { SetClusters(std::forward<ClustersT>(value)); return *this;}
    template<typename ClustersT = Aws::String>
    DescribeClustersRequest& AddClusters(ClustersT&& value) { m_clustersHasBeenSet = true; m_clusters.emplace_back(std::forward<ClustersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Determines whether to include additional information about the clusters in
     * the response. If this field is omitted, this information isn't included.</p>
     * <p>If <code>ATTACHMENTS</code> is specified, the attachments for the container
     * instances or tasks within the cluster are included, for example the capacity
     * providers.</p> <p>If <code>SETTINGS</code> is specified, the settings for the
     * cluster are included.</p> <p>If <code>CONFIGURATIONS</code> is specified, the
     * configuration for the cluster is included.</p> <p>If <code>STATISTICS</code> is
     * specified, the task and service count is included, separated by launch type.</p>
     * <p>If <code>TAGS</code> is specified, the metadata tags associated with the
     * cluster are included.</p>
     */
    inline const Aws::Vector<ClusterField>& GetInclude() const { return m_include; }
    inline bool IncludeHasBeenSet() const { return m_includeHasBeenSet; }
    template<typename IncludeT = Aws::Vector<ClusterField>>
    void SetInclude(IncludeT&& value) { m_includeHasBeenSet = true; m_include = std::forward<IncludeT>(value); }
    template<typename IncludeT = Aws::Vector<ClusterField>>
    DescribeClustersRequest& WithInclude(IncludeT&& value) { SetInclude(std::forward<IncludeT>(value)); return *this;}
    inline DescribeClustersRequest& AddInclude(ClusterField value) { m_includeHasBeenSet = true; m_include.push_back(value); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_clusters;
    bool m_clustersHasBeenSet = false;

    Aws::Vector<ClusterField> m_include;
    bool m_includeHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
