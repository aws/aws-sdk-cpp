/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/TestExecutionSummary.h>
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

TestExecutionSummary::TestExecutionSummary() : 
    m_testExecutionIdHasBeenSet(false),
    m_creationDateTimeHasBeenSet(false),
    m_lastUpdatedDateTimeHasBeenSet(false),
    m_testExecutionStatus(TestExecutionStatus::NOT_SET),
    m_testExecutionStatusHasBeenSet(false),
    m_testSetIdHasBeenSet(false),
    m_testSetNameHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_apiMode(TestExecutionApiMode::NOT_SET),
    m_apiModeHasBeenSet(false),
    m_testExecutionModality(TestExecutionModality::NOT_SET),
    m_testExecutionModalityHasBeenSet(false)
{
}

TestExecutionSummary::TestExecutionSummary(JsonView jsonValue) : 
    m_testExecutionIdHasBeenSet(false),
    m_creationDateTimeHasBeenSet(false),
    m_lastUpdatedDateTimeHasBeenSet(false),
    m_testExecutionStatus(TestExecutionStatus::NOT_SET),
    m_testExecutionStatusHasBeenSet(false),
    m_testSetIdHasBeenSet(false),
    m_testSetNameHasBeenSet(false),
    m_targetHasBeenSet(false),
    m_apiMode(TestExecutionApiMode::NOT_SET),
    m_apiModeHasBeenSet(false),
    m_testExecutionModality(TestExecutionModality::NOT_SET),
    m_testExecutionModalityHasBeenSet(false)
{
  *this = jsonValue;
}

TestExecutionSummary& TestExecutionSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("testExecutionId"))
  {
    m_testExecutionId = jsonValue.GetString("testExecutionId");

    m_testExecutionIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationDateTime"))
  {
    m_creationDateTime = jsonValue.GetDouble("creationDateTime");

    m_creationDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUpdatedDateTime"))
  {
    m_lastUpdatedDateTime = jsonValue.GetDouble("lastUpdatedDateTime");

    m_lastUpdatedDateTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("testExecutionStatus"))
  {
    m_testExecutionStatus = TestExecutionStatusMapper::GetTestExecutionStatusForName(jsonValue.GetString("testExecutionStatus"));

    m_testExecutionStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("testSetId"))
  {
    m_testSetId = jsonValue.GetString("testSetId");

    m_testSetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("testSetName"))
  {
    m_testSetName = jsonValue.GetString("testSetName");

    m_testSetNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("target"))
  {
    m_target = jsonValue.GetObject("target");

    m_targetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("apiMode"))
  {
    m_apiMode = TestExecutionApiModeMapper::GetTestExecutionApiModeForName(jsonValue.GetString("apiMode"));

    m_apiModeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("testExecutionModality"))
  {
    m_testExecutionModality = TestExecutionModalityMapper::GetTestExecutionModalityForName(jsonValue.GetString("testExecutionModality"));

    m_testExecutionModalityHasBeenSet = true;
  }

  return *this;
}

JsonValue TestExecutionSummary::Jsonize() const
{
  JsonValue payload;

  if(m_testExecutionIdHasBeenSet)
  {
   payload.WithString("testExecutionId", m_testExecutionId);

  }

  if(m_creationDateTimeHasBeenSet)
  {
   payload.WithDouble("creationDateTime", m_creationDateTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedDateTimeHasBeenSet)
  {
   payload.WithDouble("lastUpdatedDateTime", m_lastUpdatedDateTime.SecondsWithMSPrecision());
  }

  if(m_testExecutionStatusHasBeenSet)
  {
   payload.WithString("testExecutionStatus", TestExecutionStatusMapper::GetNameForTestExecutionStatus(m_testExecutionStatus));
  }

  if(m_testSetIdHasBeenSet)
  {
   payload.WithString("testSetId", m_testSetId);

  }

  if(m_testSetNameHasBeenSet)
  {
   payload.WithString("testSetName", m_testSetName);

  }

  if(m_targetHasBeenSet)
  {
   payload.WithObject("target", m_target.Jsonize());

  }

  if(m_apiModeHasBeenSet)
  {
   payload.WithString("apiMode", TestExecutionApiModeMapper::GetNameForTestExecutionApiMode(m_apiMode));
  }

  if(m_testExecutionModalityHasBeenSet)
  {
   payload.WithString("testExecutionModality", TestExecutionModalityMapper::GetNameForTestExecutionModality(m_testExecutionModality));
  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
