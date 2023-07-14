/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifybackend/model/ResourceConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AmplifyBackend
{
namespace Model
{

ResourceConfig::ResourceConfig()
{
}

ResourceConfig::ResourceConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

ResourceConfig& ResourceConfig::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue ResourceConfig::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace AmplifyBackend
} // namespace Aws
