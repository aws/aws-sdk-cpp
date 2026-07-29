/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/EnrichmentJobConfiguration.h>

#include <utility>

namespace Aws {
namespace IoTSiteWise {
namespace Model {

/**
 */
class CreateEnrichmentJobRequest : public IoTSiteWiseRequest {
 public:
  AWS_IOTSITEWISE_API CreateEnrichmentJobRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateEnrichmentJob"; }

  AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The name of the IoT SiteWise workspace containing the video data to
   * analyze.</p>
   */
  inline const Aws::String& GetWorkspaceName() const { return m_workspaceName; }
  inline bool WorkspaceNameHasBeenSet() const { return m_workspaceNameHasBeenSet; }
  template <typename WorkspaceNameT = Aws::String>
  void SetWorkspaceName(WorkspaceNameT&& value) {
    m_workspaceNameHasBeenSet = true;
    m_workspaceName = std::forward<WorkspaceNameT>(value);
  }
  template <typename WorkspaceNameT = Aws::String>
  CreateEnrichmentJobRequest& WithWorkspaceName(WorkspaceNameT&& value) {
    SetWorkspaceName(std::forward<WorkspaceNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Configuration defining the type of enrichment analysis to perform and which
   * video data to analyze. Currently supports eventDetection for generating
   * embeddings from video data for semantic search.</p>
   */
  inline const EnrichmentJobConfiguration& GetJobConfiguration() const { return m_jobConfiguration; }
  inline bool JobConfigurationHasBeenSet() const { return m_jobConfigurationHasBeenSet; }
  template <typename JobConfigurationT = EnrichmentJobConfiguration>
  void SetJobConfiguration(JobConfigurationT&& value) {
    m_jobConfigurationHasBeenSet = true;
    m_jobConfiguration = std::forward<JobConfigurationT>(value);
  }
  template <typename JobConfigurationT = EnrichmentJobConfiguration>
  CreateEnrichmentJobRequest& WithJobConfiguration(JobConfigurationT&& value) {
    SetJobConfiguration(std::forward<JobConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional unique token that makes the operation idempotent. If you submit the
   * same request with the same token within the idempotency window, the service
   * returns the original job without creating a duplicate. Use a UUID or
   * timestamp-based token for each unique request.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateEnrichmentJobRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_workspaceName;

  EnrichmentJobConfiguration m_jobConfiguration;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_workspaceNameHasBeenSet = false;
  bool m_jobConfigurationHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
