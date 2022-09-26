/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/CanSignal.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTFleetWise
{
namespace Model
{

CanSignal::CanSignal() : 
    m_messageId(0),
    m_messageIdHasBeenSet(false),
    m_isBigEndian(false),
    m_isBigEndianHasBeenSet(false),
    m_isSigned(false),
    m_isSignedHasBeenSet(false),
    m_startBit(0),
    m_startBitHasBeenSet(false),
    m_offset(0.0),
    m_offsetHasBeenSet(false),
    m_factor(0.0),
    m_factorHasBeenSet(false),
    m_length(0),
    m_lengthHasBeenSet(false),
    m_nameHasBeenSet(false)
{
}

CanSignal::CanSignal(JsonView jsonValue) : 
    m_messageId(0),
    m_messageIdHasBeenSet(false),
    m_isBigEndian(false),
    m_isBigEndianHasBeenSet(false),
    m_isSigned(false),
    m_isSignedHasBeenSet(false),
    m_startBit(0),
    m_startBitHasBeenSet(false),
    m_offset(0.0),
    m_offsetHasBeenSet(false),
    m_factor(0.0),
    m_factorHasBeenSet(false),
    m_length(0),
    m_lengthHasBeenSet(false),
    m_nameHasBeenSet(false)
{
  *this = jsonValue;
}

CanSignal& CanSignal::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("messageId"))
  {
    m_messageId = jsonValue.GetInteger("messageId");

    m_messageIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isBigEndian"))
  {
    m_isBigEndian = jsonValue.GetBool("isBigEndian");

    m_isBigEndianHasBeenSet = true;
  }

  if(jsonValue.ValueExists("isSigned"))
  {
    m_isSigned = jsonValue.GetBool("isSigned");

    m_isSignedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("startBit"))
  {
    m_startBit = jsonValue.GetInteger("startBit");

    m_startBitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("offset"))
  {
    m_offset = jsonValue.GetDouble("offset");

    m_offsetHasBeenSet = true;
  }

  if(jsonValue.ValueExists("factor"))
  {
    m_factor = jsonValue.GetDouble("factor");

    m_factorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("length"))
  {
    m_length = jsonValue.GetInteger("length");

    m_lengthHasBeenSet = true;
  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

    m_nameHasBeenSet = true;
  }

  return *this;
}

JsonValue CanSignal::Jsonize() const
{
  JsonValue payload;

  if(m_messageIdHasBeenSet)
  {
   payload.WithInteger("messageId", m_messageId);

  }

  if(m_isBigEndianHasBeenSet)
  {
   payload.WithBool("isBigEndian", m_isBigEndian);

  }

  if(m_isSignedHasBeenSet)
  {
   payload.WithBool("isSigned", m_isSigned);

  }

  if(m_startBitHasBeenSet)
  {
   payload.WithInteger("startBit", m_startBit);

  }

  if(m_offsetHasBeenSet)
  {
   payload.WithDouble("offset", m_offset);

  }

  if(m_factorHasBeenSet)
  {
   payload.WithDouble("factor", m_factor);

  }

  if(m_lengthHasBeenSet)
  {
   payload.WithInteger("length", m_length);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  return payload;
}

} // namespace Model
} // namespace IoTFleetWise
} // namespace Aws
