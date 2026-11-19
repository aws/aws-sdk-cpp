/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/kafka/Kafka_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Kafka {
namespace Model {

/**
 * <p>Guidance for resolving a finding.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/kafka-2018-11-14/FindingRemediation">AWS
 * API Reference</a></p>
 */
class FindingRemediation {
 public:
  AWS_KAFKA_API FindingRemediation() = default;
  AWS_KAFKA_API FindingRemediation(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API FindingRemediation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_KAFKA_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The recommended action to resolve this finding.</p>
   */
  inline const Aws::String& GetAction() const { return m_action; }
  inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
  template <typename ActionT = Aws::String>
  void SetAction(ActionT&& value) {
    m_actionHasBeenSet = true;
    m_action = std::forward<ActionT>(value);
  }
  template <typename ActionT = Aws::String>
  FindingRemediation& WithAction(ActionT&& value) {
    SetAction(std::forward<ActionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A link to documentation with more detail about this finding and how to
   * resolve it.</p>
   */
  inline const Aws::String& GetDocumentationUrl() const { return m_documentationUrl; }
  inline bool DocumentationUrlHasBeenSet() const { return m_documentationUrlHasBeenSet; }
  template <typename DocumentationUrlT = Aws::String>
  void SetDocumentationUrl(DocumentationUrlT&& value) {
    m_documentationUrlHasBeenSet = true;
    m_documentationUrl = std::forward<DocumentationUrlT>(value);
  }
  template <typename DocumentationUrlT = Aws::String>
  FindingRemediation& WithDocumentationUrl(DocumentationUrlT&& value) {
    SetDocumentationUrl(std::forward<DocumentationUrlT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_action;

  Aws::String m_documentationUrl;
  bool m_actionHasBeenSet = false;
  bool m_documentationUrlHasBeenSet = false;
};

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
