/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amplifyuibuilder/model/DataStoreRenderConfig.h>
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

DataStoreRenderConfig::DataStoreRenderConfig()
{
}

DataStoreRenderConfig::DataStoreRenderConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

DataStoreRenderConfig& DataStoreRenderConfig::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue DataStoreRenderConfig::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace AmplifyUIBuilder
} // namespace Aws
