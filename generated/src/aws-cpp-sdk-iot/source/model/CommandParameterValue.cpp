/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/CommandParameterValue.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoT
{
namespace Model
{

CommandParameterValue::CommandParameterValue(JsonView jsonValue)
{
  *this = jsonValue;
}

CommandParameterValue& CommandParameterValue::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S"))
  {
    m_s = jsonValue.GetString("S");
    m_sHasBeenSet = true;
  }
  if(jsonValue.ValueExists("B"))
  {
    m_b = jsonValue.GetBool("B");
    m_bHasBeenSet = true;
  }
  if(jsonValue.ValueExists("I"))
  {
    m_i = jsonValue.GetInteger("I");
    m_iHasBeenSet = true;
  }
  if(jsonValue.ValueExists("L"))
  {
    m_l = jsonValue.GetInt64("L");
    m_lHasBeenSet = true;
  }
  if(jsonValue.ValueExists("D"))
  {
    m_d = jsonValue.GetDouble("D");
    m_dHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BIN"))
  {
    m_bIN = HashingUtils::Base64Decode(jsonValue.GetString("BIN"));
    m_bINHasBeenSet = true;
  }
  if(jsonValue.ValueExists("UL"))
  {
    m_uL = jsonValue.GetString("UL");
    m_uLHasBeenSet = true;
  }
  return *this;
}

JsonValue CommandParameterValue::Jsonize() const
{
  JsonValue payload;

  if(m_sHasBeenSet)
  {
   payload.WithString("S", m_s);

  }

  if(m_bHasBeenSet)
  {
   payload.WithBool("B", m_b);

  }

  if(m_iHasBeenSet)
  {
   payload.WithInteger("I", m_i);

  }

  if(m_lHasBeenSet)
  {
   payload.WithInt64("L", m_l);

  }

  if(m_dHasBeenSet)
  {
   payload.WithDouble("D", m_d);

  }

  if(m_bINHasBeenSet)
  {
   payload.WithString("BIN", HashingUtils::Base64Encode(m_bIN));
  }

  if(m_uLHasBeenSet)
  {
   payload.WithString("UL", m_uL);

  }

  return payload;
}

} // namespace Model
} // namespace IoT
} // namespace Aws
