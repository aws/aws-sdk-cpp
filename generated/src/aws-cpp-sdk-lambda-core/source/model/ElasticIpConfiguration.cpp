/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lambda-core/model/ElasticIpConfiguration.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace LambdaCore {
namespace Model {

ElasticIpConfiguration::ElasticIpConfiguration(JsonView jsonValue) { *this = jsonValue; }

ElasticIpConfiguration& ElasticIpConfiguration::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Type")) {
    m_type = ElasticIpTypeMapper::GetElasticIpTypeForName(jsonValue.GetString("Type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue ElasticIpConfiguration::Jsonize() const {
  JsonValue payload;

  if (m_typeHasBeenSet) {
    payload.WithString("Type", ElasticIpTypeMapper::GetNameForElasticIpType(m_type));
  }

  return payload;
}

}  // namespace Model
}  // namespace LambdaCore
}  // namespace Aws
