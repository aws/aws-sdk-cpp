/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>

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
 * <p>Details specific to a registered Azure DevOps service.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/RegisteredAzureDevOpsServiceDetails">AWS
 * API Reference</a></p>
 */
class RegisteredAzureDevOpsServiceDetails {
 public:
  AWS_DEVOPSAGENT_API RegisteredAzureDevOpsServiceDetails() = default;
  AWS_DEVOPSAGENT_API RegisteredAzureDevOpsServiceDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API RegisteredAzureDevOpsServiceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Azure DevOps Organization name associated with the service.</p>
   */
  inline const Aws::String& GetOrganizationName() const { return m_organizationName; }
  inline bool OrganizationNameHasBeenSet() const { return m_organizationNameHasBeenSet; }
  template <typename OrganizationNameT = Aws::String>
  void SetOrganizationName(OrganizationNameT&& value) {
    m_organizationNameHasBeenSet = true;
    m_organizationName = std::forward<OrganizationNameT>(value);
  }
  template <typename OrganizationNameT = Aws::String>
  RegisteredAzureDevOpsServiceDetails& WithOrganizationName(OrganizationNameT&& value) {
    SetOrganizationName(std::forward<OrganizationNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_organizationName;
  bool m_organizationNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
