/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/LaunchIntoInstanceProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace drs
{
namespace Model
{

LaunchIntoInstanceProperties::LaunchIntoInstanceProperties() : 
    m_launchIntoEC2InstanceIDHasBeenSet(false)
{
}

LaunchIntoInstanceProperties::LaunchIntoInstanceProperties(JsonView jsonValue) : 
    m_launchIntoEC2InstanceIDHasBeenSet(false)
{
  *this = jsonValue;
}

LaunchIntoInstanceProperties& LaunchIntoInstanceProperties::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("launchIntoEC2InstanceID"))
  {
    m_launchIntoEC2InstanceID = jsonValue.GetString("launchIntoEC2InstanceID");

    m_launchIntoEC2InstanceIDHasBeenSet = true;
  }

  return *this;
}

JsonValue LaunchIntoInstanceProperties::Jsonize() const
{
  JsonValue payload;

  if(m_launchIntoEC2InstanceIDHasBeenSet)
  {
   payload.WithString("launchIntoEC2InstanceID", m_launchIntoEC2InstanceID);

  }

  return payload;
}

} // namespace Model
} // namespace drs
} // namespace Aws
