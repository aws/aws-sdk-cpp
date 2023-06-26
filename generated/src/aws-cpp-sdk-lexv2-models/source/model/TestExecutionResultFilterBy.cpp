/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/TestExecutionResultFilterBy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

TestExecutionResultFilterBy::TestExecutionResultFilterBy() : 
    m_resultTypeFilter(TestResultTypeFilter::NOT_SET),
    m_resultTypeFilterHasBeenSet(false),
    m_conversationLevelTestResultsFilterByHasBeenSet(false)
{
}

TestExecutionResultFilterBy::TestExecutionResultFilterBy(JsonView jsonValue) : 
    m_resultTypeFilter(TestResultTypeFilter::NOT_SET),
    m_resultTypeFilterHasBeenSet(false),
    m_conversationLevelTestResultsFilterByHasBeenSet(false)
{
  *this = jsonValue;
}

TestExecutionResultFilterBy& TestExecutionResultFilterBy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("resultTypeFilter"))
  {
    m_resultTypeFilter = TestResultTypeFilterMapper::GetTestResultTypeFilterForName(jsonValue.GetString("resultTypeFilter"));

    m_resultTypeFilterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("conversationLevelTestResultsFilterBy"))
  {
    m_conversationLevelTestResultsFilterBy = jsonValue.GetObject("conversationLevelTestResultsFilterBy");

    m_conversationLevelTestResultsFilterByHasBeenSet = true;
  }

  return *this;
}

JsonValue TestExecutionResultFilterBy::Jsonize() const
{
  JsonValue payload;

  if(m_resultTypeFilterHasBeenSet)
  {
   payload.WithString("resultTypeFilter", TestResultTypeFilterMapper::GetNameForTestResultTypeFilter(m_resultTypeFilter));
  }

  if(m_conversationLevelTestResultsFilterByHasBeenSet)
  {
   payload.WithObject("conversationLevelTestResultsFilterBy", m_conversationLevelTestResultsFilterBy.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
