/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/ContinuumRequest.h>
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Continuum {
namespace Model {

/**
 * <p>Specifies the artifact to retrieve.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/GetCodeIssueArtifactInput">AWS
 * API Reference</a></p>
 */
class GetCodeIssueArtifactRequest : public ContinuumRequest {
 public:
  AWS_CONTINUUM_API GetCodeIssueArtifactRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetCodeIssueArtifact"; }

  AWS_CONTINUUM_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The environment that owns the issue.</p>
   */
  inline const Aws::String& GetEnvironmentId() const { return m_environmentId; }
  inline bool EnvironmentIdHasBeenSet() const { return m_environmentIdHasBeenSet; }
  template <typename EnvironmentIdT = Aws::String>
  void SetEnvironmentId(EnvironmentIdT&& value) {
    m_environmentIdHasBeenSet = true;
    m_environmentId = std::forward<EnvironmentIdT>(value);
  }
  template <typename EnvironmentIdT = Aws::String>
  GetCodeIssueArtifactRequest& WithEnvironmentId(EnvironmentIdT&& value) {
    SetEnvironmentId(std::forward<EnvironmentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The issue the artifact is attached to.</p>
   */
  inline const Aws::String& GetIssueId() const { return m_issueId; }
  inline bool IssueIdHasBeenSet() const { return m_issueIdHasBeenSet; }
  template <typename IssueIdT = Aws::String>
  void SetIssueId(IssueIdT&& value) {
    m_issueIdHasBeenSet = true;
    m_issueId = std::forward<IssueIdT>(value);
  }
  template <typename IssueIdT = Aws::String>
  GetCodeIssueArtifactRequest& WithIssueId(IssueIdT&& value) {
    SetIssueId(std::forward<IssueIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the artifact to retrieve.</p>
   */
  inline const Aws::String& GetArtifactId() const { return m_artifactId; }
  inline bool ArtifactIdHasBeenSet() const { return m_artifactIdHasBeenSet; }
  template <typename ArtifactIdT = Aws::String>
  void SetArtifactId(ArtifactIdT&& value) {
    m_artifactIdHasBeenSet = true;
    m_artifactId = std::forward<ArtifactIdT>(value);
  }
  template <typename ArtifactIdT = Aws::String>
  GetCodeIssueArtifactRequest& WithArtifactId(ArtifactIdT&& value) {
    SetArtifactId(std::forward<ArtifactIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_environmentId;

  Aws::String m_issueId;

  Aws::String m_artifactId;
  bool m_environmentIdHasBeenSet = false;
  bool m_issueIdHasBeenSet = false;
  bool m_artifactIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
