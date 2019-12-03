/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
