/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/AwsEcrContainerImageDetails.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Inspector2
{
namespace Model
{

AwsEcrContainerImageDetails::AwsEcrContainerImageDetails() : 
    m_architectureHasBeenSet(false),
    m_authorHasBeenSet(false),
    m_imageHashHasBeenSet(false),
    m_imageTagsHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_pushedAtHasBeenSet(false),
    m_registryHasBeenSet(false),
    m_repositoryNameHasBeenSet(false)
{
}

AwsEcrContainerImageDetails::AwsEcrContainerImageDetails(JsonView jsonValue) : 
    m_architectureHasBeenSet(false),
    m_authorHasBeenSet(false),
    m_imageHashHasBeenSet(false),
    m_imageTagsHasBeenSet(false),
    m_platformHasBeenSet(false),
    m_pushedAtHasBeenSet(false),
    m_registryHasBeenSet(false),
    m_repositoryNameHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEcrContainerImageDetails& AwsEcrContainerImageDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("architecture"))
  {
    m_architecture = jsonValue.GetString("architecture");

    m_architectureHasBeenSet = true;
  }

  if(jsonValue.ValueExists("author"))
  {
    m_author = jsonValue.GetString("author");

    m_authorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("imageHash"))
  {
    m_imageHash = jsonValue.GetString("imageHash");

    m_imageHashHasBeenSet = true;
  }

  if(jsonValue.ValueExists("imageTags"))
  {
    Aws::Utils::Array<JsonView> imageTagsJsonList = jsonValue.GetArray("imageTags");
    for(unsigned imageTagsIndex = 0; imageTagsIndex < imageTagsJsonList.GetLength(); ++imageTagsIndex)
    {
      m_imageTags.push_back(imageTagsJsonList[imageTagsIndex].AsString());
    }
    m_imageTagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("platform"))
  {
    m_platform = jsonValue.GetString("platform");

    m_platformHasBeenSet = true;
  }

  if(jsonValue.ValueExists("pushedAt"))
  {
    m_pushedAt = jsonValue.GetDouble("pushedAt");

    m_pushedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("registry"))
  {
    m_registry = jsonValue.GetString("registry");

    m_registryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("repositoryName"))
  {
    m_repositoryName = jsonValue.GetString("repositoryName");

    m_repositoryNameHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEcrContainerImageDetails::Jsonize() const
{
  JsonValue payload;

  if(m_architectureHasBeenSet)
  {
   payload.WithString("architecture", m_architecture);

  }

  if(m_authorHasBeenSet)
  {
   payload.WithString("author", m_author);

  }

  if(m_imageHashHasBeenSet)
  {
   payload.WithString("imageHash", m_imageHash);

  }

  if(m_imageTagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> imageTagsJsonList(m_imageTags.size());
   for(unsigned imageTagsIndex = 0; imageTagsIndex < imageTagsJsonList.GetLength(); ++imageTagsIndex)
   {
     imageTagsJsonList[imageTagsIndex].AsString(m_imageTags[imageTagsIndex]);
   }
   payload.WithArray("imageTags", std::move(imageTagsJsonList));

  }

  if(m_platformHasBeenSet)
  {
   payload.WithString("platform", m_platform);

  }

  if(m_pushedAtHasBeenSet)
  {
   payload.WithDouble("pushedAt", m_pushedAt.SecondsWithMSPrecision());
  }

  if(m_registryHasBeenSet)
  {
   payload.WithString("registry", m_registry);

  }

  if(m_repositoryNameHasBeenSet)
  {
   payload.WithString("repositoryName", m_repositoryName);

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
