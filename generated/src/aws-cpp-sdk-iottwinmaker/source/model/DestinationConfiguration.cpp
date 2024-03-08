/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/DestinationConfiguration.h>
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

DestinationConfiguration::DestinationConfiguration() : 
    m_type(DestinationType::NOT_SET),
    m_typeHasBeenSet(false),
    m_s3ConfigurationHasBeenSet(false),
    m_iotTwinMakerConfigurationHasBeenSet(false)
{
}

DestinationConfiguration::DestinationConfiguration(JsonView jsonValue) : 
    m_type(DestinationType::NOT_SET),
    m_typeHasBeenSet(false),
    m_s3ConfigurationHasBeenSet(false),
    m_iotTwinMakerConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

DestinationConfiguration& DestinationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = DestinationTypeMapper::GetDestinationTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("s3Configuration"))
  {
    m_s3Configuration = jsonValue.GetObject("s3Configuration");

    m_s3ConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("iotTwinMakerConfiguration"))
  {
    m_iotTwinMakerConfiguration = jsonValue.GetObject("iotTwinMakerConfiguration");

    m_iotTwinMakerConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue DestinationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", DestinationTypeMapper::GetNameForDestinationType(m_type));
  }

  if(m_s3ConfigurationHasBeenSet)
  {
   payload.WithObject("s3Configuration", m_s3Configuration.Jsonize());

  }

  if(m_iotTwinMakerConfigurationHasBeenSet)
  {
   payload.WithObject("iotTwinMakerConfiguration", m_iotTwinMakerConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTTwinMaker
} // namespace Aws
