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
    AWS_DSQL_API CreateMultiRegionClustersRequest();

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
    inline const Aws::Vector<Aws::String>& GetLinkedRegionList() const{ return m_linkedRegionList; }
    inline bool LinkedRegionListHasBeenSet() const { return m_linkedRegionListHasBeenSet; }
    inline void SetLinkedRegionList(const Aws::Vector<Aws::String>& value) { m_linkedRegionListHasBeenSet = true; m_linkedRegionList = value; }
    inline void SetLinkedRegionList(Aws::Vector<Aws::String>&& value) { m_linkedRegionListHasBeenSet = true; m_linkedRegionList = std::move(value); }
    inline CreateMultiRegionClustersRequest& WithLinkedRegionList(const Aws::Vector<Aws::String>& value) { SetLinkedRegionList(value); return *this;}
    inline CreateMultiRegionClustersRequest& WithLinkedRegionList(Aws::Vector<Aws::String>&& value) { SetLinkedRegionList(std::move(value)); return *this;}
    inline CreateMultiRegionClustersRequest& AddLinkedRegionList(const Aws::String& value) { m_linkedRegionListHasBeenSet = true; m_linkedRegionList.push_back(value); return *this; }
    inline CreateMultiRegionClustersRequest& AddLinkedRegionList(Aws::String&& value) { m_linkedRegionListHasBeenSet = true; m_linkedRegionList.push_back(std::move(value)); return *this; }
    inline CreateMultiRegionClustersRequest& AddLinkedRegionList(const char* value) { m_linkedRegionListHasBeenSet = true; m_linkedRegionList.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>A mapping of properties to use when creating linked clusters.</p>
     */
    inline const Aws::Map<Aws::String, LinkedClusterProperties>& GetClusterProperties() const{ return m_clusterProperties; }
    inline bool ClusterPropertiesHasBeenSet() const { return m_clusterPropertiesHasBeenSet; }
    inline void SetClusterProperties(const Aws::Map<Aws::String, LinkedClusterProperties>& value) { m_clusterPropertiesHasBeenSet = true; m_clusterProperties = value; }
    inline void SetClusterProperties(Aws::Map<Aws::String, LinkedClusterProperties>&& value) { m_clusterPropertiesHasBeenSet = true; m_clusterProperties = std::move(value); }
    inline CreateMultiRegionClustersRequest& WithClusterProperties(const Aws::Map<Aws::String, LinkedClusterProperties>& value) { SetClusterProperties(value); return *this;}
    inline CreateMultiRegionClustersRequest& WithClusterProperties(Aws::Map<Aws::String, LinkedClusterProperties>&& value) { SetClusterProperties(std::move(value)); return *this;}
    inline CreateMultiRegionClustersRequest& AddClusterProperties(const Aws::String& key, const LinkedClusterProperties& value) { m_clusterPropertiesHasBeenSet = true; m_clusterProperties.emplace(key, value); return *this; }
    inline CreateMultiRegionClustersRequest& AddClusterProperties(Aws::String&& key, const LinkedClusterProperties& value) { m_clusterPropertiesHasBeenSet = true; m_clusterProperties.emplace(std::move(key), value); return *this; }
    inline CreateMultiRegionClustersRequest& AddClusterProperties(const Aws::String& key, LinkedClusterProperties&& value) { m_clusterPropertiesHasBeenSet = true; m_clusterProperties.emplace(key, std::move(value)); return *this; }
    inline CreateMultiRegionClustersRequest& AddClusterProperties(Aws::String&& key, LinkedClusterProperties&& value) { m_clusterPropertiesHasBeenSet = true; m_clusterProperties.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateMultiRegionClustersRequest& AddClusterProperties(const char* key, LinkedClusterProperties&& value) { m_clusterPropertiesHasBeenSet = true; m_clusterProperties.emplace(key, std::move(value)); return *this; }
    inline CreateMultiRegionClustersRequest& AddClusterProperties(const char* key, const LinkedClusterProperties& value) { m_clusterPropertiesHasBeenSet = true; m_clusterProperties.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The witness Region of multi-Region clusters.</p>
     */
    inline const Aws::String& GetWitnessRegion() const{ return m_witnessRegion; }
    inline bool WitnessRegionHasBeenSet() const { return m_witnessRegionHasBeenSet; }
    inline void SetWitnessRegion(const Aws::String& value) { m_witnessRegionHasBeenSet = true; m_witnessRegion = value; }
    inline void SetWitnessRegion(Aws::String&& value) { m_witnessRegionHasBeenSet = true; m_witnessRegion = std::move(value); }
    inline void SetWitnessRegion(const char* value) { m_witnessRegionHasBeenSet = true; m_witnessRegion.assign(value); }
    inline CreateMultiRegionClustersRequest& WithWitnessRegion(const Aws::String& value) { SetWitnessRegion(value); return *this;}
    inline CreateMultiRegionClustersRequest& WithWitnessRegion(Aws::String&& value) { SetWitnessRegion(std::move(value)); return *this;}
    inline CreateMultiRegionClustersRequest& WithWitnessRegion(const char* value) { SetWitnessRegion(value); return *this;}
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
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateMultiRegionClustersRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateMultiRegionClustersRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateMultiRegionClustersRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
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
