/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/internetmonitor/model/Network.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace InternetMonitor
{
namespace Model
{

Network::Network() : 
    m_aSNameHasBeenSet(false),
    m_aSNumber(0),
    m_aSNumberHasBeenSet(false)
{
}

Network::Network(JsonView jsonValue) : 
    m_aSNameHasBeenSet(false),
    m_aSNumber(0),
    m_aSNumberHasBeenSet(false)
{
  *this = jsonValue;
}

Network& Network::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ASName"))
  {
    m_aSName = jsonValue.GetString("ASName");

    m_aSNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ASNumber"))
  {
    m_aSNumber = jsonValue.GetInt64("ASNumber");

    m_aSNumberHasBeenSet = true;
  }

  return *this;
}

JsonValue Network::Jsonize() const
{
  JsonValue payload;

  if(m_aSNameHasBeenSet)
  {
   payload.WithString("ASName", m_aSName);

  }

  if(m_aSNumberHasBeenSet)
  {
   payload.WithInt64("ASNumber", m_aSNumber);

  }

  return payload;
}

} // namespace Model
} // namespace InternetMonitor
} // namespace Aws
