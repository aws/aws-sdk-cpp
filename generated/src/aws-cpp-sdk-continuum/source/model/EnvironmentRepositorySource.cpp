/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/EnvironmentRepositorySource.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {

EnvironmentRepositorySource::EnvironmentRepositorySource(JsonView jsonValue) { *this = jsonValue; }

EnvironmentRepositorySource& EnvironmentRepositorySource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("integrationId")) {
    m_integrationId = jsonValue.GetString("integrationId");
    m_integrationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("repository")) {
    m_repository = jsonValue.GetString("repository");
    m_repositoryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("defaultBranch")) {
    m_defaultBranch = jsonValue.GetString("defaultBranch");
    m_defaultBranchHasBeenSet = true;
  }
  return *this;
}

JsonValue EnvironmentRepositorySource::Jsonize() const {
  JsonValue payload;

  if (m_integrationIdHasBeenSet) {
    payload.WithString("integrationId", m_integrationId);
  }

  if (m_repositoryHasBeenSet) {
    payload.WithString("repository", m_repository);
  }

  if (m_defaultBranchHasBeenSet) {
    payload.WithString("defaultBranch", m_defaultBranch);
  }

  return payload;
}

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
