/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/logs/model/DeliveryDestinationConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatchLogs
{
namespace Model
{

DeliveryDestinationConfiguration::DeliveryDestinationConfiguration() : 
    m_destinationResourceArnHasBeenSet(false)
{
}

DeliveryDestinationConfiguration::DeliveryDestinationConfiguration(JsonView jsonValue) : 
    m_destinationResourceArnHasBeenSet(false)
{
  *this = jsonValue;
}

DeliveryDestinationConfiguration& DeliveryDestinationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("destinationResourceArn"))
  {
    m_destinationResourceArn = jsonValue.GetString("destinationResourceArn");

    m_destinationResourceArnHasBeenSet = true;
  }

  return *this;
}

JsonValue DeliveryDestinationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_destinationResourceArnHasBeenSet)
  {
   payload.WithString("destinationResourceArn", m_destinationResourceArn);

  }

  return payload;
}

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
