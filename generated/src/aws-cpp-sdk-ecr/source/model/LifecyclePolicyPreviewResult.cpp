/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

LifecyclePolicyPreviewResult::LifecyclePolicyPreviewResult(JsonView jsonValue) : 
    m_imageTagsHasBeenSet(false),
    m_imageDigestHasBeenSet(false),
    m_imagePushedAtHasBeenSet(false),
    m_actionHasBeenSet(false),
    m_appliedRulePriority(0),
    m_appliedRulePriorityHasBeenSet(false)
{
  *this = jsonValue;
}

LifecyclePolicyPreviewResult& LifecyclePolicyPreviewResult::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("imageTags"))
  {
    Aws::Utils::Array<JsonView> imageTagsJsonList = jsonValue.GetArray("imageTags");
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
   Aws::Utils::Array<JsonValue> imageTagsJsonList(m_imageTags.size());
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
