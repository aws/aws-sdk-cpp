/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/SubjectFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ACM {
namespace Model {

SubjectFilter::SubjectFilter(JsonView jsonValue) { *this = jsonValue; }

SubjectFilter& SubjectFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("CommonName")) {
    m_commonName = jsonValue.GetObject("CommonName");
    m_commonNameHasBeenSet = true;
  }
  return *this;
}

JsonValue SubjectFilter::Jsonize() const {
  JsonValue payload;

  if (m_commonNameHasBeenSet) {
    payload.WithObject("CommonName", m_commonName.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ACM
}  // namespace Aws
