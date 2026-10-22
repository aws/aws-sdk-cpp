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
 * <p>An S3 source for one environment, backed by a previously-created S3
 * integration.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/continuum-2022-07-26/EnvironmentS3IntegrationSource">AWS
 * API Reference</a></p>
 */
class EnvironmentS3IntegrationSource {
 public:
  AWS_CONTINUUM_API EnvironmentS3IntegrationSource() = default;
  AWS_CONTINUUM_API EnvironmentS3IntegrationSource(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API EnvironmentS3IntegrationSource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONTINUUM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Identifier of an S3 integration in the caller's account. The integration
   * supplies the bucket, the read role, and the external ID Continuum uses to read
   * the prefixes.</p>
   */
  inline const Aws::String& GetIntegrationId() const { return m_integrationId; }
  inline bool IntegrationIdHasBeenSet() const { return m_integrationIdHasBeenSet; }
  template <typename IntegrationIdT = Aws::String>
  void SetIntegrationId(IntegrationIdT&& value) {
    m_integrationIdHasBeenSet = true;
    m_integrationId = std::forward<IntegrationIdT>(value);
  }
  template <typename IntegrationIdT = Aws::String>
  EnvironmentS3IntegrationSource& WithIntegrationId(IntegrationIdT&& value) {
    SetIntegrationId(std::forward<IntegrationIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Prefix containing source code. Defaults to code/ when omitted.</p>
   */
  inline const Aws::String& GetCodePrefix() const { return m_codePrefix; }
  inline bool CodePrefixHasBeenSet() const { return m_codePrefixHasBeenSet; }
  template <typename CodePrefixT = Aws::String>
  void SetCodePrefix(CodePrefixT&& value) {
    m_codePrefixHasBeenSet = true;
    m_codePrefix = std::forward<CodePrefixT>(value);
  }
  template <typename CodePrefixT = Aws::String>
  EnvironmentS3IntegrationSource& WithCodePrefix(CodePrefixT&& value) {
    SetCodePrefix(std::forward<CodePrefixT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Prefix containing customer-authored context. Defaults to context/ when
   * omitted.</p>
   */
  inline const Aws::String& GetContextPrefix() const { return m_contextPrefix; }
  inline bool ContextPrefixHasBeenSet() const { return m_contextPrefixHasBeenSet; }
  template <typename ContextPrefixT = Aws::String>
  void SetContextPrefix(ContextPrefixT&& value) {
    m_contextPrefixHasBeenSet = true;
    m_contextPrefix = std::forward<ContextPrefixT>(value);
  }
  template <typename ContextPrefixT = Aws::String>
  EnvironmentS3IntegrationSource& WithContextPrefix(ContextPrefixT&& value) {
    SetContextPrefix(std::forward<ContextPrefixT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_integrationId;

  Aws::String m_codePrefix;

  Aws::String m_contextPrefix;
  bool m_integrationIdHasBeenSet = false;
  bool m_codePrefixHasBeenSet = false;
  bool m_contextPrefixHasBeenSet = false;
};

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
