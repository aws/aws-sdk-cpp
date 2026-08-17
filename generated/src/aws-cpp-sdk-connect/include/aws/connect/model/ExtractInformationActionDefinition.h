/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/RulesExtractionDefinitionIdentifier.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {

/**
 * <p>Information about the extract information action, which references extraction
 * definitions to use when extracting structured data from customer
 * interactions.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ExtractInformationActionDefinition">AWS
 * API Reference</a></p>
 */
class ExtractInformationActionDefinition {
 public:
  AWS_CONNECT_API ExtractInformationActionDefinition() = default;
  AWS_CONNECT_API ExtractInformationActionDefinition(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API ExtractInformationActionDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The list of extraction definition identifiers that specify what data to
   * extract.</p>
   */
  inline const Aws::Vector<RulesExtractionDefinitionIdentifier>& GetRulesExtractionDefinitions() const {
    return m_rulesExtractionDefinitions;
  }
  inline bool RulesExtractionDefinitionsHasBeenSet() const { return m_rulesExtractionDefinitionsHasBeenSet; }
  template <typename RulesExtractionDefinitionsT = Aws::Vector<RulesExtractionDefinitionIdentifier>>
  void SetRulesExtractionDefinitions(RulesExtractionDefinitionsT&& value) {
    m_rulesExtractionDefinitionsHasBeenSet = true;
    m_rulesExtractionDefinitions = std::forward<RulesExtractionDefinitionsT>(value);
  }
  template <typename RulesExtractionDefinitionsT = Aws::Vector<RulesExtractionDefinitionIdentifier>>
  ExtractInformationActionDefinition& WithRulesExtractionDefinitions(RulesExtractionDefinitionsT&& value) {
    SetRulesExtractionDefinitions(std::forward<RulesExtractionDefinitionsT>(value));
    return *this;
  }
  template <typename RulesExtractionDefinitionsT = RulesExtractionDefinitionIdentifier>
  ExtractInformationActionDefinition& AddRulesExtractionDefinitions(RulesExtractionDefinitionsT&& value) {
    m_rulesExtractionDefinitionsHasBeenSet = true;
    m_rulesExtractionDefinitions.emplace_back(std::forward<RulesExtractionDefinitionsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<RulesExtractionDefinitionIdentifier> m_rulesExtractionDefinitions;
  bool m_rulesExtractionDefinitionsHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
