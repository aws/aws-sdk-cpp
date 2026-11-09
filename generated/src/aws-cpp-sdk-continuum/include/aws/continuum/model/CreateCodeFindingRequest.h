/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/ContinuumRequest.h>
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/core/utils/Document.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Continuum {
namespace Model {

/**
 * <p>Specifies the environment and the finding document to ingest.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/CreateCodeFindingInput">AWS
 * API Reference</a></p>
 */
class CreateCodeFindingRequest : public ContinuumRequest {
 public:
  AWS_CONTINUUM_API CreateCodeFindingRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateCodeFinding"; }

  AWS_CONTINUUM_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The environment to ingest the finding into.</p>
   */
  inline const Aws::String& GetEnvironmentId() const { return m_environmentId; }
  inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
  template <typename EnvironmentIdT = Aws::String>
  void SetEnvironmentId(EnvironmentIdT&& value) {
    m_environmentIdHasBeenSet = true;
    m_environmentId = std::forward<EnvironmentIdT>(value);
  }
  template <typename EnvironmentIdT = Aws::String>
  CreateCodeFindingRequest& WithEnvironmentId(EnvironmentIdT&& value) {
    SetEnvironmentId(std::forward<EnvironmentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The OCSF finding document to ingest, verbatim. Must declare a class_uid
   * Continuum supports (2002 Vulnerability Finding, or 2007 Application Security
   * Posture Finding) and validate against the vendored OCSF JSON Schema for that
   * class, including the Continuum overlay requirements that finding_info.uid be
   * present and that vulnerabilities[0].affected_code[0].file identify the code
   * location. With several repositories in the environment, the file path must begin
   * with the repository name. Maximum size 256 KB. Stored verbatim and normalized
   * into the typed Finding members returned by GetCodeFinding. GetCodeFinding does
   * not return the document itself.</p>
   */
  inline Aws::Utils::DocumentView GetOcsfDocument() const { return m_ocsfDocument; }
  inline bool OcsfDocumentHasBeenSet() const { return m_ocsfDocumentHasBeenSet; }
  template <typename OcsfDocumentT = Aws::Utils::Document>
  void SetOcsfDocument(OcsfDocumentT&& value) {
    m_ocsfDocumentHasBeenSet = true;
    m_ocsfDocument = std::forward<OcsfDocumentT>(value);
  }
  template <typename OcsfDocumentT = Aws::Utils::Document>
  CreateCodeFindingRequest& WithOcsfDocument(OcsfDocumentT&& value) {
    SetOcsfDocument(std::forward<OcsfDocumentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Caller-provided idempotency token. A retry with the same token and an
   * identical finding document replays the original result; the same token with
   * different content is rejected.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateCodeFindingRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_environmentId;

  Aws::Utils::Document m_ocsfDocument;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_environmentIdHasBeenSet = false;
  bool m_ocsfDocumentHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
