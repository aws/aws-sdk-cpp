/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/ConfluenceConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace kendra
{
namespace Model
{

ConfluenceConfiguration::ConfluenceConfiguration() : 
    m_serverUrlHasBeenSet(false),
    m_secretArnHasBeenSet(false),
    m_version(ConfluenceVersion::NOT_SET),
    m_versionHasBeenSet(false),
    m_spaceConfigurationHasBeenSet(false),
    m_pageConfigurationHasBeenSet(false),
    m_blogConfigurationHasBeenSet(false),
    m_attachmentConfigurationHasBeenSet(false),
    m_vpcConfigurationHasBeenSet(false),
    m_inclusionPatternsHasBeenSet(false),
    m_exclusionPatternsHasBeenSet(false)
{
}

ConfluenceConfiguration::ConfluenceConfiguration(JsonView jsonValue) : 
    m_serverUrlHasBeenSet(false),
    m_secretArnHasBeenSet(false),
    m_version(ConfluenceVersion::NOT_SET),
    m_versionHasBeenSet(false),
    m_spaceConfigurationHasBeenSet(false),
    m_pageConfigurationHasBeenSet(false),
    m_blogConfigurationHasBeenSet(false),
    m_attachmentConfigurationHasBeenSet(false),
    m_vpcConfigurationHasBeenSet(false),
    m_inclusionPatternsHasBeenSet(false),
    m_exclusionPatternsHasBeenSet(false)
{
  *this = jsonValue;
}

ConfluenceConfiguration& ConfluenceConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ServerUrl"))
  {
    m_serverUrl = jsonValue.GetString("ServerUrl");

    m_serverUrlHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SecretArn"))
  {
    m_secretArn = jsonValue.GetString("SecretArn");

    m_secretArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Version"))
  {
    m_version = ConfluenceVersionMapper::GetConfluenceVersionForName(jsonValue.GetString("Version"));

    m_versionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SpaceConfiguration"))
  {
    m_spaceConfiguration = jsonValue.GetObject("SpaceConfiguration");

    m_spaceConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PageConfiguration"))
  {
    m_pageConfiguration = jsonValue.GetObject("PageConfiguration");

    m_pageConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("BlogConfiguration"))
  {
    m_blogConfiguration = jsonValue.GetObject("BlogConfiguration");

    m_blogConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AttachmentConfiguration"))
  {
    m_attachmentConfiguration = jsonValue.GetObject("AttachmentConfiguration");

    m_attachmentConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcConfiguration"))
  {
    m_vpcConfiguration = jsonValue.GetObject("VpcConfiguration");

    m_vpcConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InclusionPatterns"))
  {
    Array<JsonView> inclusionPatternsJsonList = jsonValue.GetArray("InclusionPatterns");
    for(unsigned inclusionPatternsIndex = 0; inclusionPatternsIndex < inclusionPatternsJsonList.GetLength(); ++inclusionPatternsIndex)
    {
      m_inclusionPatterns.push_back(inclusionPatternsJsonList[inclusionPatternsIndex].AsString());
    }
    m_inclusionPatternsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ExclusionPatterns"))
  {
    Array<JsonView> exclusionPatternsJsonList = jsonValue.GetArray("ExclusionPatterns");
    for(unsigned exclusionPatternsIndex = 0; exclusionPatternsIndex < exclusionPatternsJsonList.GetLength(); ++exclusionPatternsIndex)
    {
      m_exclusionPatterns.push_back(exclusionPatternsJsonList[exclusionPatternsIndex].AsString());
    }
    m_exclusionPatternsHasBeenSet = true;
  }

  return *this;
}

JsonValue ConfluenceConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_serverUrlHasBeenSet)
  {
   payload.WithString("ServerUrl", m_serverUrl);

  }

  if(m_secretArnHasBeenSet)
  {
   payload.WithString("SecretArn", m_secretArn);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("Version", ConfluenceVersionMapper::GetNameForConfluenceVersion(m_version));
  }

  if(m_spaceConfigurationHasBeenSet)
  {
   payload.WithObject("SpaceConfiguration", m_spaceConfiguration.Jsonize());

  }

  if(m_pageConfigurationHasBeenSet)
  {
   payload.WithObject("PageConfiguration", m_pageConfiguration.Jsonize());

  }

  if(m_blogConfigurationHasBeenSet)
  {
   payload.WithObject("BlogConfiguration", m_blogConfiguration.Jsonize());

  }

  if(m_attachmentConfigurationHasBeenSet)
  {
   payload.WithObject("AttachmentConfiguration", m_attachmentConfiguration.Jsonize());

  }

  if(m_vpcConfigurationHasBeenSet)
  {
   payload.WithObject("VpcConfiguration", m_vpcConfiguration.Jsonize());

  }

  if(m_inclusionPatternsHasBeenSet)
  {
   Array<JsonValue> inclusionPatternsJsonList(m_inclusionPatterns.size());
   for(unsigned inclusionPatternsIndex = 0; inclusionPatternsIndex < inclusionPatternsJsonList.GetLength(); ++inclusionPatternsIndex)
   {
     inclusionPatternsJsonList[inclusionPatternsIndex].AsString(m_inclusionPatterns[inclusionPatternsIndex]);
   }
   payload.WithArray("InclusionPatterns", std::move(inclusionPatternsJsonList));

  }

  if(m_exclusionPatternsHasBeenSet)
  {
   Array<JsonValue> exclusionPatternsJsonList(m_exclusionPatterns.size());
   for(unsigned exclusionPatternsIndex = 0; exclusionPatternsIndex < exclusionPatternsJsonList.GetLength(); ++exclusionPatternsIndex)
   {
     exclusionPatternsJsonList[exclusionPatternsIndex].AsString(m_exclusionPatterns[exclusionPatternsIndex]);
   }
   payload.WithArray("ExclusionPatterns", std::move(exclusionPatternsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace kendra
} // namespace Aws
