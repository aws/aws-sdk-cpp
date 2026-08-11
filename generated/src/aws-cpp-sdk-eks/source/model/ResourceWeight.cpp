/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/eks/model/ResourceWeight.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EKS {
namespace Model {

ResourceWeight::ResourceWeight(JsonView jsonValue) { *this = jsonValue; }

ResourceWeight& ResourceWeight::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("weight")) {
    m_weight = jsonValue.GetInteger("weight");
    m_weightHasBeenSet = true;
  }
  return *this;
}

JsonValue ResourceWeight::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_weightHasBeenSet) {
    payload.WithInteger("weight", m_weight);
  }

  return payload;
}

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
