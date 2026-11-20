/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Bedrock {
namespace Model {

/**
 * <p>Account and optional project context evaluated when resolving a trusted
 * access program's status.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-2023-04-20/TrustedAccessResolutionContext">AWS
 * API Reference</a></p>
 */
class TrustedAccessResolutionContext {
 public:
  AWS_BEDROCK_API TrustedAccessResolutionContext() = default;
  AWS_BEDROCK_API TrustedAccessResolutionContext(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API TrustedAccessResolutionContext& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCK_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>AWS account for which the program status was resolved, including applicable
   * organization settings.</p>
   */
  inline const Aws::String& GetAccountId() const { return m_accountId; }
  inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
  template <typename AccountIdT = Aws::String>
  void SetAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId = std::forward<AccountIdT>(value);
  }
  template <typename AccountIdT = Aws::String>
  TrustedAccessResolutionContext& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The canonical ARN of the authorized named project for which participation was
   * resolved. Omitted when the request has no project context.</p>
   */
  inline const Aws::String& GetProjectArn() const { return m_projectArn; }
  inline bool ProjectArnHasBeenSet() const { return m_projectArnHasBeenSet; }
  template <typename ProjectArnT = Aws::String>
  void SetProjectArn(ProjectArnT&& value) {
    m_projectArnHasBeenSet = true;
    m_projectArn = std::forward<ProjectArnT>(value);
  }
  template <typename ProjectArnT = Aws::String>
  TrustedAccessResolutionContext& WithProjectArn(ProjectArnT&& value) {
    SetProjectArn(std::forward<ProjectArnT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_accountId;

  Aws::String m_projectArn;
  bool m_accountIdHasBeenSet = false;
  bool m_projectArnHasBeenSet = false;
};

}  // namespace Model
}  // namespace Bedrock
}  // namespace Aws
