/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
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
 * <p>Request structure for getting an asset file</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/GetAssetFileRequest">AWS
 * API Reference</a></p>
 */
class GetAssetFileRequest : public DevOpsAgentRequest {
 public:
  AWS_DEVOPSAGENT_API GetAssetFileRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetAssetFile"; }

  AWS_DEVOPSAGENT_API Aws::String SerializePayload() const override;

  AWS_DEVOPSAGENT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

  ///@{
  /**
   * <p>The unique identifier for the agent space containing the asset</p>
   */
  inline const Aws::String& GetAgentSpaceId() const { return m_agentSpaceId; }
  inline bool AgentSpaceIdHasBeenSet() const { return m_agentSpaceIdHasBeenSet; }
  template <typename AgentSpaceIdT = Aws::String>
  void SetAgentSpaceId(AgentSpaceIdT&& value) {
    m_agentSpaceIdHasBeenSet = true;
    m_agentSpaceId = std::forward<AgentSpaceIdT>(value);
  }
  template <typename AgentSpaceIdT = Aws::String>
  GetAssetFileRequest& WithAgentSpaceId(AgentSpaceIdT&& value) {
    SetAgentSpaceId(std::forward<AgentSpaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the asset containing the file</p>
   */
  inline const Aws::String& GetAssetId() const { return m_assetId; }
  inline bool AssetIdHasBeenSet() const { return m_assetIdHasBeenSet; }
  template <typename AssetIdT = Aws::String>
  void SetAssetId(AssetIdT&& value) {
    m_assetIdHasBeenSet = true;
    m_assetId = std::forward<AssetIdT>(value);
  }
  template <typename AssetIdT = Aws::String>
  GetAssetFileRequest& WithAssetId(AssetIdT&& value) {
    SetAssetId(std::forward<AssetIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The path of the file within the asset to retrieve</p>
   */
  inline const Aws::String& GetPath() const { return m_path; }
  inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }
  template <typename PathT = Aws::String>
  void SetPath(PathT&& value) {
    m_pathHasBeenSet = true;
    m_path = std::forward<PathT>(value);
  }
  template <typename PathT = Aws::String>
  GetAssetFileRequest& WithPath(PathT&& value) {
    SetPath(std::forward<PathT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The specific asset version to retrieve the file from. If omitted, the latest
   * version is returned.</p>
   */
  inline int GetAssetVersion() const { return m_assetVersion; }
  inline bool AssetVersionHasBeenSet() const { return m_assetVersionHasBeenSet; }
  inline void SetAssetVersion(int value) {
    m_assetVersionHasBeenSet = true;
    m_assetVersion = value;
  }
  inline GetAssetFileRequest& WithAssetVersion(int value) {
    SetAssetVersion(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_agentSpaceId;

  Aws::String m_assetId;

  Aws::String m_path;

  int m_assetVersion{0};
  bool m_agentSpaceIdHasBeenSet = false;
  bool m_assetIdHasBeenSet = false;
  bool m_pathHasBeenSet = false;
  bool m_assetVersionHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
