/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/CertificateFilterStatement.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ACM {
namespace Model {

CertificateFilterStatement::CertificateFilterStatement(JsonView jsonValue) { *this = jsonValue; }

CertificateFilterStatement& CertificateFilterStatement::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("And")) {
    Aws::Utils::Array<JsonView> andJsonList = jsonValue.GetArray("And");
    for (unsigned andIndex = 0; andIndex < andJsonList.GetLength(); ++andIndex) {
      m_and.push_back(andJsonList[andIndex].AsObject());
    }
    m_andHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Or")) {
    Aws::Utils::Array<JsonView> orJsonList = jsonValue.GetArray("Or");
    for (unsigned orIndex = 0; orIndex < orJsonList.GetLength(); ++orIndex) {
      m_or.push_back(orJsonList[orIndex].AsObject());
    }
    m_orHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Not")) {
    m_not = Aws::MakeShared<CertificateFilterStatement>("CertificateFilterStatement", jsonValue.GetObject("Not"));
    m_notHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Filter")) {
    m_filter = jsonValue.GetObject("Filter");
    m_filterHasBeenSet = true;
  }
  return *this;
}

JsonValue CertificateFilterStatement::Jsonize() const {
  JsonValue payload;

  if (m_andHasBeenSet) {
    Aws::Utils::Array<JsonValue> andJsonList(m_and.size());
    for (unsigned andIndex = 0; andIndex < andJsonList.GetLength(); ++andIndex) {
      andJsonList[andIndex].AsObject(m_and[andIndex].Jsonize());
    }
    payload.WithArray("And", std::move(andJsonList));
  }

  if (m_orHasBeenSet) {
    Aws::Utils::Array<JsonValue> orJsonList(m_or.size());
    for (unsigned orIndex = 0; orIndex < orJsonList.GetLength(); ++orIndex) {
      orJsonList[orIndex].AsObject(m_or[orIndex].Jsonize());
    }
    payload.WithArray("Or", std::move(orJsonList));
  }

  if (m_notHasBeenSet) {
    payload.WithObject("Not", m_not->Jsonize());
  }

  if (m_filterHasBeenSet) {
    payload.WithObject("Filter", m_filter.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
