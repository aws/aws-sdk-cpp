/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/location/model/JobInputOptions.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LocationService {
namespace Model {

JobInputOptions::JobInputOptions(JsonView jsonValue) { *this = jsonValue; }

JobInputOptions& JobInputOptions::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Location")) {
    m_location = jsonValue.GetString("Location");
    m_locationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Format")) {
    m_format = JobInputFormatMapper::GetJobInputFormatForName(jsonValue.GetString("Format"));
    m_formatHasBeenSet = true;
  }
  return *this;
}

JsonValue JobInputOptions::Jsonize() const {
  JsonValue payload;

  if (m_locationHasBeenSet) {
    payload.WithString("Location", m_location);
  }

  if (m_formatHasBeenSet) {
    payload.WithString("Format", JobInputFormatMapper::GetNameForJobInputFormat(m_format));
  }

  return payload;
}

}  // namespace Model
}  // namespace LocationService
}  // namespace Aws
