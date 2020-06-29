/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/imagebuilder/model/Distribution.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace imagebuilder
{
namespace Model
{

Distribution::Distribution() : 
    m_regionHasBeenSet(false),
    m_amiDistributionConfigurationHasBeenSet(false),
    m_licenseConfigurationArnsHasBeenSet(false)
{
}

Distribution::Distribution(JsonView jsonValue) : 
    m_regionHasBeenSet(false),
    m_amiDistributionConfigurationHasBeenSet(false),
    m_licenseConfigurationArnsHasBeenSet(false)
{
  *this = jsonValue;
}

Distribution& Distribution::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("region"))
  {
    m_region = jsonValue.GetString("region");

    m_regionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("amiDistributionConfiguration"))
  {
    m_amiDistributionConfiguration = jsonValue.GetObject("amiDistributionConfiguration");

    m_amiDistributionConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("licenseConfigurationArns"))
  {
    Array<JsonView> licenseConfigurationArnsJsonList = jsonValue.GetArray("licenseConfigurationArns");
    for(unsigned licenseConfigurationArnsIndex = 0; licenseConfigurationArnsIndex < licenseConfigurationArnsJsonList.GetLength(); ++licenseConfigurationArnsIndex)
    {
      m_licenseConfigurationArns.push_back(licenseConfigurationArnsJsonList[licenseConfigurationArnsIndex].AsString());
    }
    m_licenseConfigurationArnsHasBeenSet = true;
  }

  return *this;
}

JsonValue Distribution::Jsonize() const
{
  JsonValue payload;

  if(m_regionHasBeenSet)
  {
   payload.WithString("region", m_region);

  }

  if(m_amiDistributionConfigurationHasBeenSet)
  {
   payload.WithObject("amiDistributionConfiguration", m_amiDistributionConfiguration.Jsonize());

  }

  if(m_licenseConfigurationArnsHasBeenSet)
  {
   Array<JsonValue> licenseConfigurationArnsJsonList(m_licenseConfigurationArns.size());
   for(unsigned licenseConfigurationArnsIndex = 0; licenseConfigurationArnsIndex < licenseConfigurationArnsJsonList.GetLength(); ++licenseConfigurationArnsIndex)
   {
     licenseConfigurationArnsJsonList[licenseConfigurationArnsIndex].AsString(m_licenseConfigurationArns[licenseConfigurationArnsIndex]);
   }
   payload.WithArray("licenseConfigurationArns", std::move(licenseConfigurationArnsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
