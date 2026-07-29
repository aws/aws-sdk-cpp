/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/WorkspaceEncryptionConfiguration.h>

#include <utility>

namespace Aws {
namespace IoTSiteWise {
namespace Model {

/**
 */
class UpdateWorkspaceRequest : public IoTSiteWiseRequest {
 public:
  AWS_IOTSITEWISE_API UpdateWorkspaceRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateWorkspace"; }

  AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The name of the workspace to update.</p>
   */
  inline const Aws::String& GetWorkspaceName() const { return m_workspaceName; }
  inline bool WorkspaceNameHasBeenSet() const { return m_workspaceNameHasBeenSet; }
  template <typename WorkspaceNameT = Aws::String>
  void SetWorkspaceName(WorkspaceNameT&& value) {
    m_workspaceNameHasBeenSet = true;
    m_workspaceName = std::forward<WorkspaceNameT>(value);
  }
  template <typename WorkspaceNameT = Aws::String>
  UpdateWorkspaceRequest& WithWorkspaceName(WorkspaceNameT&& value) {
    SetWorkspaceName(std::forward<WorkspaceNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A new description for the workspace.</p>
   */
  inline const Aws::String& GetWorkspaceDescription() const { return m_workspaceDescription; }
  inline bool WorkspaceDescriptionHasBeenSet() const { return m_workspaceDescriptionHasBeenSet; }
  template <typename WorkspaceDescriptionT = Aws::String>
  void SetWorkspaceDescription(WorkspaceDescriptionT&& value) {
    m_workspaceDescriptionHasBeenSet = true;
    m_workspaceDescription = std::forward<WorkspaceDescriptionT>(value);
  }
  template <typename WorkspaceDescriptionT = Aws::String>
  UpdateWorkspaceRequest& WithWorkspaceDescription(WorkspaceDescriptionT&& value) {
    SetWorkspaceDescription(std::forward<WorkspaceDescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The encryption configuration for the workspace. Omit this field to leave
   * encryption unchanged. After a customer managed key configuration becomes active,
   * the key can't be changed; supplying the same key is accepted.</p>
   */
  inline const WorkspaceEncryptionConfiguration& GetEncryptionConfiguration() const { return m_encryptionConfiguration; }
  inline bool EncryptionConfigurationHasBeenSet() const { return m_encryptionConfigurationHasBeenSet; }
  template <typename EncryptionConfigurationT = WorkspaceEncryptionConfiguration>
  void SetEncryptionConfiguration(EncryptionConfigurationT&& value) {
    m_encryptionConfigurationHasBeenSet = true;
    m_encryptionConfiguration = std::forward<EncryptionConfigurationT>(value);
  }
  template <typename EncryptionConfigurationT = WorkspaceEncryptionConfiguration>
  UpdateWorkspaceRequest& WithEncryptionConfiguration(EncryptionConfigurationT&& value) {
    SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure that the
   * request is idempotent. If you retry a request that completed successfully using
   * the same client token, the retry succeeds without performing any further
   * actions.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  UpdateWorkspaceRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_workspaceName;

  Aws::String m_workspaceDescription;

  WorkspaceEncryptionConfiguration m_encryptionConfiguration;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_workspaceNameHasBeenSet = false;
  bool m_workspaceDescriptionHasBeenSet = false;
  bool m_encryptionConfigurationHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
