/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/amp/model/ScrapeConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PrometheusService
{
namespace Model
{

ScrapeConfiguration::ScrapeConfiguration() : 
    m_configurationBlobHasBeenSet(false)
{
}

ScrapeConfiguration::ScrapeConfiguration(JsonView jsonValue) : 
    m_configurationBlobHasBeenSet(false)
{
  *this = jsonValue;
}

ScrapeConfiguration& ScrapeConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("configurationBlob"))
  {
    m_configurationBlob = HashingUtils::Base64Decode(jsonValue.GetString("configurationBlob"));
    m_configurationBlobHasBeenSet = true;
  }

  return *this;
}

JsonValue ScrapeConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_configurationBlobHasBeenSet)
  {
   payload.WithString("configurationBlob", HashingUtils::Base64Encode(m_configurationBlob));
  }

  return payload;
}

} // namespace Model
} // namespace PrometheusService
} // namespace Aws
