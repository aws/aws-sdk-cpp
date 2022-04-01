/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/SidewalkAccountInfo.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTWireless
{
namespace Model
{

SidewalkAccountInfo::SidewalkAccountInfo() : 
    m_amazonIdHasBeenSet(false),
    m_appServerPrivateKeyHasBeenSet(false)
{
}

SidewalkAccountInfo::SidewalkAccountInfo(JsonView jsonValue) : 
    m_amazonIdHasBeenSet(false),
    m_appServerPrivateKeyHasBeenSet(false)
{
  *this = jsonValue;
}

SidewalkAccountInfo& SidewalkAccountInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("AmazonId"))
  {
    m_amazonId = jsonValue.GetString("AmazonId");

    m_amazonIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AppServerPrivateKey"))
  {
    m_appServerPrivateKey = jsonValue.GetString("AppServerPrivateKey");

    m_appServerPrivateKeyHasBeenSet = true;
  }

  return *this;
}

JsonValue SidewalkAccountInfo::Jsonize() const
{
  JsonValue payload;

  if(m_amazonIdHasBeenSet)
  {
   payload.WithString("AmazonId", m_amazonId);

  }

  if(m_appServerPrivateKeyHasBeenSet)
  {
   payload.WithString("AppServerPrivateKey", m_appServerPrivateKey);

  }

  return payload;
}

} // namespace Model
} // namespace IoTWireless
} // namespace Aws
