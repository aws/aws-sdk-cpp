/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/CoverageFilterCriteria.h>
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

CoverageFilterCriteria::CoverageFilterCriteria() : 
    m_accountIdHasBeenSet(false),
    m_ec2InstanceTagsHasBeenSet(false),
    m_ecrImageTagsHasBeenSet(false),
    m_ecrRepositoryNameHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_scanStatusCodeHasBeenSet(false),
    m_scanStatusReasonHasBeenSet(false),
    m_scanTypeHasBeenSet(false)
{
}

CoverageFilterCriteria::CoverageFilterCriteria(JsonView jsonValue) : 
    m_accountIdHasBeenSet(false),
    m_ec2InstanceTagsHasBeenSet(false),
    m_ecrImageTagsHasBeenSet(false),
    m_ecrRepositoryNameHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_scanStatusCodeHasBeenSet(false),
    m_scanStatusReasonHasBeenSet(false),
    m_scanTypeHasBeenSet(false)
{
  *this = jsonValue;
}

CoverageFilterCriteria& CoverageFilterCriteria::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("accountId"))
  {
    Array<JsonView> accountIdJsonList = jsonValue.GetArray("accountId");
    for(unsigned accountIdIndex = 0; accountIdIndex < accountIdJsonList.GetLength(); ++accountIdIndex)
    {
      m_accountId.push_back(accountIdJsonList[accountIdIndex].AsObject());
    }
    m_accountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ec2InstanceTags"))
  {
    Array<JsonView> ec2InstanceTagsJsonList = jsonValue.GetArray("ec2InstanceTags");
    for(unsigned ec2InstanceTagsIndex = 0; ec2InstanceTagsIndex < ec2InstanceTagsJsonList.GetLength(); ++ec2InstanceTagsIndex)
    {
      m_ec2InstanceTags.push_back(ec2InstanceTagsJsonList[ec2InstanceTagsIndex].AsObject());
    }
    m_ec2InstanceTagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ecrImageTags"))
  {
    Array<JsonView> ecrImageTagsJsonList = jsonValue.GetArray("ecrImageTags");
    for(unsigned ecrImageTagsIndex = 0; ecrImageTagsIndex < ecrImageTagsJsonList.GetLength(); ++ecrImageTagsIndex)
    {
      m_ecrImageTags.push_back(ecrImageTagsJsonList[ecrImageTagsIndex].AsObject());
    }
    m_ecrImageTagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ecrRepositoryName"))
  {
    Array<JsonView> ecrRepositoryNameJsonList = jsonValue.GetArray("ecrRepositoryName");
    for(unsigned ecrRepositoryNameIndex = 0; ecrRepositoryNameIndex < ecrRepositoryNameJsonList.GetLength(); ++ecrRepositoryNameIndex)
    {
      m_ecrRepositoryName.push_back(ecrRepositoryNameJsonList[ecrRepositoryNameIndex].AsObject());
    }
    m_ecrRepositoryNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceId"))
  {
    Array<JsonView> resourceIdJsonList = jsonValue.GetArray("resourceId");
    for(unsigned resourceIdIndex = 0; resourceIdIndex < resourceIdJsonList.GetLength(); ++resourceIdIndex)
    {
      m_resourceId.push_back(resourceIdJsonList[resourceIdIndex].AsObject());
    }
    m_resourceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("resourceType"))
  {
    Array<JsonView> resourceTypeJsonList = jsonValue.GetArray("resourceType");
    for(unsigned resourceTypeIndex = 0; resourceTypeIndex < resourceTypeJsonList.GetLength(); ++resourceTypeIndex)
    {
      m_resourceType.push_back(resourceTypeJsonList[resourceTypeIndex].AsObject());
    }
    m_resourceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scanStatusCode"))
  {
    Array<JsonView> scanStatusCodeJsonList = jsonValue.GetArray("scanStatusCode");
    for(unsigned scanStatusCodeIndex = 0; scanStatusCodeIndex < scanStatusCodeJsonList.GetLength(); ++scanStatusCodeIndex)
    {
      m_scanStatusCode.push_back(scanStatusCodeJsonList[scanStatusCodeIndex].AsObject());
    }
    m_scanStatusCodeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scanStatusReason"))
  {
    Array<JsonView> scanStatusReasonJsonList = jsonValue.GetArray("scanStatusReason");
    for(unsigned scanStatusReasonIndex = 0; scanStatusReasonIndex < scanStatusReasonJsonList.GetLength(); ++scanStatusReasonIndex)
    {
      m_scanStatusReason.push_back(scanStatusReasonJsonList[scanStatusReasonIndex].AsObject());
    }
    m_scanStatusReasonHasBeenSet = true;
  }

  if(jsonValue.ValueExists("scanType"))
  {
    Array<JsonView> scanTypeJsonList = jsonValue.GetArray("scanType");
    for(unsigned scanTypeIndex = 0; scanTypeIndex < scanTypeJsonList.GetLength(); ++scanTypeIndex)
    {
      m_scanType.push_back(scanTypeJsonList[scanTypeIndex].AsObject());
    }
    m_scanTypeHasBeenSet = true;
  }

  return *this;
}

JsonValue CoverageFilterCriteria::Jsonize() const
{
  JsonValue payload;

  if(m_accountIdHasBeenSet)
  {
   Array<JsonValue> accountIdJsonList(m_accountId.size());
   for(unsigned accountIdIndex = 0; accountIdIndex < accountIdJsonList.GetLength(); ++accountIdIndex)
   {
     accountIdJsonList[accountIdIndex].AsObject(m_accountId[accountIdIndex].Jsonize());
   }
   payload.WithArray("accountId", std::move(accountIdJsonList));

  }

  if(m_ec2InstanceTagsHasBeenSet)
  {
   Array<JsonValue> ec2InstanceTagsJsonList(m_ec2InstanceTags.size());
   for(unsigned ec2InstanceTagsIndex = 0; ec2InstanceTagsIndex < ec2InstanceTagsJsonList.GetLength(); ++ec2InstanceTagsIndex)
   {
     ec2InstanceTagsJsonList[ec2InstanceTagsIndex].AsObject(m_ec2InstanceTags[ec2InstanceTagsIndex].Jsonize());
   }
   payload.WithArray("ec2InstanceTags", std::move(ec2InstanceTagsJsonList));

  }

  if(m_ecrImageTagsHasBeenSet)
  {
   Array<JsonValue> ecrImageTagsJsonList(m_ecrImageTags.size());
   for(unsigned ecrImageTagsIndex = 0; ecrImageTagsIndex < ecrImageTagsJsonList.GetLength(); ++ecrImageTagsIndex)
   {
     ecrImageTagsJsonList[ecrImageTagsIndex].AsObject(m_ecrImageTags[ecrImageTagsIndex].Jsonize());
   }
   payload.WithArray("ecrImageTags", std::move(ecrImageTagsJsonList));

  }

  if(m_ecrRepositoryNameHasBeenSet)
  {
   Array<JsonValue> ecrRepositoryNameJsonList(m_ecrRepositoryName.size());
   for(unsigned ecrRepositoryNameIndex = 0; ecrRepositoryNameIndex < ecrRepositoryNameJsonList.GetLength(); ++ecrRepositoryNameIndex)
   {
     ecrRepositoryNameJsonList[ecrRepositoryNameIndex].AsObject(m_ecrRepositoryName[ecrRepositoryNameIndex].Jsonize());
   }
   payload.WithArray("ecrRepositoryName", std::move(ecrRepositoryNameJsonList));

  }

  if(m_resourceIdHasBeenSet)
  {
   Array<JsonValue> resourceIdJsonList(m_resourceId.size());
   for(unsigned resourceIdIndex = 0; resourceIdIndex < resourceIdJsonList.GetLength(); ++resourceIdIndex)
   {
     resourceIdJsonList[resourceIdIndex].AsObject(m_resourceId[resourceIdIndex].Jsonize());
   }
   payload.WithArray("resourceId", std::move(resourceIdJsonList));

  }

  if(m_resourceTypeHasBeenSet)
  {
   Array<JsonValue> resourceTypeJsonList(m_resourceType.size());
   for(unsigned resourceTypeIndex = 0; resourceTypeIndex < resourceTypeJsonList.GetLength(); ++resourceTypeIndex)
   {
     resourceTypeJsonList[resourceTypeIndex].AsObject(m_resourceType[resourceTypeIndex].Jsonize());
   }
   payload.WithArray("resourceType", std::move(resourceTypeJsonList));

  }

  if(m_scanStatusCodeHasBeenSet)
  {
   Array<JsonValue> scanStatusCodeJsonList(m_scanStatusCode.size());
   for(unsigned scanStatusCodeIndex = 0; scanStatusCodeIndex < scanStatusCodeJsonList.GetLength(); ++scanStatusCodeIndex)
   {
     scanStatusCodeJsonList[scanStatusCodeIndex].AsObject(m_scanStatusCode[scanStatusCodeIndex].Jsonize());
   }
   payload.WithArray("scanStatusCode", std::move(scanStatusCodeJsonList));

  }

  if(m_scanStatusReasonHasBeenSet)
  {
   Array<JsonValue> scanStatusReasonJsonList(m_scanStatusReason.size());
   for(unsigned scanStatusReasonIndex = 0; scanStatusReasonIndex < scanStatusReasonJsonList.GetLength(); ++scanStatusReasonIndex)
   {
     scanStatusReasonJsonList[scanStatusReasonIndex].AsObject(m_scanStatusReason[scanStatusReasonIndex].Jsonize());
   }
   payload.WithArray("scanStatusReason", std::move(scanStatusReasonJsonList));

  }

  if(m_scanTypeHasBeenSet)
  {
   Array<JsonValue> scanTypeJsonList(m_scanType.size());
   for(unsigned scanTypeIndex = 0; scanTypeIndex < scanTypeJsonList.GetLength(); ++scanTypeIndex)
   {
     scanTypeJsonList[scanTypeIndex].AsObject(m_scanType[scanTypeIndex].Jsonize());
   }
   payload.WithArray("scanType", std::move(scanTypeJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
