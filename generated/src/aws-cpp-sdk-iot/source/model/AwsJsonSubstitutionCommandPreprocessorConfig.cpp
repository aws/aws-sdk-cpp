/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iot/model/AwsJsonSubstitutionCommandPreprocessorConfig.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IoT {
namespace Model {

AwsJsonSubstitutionCommandPreprocessorConfig::AwsJsonSubstitutionCommandPreprocessorConfig(JsonView jsonValue) { *this = jsonValue; }

AwsJsonSubstitutionCommandPreprocessorConfig& AwsJsonSubstitutionCommandPreprocessorConfig::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("outputFormat")) {
    m_outputFormat = OutputFormatMapper::GetOutputFormatForName(jsonValue.GetString("outputFormat"));
    m_outputFormatHasBeenSet = true;
  }
  return *this;
}

JsonValue AwsJsonSubstitutionCommandPreprocessorConfig::Jsonize() const {
  JsonValue payload;

  if (m_outputFormatHasBeenSet) {
    payload.WithString("outputFormat", OutputFormatMapper::GetNameForOutputFormat(m_outputFormat));
  }

  return payload;
}

}  // namespace Model
}  // namespace IoT
}  // namespace Aws
