/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kafka/model/RecordConverter.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Kafka {
namespace Model {

RecordConverter::RecordConverter(JsonView jsonValue) { *this = jsonValue; }

RecordConverter& RecordConverter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("valueConverter")) {
    m_valueConverter = ValueConverterMapper::GetValueConverterForName(jsonValue.GetString("valueConverter"));
    m_valueConverterHasBeenSet = true;
  }
  return *this;
}

JsonValue RecordConverter::Jsonize() const {
  JsonValue payload;

  if (m_valueConverterHasBeenSet) {
    payload.WithString("valueConverter", ValueConverterMapper::GetNameForValueConverter(m_valueConverter));
  }

  return payload;
}

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
