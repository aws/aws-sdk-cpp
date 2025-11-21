/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecr/model/SigningRepositoryFilter.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECR {
namespace Model {

SigningRepositoryFilter::SigningRepositoryFilter(JsonView jsonValue) { *this = jsonValue; }

SigningRepositoryFilter& SigningRepositoryFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("filter")) {
    m_filter = jsonValue.GetString("filter");
    m_filterHasBeenSet = true;
  }
  if (jsonValue.ValueExists("filterType")) {
    m_filterType = SigningRepositoryFilterTypeMapper::GetSigningRepositoryFilterTypeForName(jsonValue.GetString("filterType"));
    m_filterTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue SigningRepositoryFilter::Jsonize() const {
  JsonValue payload;

  if (m_filterHasBeenSet) {
    payload.WithString("filter", m_filter);
  }

  if (m_filterTypeHasBeenSet) {
    payload.WithString("filterType", SigningRepositoryFilterTypeMapper::GetNameForSigningRepositoryFilterType(m_filterType));
  }

  return payload;
}

}  // namespace Model
}  // namespace ECR
}  // namespace Aws
