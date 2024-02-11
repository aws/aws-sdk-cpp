/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bcm-data-exports/model/DestinationConfigurations.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BCMDataExports
{
namespace Model
{

DestinationConfigurations::DestinationConfigurations() : 
    m_s3DestinationHasBeenSet(false)
{
}

DestinationConfigurations::DestinationConfigurations(JsonView jsonValue) : 
    m_s3DestinationHasBeenSet(false)
{
  *this = jsonValue;
}

DestinationConfigurations& DestinationConfigurations::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3Destination"))
  {
    m_s3Destination = jsonValue.GetObject("S3Destination");

    m_s3DestinationHasBeenSet = true;
  }

  return *this;
}

JsonValue DestinationConfigurations::Jsonize() const
{
  JsonValue payload;

  if(m_s3DestinationHasBeenSet)
  {
   payload.WithObject("S3Destination", m_s3Destination.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BCMDataExports
} // namespace Aws
