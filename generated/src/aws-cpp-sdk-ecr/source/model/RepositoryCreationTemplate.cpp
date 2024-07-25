/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ecr/model/RepositoryCreationTemplate.h>
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

RepositoryCreationTemplate::RepositoryCreationTemplate() : 
    m_prefixHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_encryptionConfigurationHasBeenSet(false),
    m_resourceTagsHasBeenSet(false),
    m_imageTagMutability(ImageTagMutability::NOT_SET),
    m_imageTagMutabilityHasBeenSet(false),
    m_repositoryPolicyHasBeenSet(false),
    m_lifecyclePolicyHasBeenSet(false),
    m_appliedForHasBeenSet(false),
    m_customRoleArnHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

RepositoryCreationTemplate::RepositoryCreationTemplate(JsonView jsonValue)
  : RepositoryCreationTemplate()
{
  *this = jsonValue;
}

RepositoryCreationTemplate& RepositoryCreationTemplate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("prefix"))
  {
    m_prefix = jsonValue.GetString("prefix");

    m_prefixHasBeenSet = true;
  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("encryptionConfiguration"))
  {
    m_encryptionConfiguration = jsonValue.GetObject("encryptionConfiguration");

    m_encryptionConfigurationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceTags"))
  {
    Aws::Utils::Array<JsonView> resourceTagsJsonList = jsonValue.GetArray("resourceTags");
    for(unsigned resourceTagsIndex = 0; resourceTagsIndex < resourceTagsJsonList.GetLength(); ++resourceTagsIndex)
    {
      m_resourceTags.push_back(resourceTagsJsonList[resourceTagsIndex].AsObject());
    }
    m_resourceTagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("imageTagMutability"))
  {
    m_imageTagMutability = ImageTagMutabilityMapper::GetImageTagMutabilityForName(jsonValue.GetString("imageTagMutability"));

    m_imageTagMutabilityHasBeenSet = true;
  }

  if(jsonValue.ValueExists("repositoryPolicy"))
  {
    m_repositoryPolicy = jsonValue.GetString("repositoryPolicy");

    m_repositoryPolicyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lifecyclePolicy"))
  {
    m_lifecyclePolicy = jsonValue.GetString("lifecyclePolicy");

    m_lifecyclePolicyHasBeenSet = true;
  }

  if(jsonValue.ValueExists("appliedFor"))
  {
    Aws::Utils::Array<JsonView> appliedForJsonList = jsonValue.GetArray("appliedFor");
    for(unsigned appliedForIndex = 0; appliedForIndex < appliedForJsonList.GetLength(); ++appliedForIndex)
    {
      m_appliedFor.push_back(RCTAppliedForMapper::GetRCTAppliedForForName(appliedForJsonList[appliedForIndex].AsString()));
    }
    m_appliedForHasBeenSet = true;
  }

  if(jsonValue.ValueExists("customRoleArn"))
  {
    m_customRoleArn = jsonValue.GetString("customRoleArn");

    m_customRoleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("updatedAt");

    m_updatedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue RepositoryCreationTemplate::Jsonize() const
{
  JsonValue payload;

  if(m_prefixHasBeenSet)
  {
   payload.WithString("prefix", m_prefix);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_encryptionConfigurationHasBeenSet)
  {
   payload.WithObject("encryptionConfiguration", m_encryptionConfiguration.Jsonize());

  }

  if(m_resourceTagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceTagsJsonList(m_resourceTags.size());
   for(unsigned resourceTagsIndex = 0; resourceTagsIndex < resourceTagsJsonList.GetLength(); ++resourceTagsIndex)
   {
     resourceTagsJsonList[resourceTagsIndex].AsObject(m_resourceTags[resourceTagsIndex].Jsonize());
   }
   payload.WithArray("resourceTags", std::move(resourceTagsJsonList));

  }

  if(m_imageTagMutabilityHasBeenSet)
  {
   payload.WithString("imageTagMutability", ImageTagMutabilityMapper::GetNameForImageTagMutability(m_imageTagMutability));
  }

  if(m_repositoryPolicyHasBeenSet)
  {
   payload.WithString("repositoryPolicy", m_repositoryPolicy);

  }

  if(m_lifecyclePolicyHasBeenSet)
  {
   payload.WithString("lifecyclePolicy", m_lifecyclePolicy);

  }

  if(m_appliedForHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> appliedForJsonList(m_appliedFor.size());
   for(unsigned appliedForIndex = 0; appliedForIndex < appliedForJsonList.GetLength(); ++appliedForIndex)
   {
     appliedForJsonList[appliedForIndex].AsString(RCTAppliedForMapper::GetNameForRCTAppliedFor(m_appliedFor[appliedForIndex]));
   }
   payload.WithArray("appliedFor", std::move(appliedForJsonList));

  }

  if(m_customRoleArnHasBeenSet)
  {
   payload.WithString("customRoleArn", m_customRoleArn);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace ECR
} // namespace Aws
