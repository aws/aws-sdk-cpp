/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/IngestionInputConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LookoutEquipment
{
namespace Model
{

IngestionInputConfiguration::IngestionInputConfiguration() : 
    m_s3InputConfigurationHasBeenSet(false)
{
}

IngestionInputConfiguration::IngestionInputConfiguration(JsonView jsonValue) : 
    m_s3InputConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

IngestionInputConfiguration& IngestionInputConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("S3InputConfiguration"))
  {
    m_s3InputConfiguration = jsonValue.GetObject("S3InputConfiguration");

    m_s3InputConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue IngestionInputConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_s3InputConfigurationHasBeenSet)
  {
   payload.WithObject("S3InputConfiguration", m_s3InputConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LookoutEquipment
} // namespace Aws
