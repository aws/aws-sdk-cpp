/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/eks/model/ResourceConstraints.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EKS {
namespace Model {

ResourceConstraints::ResourceConstraints(JsonView jsonValue) { *this = jsonValue; }

ResourceConstraints& ResourceConstraints::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetObject("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("weight")) {
    m_weight = jsonValue.GetObject("weight");
    m_weightHasBeenSet = true;
  }
  return *this;
}

JsonValue ResourceConstraints::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithObject("name", m_name.Jsonize());
  }

  if (m_weightHasBeenSet) {
    payload.WithObject("weight", m_weight.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace EKS
}  // namespace Aws
