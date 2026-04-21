/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/location/model/JobOutputOptions.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LocationService {
namespace Model {

JobOutputOptions::JobOutputOptions(JsonView jsonValue) { *this = jsonValue; }

JobOutputOptions& JobOutputOptions::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Format")) {
    m_format = JobOutputFormatMapper::GetJobOutputFormatForName(jsonValue.GetString("Format"));
    m_formatHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Location")) {
    m_location = jsonValue.GetString("Location");
    m_locationHasBeenSet = true;
  }
  return *this;
}

JsonValue JobOutputOptions::Jsonize() const {
  JsonValue payload;

  if (m_formatHasBeenSet) {
    payload.WithString("Format", JobOutputFormatMapper::GetNameForJobOutputFormat(m_format));
  }

  if (m_locationHasBeenSet) {
    payload.WithString("Location", m_location);
  }

  return payload;
}

}  // namespace Model
}  // namespace LocationService
}  // namespace Aws
