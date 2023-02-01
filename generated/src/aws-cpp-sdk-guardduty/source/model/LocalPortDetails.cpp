/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/guardduty/model/LocalPortDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace GuardDuty
{
namespace Model
{

LocalPortDetails::LocalPortDetails() : 
    m_port(0),
    m_portHasBeenSet(false),
    m_portNameHasBeenSet(false)
{
}

LocalPortDetails::LocalPortDetails(JsonView jsonValue) : 
    m_port(0),
    m_portHasBeenSet(false),
    m_portNameHasBeenSet(false)
{
  *this = jsonValue;
}

LocalPortDetails& LocalPortDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("port"))
  {
    m_port = jsonValue.GetInteger("port");

    m_portHasBeenSet = true;
  }

  if(jsonValue.ValueExists("portName"))
  {
    m_portName = jsonValue.GetString("portName");

    m_portNameHasBeenSet = true;
  }

  return *this;
}

JsonValue LocalPortDetails::Jsonize() const
{
  JsonValue payload;

  if(m_portHasBeenSet)
  {
   payload.WithInteger("port", m_port);

  }

  if(m_portNameHasBeenSet)
  {
   payload.WithString("portName", m_portName);

  }

  return payload;
}

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
