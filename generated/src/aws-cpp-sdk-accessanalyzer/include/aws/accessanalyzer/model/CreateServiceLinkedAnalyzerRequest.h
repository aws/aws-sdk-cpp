/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/accessanalyzer/AccessAnalyzerRequest.h>
#include <aws/accessanalyzer/AccessAnalyzer_EXPORTS.h>
#include <aws/accessanalyzer/model/AnalyzerConfiguration.h>
#include <aws/accessanalyzer/model/InlineArchiveRule.h>
#include <aws/accessanalyzer/model/Type.h>
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace AccessAnalyzer {
namespace Model {

/**
 * <p>Creates a service-linked analyzer.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/accessanalyzer-2019-11-01/CreateServiceLinkedAnalyzerRequest">AWS
 * API Reference</a></p>
 */
class CreateServiceLinkedAnalyzerRequest : public AccessAnalyzerRequest {
 public:
  AWS_ACCESSANALYZER_API CreateServiceLinkedAnalyzerRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateServiceLinkedAnalyzer"; }

  AWS_ACCESSANALYZER_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The type of analyzer to create. Valid values are
   * <code>ACCOUNT_UNUSED_ACCESS</code> and
   * <code>ORGANIZATION_UNUSED_ACCESS</code>.</p>
   */
  inline Type GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(Type value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline CreateServiceLinkedAnalyzerRequest& WithType(Type value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the archive rules to add for the analyzer. Archive rules
   * automatically archive findings that meet the criteria you define for the
   * rule.</p>
   */
  inline const Aws::Vector<InlineArchiveRule>& GetArchiveRules() const { return m_archiveRules; }
  inline bool ArchiveRulesHasBeenSet() const { return m_archiveRulesHasBeenSet; }
  template <typename ArchiveRulesT = Aws::Vector<InlineArchiveRule>>
  void SetArchiveRules(ArchiveRulesT&& value) {
    m_archiveRulesHasBeenSet = true;
    m_archiveRules = std::forward<ArchiveRulesT>(value);
  }
  template <typename ArchiveRulesT = Aws::Vector<InlineArchiveRule>>
  CreateServiceLinkedAnalyzerRequest& WithArchiveRules(ArchiveRulesT&& value) {
    SetArchiveRules(std::forward<ArchiveRulesT>(value));
    return *this;
  }
  template <typename ArchiveRulesT = InlineArchiveRule>
  CreateServiceLinkedAnalyzerRequest& AddArchiveRules(ArchiveRulesT&& value) {
    m_archiveRulesHasBeenSet = true;
    m_archiveRules.emplace_back(std::forward<ArchiveRulesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A client token.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  CreateServiceLinkedAnalyzerRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the configuration of the analyzer. The specified scope of unused
   * access is used for the configuration.</p>
   */
  inline const AnalyzerConfiguration& GetConfiguration() const { return m_configuration; }
  inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
  template <typename ConfigurationT = AnalyzerConfiguration>
  void SetConfiguration(ConfigurationT&& value) {
    m_configurationHasBeenSet = true;
    m_configuration = std::forward<ConfigurationT>(value);
  }
  template <typename ConfigurationT = AnalyzerConfiguration>
  CreateServiceLinkedAnalyzerRequest& WithConfiguration(ConfigurationT&& value) {
    SetConfiguration(std::forward<ConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Type m_type{Type::NOT_SET};

  Aws::Vector<InlineArchiveRule> m_archiveRules;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};

  AnalyzerConfiguration m_configuration;
  bool m_typeHasBeenSet = false;
  bool m_archiveRulesHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
  bool m_configurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace AccessAnalyzer
}  // namespace Aws
