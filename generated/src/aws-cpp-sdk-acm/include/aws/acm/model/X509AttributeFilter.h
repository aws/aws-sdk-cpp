/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/acm/ACM_EXPORTS.h>
#include <aws/acm/model/ExtendedKeyUsageName.h>
#include <aws/acm/model/KeyAlgorithm.h>
#include <aws/acm/model/KeyUsageName.h>
#include <aws/acm/model/SubjectAlternativeNameFilter.h>
#include <aws/acm/model/SubjectFilter.h>
#include <aws/acm/model/TimestampRange.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ACM {
namespace Model {

/**
 * <p>Filters certificates by X.509 attributes.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/acm-2015-12-08/X509AttributeFilter">AWS
 * API Reference</a></p>
 */
class X509AttributeFilter {
 public:
  AWS_ACM_API X509AttributeFilter() = default;
  AWS_ACM_API X509AttributeFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACM_API X509AttributeFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ACM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Filter by certificate subject.</p>
   */
  inline const SubjectFilter& GetSubject() const { return m_subject; }
  inline bool SubjectHasBeenSet() const { return m_subjectHasBeenSet; }
  template <typename SubjectT = SubjectFilter>
  void SetSubject(SubjectT&& value) {
    m_subjectHasBeenSet = true;
    m_subject = std::forward<SubjectT>(value);
  }
  template <typename SubjectT = SubjectFilter>
  X509AttributeFilter& WithSubject(SubjectT&& value) {
    SetSubject(std::forward<SubjectT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter by subject alternative names.</p>
   */
  inline const SubjectAlternativeNameFilter& GetSubjectAlternativeName() const { return m_subjectAlternativeName; }
  inline bool SubjectAlternativeNameHasBeenSet() const { return m_subjectAlternativeNameHasBeenSet; }
  template <typename SubjectAlternativeNameT = SubjectAlternativeNameFilter>
  void SetSubjectAlternativeName(SubjectAlternativeNameT&& value) {
    m_subjectAlternativeNameHasBeenSet = true;
    m_subjectAlternativeName = std::forward<SubjectAlternativeNameT>(value);
  }
  template <typename SubjectAlternativeNameT = SubjectAlternativeNameFilter>
  X509AttributeFilter& WithSubjectAlternativeName(SubjectAlternativeNameT&& value) {
    SetSubjectAlternativeName(std::forward<SubjectAlternativeNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter by extended key usage.</p>
   */
  inline ExtendedKeyUsageName GetExtendedKeyUsage() const { return m_extendedKeyUsage; }
  inline bool ExtendedKeyUsageHasBeenSet() const { return m_extendedKeyUsageHasBeenSet; }
  inline void SetExtendedKeyUsage(ExtendedKeyUsageName value) {
    m_extendedKeyUsageHasBeenSet = true;
    m_extendedKeyUsage = value;
  }
  inline X509AttributeFilter& WithExtendedKeyUsage(ExtendedKeyUsageName value) {
    SetExtendedKeyUsage(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter by key usage.</p>
   */
  inline KeyUsageName GetKeyUsage() const { return m_keyUsage; }
  inline bool KeyUsageHasBeenSet() const { return m_keyUsageHasBeenSet; }
  inline void SetKeyUsage(KeyUsageName value) {
    m_keyUsageHasBeenSet = true;
    m_keyUsage = value;
  }
  inline X509AttributeFilter& WithKeyUsage(KeyUsageName value) {
    SetKeyUsage(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter by key algorithm.</p>
   */
  inline KeyAlgorithm GetKeyAlgorithm() const { return m_keyAlgorithm; }
  inline bool KeyAlgorithmHasBeenSet() const { return m_keyAlgorithmHasBeenSet; }
  inline void SetKeyAlgorithm(KeyAlgorithm value) {
    m_keyAlgorithmHasBeenSet = true;
    m_keyAlgorithm = value;
  }
  inline X509AttributeFilter& WithKeyAlgorithm(KeyAlgorithm value) {
    SetKeyAlgorithm(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter by serial number.</p>
   */
  inline const Aws::String& GetSerialNumber() const { return m_serialNumber; }
  inline bool SerialNumberHasBeenSet() const { return m_serialNumberHasBeenSet; }
  template <typename SerialNumberT = Aws::String>
  void SetSerialNumber(SerialNumberT&& value) {
    m_serialNumberHasBeenSet = true;
    m_serialNumber = std::forward<SerialNumberT>(value);
  }
  template <typename SerialNumberT = Aws::String>
  X509AttributeFilter& WithSerialNumber(SerialNumberT&& value) {
    SetSerialNumber(std::forward<SerialNumberT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter by certificate expiration date. The start date is inclusive.</p>
   */
  inline const TimestampRange& GetNotAfter() const { return m_notAfter; }
  inline bool NotAfterHasBeenSet() const { return m_notAfterHasBeenSet; }
  template <typename NotAfterT = TimestampRange>
  void SetNotAfter(NotAfterT&& value) {
    m_notAfterHasBeenSet = true;
    m_notAfter = std::forward<NotAfterT>(value);
  }
  template <typename NotAfterT = TimestampRange>
  X509AttributeFilter& WithNotAfter(NotAfterT&& value) {
    SetNotAfter(std::forward<NotAfterT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Filter by certificate validity start date. The start date is inclusive.</p>
   */
  inline const TimestampRange& GetNotBefore() const { return m_notBefore; }
  inline bool NotBeforeHasBeenSet() const { return m_notBeforeHasBeenSet; }
  template <typename NotBeforeT = TimestampRange>
  void SetNotBefore(NotBeforeT&& value) {
    m_notBeforeHasBeenSet = true;
    m_notBefore = std::forward<NotBeforeT>(value);
  }
  template <typename NotBeforeT = TimestampRange>
  X509AttributeFilter& WithNotBefore(NotBeforeT&& value) {
    SetNotBefore(std::forward<NotBeforeT>(value));
    return *this;
  }
  ///@}
 private:
  SubjectFilter m_subject;

  SubjectAlternativeNameFilter m_subjectAlternativeName;

  ExtendedKeyUsageName m_extendedKeyUsage{ExtendedKeyUsageName::NOT_SET};

  KeyUsageName m_keyUsage{KeyUsageName::NOT_SET};

  KeyAlgorithm m_keyAlgorithm{KeyAlgorithm::NOT_SET};

  Aws::String m_serialNumber;

  TimestampRange m_notAfter;

  TimestampRange m_notBefore;
  bool m_subjectHasBeenSet = false;
  bool m_subjectAlternativeNameHasBeenSet = false;
  bool m_extendedKeyUsageHasBeenSet = false;
  bool m_keyUsageHasBeenSet = false;
  bool m_keyAlgorithmHasBeenSet = false;
  bool m_serialNumberHasBeenSet = false;
  bool m_notAfterHasBeenSet = false;
  bool m_notBeforeHasBeenSet = false;
};

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
