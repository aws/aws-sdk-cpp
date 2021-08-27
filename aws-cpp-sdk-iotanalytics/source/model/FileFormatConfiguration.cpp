/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotanalytics/model/FileFormatConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace IoTAnalytics
{
namespace Model
{

FileFormatConfiguration::FileFormatConfiguration() : 
    m_jsonConfigurationHasBeenSet(false),
    m_parquetConfigurationHasBeenSet(false)
{
}

FileFormatConfiguration::FileFormatConfiguration(JsonView jsonValue) : 
    m_jsonConfigurationHasBeenSet(false),
    m_parquetConfigurationHasBeenSet(false)
{
  *this = jsonValue;
}

FileFormatConfiguration& FileFormatConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("jsonConfiguration"))
  {
    m_jsonConfiguration = jsonValue.GetObject("jsonConfiguration");

    m_jsonConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("parquetConfiguration"))
  {
    m_parquetConfiguration = jsonValue.GetObject("parquetConfiguration");

    m_parquetConfigurationHasBeenSet = true;
  }

  return *this;
}

JsonValue FileFormatConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_jsonConfigurationHasBeenSet)
  {
   payload.WithObject("jsonConfiguration", m_jsonConfiguration.Jsonize());

  }

  if(m_parquetConfigurationHasBeenSet)
  {
   payload.WithObject("parquetConfiguration", m_parquetConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace IoTAnalytics
} // namespace Aws
