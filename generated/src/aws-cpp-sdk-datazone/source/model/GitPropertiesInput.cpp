/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/model/GitPropertiesInput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {

GitPropertiesInput::GitPropertiesInput(JsonView jsonValue) { *this = jsonValue; }

GitPropertiesInput& GitPropertiesInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("codeConnectionArn")) {
    m_codeConnectionArn = jsonValue.GetString("codeConnectionArn");
    m_codeConnectionArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("repositoryId")) {
    m_repositoryId = jsonValue.GetString("repositoryId");
    m_repositoryIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("defaultBranch")) {
    m_defaultBranch = jsonValue.GetString("defaultBranch");
    m_defaultBranchHasBeenSet = true;
  }
  return *this;
}

JsonValue GitPropertiesInput::Jsonize() const {
  JsonValue payload;

  if (m_codeConnectionArnHasBeenSet) {
    payload.WithString("codeConnectionArn", m_codeConnectionArn);
  }

  if (m_repositoryIdHasBeenSet) {
    payload.WithString("repositoryId", m_repositoryId);
  }

  if (m_defaultBranchHasBeenSet) {
    payload.WithString("defaultBranch", m_defaultBranch);
  }

  return payload;
}

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
