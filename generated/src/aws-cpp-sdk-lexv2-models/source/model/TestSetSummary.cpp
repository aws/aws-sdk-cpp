/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/TestSetSummary.h>
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

TestSetSummary::TestSetSummary() : 
    m_testSetIdHasBeenSet(false),
    m_testSetNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_modality(TestSetModality::NOT_SET),
    m_modalityHasBeenSet(false),
    m_status(TestSetStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_numTurns(0),
    m_numTurnsHasBeenSet(false),
    m_storageLocationHasBeenSet(false),
    m_creationDateTimeHasBeenSet(false),
    m_lastUpdatedDateTimeHasBeenSet(false)
{
}

TestSetSummary::TestSetSummary(JsonView jsonValue) : 
    m_testSetIdHasBeenSet(false),
    m_testSetNameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_modality(TestSetModality::NOT_SET),
    m_modalityHasBeenSet(false),
    m_status(TestSetStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_numTurns(0),
    m_numTurnsHasBeenSet(false),
    m_storageLocationHasBeenSet(false),
    m_creationDateTimeHasBeenSet(false),
    m_lastUpdatedDateTimeHasBeenSet(false)
{
  *this = jsonValue;
}

TestSetSummary& TestSetSummary::operator =(JsonView jsonValue)
{
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

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("modality"))
  {
    m_modality = TestSetModalityMapper::GetTestSetModalityForName(jsonValue.GetString("modality"));

    m_modalityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = TestSetStatusMapper::GetTestSetStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("roleArn"))
  {
    m_roleArn = jsonValue.GetString("roleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("numTurns"))
  {
    m_numTurns = jsonValue.GetInteger("numTurns");

    m_numTurnsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("storageLocation"))
  {
    m_storageLocation = jsonValue.GetObject("storageLocation");

    m_storageLocationHasBeenSet = true;
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

  return *this;
}

JsonValue TestSetSummary::Jsonize() const
{
  JsonValue payload;

  if(m_testSetIdHasBeenSet)
  {
   payload.WithString("testSetId", m_testSetId);

  }

  if(m_testSetNameHasBeenSet)
  {
   payload.WithString("testSetName", m_testSetName);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_modalityHasBeenSet)
  {
   payload.WithString("modality", TestSetModalityMapper::GetNameForTestSetModality(m_modality));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", TestSetStatusMapper::GetNameForTestSetStatus(m_status));
  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("roleArn", m_roleArn);

  }

  if(m_numTurnsHasBeenSet)
  {
   payload.WithInteger("numTurns", m_numTurns);

  }

  if(m_storageLocationHasBeenSet)
  {
   payload.WithObject("storageLocation", m_storageLocation.Jsonize());

  }

  if(m_creationDateTimeHasBeenSet)
  {
   payload.WithDouble("creationDateTime", m_creationDateTime.SecondsWithMSPrecision());
  }

  if(m_lastUpdatedDateTimeHasBeenSet)
  {
   payload.WithDouble("lastUpdatedDateTime", m_lastUpdatedDateTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
