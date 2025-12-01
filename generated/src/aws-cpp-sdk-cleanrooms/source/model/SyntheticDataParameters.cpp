/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/SyntheticDataParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CleanRooms {
namespace Model {

SyntheticDataParameters::SyntheticDataParameters(JsonView jsonValue) { *this = jsonValue; }

SyntheticDataParameters& SyntheticDataParameters::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("mlSyntheticDataParameters")) {
    m_mlSyntheticDataParameters = jsonValue.GetObject("mlSyntheticDataParameters");
    m_mlSyntheticDataParametersHasBeenSet = true;
  }
  return *this;
}

JsonValue SyntheticDataParameters::Jsonize() const {
  JsonValue payload;

  if (m_mlSyntheticDataParametersHasBeenSet) {
    payload.WithObject("mlSyntheticDataParameters", m_mlSyntheticDataParameters.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
