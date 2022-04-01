/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/ApplicationFleetAssociation.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace AppStream
{
namespace Model
{

ApplicationFleetAssociation::ApplicationFleetAssociation() : 
    m_fleetNameHasBeenSet(false),
    m_applicationArnHasBeenSet(false)
{
}

ApplicationFleetAssociation::ApplicationFleetAssociation(JsonView jsonValue) : 
    m_fleetNameHasBeenSet(false),
    m_applicationArnHasBeenSet(false)
{
  *this = jsonValue;
}

ApplicationFleetAssociation& ApplicationFleetAssociation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("FleetName"))
  {
    m_fleetName = jsonValue.GetString("FleetName");

    m_fleetNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApplicationArn"))
  {
    m_applicationArn = jsonValue.GetString("ApplicationArn");

    m_applicationArnHasBeenSet = true;
  }

  return *this;
}

JsonValue ApplicationFleetAssociation::Jsonize() const
{
  JsonValue payload;

  if(m_fleetNameHasBeenSet)
  {
   payload.WithString("FleetName", m_fleetName);

  }

  if(m_applicationArnHasBeenSet)
  {
   payload.WithString("ApplicationArn", m_applicationArn);

  }

  return payload;
}

} // namespace Model
} // namespace AppStream
} // namespace Aws
