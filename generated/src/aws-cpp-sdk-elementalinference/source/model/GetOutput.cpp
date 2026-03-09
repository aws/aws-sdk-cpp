/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/elementalinference/model/GetOutput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ElementalInference {
namespace Model {

GetOutput::GetOutput(JsonView jsonValue) { *this = jsonValue; }

GetOutput& GetOutput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("outputConfig")) {
    m_outputConfig = jsonValue.GetObject("outputConfig");
    m_outputConfigHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = OutputStatusMapper::GetOutputStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("fromAssociation")) {
    m_fromAssociation = jsonValue.GetBool("fromAssociation");
    m_fromAssociationHasBeenSet = true;
  }
  return *this;
}

JsonValue GetOutput::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_outputConfigHasBeenSet) {
    payload.WithObject("outputConfig", m_outputConfig.Jsonize());
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", OutputStatusMapper::GetNameForOutputStatus(m_status));
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_fromAssociationHasBeenSet) {
    payload.WithBool("fromAssociation", m_fromAssociation);
  }

  return payload;
}

}  // namespace Model
}  // namespace ElementalInference
}  // namespace Aws
