/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/OneTimeSchedule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector2
{
namespace Model
{

OneTimeSchedule::OneTimeSchedule()
{
}

OneTimeSchedule::OneTimeSchedule(JsonView jsonValue)
{
  *this = jsonValue;
}

OneTimeSchedule& OneTimeSchedule::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue OneTimeSchedule::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
