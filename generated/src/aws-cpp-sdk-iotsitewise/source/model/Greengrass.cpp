/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotsitewise/model/Greengrass.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

Greengrass::Greengrass(JsonView jsonValue)
{
  *this = jsonValue;
}

Greengrass& Greengrass::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("groupArn"))
  {
    m_groupArn = jsonValue.GetString("groupArn");
    m_groupArnHasBeenSet = true;
  }
  return *this;
}

JsonValue Greengrass::Jsonize() const
{
  JsonValue payload;

  if(m_groupArnHasBeenSet)
  {
   payload.WithString("groupArn", m_groupArn);

  }

  return payload;
}

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
