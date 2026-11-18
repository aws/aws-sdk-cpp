/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/abuse-signal/model/ReportData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AbuseSignal {
namespace Model {

ReportData::ReportData(JsonView jsonValue) { *this = jsonValue; }

ReportData& ReportData::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("xarf")) {
    m_xarf = jsonValue.GetObject("xarf");
    m_xarfHasBeenSet = true;
  }
  return *this;
}

JsonValue ReportData::Jsonize() const {
  JsonValue payload;

  if (m_xarfHasBeenSet) {
    if (!m_xarf.View().IsNull()) {
      payload.WithObject("xarf", JsonValue(m_xarf.View()));
    }
  }

  return payload;
}

}  // namespace Model
}  // namespace AbuseSignal
}  // namespace Aws
