/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/comprehend/model/EntityRecognizerFilter.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Comprehend
{
namespace Model
{

EntityRecognizerFilter::EntityRecognizerFilter() : 
    m_status(ModelStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_submitTimeBeforeHasBeenSet(false),
    m_submitTimeAfterHasBeenSet(false)
{
}

EntityRecognizerFilter::EntityRecognizerFilter(JsonView jsonValue) : 
    m_status(ModelStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_submitTimeBeforeHasBeenSet(false),
    m_submitTimeAfterHasBeenSet(false)
{
  *this = jsonValue;
}

EntityRecognizerFilter& EntityRecognizerFilter::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Status"))
  {
    m_status = ModelStatusMapper::GetModelStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubmitTimeBefore"))
  {
    m_submitTimeBefore = jsonValue.GetDouble("SubmitTimeBefore");

    m_submitTimeBeforeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubmitTimeAfter"))
  {
    m_submitTimeAfter = jsonValue.GetDouble("SubmitTimeAfter");

    m_submitTimeAfterHasBeenSet = true;
  }

  return *this;
}

JsonValue EntityRecognizerFilter::Jsonize() const
{
  JsonValue payload;

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ModelStatusMapper::GetNameForModelStatus(m_status));
  }

  if(m_submitTimeBeforeHasBeenSet)
  {
   payload.WithDouble("SubmitTimeBefore", m_submitTimeBefore.SecondsWithMSPrecision());
  }

  if(m_submitTimeAfterHasBeenSet)
  {
   payload.WithDouble("SubmitTimeAfter", m_submitTimeAfter.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace Comprehend
} // namespace Aws
