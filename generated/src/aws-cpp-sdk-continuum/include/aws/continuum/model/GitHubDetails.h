/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/continuum/Continuum_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Continuum {
namespace Model {

/**
 * <p>Details for a GitHub.com integration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/GitHubDetails">AWS
 * API Reference</a></p>
 */
class GitHubDetails {
 public:
  AWS_CONTINUUM_API GitHubDetails() = default;
  AWS_CONTINUUM_API GitHubDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API GitHubDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the GitHub organization associated with the integration.</p>
   */
  inline const Aws::String& GetOrganizationName() const { return m_organizationName; }
  inline bool OrganizationNameHasBeenSet() const { return m_organizationNameHasBeenSet; }
  template <typename OrganizationNameT = Aws::String>
  void SetOrganizationName(OrganizationNameT&& value) {
    m_organizationNameHasBeenSet = true;
    m_organizationName = std::forward<OrganizationNameT>(value);
  }
  template <typename OrganizationNameT = Aws::String>
  GitHubDetails& WithOrganizationName(OrganizationNameT&& value) {
    SetOrganizationName(std::forward<OrganizationNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_organizationName;
  bool m_organizationNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
