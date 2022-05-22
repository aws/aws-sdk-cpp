/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/LifeCycleLastLaunch.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace drs
{
namespace Model
{

LifeCycleLastLaunch::LifeCycleLastLaunch() : 
    m_initiatedHasBeenSet(false)
{
}

LifeCycleLastLaunch::LifeCycleLastLaunch(JsonView jsonValue) : 
    m_initiatedHasBeenSet(false)
{
  *this = jsonValue;
}

LifeCycleLastLaunch& LifeCycleLastLaunch::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("initiated"))
  {
    m_initiated = jsonValue.GetObject("initiated");

    m_initiatedHasBeenSet = true;
  }

  return *this;
}

JsonValue LifeCycleLastLaunch::Jsonize() const
{
  JsonValue payload;

  if(m_initiatedHasBeenSet)
  {
   payload.WithObject("initiated", m_initiated.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace drs
} // namespace Aws
