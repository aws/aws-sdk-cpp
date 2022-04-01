/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kinesisvideo/model/NotificationDestinationConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KinesisVideo
{
namespace Model
{

NotificationDestinationConfig::NotificationDestinationConfig() : 
    m_uriHasBeenSet(false)
{
}

NotificationDestinationConfig::NotificationDestinationConfig(JsonView jsonValue) : 
    m_uriHasBeenSet(false)
{
  *this = jsonValue;
}

NotificationDestinationConfig& NotificationDestinationConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Uri"))
  {
    m_uri = jsonValue.GetString("Uri");

    m_uriHasBeenSet = true;
  }

  return *this;
}

JsonValue NotificationDestinationConfig::Jsonize() const
{
  JsonValue payload;

  if(m_uriHasBeenSet)
  {
   payload.WithString("Uri", m_uri);

  }

  return payload;
}

} // namespace Model
} // namespace KinesisVideo
} // namespace Aws
