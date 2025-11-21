/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/model/BatchPutAttributeOutput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {

BatchPutAttributeOutput::BatchPutAttributeOutput(JsonView jsonValue) { *this = jsonValue; }

BatchPutAttributeOutput& BatchPutAttributeOutput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("attributeIdentifier")) {
    m_attributeIdentifier = jsonValue.GetString("attributeIdentifier");
    m_attributeIdentifierHasBeenSet = true;
  }
  return *this;
}

JsonValue BatchPutAttributeOutput::Jsonize() const {
  JsonValue payload;

  if (m_attributeIdentifierHasBeenSet) {
    payload.WithString("attributeIdentifier", m_attributeIdentifier);
  }

  return payload;
}

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
