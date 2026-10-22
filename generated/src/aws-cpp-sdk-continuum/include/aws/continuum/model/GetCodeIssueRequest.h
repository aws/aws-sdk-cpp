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
 * <p>Specifies the issue to retrieve.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/GetCodeIssueInput">AWS
 * API Reference</a></p>
 */
class GetCodeIssueRequest : public ContinuumRequest {
 public:
  AWS_CONTINUUM_API GetCodeIssueRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "GetCodeIssue"; }

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
  GetCodeIssueRequest& WithEnvironmentId(EnvironmentIdT&& value) {
    SetEnvironmentId(std::forward<EnvironmentIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the issue to retrieve.</p>
   */
  inline const Aws::String& GetIssueId() const { return m_issueId; }
  inline bool IssueIdHasBeenSet() const { return m_issueIdHasBeenSet; }
  template <typename IssueIdT = Aws::String>
  void SetIssueId(IssueIdT&& value) {
    m_issueIdHasBeenSet = true;
    m_issueId = std::forward<IssueIdT>(value);
  }
  template <typename IssueIdT = Aws::String>
  GetCodeIssueRequest& WithIssueId(IssueIdT&& value) {
    SetIssueId(std::forward<IssueIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_environmentId;

  Aws::String m_issueId;
  bool m_environmentIdHasBeenSet = false;
  bool m_issueIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
