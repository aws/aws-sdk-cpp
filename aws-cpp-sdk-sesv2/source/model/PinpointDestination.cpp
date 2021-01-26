/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/PinpointDestination.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SESV2
{
namespace Model
{

PinpointDestination::PinpointDestination() : 
    m_applicationArnHasBeenSet(false)
{
}

PinpointDestination::PinpointDestination(JsonView jsonValue) : 
    m_applicationArnHasBeenSet(false)
{
  *this = jsonValue;
}

PinpointDestination& PinpointDestination::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ApplicationArn"))
  {
    m_applicationArn = jsonValue.GetString("ApplicationArn");

    m_applicationArnHasBeenSet = true;
  }

  return *this;
}

JsonValue PinpointDestination::Jsonize() const
{
  JsonValue payload;

  if(m_applicationArnHasBeenSet)
  {
   payload.WithString("ApplicationArn", m_applicationArn);

  }

  return payload;
}

} // namespace Model
} // namespace SESV2
} // namespace Aws
