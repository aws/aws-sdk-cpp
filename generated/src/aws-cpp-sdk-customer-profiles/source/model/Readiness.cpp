/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/Readiness.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CustomerProfiles
{
namespace Model
{

Readiness::Readiness(JsonView jsonValue)
{
  *this = jsonValue;
}

Readiness& Readiness::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ProgressPercentage"))
  {
    m_progressPercentage = jsonValue.GetInteger("ProgressPercentage");
    m_progressPercentageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Message"))
  {
    m_message = jsonValue.GetString("Message");
    m_messageHasBeenSet = true;
  }
  return *this;
}

JsonValue Readiness::Jsonize() const
{
  JsonValue payload;

  if(m_progressPercentageHasBeenSet)
  {
   payload.WithInteger("ProgressPercentage", m_progressPercentage);

  }

  if(m_messageHasBeenSet)
  {
   payload.WithString("Message", m_message);

  }

  return payload;
}

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
