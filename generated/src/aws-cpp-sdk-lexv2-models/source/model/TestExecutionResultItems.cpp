/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/TestExecutionResultItems.h>
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

TestExecutionResultItems::TestExecutionResultItems() : 
    m_overallTestResultsHasBeenSet(false),
    m_conversationLevelTestResultsHasBeenSet(false),
    m_intentClassificationTestResultsHasBeenSet(false),
    m_intentLevelSlotResolutionTestResultsHasBeenSet(false),
    m_utteranceLevelTestResultsHasBeenSet(false)
{
}

TestExecutionResultItems::TestExecutionResultItems(JsonView jsonValue) : 
    m_overallTestResultsHasBeenSet(false),
    m_conversationLevelTestResultsHasBeenSet(false),
    m_intentClassificationTestResultsHasBeenSet(false),
    m_intentLevelSlotResolutionTestResultsHasBeenSet(false),
    m_utteranceLevelTestResultsHasBeenSet(false)
{
  *this = jsonValue;
}

TestExecutionResultItems& TestExecutionResultItems::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("overallTestResults"))
  {
    m_overallTestResults = jsonValue.GetObject("overallTestResults");

    m_overallTestResultsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("conversationLevelTestResults"))
  {
    m_conversationLevelTestResults = jsonValue.GetObject("conversationLevelTestResults");

    m_conversationLevelTestResultsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("intentClassificationTestResults"))
  {
    m_intentClassificationTestResults = jsonValue.GetObject("intentClassificationTestResults");

    m_intentClassificationTestResultsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("intentLevelSlotResolutionTestResults"))
  {
    m_intentLevelSlotResolutionTestResults = jsonValue.GetObject("intentLevelSlotResolutionTestResults");

    m_intentLevelSlotResolutionTestResultsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("utteranceLevelTestResults"))
  {
    m_utteranceLevelTestResults = jsonValue.GetObject("utteranceLevelTestResults");

    m_utteranceLevelTestResultsHasBeenSet = true;
  }

  return *this;
}

JsonValue TestExecutionResultItems::Jsonize() const
{
  JsonValue payload;

  if(m_overallTestResultsHasBeenSet)
  {
   payload.WithObject("overallTestResults", m_overallTestResults.Jsonize());

  }

  if(m_conversationLevelTestResultsHasBeenSet)
  {
   payload.WithObject("conversationLevelTestResults", m_conversationLevelTestResults.Jsonize());

  }

  if(m_intentClassificationTestResultsHasBeenSet)
  {
   payload.WithObject("intentClassificationTestResults", m_intentClassificationTestResults.Jsonize());

  }

  if(m_intentLevelSlotResolutionTestResultsHasBeenSet)
  {
   payload.WithObject("intentLevelSlotResolutionTestResults", m_intentLevelSlotResolutionTestResults.Jsonize());

  }

  if(m_utteranceLevelTestResultsHasBeenSet)
  {
   payload.WithObject("utteranceLevelTestResults", m_utteranceLevelTestResults.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
