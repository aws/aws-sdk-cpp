/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>
#include <aws/devops-agent/model/SourceAccountType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DevOpsAgent {
namespace Model {

/**
 * <p>Configuration for AWS source account integration. Note: passRole check on
 * 'assumableRoleArn' is not supported.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/SourceAwsConfiguration">AWS
 * API Reference</a></p>
 */
class SourceAwsConfiguration {
 public:
  AWS_DEVOPSAGENT_API SourceAwsConfiguration() = default;
  AWS_DEVOPSAGENT_API SourceAwsConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API SourceAwsConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>AWS Account Id corresponding to provided resources.</p>
   */
  inline const Aws::String& GetAccountId() const { return m_accountId; }
  inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
  template <typename AccountIdT = Aws::String>
  void SetAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId = std::forward<AccountIdT>(value);
  }
  template <typename AccountIdT = Aws::String>
  SourceAwsConfiguration& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Account Type 'source' for AIDevOps monitoring.</p>
   */
  inline SourceAccountType GetAccountType() const { return m_accountType; }
  inline bool AccountTypeHasBeenSet() const { return m_accountTypeHasBeenSet; }
  inline void SetAccountType(SourceAccountType value) {
    m_accountTypeHasBeenSet = true;
    m_accountType = value;
  }
  inline SourceAwsConfiguration& WithAccountType(SourceAccountType value) {
    SetAccountType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Role ARN to be assumed by AIDevOps to operate on behalf of customer.</p>
   */
  inline const Aws::String& GetAssumableRoleArn() const { return m_assumableRoleArn; }
  inline bool AssumableRoleArnHasBeenSet() const { return m_assumableRoleArnHasBeenSet; }
  template <typename AssumableRoleArnT = Aws::String>
  void SetAssumableRoleArn(AssumableRoleArnT&& value) {
    m_assumableRoleArnHasBeenSet = true;
    m_assumableRoleArn = std::forward<AssumableRoleArnT>(value);
  }
  template <typename AssumableRoleArnT = Aws::String>
  SourceAwsConfiguration& WithAssumableRoleArn(AssumableRoleArnT&& value) {
    SetAssumableRoleArn(std::forward<AssumableRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>External ID for additional security when assuming the role. Used to prevent
   * the confused deputy problem.</p>
   */
  inline const Aws::String& GetExternalId() const { return m_externalId; }
  inline bool ExternalIdHasBeenSet() const { return m_externalIdHasBeenSet; }
  template <typename ExternalIdT = Aws::String>
  void SetExternalId(ExternalIdT&& value) {
    m_externalIdHasBeenSet = true;
    m_externalId = std::forward<ExternalIdT>(value);
  }
  template <typename ExternalIdT = Aws::String>
  SourceAwsConfiguration& WithExternalId(ExternalIdT&& value) {
    SetExternalId(std::forward<ExternalIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_accountId;

  SourceAccountType m_accountType{SourceAccountType::NOT_SET};

  Aws::String m_assumableRoleArn;

  Aws::String m_externalId;
  bool m_accountIdHasBeenSet = false;
  bool m_accountTypeHasBeenSet = false;
  bool m_assumableRoleArnHasBeenSet = false;
  bool m_externalIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
