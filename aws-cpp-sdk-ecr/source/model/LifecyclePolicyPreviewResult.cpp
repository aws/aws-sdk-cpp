/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/ecr/model/LifecyclePolicyPreviewResult.h>
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

LifecyclePolicyPreviewResult::LifecyclePolicyPreviewResult() : 
    m_imageTagsHasBeenSet(false),
    m_imageDigestHasBeenSet(false),
    m_imagePushedAtHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_appliedRulePriority(0),
    m_appliedRulePriorityHasBeenSet(false)
{
}

LifecyclePolicyPreviewResult::LifecyclePolicyPreviewResult(const JsonValue& jsonValue) : 
    m_imageTagsHasBeenSet(false),
    m_imageDigestHasBeenSet(false),
    m_imagePushedAtHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_appliedRulePriority(0),
    m_appliedRulePriorityHasBeenSet(false)
{
  *this = jsonValue;
}

LifecyclePolicyPreviewResult& LifecyclePolicyPreviewResult::operator =(const JsonValue& jsonValue)
{
  if(jsonValue.ValueExists("imageTags"))
  {
    Array<JsonValue> imageTagsJsonList = jsonValue.GetArray("imageTags");
    for(unsigned imageTagsIndex = 0; imageTagsIndex < imageTagsJsonList.GetLength(); ++imageTagsIndex)
    {
      m_imageTags.push_back(imageTagsJsonList[imageTagsIndex].AsString());
    }
    m_imageTagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("imageDigest"))
  {
    m_imageDigest = jsonValue.GetString("imageDigest");

    m_imageDigestHasBeenSet = true;
  }

  if(jsonValue.ValueExists("imagePushedAt"))
  {
    m_imagePushedAt = jsonValue.GetDouble("imagePushedAt");

    m_imagePushedAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("action"))
  {
    m_action = jsonValue.GetObject("action");

    m_actionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("appliedRulePriority"))
  {
    m_appliedRulePriority = jsonValue.GetInteger("appliedRulePriority");

    m_appliedRulePriorityHasBeenSet = true;
  }

  return *this;
}

JsonValue LifecyclePolicyPreviewResult::Jsonize() const
{
  JsonValue payload;

  if(m_imageTagsHasBeenSet)
  {
   Array<JsonValue> imageTagsJsonList(m_imageTags.size());
   for(unsigned imageTagsIndex = 0; imageTagsIndex < imageTagsJsonList.GetLength(); ++imageTagsIndex)
   {
     imageTagsJsonList[imageTagsIndex].AsString(m_imageTags[imageTagsIndex]);
   }
   payload.WithArray("imageTags", std::move(imageTagsJsonList));

  }

  if(m_imageDigestHasBeenSet)
  {
   payload.WithString("imageDigest", m_imageDigest);

  }

  if(m_imagePushedAtHasBeenSet)
  {
   payload.WithDouble("imagePushedAt", m_imagePushedAt.SecondsWithMSPrecision());
  }

  if(m_actionHasBeenSet)
  {
   payload.WithObject("action", m_action.Jsonize());

  }

  if(m_appliedRulePriorityHasBeenSet)
  {
   payload.WithInteger("appliedRulePriority", m_appliedRulePriority);

  }

  return payload;
}

} // namespace Model
} // namespace ECR
} // namespace Aws
