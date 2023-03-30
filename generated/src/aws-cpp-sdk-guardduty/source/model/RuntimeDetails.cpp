/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/RuntimeDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

RuntimeDetails::RuntimeDetails() : 
    m_processHasBeenSet(false),
    m_contextHasBeenSet(false)
{
}

RuntimeDetails::RuntimeDetails(JsonView jsonValue) : 
    m_processHasBeenSet(false),
    m_contextHasBeenSet(false)
{
  *this = jsonValue;
}

RuntimeDetails& RuntimeDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("process"))
  {
    m_process = jsonValue.GetObject("process");

    m_processHasBeenSet = true;
  }

  if(jsonValue.ValueExists("context"))
  {
    m_context = jsonValue.GetObject("context");

    m_contextHasBeenSet = true;
  }

  return *this;
}

JsonValue RuntimeDetails::Jsonize() const
{
  JsonValue payload;

  if(m_processHasBeenSet)
  {
   payload.WithObject("process", m_process.Jsonize());

  }

  if(m_contextHasBeenSet)
  {
   payload.WithObject("context", m_context.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
