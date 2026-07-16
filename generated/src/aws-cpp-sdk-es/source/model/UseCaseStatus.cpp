/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/es/model/UseCaseStatus.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ElasticsearchService {
namespace Model {

UseCaseStatus::UseCaseStatus(JsonView jsonValue) { *this = jsonValue; }

UseCaseStatus& UseCaseStatus::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Options")) {
    m_options = DomainUseCaseMapper::GetDomainUseCaseForName(jsonValue.GetString("Options"));
    m_optionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Status")) {
    m_status = jsonValue.GetObject("Status");
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue UseCaseStatus::Jsonize() const {
  JsonValue payload;

  if (m_optionsHasBeenSet) {
    payload.WithString("Options", DomainUseCaseMapper::GetNameForDomainUseCase(m_options));
  }

  if (m_statusHasBeenSet) {
    payload.WithObject("Status", m_status.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace ElasticsearchService
}  // namespace Aws
