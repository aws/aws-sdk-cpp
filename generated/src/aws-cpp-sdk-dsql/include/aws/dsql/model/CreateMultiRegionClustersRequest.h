/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/dsql/DSQL_EXPORTS.h>
#include <aws/dsql/DSQLRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/dsql/model/LinkedClusterProperties.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace DSQL
{
namespace Model
{

  /**
   */
  class CreateMultiRegionClustersRequest : public DSQLRequest
  {
  public:
    AWS_DSQL_API CreateMultiRegionClustersRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateMultiRegionClusters"; }

    AWS_DSQL_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>An array of the Regions in which you want to create additional clusters.</p>
     */
    inline const Aws::Vector<Aws::String>& GetLinkedRegionList() const { return m_linkedRegionList; }
    inline bool LinkedRegionListHasBeenSet() const { return m_linkedRegionListHasBeenSet; }
    template<typename LinkedRegionListT = Aws::Vector<Aws::String>>
    void SetLinkedRegionList(LinkedRegionListT&& value) { m_linkedRegionListHasBeenSet = true; m_linkedRegionList = std::forward<LinkedRegionListT>(value); }
    template<typename LinkedRegionListT = Aws::Vector<Aws::String>>
    CreateMultiRegionClustersRequest& WithLinkedRegionList(LinkedRegionListT&& value) { SetLinkedRegionList(std::forward<LinkedRegionListT>(value)); return *this;}
    template<typename LinkedRegionListT = Aws::String>
    CreateMultiRegionClustersRequest& AddLinkedRegionList(LinkedRegionListT&& value) { m_linkedRegionListHasBeenSet = true; m_linkedRegionList.emplace_back(std::forward<LinkedRegionListT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A mapping of properties to use when creating linked clusters.</p>
     */
    inline const Aws::Map<Aws::String, LinkedClusterProperties>& GetClusterProperties() const { return m_clusterProperties; }
    inline bool ClusterPropertiesHasBeenSet() const { return m_clusterPropertiesHasBeenSet; }
    template<typename ClusterPropertiesT = Aws::Map<Aws::String, LinkedClusterProperties>>
    void SetClusterProperties(ClusterPropertiesT&& value) { m_clusterPropertiesHasBeenSet = true; m_clusterProperties = std::forward<ClusterPropertiesT>(value); }
    template<typename ClusterPropertiesT = Aws::Map<Aws::String, LinkedClusterProperties>>
    CreateMultiRegionClustersRequest& WithClusterProperties(ClusterPropertiesT&& value) { SetClusterProperties(std::forward<ClusterPropertiesT>(value)); return *this;}
    template<typename ClusterPropertiesKeyT = Aws::String, typename ClusterPropertiesValueT = LinkedClusterProperties>
    CreateMultiRegionClustersRequest& AddClusterProperties(ClusterPropertiesKeyT&& key, ClusterPropertiesValueT&& value) {
      m_clusterPropertiesHasBeenSet = true; m_clusterProperties.emplace(std::forward<ClusterPropertiesKeyT>(key), std::forward<ClusterPropertiesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The witness Region of multi-Region clusters.</p>
     */
    inline const Aws::String& GetWitnessRegion() const { return m_witnessRegion; }
    inline bool WitnessRegionHasBeenSet() const { return m_witnessRegionHasBeenSet; }
    template<typename WitnessRegionT = Aws::String>
    void SetWitnessRegion(WitnessRegionT&& value) { m_witnessRegionHasBeenSet = true; m_witnessRegion = std::forward<WitnessRegionT>(value); }
    template<typename WitnessRegionT = Aws::String>
    CreateMultiRegionClustersRequest& WithWitnessRegion(WitnessRegionT&& value) { SetWitnessRegion(std::forward<WitnessRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the request. Idempotency ensures that an API request completes
     * only once. With an idempotent request, if the original request completes
     * successfully. The subsequent retries with the same client token return the
     * result from the original successful request and they have no additional
     * effect.</p> <p>If you don't specify a client token, the Amazon Web Services SDK
     * automatically generates one.</p>
     */
    inline const Aws::String& GetClientToken() const { return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    template<typename ClientTokenT = Aws::String>
    void SetClientToken(ClientTokenT&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::forward<ClientTokenT>(value); }
    template<typename ClientTokenT = Aws::String>
    CreateMultiRegionClustersRequest& WithClientToken(ClientTokenT&& value) { SetClientToken(std::forward<ClientTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_linkedRegionList;
    bool m_linkedRegionListHasBeenSet = false;

    Aws::Map<Aws::String, LinkedClusterProperties> m_clusterProperties;
    bool m_clusterPropertiesHasBeenSet = false;

    Aws::String m_witnessRegion;
    bool m_witnessRegionHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace DSQL
} // namespace Aws
