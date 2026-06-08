/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgentRequest.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Http {
class URI;
}  // namespace Http
namespace DevOpsAgent {
namespace Model {

/**
 * <p>Request structure for listing assets</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/ListAssetsRequest">AWS
 * API Reference</a></p>
 */
class ListAssetsRequest : public DevOpsAgentRequest {
 public:
  AWS_DEVOPSAGENT_API ListAssetsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListAssets"; }

  AWS_DEVOPSAGENT_API Aws::String SerializePayload() const override;

  AWS_DEVOPSAGENT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The unique identifier for the agent space to list assets from</p>
   */
  inline const Aws::String& GetAgentSpaceId() const { return m_agentSpaceId; }
  inline bool AgentSpaceIdHasBeenSet() const { return m_agentSpaceIdHasBeenSet; }
  template <typename AgentSpaceIdT = Aws::String>
  void SetAgentSpaceId(AgentSpaceIdT&& value) {
    m_agentSpaceIdHasBeenSet = true;
    m_agentSpaceId = std::forward<AgentSpaceIdT>(value);
  }
  template <typename AgentSpaceIdT = Aws::String>
  ListAssetsRequest& WithAgentSpaceId(AgentSpaceIdT&& value) {
    SetAgentSpaceId(std::forward<AgentSpaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter results to only assets of this type</p>
   */
  inline const Aws::String& GetAssetType() const { return m_assetType; }
  inline bool AssetTypeHasBeenSet() const { return m_assetTypeHasBeenSet; }
  template <typename AssetTypeT = Aws::String>
  void SetAssetType(AssetTypeT&& value) {
    m_assetTypeHasBeenSet = true;
    m_assetType = std::forward<AssetTypeT>(value);
  }
  template <typename AssetTypeT = Aws::String>
  ListAssetsRequest& WithAssetType(AssetTypeT&& value) {
    SetAssetType(std::forward<AssetTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter results to only assets updated after this timestamp</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAfter() const { return m_updatedAfter; }
  inline bool UpdatedAfterHasBeenSet() const { return m_updatedAfterHasBeenSet; }
  template <typename UpdatedAfterT = Aws::Utils::DateTime>
  void SetUpdatedAfter(UpdatedAfterT&& value) {
    m_updatedAfterHasBeenSet = true;
    m_updatedAfter = std::forward<UpdatedAfterT>(value);
  }
  template <typename UpdatedAfterT = Aws::Utils::DateTime>
  ListAssetsRequest& WithUpdatedAfter(UpdatedAfterT&& value) {
    SetUpdatedAfter(std::forward<UpdatedAfterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter results to only assets updated before this timestamp</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedBefore() const { return m_updatedBefore; }
  inline bool UpdatedBeforeHasBeenSet() const { return m_updatedBeforeHasBeenSet; }
  template <typename UpdatedBeforeT = Aws::Utils::DateTime>
  void SetUpdatedBefore(UpdatedBeforeT&& value) {
    m_updatedBeforeHasBeenSet = true;
    m_updatedBefore = std::forward<UpdatedBeforeT>(value);
  }
  template <typename UpdatedBeforeT = Aws::Utils::DateTime>
  ListAssetsRequest& WithUpdatedBefore(UpdatedBeforeT&& value) {
    SetUpdatedBefore(std::forward<UpdatedBeforeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Pagination token from a previous response to retrieve the next page of
   * results</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListAssetsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of results to return in a single response</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListAssetsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_agentSpaceId;

  Aws::String m_assetType;

  Aws::Utils::DateTime m_updatedAfter{};

  Aws::Utils::DateTime m_updatedBefore{};

  Aws::String m_nextToken;

  int m_maxResults{0};
  bool m_agentSpaceIdHasBeenSet = false;
  bool m_assetTypeHasBeenSet = false;
  bool m_updatedAfterHasBeenSet = false;
  bool m_updatedBeforeHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
