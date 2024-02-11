/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iottwinmaker/model/SourceConfiguration.h>
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

SourceConfiguration::SourceConfiguration() : 
    m_type(SourceType::NOT_SET),
    m_typeHasBeenSet(false),
    m_s3ConfigurationHasBeenSet(false),
    m_iotSiteWiseConfigurationHasBeenSet(false),
    m_iotTwinMakerConfigurationHasBeenSet(false)
{
}

SourceConfiguration::SourceConfiguration(JsonView jsonValue) : 
    m_type(SourceType::NOT_SET),
    m_typeHasBeenSet(false),
    m_s3ConfigurationHasBeenSet(false),
    m_iotSiteWiseConfigurationHasBeenSet(false),
    m_iotTwinMakerConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

SourceConfiguration& SourceConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = SourceTypeMapper::GetSourceTypeForName(jsonValue.GetString("type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("s3Configuration"))
  {
    m_s3Configuration = jsonValue.GetObject("s3Configuration");

    m_s3ConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("iotSiteWiseConfiguration"))
  {
    m_iotSiteWiseConfiguration = jsonValue.GetObject("iotSiteWiseConfiguration");

    m_iotSiteWiseConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("iotTwinMakerConfiguration"))
  {
    m_iotTwinMakerConfiguration = jsonValue.GetObject("iotTwinMakerConfiguration");

    m_iotTwinMakerConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue SourceConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", SourceTypeMapper::GetNameForSourceType(m_type));
  }

  if(m_s3ConfigurationHasBeenSet)
  {
   payload.WithObject("s3Configuration", m_s3Configuration.Jsonize());

  }

  if(m_iotSiteWiseConfigurationHasBeenSet)
  {
   payload.WithObject("iotSiteWiseConfiguration", m_iotSiteWiseConfiguration.Jsonize());

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
