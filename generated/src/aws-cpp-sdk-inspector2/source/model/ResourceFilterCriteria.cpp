/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/ResourceFilterCriteria.h>
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

ResourceFilterCriteria::ResourceFilterCriteria() : 
    m_accountIdHasBeenSet(false),
    m_ec2InstanceTagsHasBeenSet(false),
    m_ecrImageTagsHasBeenSet(false),
    m_ecrRepositoryNameHasBeenSet(false),
    m_lambdaFunctionNameHasBeenSet(false),
    m_lambdaFunctionTagsHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false)
{
}

ResourceFilterCriteria::ResourceFilterCriteria(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_ec2InstanceTagsHasBeenSet(false),
    m_ecrImageTagsHasBeenSet(false),
    m_ecrRepositoryNameHasBeenSet(false),
    m_lambdaFunctionNameHasBeenSet(false),
    m_lambdaFunctionTagsHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false)
{
  *this = jsonValue;
}

ResourceFilterCriteria& ResourceFilterCriteria::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accountId"))
  {
    Aws::Utils::Array<JsonView> accountIdJsonList = jsonValue.GetArray("accountId");
    for(unsigned accountIdIndex = 0; accountIdIndex < accountIdJsonList.GetLength(); ++accountIdIndex)
    {
      m_accountId.push_back(accountIdJsonList[accountIdIndex].AsObject());
    }
    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ec2InstanceTags"))
  {
    Aws::Utils::Array<JsonView> ec2InstanceTagsJsonList = jsonValue.GetArray("ec2InstanceTags");
    for(unsigned ec2InstanceTagsIndex = 0; ec2InstanceTagsIndex < ec2InstanceTagsJsonList.GetLength(); ++ec2InstanceTagsIndex)
    {
      m_ec2InstanceTags.push_back(ec2InstanceTagsJsonList[ec2InstanceTagsIndex].AsObject());
    }
    m_ec2InstanceTagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ecrImageTags"))
  {
    Aws::Utils::Array<JsonView> ecrImageTagsJsonList = jsonValue.GetArray("ecrImageTags");
    for(unsigned ecrImageTagsIndex = 0; ecrImageTagsIndex < ecrImageTagsJsonList.GetLength(); ++ecrImageTagsIndex)
    {
      m_ecrImageTags.push_back(ecrImageTagsJsonList[ecrImageTagsIndex].AsObject());
    }
    m_ecrImageTagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ecrRepositoryName"))
  {
    Aws::Utils::Array<JsonView> ecrRepositoryNameJsonList = jsonValue.GetArray("ecrRepositoryName");
    for(unsigned ecrRepositoryNameIndex = 0; ecrRepositoryNameIndex < ecrRepositoryNameJsonList.GetLength(); ++ecrRepositoryNameIndex)
    {
      m_ecrRepositoryName.push_back(ecrRepositoryNameJsonList[ecrRepositoryNameIndex].AsObject());
    }
    m_ecrRepositoryNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lambdaFunctionName"))
  {
    Aws::Utils::Array<JsonView> lambdaFunctionNameJsonList = jsonValue.GetArray("lambdaFunctionName");
    for(unsigned lambdaFunctionNameIndex = 0; lambdaFunctionNameIndex < lambdaFunctionNameJsonList.GetLength(); ++lambdaFunctionNameIndex)
    {
      m_lambdaFunctionName.push_back(lambdaFunctionNameJsonList[lambdaFunctionNameIndex].AsObject());
    }
    m_lambdaFunctionNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lambdaFunctionTags"))
  {
    Aws::Utils::Array<JsonView> lambdaFunctionTagsJsonList = jsonValue.GetArray("lambdaFunctionTags");
    for(unsigned lambdaFunctionTagsIndex = 0; lambdaFunctionTagsIndex < lambdaFunctionTagsJsonList.GetLength(); ++lambdaFunctionTagsIndex)
    {
      m_lambdaFunctionTags.push_back(lambdaFunctionTagsJsonList[lambdaFunctionTagsIndex].AsObject());
    }
    m_lambdaFunctionTagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceId"))
  {
    Aws::Utils::Array<JsonView> resourceIdJsonList = jsonValue.GetArray("resourceId");
    for(unsigned resourceIdIndex = 0; resourceIdIndex < resourceIdJsonList.GetLength(); ++resourceIdIndex)
    {
      m_resourceId.push_back(resourceIdJsonList[resourceIdIndex].AsObject());
    }
    m_resourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceType"))
  {
    Aws::Utils::Array<JsonView> resourceTypeJsonList = jsonValue.GetArray("resourceType");
    for(unsigned resourceTypeIndex = 0; resourceTypeIndex < resourceTypeJsonList.GetLength(); ++resourceTypeIndex)
    {
      m_resourceType.push_back(resourceTypeJsonList[resourceTypeIndex].AsObject());
    }
    m_resourceTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue ResourceFilterCriteria::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> accountIdJsonList(m_accountId.size());
   for(unsigned accountIdIndex = 0; accountIdIndex < accountIdJsonList.GetLength(); ++accountIdIndex)
   {
     accountIdJsonList[accountIdIndex].AsObject(m_accountId[accountIdIndex].Jsonize());
   }
   payload.WithArray("accountId", std::move(accountIdJsonList));

  }

  if(m_ec2InstanceTagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ec2InstanceTagsJsonList(m_ec2InstanceTags.size());
   for(unsigned ec2InstanceTagsIndex = 0; ec2InstanceTagsIndex < ec2InstanceTagsJsonList.GetLength(); ++ec2InstanceTagsIndex)
   {
     ec2InstanceTagsJsonList[ec2InstanceTagsIndex].AsObject(m_ec2InstanceTags[ec2InstanceTagsIndex].Jsonize());
   }
   payload.WithArray("ec2InstanceTags", std::move(ec2InstanceTagsJsonList));

  }

  if(m_ecrImageTagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ecrImageTagsJsonList(m_ecrImageTags.size());
   for(unsigned ecrImageTagsIndex = 0; ecrImageTagsIndex < ecrImageTagsJsonList.GetLength(); ++ecrImageTagsIndex)
   {
     ecrImageTagsJsonList[ecrImageTagsIndex].AsObject(m_ecrImageTags[ecrImageTagsIndex].Jsonize());
   }
   payload.WithArray("ecrImageTags", std::move(ecrImageTagsJsonList));

  }

  if(m_ecrRepositoryNameHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ecrRepositoryNameJsonList(m_ecrRepositoryName.size());
   for(unsigned ecrRepositoryNameIndex = 0; ecrRepositoryNameIndex < ecrRepositoryNameJsonList.GetLength(); ++ecrRepositoryNameIndex)
   {
     ecrRepositoryNameJsonList[ecrRepositoryNameIndex].AsObject(m_ecrRepositoryName[ecrRepositoryNameIndex].Jsonize());
   }
   payload.WithArray("ecrRepositoryName", std::move(ecrRepositoryNameJsonList));

  }

  if(m_lambdaFunctionNameHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> lambdaFunctionNameJsonList(m_lambdaFunctionName.size());
   for(unsigned lambdaFunctionNameIndex = 0; lambdaFunctionNameIndex < lambdaFunctionNameJsonList.GetLength(); ++lambdaFunctionNameIndex)
   {
     lambdaFunctionNameJsonList[lambdaFunctionNameIndex].AsObject(m_lambdaFunctionName[lambdaFunctionNameIndex].Jsonize());
   }
   payload.WithArray("lambdaFunctionName", std::move(lambdaFunctionNameJsonList));

  }

  if(m_lambdaFunctionTagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> lambdaFunctionTagsJsonList(m_lambdaFunctionTags.size());
   for(unsigned lambdaFunctionTagsIndex = 0; lambdaFunctionTagsIndex < lambdaFunctionTagsJsonList.GetLength(); ++lambdaFunctionTagsIndex)
   {
     lambdaFunctionTagsJsonList[lambdaFunctionTagsIndex].AsObject(m_lambdaFunctionTags[lambdaFunctionTagsIndex].Jsonize());
   }
   payload.WithArray("lambdaFunctionTags", std::move(lambdaFunctionTagsJsonList));

  }

  if(m_resourceIdHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceIdJsonList(m_resourceId.size());
   for(unsigned resourceIdIndex = 0; resourceIdIndex < resourceIdJsonList.GetLength(); ++resourceIdIndex)
   {
     resourceIdJsonList[resourceIdIndex].AsObject(m_resourceId[resourceIdIndex].Jsonize());
   }
   payload.WithArray("resourceId", std::move(resourceIdJsonList));

  }

  if(m_resourceTypeHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceTypeJsonList(m_resourceType.size());
   for(unsigned resourceTypeIndex = 0; resourceTypeIndex < resourceTypeJsonList.GetLength(); ++resourceTypeIndex)
   {
     resourceTypeJsonList[resourceTypeIndex].AsObject(m_resourceType[resourceTypeIndex].Jsonize());
   }
   payload.WithArray("resourceType", std::move(resourceTypeJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
