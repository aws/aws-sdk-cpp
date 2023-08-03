/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/model/NoApiRenderConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AmplifyUIBuilder
{
namespace Model
{

NoApiRenderConfig::NoApiRenderConfig()
{
}

NoApiRenderConfig::NoApiRenderConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

NoApiRenderConfig& NoApiRenderConfig::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue NoApiRenderConfig::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
