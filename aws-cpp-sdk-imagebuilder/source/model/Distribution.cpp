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
    m_containerDistributionConfigurationHasBeenSet(false),
    m_licenseConfigurationArnsHasBeenSet(false),
    m_launchTemplateConfigurationsHasBeenSet(false),
    m_s3ExportConfigurationHasBeenSet(false),
    m_fastLaunchConfigurationsHasBeenSet(false)
{
}

Distribution::Distribution(JsonView jsonValue) : 
    m_regionHasBeenSet(false),
    m_amiDistributionConfigurationHasBeenSet(false),
    m_containerDistributionConfigurationHasBeenSet(false),
    m_licenseConfigurationArnsHasBeenSet(false),
    m_launchTemplateConfigurationsHasBeenSet(false),
    m_s3ExportConfigurationHasBeenSet(false),
    m_fastLaunchConfigurationsHasBeenSet(false)
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

  if(jsonValue.ValueExists("containerDistributionConfiguration"))
  {
    m_containerDistributionConfiguration = jsonValue.GetObject("containerDistributionConfiguration");

    m_containerDistributionConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("licenseConfigurationArns"))
  {
    Aws::Utils::Array<JsonView> licenseConfigurationArnsJsonList = jsonValue.GetArray("licenseConfigurationArns");
    for(unsigned licenseConfigurationArnsIndex = 0; licenseConfigurationArnsIndex < licenseConfigurationArnsJsonList.GetLength(); ++licenseConfigurationArnsIndex)
    {
      m_licenseConfigurationArns.push_back(licenseConfigurationArnsJsonList[licenseConfigurationArnsIndex].AsString());
    }
    m_licenseConfigurationArnsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("launchTemplateConfigurations"))
  {
    Aws::Utils::Array<JsonView> launchTemplateConfigurationsJsonList = jsonValue.GetArray("launchTemplateConfigurations");
    for(unsigned launchTemplateConfigurationsIndex = 0; launchTemplateConfigurationsIndex < launchTemplateConfigurationsJsonList.GetLength(); ++launchTemplateConfigurationsIndex)
    {
      m_launchTemplateConfigurations.push_back(launchTemplateConfigurationsJsonList[launchTemplateConfigurationsIndex].AsObject());
    }
    m_launchTemplateConfigurationsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("s3ExportConfiguration"))
  {
    m_s3ExportConfiguration = jsonValue.GetObject("s3ExportConfiguration");

    m_s3ExportConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("fastLaunchConfigurations"))
  {
    Aws::Utils::Array<JsonView> fastLaunchConfigurationsJsonList = jsonValue.GetArray("fastLaunchConfigurations");
    for(unsigned fastLaunchConfigurationsIndex = 0; fastLaunchConfigurationsIndex < fastLaunchConfigurationsJsonList.GetLength(); ++fastLaunchConfigurationsIndex)
    {
      m_fastLaunchConfigurations.push_back(fastLaunchConfigurationsJsonList[fastLaunchConfigurationsIndex].AsObject());
    }
    m_fastLaunchConfigurationsHasBeenSet = true;
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

  if(m_containerDistributionConfigurationHasBeenSet)
  {
   payload.WithObject("containerDistributionConfiguration", m_containerDistributionConfiguration.Jsonize());

  }

  if(m_licenseConfigurationArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> licenseConfigurationArnsJsonList(m_licenseConfigurationArns.size());
   for(unsigned licenseConfigurationArnsIndex = 0; licenseConfigurationArnsIndex < licenseConfigurationArnsJsonList.GetLength(); ++licenseConfigurationArnsIndex)
   {
     licenseConfigurationArnsJsonList[licenseConfigurationArnsIndex].AsString(m_licenseConfigurationArns[licenseConfigurationArnsIndex]);
   }
   payload.WithArray("licenseConfigurationArns", std::move(licenseConfigurationArnsJsonList));

  }

  if(m_launchTemplateConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> launchTemplateConfigurationsJsonList(m_launchTemplateConfigurations.size());
   for(unsigned launchTemplateConfigurationsIndex = 0; launchTemplateConfigurationsIndex < launchTemplateConfigurationsJsonList.GetLength(); ++launchTemplateConfigurationsIndex)
   {
     launchTemplateConfigurationsJsonList[launchTemplateConfigurationsIndex].AsObject(m_launchTemplateConfigurations[launchTemplateConfigurationsIndex].Jsonize());
   }
   payload.WithArray("launchTemplateConfigurations", std::move(launchTemplateConfigurationsJsonList));

  }

  if(m_s3ExportConfigurationHasBeenSet)
  {
   payload.WithObject("s3ExportConfiguration", m_s3ExportConfiguration.Jsonize());

  }

  if(m_fastLaunchConfigurationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> fastLaunchConfigurationsJsonList(m_fastLaunchConfigurations.size());
   for(unsigned fastLaunchConfigurationsIndex = 0; fastLaunchConfigurationsIndex < fastLaunchConfigurationsJsonList.GetLength(); ++fastLaunchConfigurationsIndex)
   {
     fastLaunchConfigurationsJsonList[fastLaunchConfigurationsIndex].AsObject(m_fastLaunchConfigurations[fastLaunchConfigurationsIndex].Jsonize());
   }
   payload.WithArray("fastLaunchConfigurations", std::move(fastLaunchConfigurationsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
