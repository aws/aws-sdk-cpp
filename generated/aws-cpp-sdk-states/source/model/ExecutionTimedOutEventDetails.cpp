/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/states/model/ExecutionTimedOutEventDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SFN
{
namespace Model
{

ExecutionTimedOutEventDetails::ExecutionTimedOutEventDetails() : 
    m_errorHasBeenSet(false),
    m_causeHasBeenSet(false)
{
}

ExecutionTimedOutEventDetails::ExecutionTimedOutEventDetails(JsonView jsonValue) : 
    m_errorHasBeenSet(false),
    m_causeHasBeenSet(false)
{
  *this = jsonValue;
}

ExecutionTimedOutEventDetails& ExecutionTimedOutEventDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("error"))
  {
    m_error = jsonValue.GetString("error");

    m_errorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cause"))
  {
    m_cause = jsonValue.GetString("cause");

    m_causeHasBeenSet = true;
  }

  return *this;
}

JsonValue ExecutionTimedOutEventDetails::Jsonize() const
{
  JsonValue payload;

  if(m_errorHasBeenSet)
  {
   payload.WithString("error", m_error);

  }

  if(m_causeHasBeenSet)
  {
   payload.WithString("cause", m_cause);

  }

  return payload;
}

} // namespace Model
} // namespace SFN
} // namespace Aws
