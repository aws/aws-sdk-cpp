/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apiportal/model/WafApiSecurityEventDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace APIPortal {
namespace Model {

WafApiSecurityEventDetail::WafApiSecurityEventDetail(JsonView jsonValue) { *this = jsonValue; }

WafApiSecurityEventDetail& WafApiSecurityEventDetail::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("label")) {
    m_label = jsonValue.GetString("label");
    m_labelHasBeenSet = true;
  }
  if (jsonValue.ValueExists("category")) {
    m_category = jsonValue.GetString("category");
    m_categoryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("confidence")) {
    m_confidence = ConfidenceMapper::GetConfidenceForName(jsonValue.GetString("confidence"));
    m_confidenceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("webAclArn")) {
    m_webAclArn = jsonValue.GetString("webAclArn");
    m_webAclArnHasBeenSet = true;
  }
  return *this;
}

JsonValue WafApiSecurityEventDetail::Jsonize() const {
  JsonValue payload;

  if (m_labelHasBeenSet) {
    payload.WithString("label", m_label);
  }

  if (m_categoryHasBeenSet) {
    payload.WithString("category", m_category);
  }

  if (m_confidenceHasBeenSet) {
    payload.WithString("confidence", ConfidenceMapper::GetNameForConfidence(m_confidence));
  }

  if (m_webAclArnHasBeenSet) {
    payload.WithString("webAclArn", m_webAclArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
