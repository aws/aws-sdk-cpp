/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/S3DestinationConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTTwinMaker
{
namespace Model
{

S3DestinationConfiguration::S3DestinationConfiguration() : 
    m_locationHasBeenSet(false)
{
}

S3DestinationConfiguration::S3DestinationConfiguration(JsonView jsonValue) : 
    m_locationHasBeenSet(false)
{
  *this = jsonValue;
}

S3DestinationConfiguration& S3DestinationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("location"))
  {
    m_location = jsonValue.GetString("location");

    m_locationHasBeenSet = true;
  }

  return *this;
}

JsonValue S3DestinationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_locationHasBeenSet)
  {
   payload.WithString("location", m_location);

  }

  return payload;
}

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
