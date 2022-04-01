/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/EventBridgeMetadata.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Appflow
{
namespace Model
{

EventBridgeMetadata::EventBridgeMetadata()
{
}

EventBridgeMetadata::EventBridgeMetadata(JsonView jsonValue)
{
  *this = jsonValue;
}

EventBridgeMetadata& EventBridgeMetadata::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue EventBridgeMetadata::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
