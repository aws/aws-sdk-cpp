/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/directconnect/model/MacSecKey.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace DirectConnect
{
namespace Model
{

MacSecKey::MacSecKey(JsonView jsonValue)
{
  *this = jsonValue;
}

MacSecKey& MacSecKey::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("secretARN"))
  {
    m_secretARN = jsonValue.GetString("secretARN");
    m_secretARNHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ckn"))
  {
    m_ckn = jsonValue.GetString("ckn");
    m_cknHasBeenSet = true;
  }
  if(jsonValue.ValueExists("state"))
  {
    m_state = jsonValue.GetString("state");
    m_stateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("startOn"))
  {
    m_startOn = jsonValue.GetString("startOn");
    m_startOnHasBeenSet = true;
  }
  return *this;
}

JsonValue MacSecKey::Jsonize() const
{
  JsonValue payload;

  if(m_secretARNHasBeenSet)
  {
   payload.WithString("secretARN", m_secretARN);

  }

  if(m_cknHasBeenSet)
  {
   payload.WithString("ckn", m_ckn);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", m_state);

  }

  if(m_startOnHasBeenSet)
  {
   payload.WithString("startOn", m_startOn);

  }

  return payload;
}

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
