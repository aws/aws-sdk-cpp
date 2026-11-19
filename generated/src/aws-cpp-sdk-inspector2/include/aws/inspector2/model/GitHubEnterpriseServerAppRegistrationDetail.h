/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/inspector2/Inspector2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Inspector2 {
namespace Model {

/**
 * <p>Contains the details required to register the GitHub App on the GitHub
 * Enterprise Server instance.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/inspector2-2020-06-08/GitHubEnterpriseServerAppRegistrationDetail">AWS
 * API Reference</a></p>
 */
class GitHubEnterpriseServerAppRegistrationDetail {
 public:
  AWS_INSPECTOR2_API GitHubEnterpriseServerAppRegistrationDetail() = default;
  AWS_INSPECTOR2_API GitHubEnterpriseServerAppRegistrationDetail(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API GitHubEnterpriseServerAppRegistrationDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_INSPECTOR2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The manifest code used to register the GitHub App on the GitHub Enterprise
   * Server instance.</p>
   */
  inline const Aws::String& GetManifestCode() const { return m_manifestCode; }
  inline bool ManifestCodeHasBeenSet() const { return m_manifestCodeHasBeenSet; }
  template <typename ManifestCodeT = Aws::String>
  void SetManifestCode(ManifestCodeT&& value) {
    m_manifestCodeHasBeenSet = true;
    m_manifestCode = std::forward<ManifestCodeT>(value);
  }
  template <typename ManifestCodeT = Aws::String>
  GitHubEnterpriseServerAppRegistrationDetail& WithManifestCode(ManifestCodeT&& value) {
    SetManifestCode(std::forward<ManifestCodeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_manifestCode;
  bool m_manifestCodeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Inspector2
}  // namespace Aws
