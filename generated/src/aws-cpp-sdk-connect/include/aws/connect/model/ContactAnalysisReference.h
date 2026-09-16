/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/AnalyticsMode.h>
#include <aws/connect/model/ReferenceStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>Information about a reference when the <code>referenceType</code> is
 * <code>CONTACT_ANALYSIS</code>. Otherwise, null.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ContactAnalysisReference">AWS
 * API Reference</a></p>
 */
class ContactAnalysisReference {
 public:
  AWS_CONNECT_API ContactAnalysisReference() = default;
  AWS_CONNECT_API ContactAnalysisReference(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API ContactAnalysisReference& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Identifier of the contact analysis reference.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  ContactAnalysisReference& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The location path of the contact analysis reference.</p>
   */
  inline const Aws::String& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = Aws::String>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = Aws::String>
  ContactAnalysisReference& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Status of the contact analysis reference type.</p>
   */
  inline ReferenceStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ReferenceStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ContactAnalysisReference& WithStatus(ReferenceStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the contact analysis reference.</p>
   */
  inline const Aws::String& GetArn() const { return m_arn; }
  inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
  template <typename ArnT = Aws::String>
  void SetArn(ArnT&& value) {
    m_arnHasBeenSet = true;
    m_arn = std::forward<ArnT>(value);
  }
  template <typename ArnT = Aws::String>
  ContactAnalysisReference& WithArn(ArnT&& value) {
    SetArn(std::forward<ArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The analytics mode of the contact analysis.</p>
   */
  inline AnalyticsMode GetAnalyticsMode() const { return m_analyticsMode; }
  inline bool AnalyticsModeHasBeenSet() const { return m_analyticsModeHasBeenSet; }
  inline void SetAnalyticsMode(AnalyticsMode value) {
    m_analyticsModeHasBeenSet = true;
    m_analyticsMode = value;
  }
  inline ContactAnalysisReference& WithAnalyticsMode(AnalyticsMode value) {
    SetAnalyticsMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates whether sensitive data has been redacted from the contact
   * analysis.</p>
   */
  inline bool GetIsRedacted() const { return m_isRedacted; }
  inline bool IsRedactedHasBeenSet() const { return m_isRedactedHasBeenSet; }
  inline void SetIsRedacted(bool value) {
    m_isRedactedHasBeenSet = true;
    m_isRedacted = value;
  }
  inline ContactAnalysisReference& WithIsRedacted(bool value) {
    SetIsRedacted(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_value;

  ReferenceStatus m_status{ReferenceStatus::NOT_SET};

  Aws::String m_arn;

  AnalyticsMode m_analyticsMode{AnalyticsMode::NOT_SET};

  bool m_isRedacted{false};
  bool m_nameHasBeenSet = false;
  bool m_valueHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_arnHasBeenSet = false;
  bool m_analyticsModeHasBeenSet = false;
  bool m_isRedactedHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
