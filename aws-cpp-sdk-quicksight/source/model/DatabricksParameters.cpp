/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/quicksight/model/DatabricksParameters.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace QuickSight
{
namespace Model
{

DatabricksParameters::DatabricksParameters() : 
    m_hostHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_sqlEndpointPathHasBeenSet(false)
{
}

DatabricksParameters::DatabricksParameters(JsonView jsonValue) : 
    m_hostHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_sqlEndpointPathHasBeenSet(false)
{
  *this = jsonValue;
}

DatabricksParameters& DatabricksParameters::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Host"))
  {
    m_host = jsonValue.GetString("Host");

    m_hostHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Port"))
  {
    m_port = jsonValue.GetInteger("Port");

    m_portHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SqlEndpointPath"))
  {
    m_sqlEndpointPath = jsonValue.GetString("SqlEndpointPath");

    m_sqlEndpointPathHasBeenSet = true;
  }

  return *this;
}

JsonValue DatabricksParameters::Jsonize() const
{
  JsonValue payload;

  if(m_hostHasBeenSet)
  {
   payload.WithString("Host", m_host);

  }

  if(m_portHasBeenSet)
  {
   payload.WithInteger("Port", m_port);

  }

  if(m_sqlEndpointPathHasBeenSet)
  {
   payload.WithString("SqlEndpointPath", m_sqlEndpointPath);

  }

  return payload;
}

} // namespace Model
} // namespace QuickSight
} // namespace Aws
