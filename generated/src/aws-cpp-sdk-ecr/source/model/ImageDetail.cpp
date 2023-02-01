/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr/model/ImageDetail.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace ECR
{
namespace Model
{

ImageDetail::ImageDetail() : 
    m_registryIdHasBeenSet(false),
    m_repositoryNameHasBeenSet(false),
    m_imageDigestHasBeenSet(false),
    m_imageTagsHasBeenSet(false),
    m_imageSizeInBytes(0),
    m_imageSizeInBytesHasBeenSet(false),
    m_imagePushedAtHasBeenSet(false),
    m_imageScanStatusHasBeenSet(false),
    m_imageScanFindingsSummaryHasBeenSet(false),
    m_imageManifestMediaTypeHasBeenSet(false),
    m_artifactMediaTypeHasBeenSet(false),
    m_lastRecordedPullTimeHasBeenSet(false)
{
}

ImageDetail::ImageDetail(JsonView jsonValue) : 
    m_registryIdHasBeenSet(false),
    m_repositoryNameHasBeenSet(false),
    m_imageDigestHasBeenSet(false),
    m_imageTagsHasBeenSet(false),
    m_imageSizeInBytes(0),
    m_imageSizeInBytesHasBeenSet(false),
    m_imagePushedAtHasBeenSet(false),
    m_imageScanStatusHasBeenSet(false),
    m_imageScanFindingsSummaryHasBeenSet(false),
    m_imageManifestMediaTypeHasBeenSet(false),
    m_artifactMediaTypeHasBeenSet(false),
    m_lastRecordedPullTimeHasBeenSet(false)
{
  *this = jsonValue;
}

ImageDetail& ImageDetail::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("registryId"))
  {
    m_registryId = jsonValue.GetString("registryId");

    m_registryIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("repositoryName"))
  {
    m_repositoryName = jsonValue.GetString("repositoryName");

    m_repositoryNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("imageDigest"))
  {
    m_imageDigest = jsonValue.GetString("imageDigest");

    m_imageDigestHasBeenSet = true;
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

  if(jsonValue.ValueExists("imageSizeInBytes"))
  {
    m_imageSizeInBytes = jsonValue.GetInt64("imageSizeInBytes");

    m_imageSizeInBytesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("imagePushedAt"))
  {
    m_imagePushedAt = jsonValue.GetDouble("imagePushedAt");

    m_imagePushedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("imageScanStatus"))
  {
    m_imageScanStatus = jsonValue.GetObject("imageScanStatus");

    m_imageScanStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("imageScanFindingsSummary"))
  {
    m_imageScanFindingsSummary = jsonValue.GetObject("imageScanFindingsSummary");

    m_imageScanFindingsSummaryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("imageManifestMediaType"))
  {
    m_imageManifestMediaType = jsonValue.GetString("imageManifestMediaType");

    m_imageManifestMediaTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("artifactMediaType"))
  {
    m_artifactMediaType = jsonValue.GetString("artifactMediaType");

    m_artifactMediaTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastRecordedPullTime"))
  {
    m_lastRecordedPullTime = jsonValue.GetDouble("lastRecordedPullTime");

    m_lastRecordedPullTimeHasBeenSet = true;
  }

  return *this;
}

JsonValue ImageDetail::Jsonize() const
{
  JsonValue payload;

  if(m_registryIdHasBeenSet)
  {
   payload.WithString("registryId", m_registryId);

  }

  if(m_repositoryNameHasBeenSet)
  {
   payload.WithString("repositoryName", m_repositoryName);

  }

  if(m_imageDigestHasBeenSet)
  {
   payload.WithString("imageDigest", m_imageDigest);

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

  if(m_imageSizeInBytesHasBeenSet)
  {
   payload.WithInt64("imageSizeInBytes", m_imageSizeInBytes);

  }

  if(m_imagePushedAtHasBeenSet)
  {
   payload.WithDouble("imagePushedAt", m_imagePushedAt.SecondsWithMSPrecision());
  }

  if(m_imageScanStatusHasBeenSet)
  {
   payload.WithObject("imageScanStatus", m_imageScanStatus.Jsonize());

  }

  if(m_imageScanFindingsSummaryHasBeenSet)
  {
   payload.WithObject("imageScanFindingsSummary", m_imageScanFindingsSummary.Jsonize());

  }

  if(m_imageManifestMediaTypeHasBeenSet)
  {
   payload.WithString("imageManifestMediaType", m_imageManifestMediaType);

  }

  if(m_artifactMediaTypeHasBeenSet)
  {
   payload.WithString("artifactMediaType", m_artifactMediaType);

  }

  if(m_lastRecordedPullTimeHasBeenSet)
  {
   payload.WithDouble("lastRecordedPullTime", m_lastRecordedPullTime.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace ECR
} // namespace Aws
