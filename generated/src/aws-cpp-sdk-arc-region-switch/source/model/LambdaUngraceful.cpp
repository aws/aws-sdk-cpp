/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/arc-region-switch/model/LambdaUngraceful.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ARCRegionswitch
{
namespace Model
{

LambdaUngraceful::LambdaUngraceful(JsonView jsonValue)
{
  *this = jsonValue;
}

LambdaUngraceful& LambdaUngraceful::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("behavior"))
  {
    m_behavior = LambdaUngracefulBehaviorMapper::GetLambdaUngracefulBehaviorForName(jsonValue.GetString("behavior"));
    m_behaviorHasBeenSet = true;
  }
  return *this;
}

JsonValue LambdaUngraceful::Jsonize() const
{
  JsonValue payload;

  if(m_behaviorHasBeenSet)
  {
   payload.WithString("behavior", LambdaUngracefulBehaviorMapper::GetNameForLambdaUngracefulBehavior(m_behavior));
  }

  return payload;
}

} // namespace Model
} // namespace ARCRegionswitch
} // namespace Aws
