/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/medialive/model/Rec601Settings.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaLive
{
namespace Model
{

Rec601Settings::Rec601Settings()
{
}

Rec601Settings::Rec601Settings(JsonView jsonValue)
{
  *this = jsonValue;
}

Rec601Settings& Rec601Settings::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue Rec601Settings::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace MediaLive
} // namespace Aws
