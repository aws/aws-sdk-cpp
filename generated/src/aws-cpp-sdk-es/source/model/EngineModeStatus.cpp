/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/es/model/EngineModeStatus.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ElasticsearchService {
namespace Model {

EngineModeStatus::EngineModeStatus(JsonView jsonValue) { *this = jsonValue; }

EngineModeStatus& EngineModeStatus::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Options")) {
    m_options = DomainEngineModeMapper::GetDomainEngineModeForName(jsonValue.GetString("Options"));
    m_optionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = jsonValue.GetObject("Status");
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue EngineModeStatus::Jsonize() const {
  JsonValue payload;

  if (m_optionsHasBeenSet) {
    payload.WithString("Options", DomainEngineModeMapper::GetNameForDomainEngineMode(m_options));
  }

  if (m_statusHasBeenSet) {
    payload.WithObject("Status", m_status.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ElasticsearchService
}  // namespace Aws
