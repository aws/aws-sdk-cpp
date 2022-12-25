/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/emr-containers/EMRContainers_EXPORTS.h>
#include <aws/emr-containers/EMRContainersRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/emr-containers/model/ContainerProviderType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/emr-containers/model/VirtualClusterState.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace EMRContainers
{
namespace Model
{

  /**
   */
  class ListVirtualClustersRequest : public EMRContainersRequest
  {
  public:
    AWS_EMRCONTAINERS_API ListVirtualClustersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListVirtualClusters"; }

    AWS_EMRCONTAINERS_API Aws::String SerializePayload() const override;

    AWS_EMRCONTAINERS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The container provider ID of the virtual cluster.</p>
     */
    inline const Aws::String& GetContainerProviderId() const{ return m_containerProviderId; }

    /**
     * <p>The container provider ID of the virtual cluster.</p>
     */
    inline bool ContainerProviderIdHasBeenSet() const { return m_containerProviderIdHasBeenSet; }

    /**
     * <p>The container provider ID of the virtual cluster.</p>
     */
    inline void SetContainerProviderId(const Aws::String& value) { m_containerProviderIdHasBeenSet = true; m_containerProviderId = value; }

    /**
     * <p>The container provider ID of the virtual cluster.</p>
     */
    inline void SetContainerProviderId(Aws::String&& value) { m_containerProviderIdHasBeenSet = true; m_containerProviderId = std::move(value); }

    /**
     * <p>The container provider ID of the virtual cluster.</p>
     */
    inline void SetContainerProviderId(const char* value) { m_containerProviderIdHasBeenSet = true; m_containerProviderId.assign(value); }

    /**
     * <p>The container provider ID of the virtual cluster.</p>
     */
    inline ListVirtualClustersRequest& WithContainerProviderId(const Aws::String& value) { SetContainerProviderId(value); return *this;}

    /**
     * <p>The container provider ID of the virtual cluster.</p>
     */
    inline ListVirtualClustersRequest& WithContainerProviderId(Aws::String&& value) { SetContainerProviderId(std::move(value)); return *this;}

    /**
     * <p>The container provider ID of the virtual cluster.</p>
     */
    inline ListVirtualClustersRequest& WithContainerProviderId(const char* value) { SetContainerProviderId(value); return *this;}


    /**
     * <p>The container provider type of the virtual cluster. EKS is the only supported
     * type as of now.</p>
     */
    inline const ContainerProviderType& GetContainerProviderType() const{ return m_containerProviderType; }

    /**
     * <p>The container provider type of the virtual cluster. EKS is the only supported
     * type as of now.</p>
     */
    inline bool ContainerProviderTypeHasBeenSet() const { return m_containerProviderTypeHasBeenSet; }

    /**
     * <p>The container provider type of the virtual cluster. EKS is the only supported
     * type as of now.</p>
     */
    inline void SetContainerProviderType(const ContainerProviderType& value) { m_containerProviderTypeHasBeenSet = true; m_containerProviderType = value; }

    /**
     * <p>The container provider type of the virtual cluster. EKS is the only supported
     * type as of now.</p>
     */
    inline void SetContainerProviderType(ContainerProviderType&& value) { m_containerProviderTypeHasBeenSet = true; m_containerProviderType = std::move(value); }

    /**
     * <p>The container provider type of the virtual cluster. EKS is the only supported
     * type as of now.</p>
     */
    inline ListVirtualClustersRequest& WithContainerProviderType(const ContainerProviderType& value) { SetContainerProviderType(value); return *this;}

    /**
     * <p>The container provider type of the virtual cluster. EKS is the only supported
     * type as of now.</p>
     */
    inline ListVirtualClustersRequest& WithContainerProviderType(ContainerProviderType&& value) { SetContainerProviderType(std::move(value)); return *this;}


    /**
     * <p>The date and time after which the virtual clusters are created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAfter() const{ return m_createdAfter; }

    /**
     * <p>The date and time after which the virtual clusters are created.</p>
     */
    inline bool CreatedAfterHasBeenSet() const { return m_createdAfterHasBeenSet; }

    /**
     * <p>The date and time after which the virtual clusters are created.</p>
     */
    inline void SetCreatedAfter(const Aws::Utils::DateTime& value) { m_createdAfterHasBeenSet = true; m_createdAfter = value; }

    /**
     * <p>The date and time after which the virtual clusters are created.</p>
     */
    inline void SetCreatedAfter(Aws::Utils::DateTime&& value) { m_createdAfterHasBeenSet = true; m_createdAfter = std::move(value); }

    /**
     * <p>The date and time after which the virtual clusters are created.</p>
     */
    inline ListVirtualClustersRequest& WithCreatedAfter(const Aws::Utils::DateTime& value) { SetCreatedAfter(value); return *this;}

    /**
     * <p>The date and time after which the virtual clusters are created.</p>
     */
    inline ListVirtualClustersRequest& WithCreatedAfter(Aws::Utils::DateTime&& value) { SetCreatedAfter(std::move(value)); return *this;}


    /**
     * <p>The date and time before which the virtual clusters are created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedBefore() const{ return m_createdBefore; }

    /**
     * <p>The date and time before which the virtual clusters are created.</p>
     */
    inline bool CreatedBeforeHasBeenSet() const { return m_createdBeforeHasBeenSet; }

    /**
     * <p>The date and time before which the virtual clusters are created.</p>
     */
    inline void SetCreatedBefore(const Aws::Utils::DateTime& value) { m_createdBeforeHasBeenSet = true; m_createdBefore = value; }

    /**
     * <p>The date and time before which the virtual clusters are created.</p>
     */
    inline void SetCreatedBefore(Aws::Utils::DateTime&& value) { m_createdBeforeHasBeenSet = true; m_createdBefore = std::move(value); }

    /**
     * <p>The date and time before which the virtual clusters are created.</p>
     */
    inline ListVirtualClustersRequest& WithCreatedBefore(const Aws::Utils::DateTime& value) { SetCreatedBefore(value); return *this;}

    /**
     * <p>The date and time before which the virtual clusters are created.</p>
     */
    inline ListVirtualClustersRequest& WithCreatedBefore(Aws::Utils::DateTime&& value) { SetCreatedBefore(std::move(value)); return *this;}


    /**
     * <p>The states of the requested virtual clusters.</p>
     */
    inline const Aws::Vector<VirtualClusterState>& GetStates() const{ return m_states; }

    /**
     * <p>The states of the requested virtual clusters.</p>
     */
    inline bool StatesHasBeenSet() const { return m_statesHasBeenSet; }

    /**
     * <p>The states of the requested virtual clusters.</p>
     */
    inline void SetStates(const Aws::Vector<VirtualClusterState>& value) { m_statesHasBeenSet = true; m_states = value; }

    /**
     * <p>The states of the requested virtual clusters.</p>
     */
    inline void SetStates(Aws::Vector<VirtualClusterState>&& value) { m_statesHasBeenSet = true; m_states = std::move(value); }

    /**
     * <p>The states of the requested virtual clusters.</p>
     */
    inline ListVirtualClustersRequest& WithStates(const Aws::Vector<VirtualClusterState>& value) { SetStates(value); return *this;}

    /**
     * <p>The states of the requested virtual clusters.</p>
     */
    inline ListVirtualClustersRequest& WithStates(Aws::Vector<VirtualClusterState>&& value) { SetStates(std::move(value)); return *this;}

    /**
     * <p>The states of the requested virtual clusters.</p>
     */
    inline ListVirtualClustersRequest& AddStates(const VirtualClusterState& value) { m_statesHasBeenSet = true; m_states.push_back(value); return *this; }

    /**
     * <p>The states of the requested virtual clusters.</p>
     */
    inline ListVirtualClustersRequest& AddStates(VirtualClusterState&& value) { m_statesHasBeenSet = true; m_states.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of virtual clusters that can be listed.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of virtual clusters that can be listed.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of virtual clusters that can be listed.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of virtual clusters that can be listed.</p>
     */
    inline ListVirtualClustersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token for the next set of virtual clusters to return. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of virtual clusters to return. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next set of virtual clusters to return. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of virtual clusters to return. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of virtual clusters to return. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of virtual clusters to return. </p>
     */
    inline ListVirtualClustersRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of virtual clusters to return. </p>
     */
    inline ListVirtualClustersRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of virtual clusters to return. </p>
     */
    inline ListVirtualClustersRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_containerProviderId;
    bool m_containerProviderIdHasBeenSet = false;

    ContainerProviderType m_containerProviderType;
    bool m_containerProviderTypeHasBeenSet = false;

    Aws::Utils::DateTime m_createdAfter;
    bool m_createdAfterHasBeenSet = false;

    Aws::Utils::DateTime m_createdBefore;
    bool m_createdBeforeHasBeenSet = false;

    Aws::Vector<VirtualClusterState> m_states;
    bool m_statesHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
