/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/X509Attributes.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ACM {
namespace Model {

X509Attributes::X509Attributes(JsonView jsonValue) { *this = jsonValue; }

X509Attributes& X509Attributes::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Issuer")) {
    m_issuer = jsonValue.GetObject("Issuer");
    m_issuerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Subject")) {
    m_subject = jsonValue.GetObject("Subject");
    m_subjectHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SubjectAlternativeNames")) {
    Aws::Utils::Array<JsonView> subjectAlternativeNamesJsonList = jsonValue.GetArray("SubjectAlternativeNames");
    for (unsigned subjectAlternativeNamesIndex = 0; subjectAlternativeNamesIndex < subjectAlternativeNamesJsonList.GetLength();
         ++subjectAlternativeNamesIndex) {
      m_subjectAlternativeNames.push_back(subjectAlternativeNamesJsonList[subjectAlternativeNamesIndex].AsObject());
    }
    m_subjectAlternativeNamesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ExtendedKeyUsages")) {
    Aws::Utils::Array<JsonView> extendedKeyUsagesJsonList = jsonValue.GetArray("ExtendedKeyUsages");
    for (unsigned extendedKeyUsagesIndex = 0; extendedKeyUsagesIndex < extendedKeyUsagesJsonList.GetLength(); ++extendedKeyUsagesIndex) {
      m_extendedKeyUsages.push_back(
          ExtendedKeyUsageNameMapper::GetExtendedKeyUsageNameForName(extendedKeyUsagesJsonList[extendedKeyUsagesIndex].AsString()));
    }
    m_extendedKeyUsagesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("KeyAlgorithm")) {
    m_keyAlgorithm = KeyAlgorithmMapper::GetKeyAlgorithmForName(jsonValue.GetString("KeyAlgorithm"));
    m_keyAlgorithmHasBeenSet = true;
  }
  if (jsonValue.ValueExists("KeyUsages")) {
    Aws::Utils::Array<JsonView> keyUsagesJsonList = jsonValue.GetArray("KeyUsages");
    for (unsigned keyUsagesIndex = 0; keyUsagesIndex < keyUsagesJsonList.GetLength(); ++keyUsagesIndex) {
      m_keyUsages.push_back(KeyUsageNameMapper::GetKeyUsageNameForName(keyUsagesJsonList[keyUsagesIndex].AsString()));
    }
    m_keyUsagesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SerialNumber")) {
    m_serialNumber = jsonValue.GetString("SerialNumber");
    m_serialNumberHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NotAfter")) {
    m_notAfter = jsonValue.GetDouble("NotAfter");
    m_notAfterHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NotBefore")) {
    m_notBefore = jsonValue.GetDouble("NotBefore");
    m_notBeforeHasBeenSet = true;
  }
  return *this;
}

JsonValue X509Attributes::Jsonize() const {
  JsonValue payload;

  if (m_issuerHasBeenSet) {
    payload.WithObject("Issuer", m_issuer.Jsonize());
  }

  if (m_subjectHasBeenSet) {
    payload.WithObject("Subject", m_subject.Jsonize());
  }

  if (m_subjectAlternativeNamesHasBeenSet) {
    Aws::Utils::Array<JsonValue> subjectAlternativeNamesJsonList(m_subjectAlternativeNames.size());
    for (unsigned subjectAlternativeNamesIndex = 0; subjectAlternativeNamesIndex < subjectAlternativeNamesJsonList.GetLength();
         ++subjectAlternativeNamesIndex) {
      subjectAlternativeNamesJsonList[subjectAlternativeNamesIndex].AsObject(
          m_subjectAlternativeNames[subjectAlternativeNamesIndex].Jsonize());
    }
    payload.WithArray("SubjectAlternativeNames", std::move(subjectAlternativeNamesJsonList));
  }

  if (m_extendedKeyUsagesHasBeenSet) {
    Aws::Utils::Array<JsonValue> extendedKeyUsagesJsonList(m_extendedKeyUsages.size());
    for (unsigned extendedKeyUsagesIndex = 0; extendedKeyUsagesIndex < extendedKeyUsagesJsonList.GetLength(); ++extendedKeyUsagesIndex) {
      extendedKeyUsagesJsonList[extendedKeyUsagesIndex].AsString(
          ExtendedKeyUsageNameMapper::GetNameForExtendedKeyUsageName(m_extendedKeyUsages[extendedKeyUsagesIndex]));
    }
    payload.WithArray("ExtendedKeyUsages", std::move(extendedKeyUsagesJsonList));
  }

  if (m_keyAlgorithmHasBeenSet) {
    payload.WithString("KeyAlgorithm", KeyAlgorithmMapper::GetNameForKeyAlgorithm(m_keyAlgorithm));
  }

  if (m_keyUsagesHasBeenSet) {
    Aws::Utils::Array<JsonValue> keyUsagesJsonList(m_keyUsages.size());
    for (unsigned keyUsagesIndex = 0; keyUsagesIndex < keyUsagesJsonList.GetLength(); ++keyUsagesIndex) {
      keyUsagesJsonList[keyUsagesIndex].AsString(KeyUsageNameMapper::GetNameForKeyUsageName(m_keyUsages[keyUsagesIndex]));
    }
    payload.WithArray("KeyUsages", std::move(keyUsagesJsonList));
  }

  if (m_serialNumberHasBeenSet) {
    payload.WithString("SerialNumber", m_serialNumber);
  }

  if (m_notAfterHasBeenSet) {
    payload.WithDouble("NotAfter", m_notAfter.SecondsWithMSPrecision());
  }

  if (m_notBeforeHasBeenSet) {
    payload.WithDouble("NotBefore", m_notBefore.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
