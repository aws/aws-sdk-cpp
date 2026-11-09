/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/account-access-runtime/AccountAccessRuntime_EXPORTS.h>
#include <aws/account-access-runtime/model/ProgrammaticAccessDetails.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace AccountAccessRuntime {
namespace Model {

/**
 * <p>The temporary credentials returned for a role. Only one member is set,
 * depending on the type of access that you requested.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/account-access-runtime-2018-05-10/CredentialsDetails">AWS
 * API Reference</a></p>
 */
class CredentialsDetails {
 public:
  AWS_ACCOUNTACCESSRUNTIME_API CredentialsDetails() = default;
  AWS_ACCOUNTACCESSRUNTIME_API CredentialsDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACCOUNTACCESSRUNTIME_API CredentialsDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACCOUNTACCESSRUNTIME_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The access key credentials returned for programmatic access with the CLI or
   * an Amazon Web Services SDK.</p>
   */
  inline const ProgrammaticAccessDetails& GetProgrammaticAccess() const { return m_programmaticAccess; }
  inline bool ProgrammaticAccessHasBeenSet() const { return m_programmaticAccessHasBeenSet; }
  template <typename ProgrammaticAccessT = ProgrammaticAccessDetails>
  void SetProgrammaticAccess(ProgrammaticAccessT&& value) {
    m_programmaticAccessHasBeenSet = true;
    m_programmaticAccess = std::forward<ProgrammaticAccessT>(value);
  }
  template <typename ProgrammaticAccessT = ProgrammaticAccessDetails>
  CredentialsDetails& WithProgrammaticAccess(ProgrammaticAccessT&& value) {
    SetProgrammaticAccess(std::forward<ProgrammaticAccessT>(value));
    return *this;
  }
  ///@}
 private:
  ProgrammaticAccessDetails m_programmaticAccess;
  bool m_programmaticAccessHasBeenSet = false;
};

}  // namespace Model
}  // namespace AccountAccessRuntime
}  // namespace Aws
