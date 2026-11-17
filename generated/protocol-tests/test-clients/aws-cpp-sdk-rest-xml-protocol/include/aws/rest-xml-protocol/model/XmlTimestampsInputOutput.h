/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/rest-xml-protocol/RestXmlProtocol_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace RestXmlProtocol {
namespace Model {

/**
 */
class XmlTimestampsInputOutput {
 public:
  AWS_RESTXMLPROTOCOL_API XmlTimestampsInputOutput() = default;
  AWS_RESTXMLPROTOCOL_API XmlTimestampsInputOutput(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_RESTXMLPROTOCOL_API XmlTimestampsInputOutput& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_RESTXMLPROTOCOL_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

  ///@{

  inline const Aws::Utils::DateTime& GetNormal() const { return m_normal; }
  inline bool NormalHasBeenSet() const { return m_normalHasBeenSet; }
  template <typename NormalT = Aws::Utils::DateTime>
  void SetNormal(NormalT&& value) {
    m_normalHasBeenSet = true;
    m_normal = std::forward<NormalT>(value);
  }
  template <typename NormalT = Aws::Utils::DateTime>
  XmlTimestampsInputOutput& WithNormal(NormalT&& value) {
    SetNormal(std::forward<NormalT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Utils::DateTime& GetDateTime() const { return m_dateTime; }
  inline bool DateTimeHasBeenSet() const { return m_dateTimeHasBeenSet; }
  template <typename DateTimeT = Aws::Utils::DateTime>
  void SetDateTime(DateTimeT&& value) {
    m_dateTimeHasBeenSet = true;
    m_dateTime = std::forward<DateTimeT>(value);
  }
  template <typename DateTimeT = Aws::Utils::DateTime>
  XmlTimestampsInputOutput& WithDateTime(DateTimeT&& value) {
    SetDateTime(std::forward<DateTimeT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Utils::DateTime& GetDateTimeOnTarget() const { return m_dateTimeOnTarget; }
  inline bool DateTimeOnTargetHasBeenSet() const { return m_dateTimeOnTargetHasBeenSet; }
  template <typename DateTimeOnTargetT = Aws::Utils::DateTime>
  void SetDateTimeOnTarget(DateTimeOnTargetT&& value) {
    m_dateTimeOnTargetHasBeenSet = true;
    m_dateTimeOnTarget = std::forward<DateTimeOnTargetT>(value);
  }
  template <typename DateTimeOnTargetT = Aws::Utils::DateTime>
  XmlTimestampsInputOutput& WithDateTimeOnTarget(DateTimeOnTargetT&& value) {
    SetDateTimeOnTarget(std::forward<DateTimeOnTargetT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Utils::DateTime& GetEpochSeconds() const { return m_epochSeconds; }
  inline bool EpochSecondsHasBeenSet() const { return m_epochSecondsHasBeenSet; }
  template <typename EpochSecondsT = Aws::Utils::DateTime>
  void SetEpochSeconds(EpochSecondsT&& value) {
    m_epochSecondsHasBeenSet = true;
    m_epochSeconds = std::forward<EpochSecondsT>(value);
  }
  template <typename EpochSecondsT = Aws::Utils::DateTime>
  XmlTimestampsInputOutput& WithEpochSeconds(EpochSecondsT&& value) {
    SetEpochSeconds(std::forward<EpochSecondsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Utils::DateTime& GetEpochSecondsOnTarget() const { return m_epochSecondsOnTarget; }
  inline bool EpochSecondsOnTargetHasBeenSet() const { return m_epochSecondsOnTargetHasBeenSet; }
  template <typename EpochSecondsOnTargetT = Aws::Utils::DateTime>
  void SetEpochSecondsOnTarget(EpochSecondsOnTargetT&& value) {
    m_epochSecondsOnTargetHasBeenSet = true;
    m_epochSecondsOnTarget = std::forward<EpochSecondsOnTargetT>(value);
  }
  template <typename EpochSecondsOnTargetT = Aws::Utils::DateTime>
  XmlTimestampsInputOutput& WithEpochSecondsOnTarget(EpochSecondsOnTargetT&& value) {
    SetEpochSecondsOnTarget(std::forward<EpochSecondsOnTargetT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Utils::DateTime& GetHttpDate() const { return m_httpDate; }
  inline bool HttpDateHasBeenSet() const { return m_httpDateHasBeenSet; }
  template <typename HttpDateT = Aws::Utils::DateTime>
  void SetHttpDate(HttpDateT&& value) {
    m_httpDateHasBeenSet = true;
    m_httpDate = std::forward<HttpDateT>(value);
  }
  template <typename HttpDateT = Aws::Utils::DateTime>
  XmlTimestampsInputOutput& WithHttpDate(HttpDateT&& value) {
    SetHttpDate(std::forward<HttpDateT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Utils::DateTime& GetHttpDateOnTarget() const { return m_httpDateOnTarget; }
  inline bool HttpDateOnTargetHasBeenSet() const { return m_httpDateOnTargetHasBeenSet; }
  template <typename HttpDateOnTargetT = Aws::Utils::DateTime>
  void SetHttpDateOnTarget(HttpDateOnTargetT&& value) {
    m_httpDateOnTargetHasBeenSet = true;
    m_httpDateOnTarget = std::forward<HttpDateOnTargetT>(value);
  }
  template <typename HttpDateOnTargetT = Aws::Utils::DateTime>
  XmlTimestampsInputOutput& WithHttpDateOnTarget(HttpDateOnTargetT&& value) {
    SetHttpDateOnTarget(std::forward<HttpDateOnTargetT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Utils::DateTime m_normal{};

  Aws::Utils::DateTime m_dateTime{};

  Aws::Utils::DateTime m_dateTimeOnTarget{};

  Aws::Utils::DateTime m_epochSeconds{};

  Aws::Utils::DateTime m_epochSecondsOnTarget{};

  Aws::Utils::DateTime m_httpDate{};

  Aws::Utils::DateTime m_httpDateOnTarget{};
  bool m_normalHasBeenSet = false;
  bool m_dateTimeHasBeenSet = false;
  bool m_dateTimeOnTargetHasBeenSet = false;
  bool m_epochSecondsHasBeenSet = false;
  bool m_epochSecondsOnTargetHasBeenSet = false;
  bool m_httpDateHasBeenSet = false;
  bool m_httpDateOnTargetHasBeenSet = false;
};

}  // namespace Model
}  // namespace RestXmlProtocol
}  // namespace Aws
