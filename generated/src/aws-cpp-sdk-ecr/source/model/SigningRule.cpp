/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/ecr/model/SigningRule.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ECR {
namespace Model {

SigningRule::SigningRule(JsonView jsonValue) { *this = jsonValue; }

SigningRule& SigningRule::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("signingProfileArn")) {
    m_signingProfileArn = jsonValue.GetString("signingProfileArn");
    m_signingProfileArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("repositoryFilters")) {
    Aws::Utils::Array<JsonView> repositoryFiltersJsonList = jsonValue.GetArray("repositoryFilters");
    for (unsigned repositoryFiltersIndex = 0; repositoryFiltersIndex < repositoryFiltersJsonList.GetLength(); ++repositoryFiltersIndex) {
      m_repositoryFilters.push_back(repositoryFiltersJsonList[repositoryFiltersIndex].AsObject());
    }
    m_repositoryFiltersHasBeenSet = true;
  }
  return *this;
}

JsonValue SigningRule::Jsonize() const {
  JsonValue payload;

  if (m_signingProfileArnHasBeenSet) {
    payload.WithString("signingProfileArn", m_signingProfileArn);
  }

  if (m_repositoryFiltersHasBeenSet) {
    Aws::Utils::Array<JsonValue> repositoryFiltersJsonList(m_repositoryFilters.size());
    for (unsigned repositoryFiltersIndex = 0; repositoryFiltersIndex < repositoryFiltersJsonList.GetLength(); ++repositoryFiltersIndex) {
      repositoryFiltersJsonList[repositoryFiltersIndex].AsObject(m_repositoryFilters[repositoryFiltersIndex].Jsonize());
    }
    payload.WithArray("repositoryFilters", std::move(repositoryFiltersJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace ECR
}  // namespace Aws
