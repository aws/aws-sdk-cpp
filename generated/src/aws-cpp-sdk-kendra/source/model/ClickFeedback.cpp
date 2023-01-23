/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/ClickFeedback.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

ClickFeedback::ClickFeedback() : 
    m_resultIdHasBeenSet(false),
    m_clickTimeHasBeenSet(false)
{
}

ClickFeedback::ClickFeedback(JsonView jsonValue) : 
    m_resultIdHasBeenSet(false),
    m_clickTimeHasBeenSet(false)
{
  *this = jsonValue;
}

ClickFeedback& ClickFeedback::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ResultId"))
  {
    m_resultId = jsonValue.GetString("ResultId");

    m_resultIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ClickTime"))
  {
    m_clickTime = jsonValue.GetDouble("ClickTime");

    m_clickTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue ClickFeedback::Jsonize() const
{
  JsonValue payload;

  if(m_resultIdHasBeenSet)
  {
   payload.WithString("ResultId", m_resultId);

  }

  if(m_clickTimeHasBeenSet)
  {
   payload.WithDouble("ClickTime", m_clickTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
