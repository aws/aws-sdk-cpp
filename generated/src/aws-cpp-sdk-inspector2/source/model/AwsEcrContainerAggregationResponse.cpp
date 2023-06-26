/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/AwsEcrContainerAggregationResponse.h>
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

AwsEcrContainerAggregationResponse::AwsEcrContainerAggregationResponse() : 
    m_accountIdHasBeenSet(false),
    m_architectureHasBeenSet(false),
    m_imageShaHasBeenSet(false),
    m_imageTagsHasBeenSet(false),
    m_repositoryHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_severityCountsHasBeenSet(false)
{
}

AwsEcrContainerAggregationResponse::AwsEcrContainerAggregationResponse(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_architectureHasBeenSet(false),
    m_imageShaHasBeenSet(false),
    m_imageTagsHasBeenSet(false),
    m_repositoryHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_severityCountsHasBeenSet(false)
{
  *this = jsonValue;
}

AwsEcrContainerAggregationResponse& AwsEcrContainerAggregationResponse::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accountId"))
  {
    m_accountId = jsonValue.GetString("accountId");

    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("architecture"))
  {
    m_architecture = jsonValue.GetString("architecture");

    m_architectureHasBeenSet = true;
  }

  if(jsonValue.ValueExists("imageSha"))
  {
    m_imageSha = jsonValue.GetString("imageSha");

    m_imageShaHasBeenSet = true;
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

  if(jsonValue.ValueExists("repository"))
  {
    m_repository = jsonValue.GetString("repository");

    m_repositoryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceId"))
  {
    m_resourceId = jsonValue.GetString("resourceId");

    m_resourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("severityCounts"))
  {
    m_severityCounts = jsonValue.GetObject("severityCounts");

    m_severityCountsHasBeenSet = true;
  }

  return *this;
}

JsonValue AwsEcrContainerAggregationResponse::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   payload.WithString("accountId", m_accountId);

  }

  if(m_architectureHasBeenSet)
  {
   payload.WithString("architecture", m_architecture);

  }

  if(m_imageShaHasBeenSet)
  {
   payload.WithString("imageSha", m_imageSha);

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

  if(m_repositoryHasBeenSet)
  {
   payload.WithString("repository", m_repository);

  }

  if(m_resourceIdHasBeenSet)
  {
   payload.WithString("resourceId", m_resourceId);

  }

  if(m_severityCountsHasBeenSet)
  {
   payload.WithObject("severityCounts", m_severityCounts.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
