/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appflow/model/ErrorInfo.h>
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

ErrorInfo::ErrorInfo() : 
    m_putFailuresCount(0),
    m_putFailuresCountHasBeenSet(false),
    m_executionMessageHasBeenSet(false)
{
}

ErrorInfo::ErrorInfo(JsonView jsonValue) : 
    m_putFailuresCount(0),
    m_putFailuresCountHasBeenSet(false),
    m_executionMessageHasBeenSet(false)
{
  *this = jsonValue;
}

ErrorInfo& ErrorInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("putFailuresCount"))
  {
    m_putFailuresCount = jsonValue.GetInt64("putFailuresCount");

    m_putFailuresCountHasBeenSet = true;
  }

  if(jsonValue.ValueExists("executionMessage"))
  {
    m_executionMessage = jsonValue.GetString("executionMessage");

    m_executionMessageHasBeenSet = true;
  }

  return *this;
}

JsonValue ErrorInfo::Jsonize() const
{
  JsonValue payload;

  if(m_putFailuresCountHasBeenSet)
  {
   payload.WithInt64("putFailuresCount", m_putFailuresCount);

  }

  if(m_executionMessageHasBeenSet)
  {
   payload.WithString("executionMessage", m_executionMessage);

  }

  return payload;
}

} // namespace Model
} // namespace Appflow
} // namespace Aws
