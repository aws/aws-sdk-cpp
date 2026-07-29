/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/ExportErrorReportLocation.h>
#include <aws/iotsitewise/model/ProcessingInput.h>

#include <utility>

namespace Aws {
namespace IoTSiteWise {
namespace Model {

/**
 * <p>Request to create a dataset export job.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/CreateDatasetExportJobRequest">AWS
 * API Reference</a></p>
 */
class CreateDatasetExportJobRequest : public IoTSiteWiseRequest {
 public:
  AWS_IOTSITEWISE_API CreateDatasetExportJobRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateDatasetExportJob"; }

  AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The name of the workspace in which to create the dataset export job.</p>
   */
  inline const Aws::String& GetWorkspaceName() const { return m_workspaceName; }
  inline bool WorkspaceNameHasBeenSet() const { return m_workspaceNameHasBeenSet; }
  template <typename WorkspaceNameT = Aws::String>
  void SetWorkspaceName(WorkspaceNameT&& value) {
    m_workspaceNameHasBeenSet = true;
    m_workspaceName = std::forward<WorkspaceNameT>(value);
  }
  template <typename WorkspaceNameT = Aws::String>
  CreateDatasetExportJobRequest& WithWorkspaceName(WorkspaceNameT&& value) {
    SetWorkspaceName(std::forward<WorkspaceNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure the
   * idempotency of the request. The AWS SDKs and CLI populate this
   * automatically.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateDatasetExportJobRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The S3 URI where output clips will be written.</p>
   */
  inline const Aws::String& GetDestinationS3Uri() const { return m_destinationS3Uri; }
  inline bool DestinationS3UriHasBeenSet() const { return m_destinationS3UriHasBeenSet; }
  template <typename DestinationS3UriT = Aws::String>
  void SetDestinationS3Uri(DestinationS3UriT&& value) {
    m_destinationS3UriHasBeenSet = true;
    m_destinationS3Uri = std::forward<DestinationS3UriT>(value);
  }
  template <typename DestinationS3UriT = Aws::String>
  CreateDatasetExportJobRequest& WithDestinationS3Uri(DestinationS3UriT&& value) {
    SetDestinationS3Uri(std::forward<DestinationS3UriT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The processing input source.</p>
   */
  inline const ProcessingInput& GetInput() const { return m_input; }
  inline bool InputHasBeenSet() const { return m_inputHasBeenSet; }
  template <typename InputT = ProcessingInput>
  void SetInput(InputT&& value) {
    m_inputHasBeenSet = true;
    m_input = std::forward<InputT>(value);
  }
  template <typename InputT = ProcessingInput>
  CreateDatasetExportJobRequest& WithInput(InputT&& value) {
    SetInput(std::forward<InputT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The location where the error report will be written on failure.</p>
   */
  inline const ExportErrorReportLocation& GetErrorReportLocation() const { return m_errorReportLocation; }
  inline bool ErrorReportLocationHasBeenSet() const { return m_errorReportLocationHasBeenSet; }
  template <typename ErrorReportLocationT = ExportErrorReportLocation>
  void SetErrorReportLocation(ErrorReportLocationT&& value) {
    m_errorReportLocationHasBeenSet = true;
    m_errorReportLocation = std::forward<ErrorReportLocationT>(value);
  }
  template <typename ErrorReportLocationT = ExportErrorReportLocation>
  CreateDatasetExportJobRequest& WithErrorReportLocation(ErrorReportLocationT&& value) {
    SetErrorReportLocation(std::forward<ErrorReportLocationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_workspaceName;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::String m_destinationS3Uri;

  ProcessingInput m_input;

  ExportErrorReportLocation m_errorReportLocation;
  bool m_workspaceNameHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
  bool m_destinationS3UriHasBeenSet = false;
  bool m_inputHasBeenSet = false;
  bool m_errorReportLocationHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
