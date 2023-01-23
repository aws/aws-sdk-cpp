/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/FaqStatistics.h>
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

FaqStatistics::FaqStatistics() : 
    m_indexedQuestionAnswersCount(0),
    m_indexedQuestionAnswersCountHasBeenSet(false)
{
}

FaqStatistics::FaqStatistics(JsonView jsonValue) : 
    m_indexedQuestionAnswersCount(0),
    m_indexedQuestionAnswersCountHasBeenSet(false)
{
  *this = jsonValue;
}

FaqStatistics& FaqStatistics::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("IndexedQuestionAnswersCount"))
  {
    m_indexedQuestionAnswersCount = jsonValue.GetInteger("IndexedQuestionAnswersCount");

    m_indexedQuestionAnswersCountHasBeenSet = true;
  }

  return *this;
}

JsonValue FaqStatistics::Jsonize() const
{
  JsonValue payload;

  if(m_indexedQuestionAnswersCountHasBeenSet)
  {
   payload.WithInteger("IndexedQuestionAnswersCount", m_indexedQuestionAnswersCount);

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
