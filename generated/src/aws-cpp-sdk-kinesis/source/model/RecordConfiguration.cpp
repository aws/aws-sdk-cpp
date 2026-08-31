/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kinesis/model/RecordConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Kinesis {
namespace Model {

RecordConfiguration::RecordConfiguration(JsonView jsonValue) { *this = jsonValue; }

RecordConfiguration& RecordConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("RecordFormatType")) {
    m_recordFormatType = RecordFormatTypeMapper::GetRecordFormatTypeForName(jsonValue.GetString("RecordFormatType"));
    m_recordFormatTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("GSRSchemaARN")) {
    m_gSRSchemaARN = jsonValue.GetString("GSRSchemaARN");
    m_gSRSchemaARNHasBeenSet = true;
  }
  return *this;
}

JsonValue RecordConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_recordFormatTypeHasBeenSet) {
    payload.WithString("RecordFormatType", RecordFormatTypeMapper::GetNameForRecordFormatType(m_recordFormatType));
  }

  if (m_gSRSchemaARNHasBeenSet) {
    payload.WithString("GSRSchemaARN", m_gSRSchemaARN);
  }

  return payload;
}

}  // namespace Model
}  // namespace Kinesis
}  // namespace Aws
