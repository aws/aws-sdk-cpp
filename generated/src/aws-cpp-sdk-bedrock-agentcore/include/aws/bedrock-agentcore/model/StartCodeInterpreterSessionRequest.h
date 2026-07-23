/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCoreRequest.h>
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/Certificate.h>
#include <aws/bedrock-agentcore/model/ToolsFileSystemConfiguration.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace BedrockAgentCore {
namespace Model {

/**
 */
class StartCodeInterpreterSessionRequest : public BedrockAgentCoreRequest {
 public:
  AWS_BEDROCKAGENTCORE_API StartCodeInterpreterSessionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StartCodeInterpreterSession"; }

  AWS_BEDROCKAGENTCORE_API Aws::String SerializePayload() const override;

  AWS_BEDROCKAGENTCORE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The trace identifier for request tracking.</p>
   */
  inline const Aws::String& GetTraceId() const { return m_traceId; }
  inline bool TraceIdHasBeenSet() const { return m_traceIdHasBeenSet; }
  template <typename TraceIdT = Aws::String>
  void SetTraceId(TraceIdT&& value) {
    m_traceIdHasBeenSet = true;
    m_traceId = std::forward<TraceIdT>(value);
  }
  template <typename TraceIdT = Aws::String>
  StartCodeInterpreterSessionRequest& WithTraceId(TraceIdT&& value) {
    SetTraceId(std::forward<TraceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The parent trace information for distributed tracing.</p>
   */
  inline const Aws::String& GetTraceParent() const { return m_traceParent; }
  inline bool TraceParentHasBeenSet() const { return m_traceParentHasBeenSet; }
  template <typename TraceParentT = Aws::String>
  void SetTraceParent(TraceParentT&& value) {
    m_traceParentHasBeenSet = true;
    m_traceParent = std::forward<TraceParentT>(value);
  }
  template <typename TraceParentT = Aws::String>
  StartCodeInterpreterSessionRequest& WithTraceParent(TraceParentT&& value) {
    SetTraceParent(std::forward<TraceParentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the code interpreter to use for this session. This
   * identifier specifies which code interpreter environment to initialize for the
   * session.</p>
   */
  inline const Aws::String& GetCodeInterpreterIdentifier() const { return m_codeInterpreterIdentifier; }
  inline bool CodeInterpreterIdentifierHasBeenSet() const { return m_codeInterpreterIdentifierHasBeenSet; }
  template <typename CodeInterpreterIdentifierT = Aws::String>
  void SetCodeInterpreterIdentifier(CodeInterpreterIdentifierT&& value) {
    m_codeInterpreterIdentifierHasBeenSet = true;
    m_codeInterpreterIdentifier = std::forward<CodeInterpreterIdentifierT>(value);
  }
  template <typename CodeInterpreterIdentifierT = Aws::String>
  StartCodeInterpreterSessionRequest& WithCodeInterpreterIdentifier(CodeInterpreterIdentifierT&& value) {
    SetCodeInterpreterIdentifier(std::forward<CodeInterpreterIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the code interpreter session. This name helps you identify and
   * manage the session. The name does not need to be unique.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  StartCodeInterpreterSessionRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The duration in seconds (time-to-live) after which the session automatically
   * terminates, regardless of ongoing activity. Defaults to 900 seconds (15
   * minutes). Recommended minimum: 60 seconds. Maximum allowed: 28,800 seconds (8
   * hours).</p>
   */
  inline int GetSessionTimeoutSeconds() const { return m_sessionTimeoutSeconds; }
  inline bool SessionTimeoutSecondsHasBeenSet() const { return m_sessionTimeoutSecondsHasBeenSet; }
  inline void SetSessionTimeoutSeconds(int value) {
    m_sessionTimeoutSecondsHasBeenSet = true;
    m_sessionTimeoutSeconds = value;
  }
  inline StartCodeInterpreterSessionRequest& WithSessionTimeoutSeconds(int value) {
    SetSessionTimeoutSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of certificates to install in the code interpreter session.</p>
   */
  inline const Aws::Vector<Certificate>& GetCertificates() const { return m_certificates; }
  inline bool CertificatesHasBeenSet() const { return m_certificatesHasBeenSet; }
  template <typename CertificatesT = Aws::Vector<Certificate>>
  void SetCertificates(CertificatesT&& value) {
    m_certificatesHasBeenSet = true;
    m_certificates = std::forward<CertificatesT>(value);
  }
  template <typename CertificatesT = Aws::Vector<Certificate>>
  StartCodeInterpreterSessionRequest& WithCertificates(CertificatesT&& value) {
    SetCertificates(std::forward<CertificatesT>(value));
    return *this;
  }
  template <typename CertificatesT = Certificate>
  StartCodeInterpreterSessionRequest& AddCertificates(CertificatesT&& value) {
    m_certificatesHasBeenSet = true;
    m_certificates.emplace_back(std::forward<CertificatesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The file system configurations to mount into the code interpreter session.
   * Use these configurations to mount your own Amazon Simple Storage Service (Amazon
   * S3) Files or Amazon Elastic File System (Amazon EFS) access points. Your session
   * can then read and write your data. If you don't specify this field, no
   * additional file systems are mounted.</p>
   */
  inline const Aws::Vector<ToolsFileSystemConfiguration>& GetFilesystemConfigurations() const { return m_filesystemConfigurations; }
  inline bool FilesystemConfigurationsHasBeenSet() const { return m_filesystemConfigurationsHasBeenSet; }
  template <typename FilesystemConfigurationsT = Aws::Vector<ToolsFileSystemConfiguration>>
  void SetFilesystemConfigurations(FilesystemConfigurationsT&& value) {
    m_filesystemConfigurationsHasBeenSet = true;
    m_filesystemConfigurations = std::forward<FilesystemConfigurationsT>(value);
  }
  template <typename FilesystemConfigurationsT = Aws::Vector<ToolsFileSystemConfiguration>>
  StartCodeInterpreterSessionRequest& WithFilesystemConfigurations(FilesystemConfigurationsT&& value) {
    SetFilesystemConfigurations(std::forward<FilesystemConfigurationsT>(value));
    return *this;
  }
  template <typename FilesystemConfigurationsT = ToolsFileSystemConfiguration>
  StartCodeInterpreterSessionRequest& AddFilesystemConfigurations(FilesystemConfigurationsT&& value) {
    m_filesystemConfigurationsHasBeenSet = true;
    m_filesystemConfigurations.emplace_back(std::forward<FilesystemConfigurationsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier to ensure that the API request completes
   * no more than one time. If this token matches a previous request, Amazon Bedrock
   * AgentCore ignores the request, but does not return an error. This parameter
   * helps prevent the creation of duplicate sessions if there are temporary network
   * issues.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  StartCodeInterpreterSessionRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_traceId;

  Aws::String m_traceParent;

  Aws::String m_codeInterpreterIdentifier;

  Aws::String m_name;

  int m_sessionTimeoutSeconds{0};

  Aws::Vector<Certificate> m_certificates;

  Aws::Vector<ToolsFileSystemConfiguration> m_filesystemConfigurations;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_traceIdHasBeenSet = false;
  bool m_traceParentHasBeenSet = false;
  bool m_codeInterpreterIdentifierHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_sessionTimeoutSecondsHasBeenSet = false;
  bool m_certificatesHasBeenSet = false;
  bool m_filesystemConfigurationsHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
