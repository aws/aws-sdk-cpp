/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/DailySchedule.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Macie2
{
namespace Model
{

DailySchedule::DailySchedule()
{
}

DailySchedule::DailySchedule(JsonView jsonValue)
{
  *this = jsonValue;
}

DailySchedule& DailySchedule::operator =(JsonView jsonValue)
{
  AWS_UNREFERENCED_PARAM(jsonValue);
  return *this;
}

JsonValue DailySchedule::Jsonize() const
{
  JsonValue payload;

  return payload;
}

} // namespace Model
} // namespace Macie2
} // namespace Aws
