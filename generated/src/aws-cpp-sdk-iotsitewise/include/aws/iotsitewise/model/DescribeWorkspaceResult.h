/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/WorkspaceEncryptionConfigurationInfo.h>
#include <aws/iotsitewise/model/WorkspaceStatus.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace IoTSiteWise {
namespace Model {
class DescribeWorkspaceResult {
 public:
  AWS_IOTSITEWISE_API DescribeWorkspaceResult() = default;
  AWS_IOTSITEWISE_API DescribeWorkspaceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_IOTSITEWISE_API DescribeWorkspaceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The ARN of the workspace.</p>
   */
  inline const Aws::String& GetWorkspaceArn() const { return m_workspaceArn; }
  template <typename WorkspaceArnT = Aws::String>
  void SetWorkspaceArn(WorkspaceArnT&& value) {
    m_workspaceArnHasBeenSet = true;
    m_workspaceArn = std::forward<WorkspaceArnT>(value);
  }
  template <typename WorkspaceArnT = Aws::String>
  DescribeWorkspaceResult& WithWorkspaceArn(WorkspaceArnT&& value) {
    SetWorkspaceArn(std::forward<WorkspaceArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the workspace.</p>
   */
  inline const Aws::String& GetWorkspaceName() const { return m_workspaceName; }
  template <typename WorkspaceNameT = Aws::String>
  void SetWorkspaceName(WorkspaceNameT&& value) {
    m_workspaceNameHasBeenSet = true;
    m_workspaceName = std::forward<WorkspaceNameT>(value);
  }
  template <typename WorkspaceNameT = Aws::String>
  DescribeWorkspaceResult& WithWorkspaceName(WorkspaceNameT&& value) {
    SetWorkspaceName(std::forward<WorkspaceNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The description of the workspace.</p>
   */
  inline const Aws::String& GetWorkspaceDescription() const { return m_workspaceDescription; }
  template <typename WorkspaceDescriptionT = Aws::String>
  void SetWorkspaceDescription(WorkspaceDescriptionT&& value) {
    m_workspaceDescriptionHasBeenSet = true;
    m_workspaceDescription = std::forward<WorkspaceDescriptionT>(value);
  }
  template <typename WorkspaceDescriptionT = Aws::String>
  DescribeWorkspaceResult& WithWorkspaceDescription(WorkspaceDescriptionT&& value) {
    SetWorkspaceDescription(std::forward<WorkspaceDescriptionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the workspace, which contains the state and any error
   * message.</p>
   */
  inline const WorkspaceStatus& GetWorkspaceStatus() const { return m_workspaceStatus; }
  template <typename WorkspaceStatusT = WorkspaceStatus>
  void SetWorkspaceStatus(WorkspaceStatusT&& value) {
    m_workspaceStatusHasBeenSet = true;
    m_workspaceStatus = std::forward<WorkspaceStatusT>(value);
  }
  template <typename WorkspaceStatusT = WorkspaceStatus>
  DescribeWorkspaceResult& WithWorkspaceStatus(WorkspaceStatusT&& value) {
    SetWorkspaceStatus(std::forward<WorkspaceStatusT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The encryption configuration information for the workspace.</p>
   */
  inline const WorkspaceEncryptionConfigurationInfo& GetEncryptionConfiguration() const { return m_encryptionConfiguration; }
  template <typename EncryptionConfigurationT = WorkspaceEncryptionConfigurationInfo>
  void SetEncryptionConfiguration(EncryptionConfigurationT&& value) {
    m_encryptionConfigurationHasBeenSet = true;
    m_encryptionConfiguration = std::forward<EncryptionConfigurationT>(value);
  }
  template <typename EncryptionConfigurationT = WorkspaceEncryptionConfigurationInfo>
  DescribeWorkspaceResult& WithEncryptionConfiguration(EncryptionConfigurationT&& value) {
    SetEncryptionConfiguration(std::forward<EncryptionConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date the workspace was created, in Unix epoch time.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  DescribeWorkspaceResult& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date the workspace was last updated, in Unix epoch time.</p>
   */
  inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  void SetUpdatedAt(UpdatedAtT&& value) {
    m_updatedAtHasBeenSet = true;
    m_updatedAt = std::forward<UpdatedAtT>(value);
  }
  template <typename UpdatedAtT = Aws::Utils::DateTime>
  DescribeWorkspaceResult& WithUpdatedAt(UpdatedAtT&& value) {
    SetUpdatedAt(std::forward<UpdatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  DescribeWorkspaceResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_workspaceArn;

  Aws::String m_workspaceName;

  Aws::String m_workspaceDescription;

  WorkspaceStatus m_workspaceStatus;

  WorkspaceEncryptionConfigurationInfo m_encryptionConfiguration;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_updatedAt{};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_workspaceArnHasBeenSet = false;
  bool m_workspaceNameHasBeenSet = false;
  bool m_workspaceDescriptionHasBeenSet = false;
  bool m_workspaceStatusHasBeenSet = false;
  bool m_encryptionConfigurationHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_updatedAtHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
