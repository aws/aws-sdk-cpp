/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediatailor/model/SpliceInsertMessage.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MediaTailor
{
namespace Model
{

SpliceInsertMessage::SpliceInsertMessage() : 
    m_availNum(0),
    m_availNumHasBeenSet(false),
    m_availsExpected(0),
    m_availsExpectedHasBeenSet(false),
    m_spliceEventId(0),
    m_spliceEventIdHasBeenSet(false),
    m_uniqueProgramId(0),
    m_uniqueProgramIdHasBeenSet(false)
{
}

SpliceInsertMessage::SpliceInsertMessage(JsonView jsonValue) : 
    m_availNum(0),
    m_availNumHasBeenSet(false),
    m_availsExpected(0),
    m_availsExpectedHasBeenSet(false),
    m_spliceEventId(0),
    m_spliceEventIdHasBeenSet(false),
    m_uniqueProgramId(0),
    m_uniqueProgramIdHasBeenSet(false)
{
  *this = jsonValue;
}

SpliceInsertMessage& SpliceInsertMessage::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AvailNum"))
  {
    m_availNum = jsonValue.GetInteger("AvailNum");

    m_availNumHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AvailsExpected"))
  {
    m_availsExpected = jsonValue.GetInteger("AvailsExpected");

    m_availsExpectedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SpliceEventId"))
  {
    m_spliceEventId = jsonValue.GetInteger("SpliceEventId");

    m_spliceEventIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UniqueProgramId"))
  {
    m_uniqueProgramId = jsonValue.GetInteger("UniqueProgramId");

    m_uniqueProgramIdHasBeenSet = true;
  }

  return *this;
}

JsonValue SpliceInsertMessage::Jsonize() const
{
  JsonValue payload;

  if(m_availNumHasBeenSet)
  {
   payload.WithInteger("AvailNum", m_availNum);

  }

  if(m_availsExpectedHasBeenSet)
  {
   payload.WithInteger("AvailsExpected", m_availsExpected);

  }

  if(m_spliceEventIdHasBeenSet)
  {
   payload.WithInteger("SpliceEventId", m_spliceEventId);

  }

  if(m_uniqueProgramIdHasBeenSet)
  {
   payload.WithInteger("UniqueProgramId", m_uniqueProgramId);

  }

  return payload;
}

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
