/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/AutoDisablePolicy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace imagebuilder
{
namespace Model
{

AutoDisablePolicy::AutoDisablePolicy(JsonView jsonValue)
{
  *this = jsonValue;
}

AutoDisablePolicy& AutoDisablePolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("failureCount"))
  {
    m_failureCount = jsonValue.GetInteger("failureCount");
    m_failureCountHasBeenSet = true;
  }
  return *this;
}

JsonValue AutoDisablePolicy::Jsonize() const
{
  JsonValue payload;

  if(m_failureCountHasBeenSet)
  {
   payload.WithInteger("failureCount", m_failureCount);

  }

  return payload;
}

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
