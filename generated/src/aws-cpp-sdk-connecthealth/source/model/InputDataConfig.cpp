/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connecthealth/model/InputDataConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectHealth {
namespace Model {

InputDataConfig::InputDataConfig(JsonView jsonValue) { *this = jsonValue; }

InputDataConfig& InputDataConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("fhirServer")) {
    m_fhirServer = jsonValue.GetObject("fhirServer");
    m_fhirServerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("s3Sources")) {
    Aws::Utils::Array<JsonView> s3SourcesJsonList = jsonValue.GetArray("s3Sources");
    for (unsigned s3SourcesIndex = 0; s3SourcesIndex < s3SourcesJsonList.GetLength(); ++s3SourcesIndex) {
      m_s3Sources.push_back(s3SourcesJsonList[s3SourcesIndex].AsObject());
    }
    m_s3SourcesHasBeenSet = true;
  }
  return *this;
}

JsonValue InputDataConfig::Jsonize() const {
  JsonValue payload;

  if (m_fhirServerHasBeenSet) {
    payload.WithObject("fhirServer", m_fhirServer.Jsonize());
  }

  if (m_s3SourcesHasBeenSet) {
    Aws::Utils::Array<JsonValue> s3SourcesJsonList(m_s3Sources.size());
    for (unsigned s3SourcesIndex = 0; s3SourcesIndex < s3SourcesJsonList.GetLength(); ++s3SourcesIndex) {
      s3SourcesJsonList[s3SourcesIndex].AsObject(m_s3Sources[s3SourcesIndex].Jsonize());
    }
    payload.WithArray("s3Sources", std::move(s3SourcesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
