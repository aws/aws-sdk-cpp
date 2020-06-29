/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lex-models/model/UtteranceData.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelBuildingService
{
namespace Model
{

UtteranceData::UtteranceData() : 
    m_utteranceStringHasBeenSet(false),
    m_count(0),
    m_countHasBeenSet(false),
    m_distinctUsers(0),
    m_distinctUsersHasBeenSet(false),
    m_firstUtteredDateHasBeenSet(false),
    m_lastUtteredDateHasBeenSet(false)
{
}

UtteranceData::UtteranceData(JsonView jsonValue) : 
    m_utteranceStringHasBeenSet(false),
    m_count(0),
    m_countHasBeenSet(false),
    m_distinctUsers(0),
    m_distinctUsersHasBeenSet(false),
    m_firstUtteredDateHasBeenSet(false),
    m_lastUtteredDateHasBeenSet(false)
{
  *this = jsonValue;
}

UtteranceData& UtteranceData::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("utteranceString"))
  {
    m_utteranceString = jsonValue.GetString("utteranceString");

    m_utteranceStringHasBeenSet = true;
  }

  if(jsonValue.ValueExists("count"))
  {
    m_count = jsonValue.GetInteger("count");

    m_countHasBeenSet = true;
  }

  if(jsonValue.ValueExists("distinctUsers"))
  {
    m_distinctUsers = jsonValue.GetInteger("distinctUsers");

    m_distinctUsersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("firstUtteredDate"))
  {
    m_firstUtteredDate = jsonValue.GetDouble("firstUtteredDate");

    m_firstUtteredDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastUtteredDate"))
  {
    m_lastUtteredDate = jsonValue.GetDouble("lastUtteredDate");

    m_lastUtteredDateHasBeenSet = true;
  }

  return *this;
}

JsonValue UtteranceData::Jsonize() const
{
  JsonValue payload;

  if(m_utteranceStringHasBeenSet)
  {
   payload.WithString("utteranceString", m_utteranceString);

  }

  if(m_countHasBeenSet)
  {
   payload.WithInteger("count", m_count);

  }

  if(m_distinctUsersHasBeenSet)
  {
   payload.WithInteger("distinctUsers", m_distinctUsers);

  }

  if(m_firstUtteredDateHasBeenSet)
  {
   payload.WithDouble("firstUtteredDate", m_firstUtteredDate.SecondsWithMSPrecision());
  }

  if(m_lastUtteredDateHasBeenSet)
  {
   payload.WithDouble("lastUtteredDate", m_lastUtteredDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
