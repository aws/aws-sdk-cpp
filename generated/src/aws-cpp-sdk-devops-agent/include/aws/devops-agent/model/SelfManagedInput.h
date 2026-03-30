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
 * <p>Configuration for a self-managed Private Connection.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/SelfManagedInput">AWS
 * API Reference</a></p>
 */
class SelfManagedInput {
 public:
  AWS_DEVOPSAGENT_API SelfManagedInput() = default;
  AWS_DEVOPSAGENT_API SelfManagedInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API SelfManagedInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the Resource Configuration.</p>
   */
  inline const Aws::String& GetResourceConfigurationId() const { return m_resourceConfigurationId; }
  inline bool ResourceConfigurationIdHasBeenSet() const { return m_resourceConfigurationIdHasBeenSet; }
  template <typename ResourceConfigurationIdT = Aws::String>
  void SetResourceConfigurationId(ResourceConfigurationIdT&& value) {
    m_resourceConfigurationIdHasBeenSet = true;
    m_resourceConfigurationId = std::forward<ResourceConfigurationIdT>(value);
  }
  template <typename ResourceConfigurationIdT = Aws::String>
  SelfManagedInput& WithResourceConfigurationId(ResourceConfigurationIdT&& value) {
    SetResourceConfigurationId(std::forward<ResourceConfigurationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Certificate for the Private Connection.</p>
   */
  inline const Aws::String& GetCertificate() const { return m_certificate; }
  inline bool CertificateHasBeenSet() const { return m_certificateHasBeenSet; }
  template <typename CertificateT = Aws::String>
  void SetCertificate(CertificateT&& value) {
    m_certificateHasBeenSet = true;
    m_certificate = std::forward<CertificateT>(value);
  }
  template <typename CertificateT = Aws::String>
  SelfManagedInput& WithCertificate(CertificateT&& value) {
    SetCertificate(std::forward<CertificateT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_resourceConfigurationId;

  Aws::String m_certificate;
  bool m_resourceConfigurationIdHasBeenSet = false;
  bool m_certificateHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
