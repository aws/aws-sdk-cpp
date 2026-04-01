/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/X509AttributeFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ACM {
namespace Model {

X509AttributeFilter::X509AttributeFilter(JsonView jsonValue) { *this = jsonValue; }

X509AttributeFilter& X509AttributeFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Subject")) {
    m_subject = jsonValue.GetObject("Subject");
    m_subjectHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SubjectAlternativeName")) {
    m_subjectAlternativeName = jsonValue.GetObject("SubjectAlternativeName");
    m_subjectAlternativeNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExtendedKeyUsage")) {
    m_extendedKeyUsage = ExtendedKeyUsageNameMapper::GetExtendedKeyUsageNameForName(jsonValue.GetString("ExtendedKeyUsage"));
    m_extendedKeyUsageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("KeyUsage")) {
    m_keyUsage = KeyUsageNameMapper::GetKeyUsageNameForName(jsonValue.GetString("KeyUsage"));
    m_keyUsageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("KeyAlgorithm")) {
    m_keyAlgorithm = KeyAlgorithmMapper::GetKeyAlgorithmForName(jsonValue.GetString("KeyAlgorithm"));
    m_keyAlgorithmHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SerialNumber")) {
    m_serialNumber = jsonValue.GetString("SerialNumber");
    m_serialNumberHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NotAfter")) {
    m_notAfter = jsonValue.GetObject("NotAfter");
    m_notAfterHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NotBefore")) {
    m_notBefore = jsonValue.GetObject("NotBefore");
    m_notBeforeHasBeenSet = true;
  }
  return *this;
}

JsonValue X509AttributeFilter::Jsonize() const {
  JsonValue payload;

  if (m_subjectHasBeenSet) {
    payload.WithObject("Subject", m_subject.Jsonize());
  }

  if (m_subjectAlternativeNameHasBeenSet) {
    payload.WithObject("SubjectAlternativeName", m_subjectAlternativeName.Jsonize());
  }

  if (m_extendedKeyUsageHasBeenSet) {
    payload.WithString("ExtendedKeyUsage", ExtendedKeyUsageNameMapper::GetNameForExtendedKeyUsageName(m_extendedKeyUsage));
  }

  if (m_keyUsageHasBeenSet) {
    payload.WithString("KeyUsage", KeyUsageNameMapper::GetNameForKeyUsageName(m_keyUsage));
  }

  if (m_keyAlgorithmHasBeenSet) {
    payload.WithString("KeyAlgorithm", KeyAlgorithmMapper::GetNameForKeyAlgorithm(m_keyAlgorithm));
  }

  if (m_serialNumberHasBeenSet) {
    payload.WithString("SerialNumber", m_serialNumber);
  }

  if (m_notAfterHasBeenSet) {
    payload.WithObject("NotAfter", m_notAfter.Jsonize());
  }

  if (m_notBeforeHasBeenSet) {
    payload.WithObject("NotBefore", m_notBefore.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
