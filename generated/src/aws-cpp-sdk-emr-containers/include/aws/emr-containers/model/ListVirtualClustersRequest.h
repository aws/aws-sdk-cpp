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
    AWS_EMRCONTAINERS_API ListVirtualClustersRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListVirtualClusters"; }

    AWS_EMRCONTAINERS_API Aws::String SerializePayload() const override;

    AWS_EMRCONTAINERS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The container provider ID of the virtual cluster.</p>
     */
    inline const Aws::String& GetContainerProviderId() const { return m_containerProviderId; }
    inline bool ContainerProviderIdHasBeenSet() const { return m_containerProviderIdHasBeenSet; }
    template<typename ContainerProviderIdT = Aws::String>
    void SetContainerProviderId(ContainerProviderIdT&& value) { m_containerProviderIdHasBeenSet = true; m_containerProviderId = std::forward<ContainerProviderIdT>(value); }
    template<typename ContainerProviderIdT = Aws::String>
    ListVirtualClustersRequest& WithContainerProviderId(ContainerProviderIdT&& value) { SetContainerProviderId(std::forward<ContainerProviderIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The container provider type of the virtual cluster. Amazon EKS is the only
     * supported type as of now.</p>
     */
    inline ContainerProviderType GetContainerProviderType() const { return m_containerProviderType; }
    inline bool ContainerProviderTypeHasBeenSet() const { return m_containerProviderTypeHasBeenSet; }
    inline void SetContainerProviderType(ContainerProviderType value) { m_containerProviderTypeHasBeenSet = true; m_containerProviderType = value; }
    inline ListVirtualClustersRequest& WithContainerProviderType(ContainerProviderType value) { SetContainerProviderType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time after which the virtual clusters are created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAfter() const { return m_createdAfter; }
    inline bool CreatedAfterHasBeenSet() const { return m_createdAfterHasBeenSet; }
    template<typename CreatedAfterT = Aws::Utils::DateTime>
    void SetCreatedAfter(CreatedAfterT&& value) { m_createdAfterHasBeenSet = true; m_createdAfter = std::forward<CreatedAfterT>(value); }
    template<typename CreatedAfterT = Aws::Utils::DateTime>
    ListVirtualClustersRequest& WithCreatedAfter(CreatedAfterT&& value) { SetCreatedAfter(std::forward<CreatedAfterT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time before which the virtual clusters are created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedBefore() const { return m_createdBefore; }
    inline bool CreatedBeforeHasBeenSet() const { return m_createdBeforeHasBeenSet; }
    template<typename CreatedBeforeT = Aws::Utils::DateTime>
    void SetCreatedBefore(CreatedBeforeT&& value) { m_createdBeforeHasBeenSet = true; m_createdBefore = std::forward<CreatedBeforeT>(value); }
    template<typename CreatedBeforeT = Aws::Utils::DateTime>
    ListVirtualClustersRequest& WithCreatedBefore(CreatedBeforeT&& value) { SetCreatedBefore(std::forward<CreatedBeforeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The states of the requested virtual clusters.</p>
     */
    inline const Aws::Vector<VirtualClusterState>& GetStates() const { return m_states; }
    inline bool StatesHasBeenSet() const { return m_statesHasBeenSet; }
    template<typename StatesT = Aws::Vector<VirtualClusterState>>
    void SetStates(StatesT&& value) { m_statesHasBeenSet = true; m_states = std::forward<StatesT>(value); }
    template<typename StatesT = Aws::Vector<VirtualClusterState>>
    ListVirtualClustersRequest& WithStates(StatesT&& value) { SetStates(std::forward<StatesT>(value)); return *this;}
    inline ListVirtualClustersRequest& AddStates(VirtualClusterState value) { m_statesHasBeenSet = true; m_states.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of virtual clusters that can be listed.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListVirtualClustersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next set of virtual clusters to return. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListVirtualClustersRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional Boolean that specifies whether the operation should return the
     * virtual clusters that have the access entry integration enabled or disabled. If
     * not specified, the operation returns all applicable virtual clusters.</p>
     */
    inline bool GetEksAccessEntryIntegrated() const { return m_eksAccessEntryIntegrated; }
    inline bool EksAccessEntryIntegratedHasBeenSet() const { return m_eksAccessEntryIntegratedHasBeenSet; }
    inline void SetEksAccessEntryIntegrated(bool value) { m_eksAccessEntryIntegratedHasBeenSet = true; m_eksAccessEntryIntegrated = value; }
    inline ListVirtualClustersRequest& WithEksAccessEntryIntegrated(bool value) { SetEksAccessEntryIntegrated(value); return *this;}
    ///@}
  private:

    Aws::String m_containerProviderId;
    bool m_containerProviderIdHasBeenSet = false;

    ContainerProviderType m_containerProviderType{ContainerProviderType::NOT_SET};
    bool m_containerProviderTypeHasBeenSet = false;

    Aws::Utils::DateTime m_createdAfter{};
    bool m_createdAfterHasBeenSet = false;

    Aws::Utils::DateTime m_createdBefore{};
    bool m_createdBeforeHasBeenSet = false;

    Aws::Vector<VirtualClusterState> m_states;
    bool m_statesHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    bool m_eksAccessEntryIntegrated{false};
    bool m_eksAccessEntryIntegratedHasBeenSet = false;
  };

} // namespace Model
} // namespace EMRContainers
} // namespace Aws
