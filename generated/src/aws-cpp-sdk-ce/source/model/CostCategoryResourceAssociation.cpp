/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ce/model/CostCategoryResourceAssociation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CostExplorer {
namespace Model {

CostCategoryResourceAssociation::CostCategoryResourceAssociation(JsonView jsonValue) { *this = jsonValue; }

CostCategoryResourceAssociation& CostCategoryResourceAssociation::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ResourceArn")) {
    m_resourceArn = jsonValue.GetString("ResourceArn");
    m_resourceArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CostCategoryName")) {
    m_costCategoryName = jsonValue.GetString("CostCategoryName");
    m_costCategoryNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CostCategoryArn")) {
    m_costCategoryArn = jsonValue.GetString("CostCategoryArn");
    m_costCategoryArnHasBeenSet = true;
  }
  return *this;
}

JsonValue CostCategoryResourceAssociation::Jsonize() const {
  JsonValue payload;

  if (m_resourceArnHasBeenSet) {
    payload.WithString("ResourceArn", m_resourceArn);
  }

  if (m_costCategoryNameHasBeenSet) {
    payload.WithString("CostCategoryName", m_costCategoryName);
  }

  if (m_costCategoryArnHasBeenSet) {
    payload.WithString("CostCategoryArn", m_costCategoryArn);
  }

  return payload;
}

}  // namespace Model
}  // namespace CostExplorer
}  // namespace Aws
