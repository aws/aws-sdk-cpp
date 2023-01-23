/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeartifact/model/PackageVersionDescription.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeArtifact
{
namespace Model
{

PackageVersionDescription::PackageVersionDescription() : 
    m_format(PackageFormat::NOT_SET),
    m_formatHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_packageNameHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_summaryHasBeenSet(false),
    m_homePageHasBeenSet(false),
    m_sourceCodeRepositoryHasBeenSet(false),
    m_publishedTimeHasBeenSet(false),
    m_licensesHasBeenSet(false),
    m_revisionHasBeenSet(false),
    m_status(PackageVersionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_originHasBeenSet(false)
{
}

PackageVersionDescription::PackageVersionDescription(JsonView jsonValue) : 
    m_format(PackageFormat::NOT_SET),
    m_formatHasBeenSet(false),
    m_namespaceHasBeenSet(false),
    m_packageNameHasBeenSet(false),
    m_displayNameHasBeenSet(false),
    m_versionHasBeenSet(false),
    m_summaryHasBeenSet(false),
    m_homePageHasBeenSet(false),
    m_sourceCodeRepositoryHasBeenSet(false),
    m_publishedTimeHasBeenSet(false),
    m_licensesHasBeenSet(false),
    m_revisionHasBeenSet(false),
    m_status(PackageVersionStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_originHasBeenSet(false)
{
  *this = jsonValue;
}

PackageVersionDescription& PackageVersionDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("format"))
  {
    m_format = PackageFormatMapper::GetPackageFormatForName(jsonValue.GetString("format"));

    m_formatHasBeenSet = true;
  }

  if(jsonValue.ValueExists("namespace"))
  {
    m_namespace = jsonValue.GetString("namespace");

    m_namespaceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("packageName"))
  {
    m_packageName = jsonValue.GetString("packageName");

    m_packageNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("displayName"))
  {
    m_displayName = jsonValue.GetString("displayName");

    m_displayNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("version"))
  {
    m_version = jsonValue.GetString("version");

    m_versionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("summary"))
  {
    m_summary = jsonValue.GetString("summary");

    m_summaryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("homePage"))
  {
    m_homePage = jsonValue.GetString("homePage");

    m_homePageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceCodeRepository"))
  {
    m_sourceCodeRepository = jsonValue.GetString("sourceCodeRepository");

    m_sourceCodeRepositoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("publishedTime"))
  {
    m_publishedTime = jsonValue.GetDouble("publishedTime");

    m_publishedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("licenses"))
  {
    Aws::Utils::Array<JsonView> licensesJsonList = jsonValue.GetArray("licenses");
    for(unsigned licensesIndex = 0; licensesIndex < licensesJsonList.GetLength(); ++licensesIndex)
    {
      m_licenses.push_back(licensesJsonList[licensesIndex].AsObject());
    }
    m_licensesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("revision"))
  {
    m_revision = jsonValue.GetString("revision");

    m_revisionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = PackageVersionStatusMapper::GetPackageVersionStatusForName(jsonValue.GetString("status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("origin"))
  {
    m_origin = jsonValue.GetObject("origin");

    m_originHasBeenSet = true;
  }

  return *this;
}

JsonValue PackageVersionDescription::Jsonize() const
{
  JsonValue payload;

  if(m_formatHasBeenSet)
  {
   payload.WithString("format", PackageFormatMapper::GetNameForPackageFormat(m_format));
  }

  if(m_namespaceHasBeenSet)
  {
   payload.WithString("namespace", m_namespace);

  }

  if(m_packageNameHasBeenSet)
  {
   payload.WithString("packageName", m_packageName);

  }

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("displayName", m_displayName);

  }

  if(m_versionHasBeenSet)
  {
   payload.WithString("version", m_version);

  }

  if(m_summaryHasBeenSet)
  {
   payload.WithString("summary", m_summary);

  }

  if(m_homePageHasBeenSet)
  {
   payload.WithString("homePage", m_homePage);

  }

  if(m_sourceCodeRepositoryHasBeenSet)
  {
   payload.WithString("sourceCodeRepository", m_sourceCodeRepository);

  }

  if(m_publishedTimeHasBeenSet)
  {
   payload.WithDouble("publishedTime", m_publishedTime.SecondsWithMSPrecision());
  }

  if(m_licensesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> licensesJsonList(m_licenses.size());
   for(unsigned licensesIndex = 0; licensesIndex < licensesJsonList.GetLength(); ++licensesIndex)
   {
     licensesJsonList[licensesIndex].AsObject(m_licenses[licensesIndex].Jsonize());
   }
   payload.WithArray("licenses", std::move(licensesJsonList));

  }

  if(m_revisionHasBeenSet)
  {
   payload.WithString("revision", m_revision);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", PackageVersionStatusMapper::GetNameForPackageVersionStatus(m_status));
  }

  if(m_originHasBeenSet)
  {
   payload.WithObject("origin", m_origin.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace CodeArtifact
} // namespace Aws
