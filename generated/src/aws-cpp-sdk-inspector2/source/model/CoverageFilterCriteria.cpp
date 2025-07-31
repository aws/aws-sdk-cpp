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

CoverageFilterCriteria::CoverageFilterCriteria(JsonView jsonValue)
{
  *this = jsonValue;
}

CoverageFilterCriteria& CoverageFilterCriteria::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("scanStatusCode"))
  {
    Aws::Utils::Array<JsonView> scanStatusCodeJsonList = jsonValue.GetArray("scanStatusCode");
    for(unsigned scanStatusCodeIndex = 0; scanStatusCodeIndex < scanStatusCodeJsonList.GetLength(); ++scanStatusCodeIndex)
    {
      m_scanStatusCode.push_back(scanStatusCodeJsonList[scanStatusCodeIndex].AsObject());
    }
    m_scanStatusCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("scanStatusReason"))
  {
    Aws::Utils::Array<JsonView> scanStatusReasonJsonList = jsonValue.GetArray("scanStatusReason");
    for(unsigned scanStatusReasonIndex = 0; scanStatusReasonIndex < scanStatusReasonJsonList.GetLength(); ++scanStatusReasonIndex)
    {
      m_scanStatusReason.push_back(scanStatusReasonJsonList[scanStatusReasonIndex].AsObject());
    }
    m_scanStatusReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("accountId"))
  {
    Aws::Utils::Array<JsonView> accountIdJsonList = jsonValue.GetArray("accountId");
    for(unsigned accountIdIndex = 0; accountIdIndex < accountIdJsonList.GetLength(); ++accountIdIndex)
    {
      m_accountId.push_back(accountIdJsonList[accountIdIndex].AsObject());
    }
    m_accountIdHasBeenSet = true;
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
  if(jsonValue.ValueExists("scanType"))
  {
    Aws::Utils::Array<JsonView> scanTypeJsonList = jsonValue.GetArray("scanType");
    for(unsigned scanTypeIndex = 0; scanTypeIndex < scanTypeJsonList.GetLength(); ++scanTypeIndex)
    {
      m_scanType.push_back(scanTypeJsonList[scanTypeIndex].AsObject());
    }
    m_scanTypeHasBeenSet = true;
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
  if(jsonValue.ValueExists("ecrImageTags"))
  {
    Aws::Utils::Array<JsonView> ecrImageTagsJsonList = jsonValue.GetArray("ecrImageTags");
    for(unsigned ecrImageTagsIndex = 0; ecrImageTagsIndex < ecrImageTagsJsonList.GetLength(); ++ecrImageTagsIndex)
    {
      m_ecrImageTags.push_back(ecrImageTagsJsonList[ecrImageTagsIndex].AsObject());
    }
    m_ecrImageTagsHasBeenSet = true;
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
  if(jsonValue.ValueExists("lambdaFunctionRuntime"))
  {
    Aws::Utils::Array<JsonView> lambdaFunctionRuntimeJsonList = jsonValue.GetArray("lambdaFunctionRuntime");
    for(unsigned lambdaFunctionRuntimeIndex = 0; lambdaFunctionRuntimeIndex < lambdaFunctionRuntimeJsonList.GetLength(); ++lambdaFunctionRuntimeIndex)
    {
      m_lambdaFunctionRuntime.push_back(lambdaFunctionRuntimeJsonList[lambdaFunctionRuntimeIndex].AsObject());
    }
    m_lambdaFunctionRuntimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastScannedAt"))
  {
    Aws::Utils::Array<JsonView> lastScannedAtJsonList = jsonValue.GetArray("lastScannedAt");
    for(unsigned lastScannedAtIndex = 0; lastScannedAtIndex < lastScannedAtJsonList.GetLength(); ++lastScannedAtIndex)
    {
      m_lastScannedAt.push_back(lastScannedAtJsonList[lastScannedAtIndex].AsObject());
    }
    m_lastScannedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("scanMode"))
  {
    Aws::Utils::Array<JsonView> scanModeJsonList = jsonValue.GetArray("scanMode");
    for(unsigned scanModeIndex = 0; scanModeIndex < scanModeJsonList.GetLength(); ++scanModeIndex)
    {
      m_scanMode.push_back(scanModeJsonList[scanModeIndex].AsObject());
    }
    m_scanModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("imagePulledAt"))
  {
    Aws::Utils::Array<JsonView> imagePulledAtJsonList = jsonValue.GetArray("imagePulledAt");
    for(unsigned imagePulledAtIndex = 0; imagePulledAtIndex < imagePulledAtJsonList.GetLength(); ++imagePulledAtIndex)
    {
      m_imagePulledAt.push_back(imagePulledAtJsonList[imagePulledAtIndex].AsObject());
    }
    m_imagePulledAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ecrImageLastInUseAt"))
  {
    Aws::Utils::Array<JsonView> ecrImageLastInUseAtJsonList = jsonValue.GetArray("ecrImageLastInUseAt");
    for(unsigned ecrImageLastInUseAtIndex = 0; ecrImageLastInUseAtIndex < ecrImageLastInUseAtJsonList.GetLength(); ++ecrImageLastInUseAtIndex)
    {
      m_ecrImageLastInUseAt.push_back(ecrImageLastInUseAtJsonList[ecrImageLastInUseAtIndex].AsObject());
    }
    m_ecrImageLastInUseAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ecrImageInUseCount"))
  {
    Aws::Utils::Array<JsonView> ecrImageInUseCountJsonList = jsonValue.GetArray("ecrImageInUseCount");
    for(unsigned ecrImageInUseCountIndex = 0; ecrImageInUseCountIndex < ecrImageInUseCountJsonList.GetLength(); ++ecrImageInUseCountIndex)
    {
      m_ecrImageInUseCount.push_back(ecrImageInUseCountJsonList[ecrImageInUseCountIndex].AsObject());
    }
    m_ecrImageInUseCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("codeRepositoryProjectName"))
  {
    Aws::Utils::Array<JsonView> codeRepositoryProjectNameJsonList = jsonValue.GetArray("codeRepositoryProjectName");
    for(unsigned codeRepositoryProjectNameIndex = 0; codeRepositoryProjectNameIndex < codeRepositoryProjectNameJsonList.GetLength(); ++codeRepositoryProjectNameIndex)
    {
      m_codeRepositoryProjectName.push_back(codeRepositoryProjectNameJsonList[codeRepositoryProjectNameIndex].AsObject());
    }
    m_codeRepositoryProjectNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("codeRepositoryProviderType"))
  {
    Aws::Utils::Array<JsonView> codeRepositoryProviderTypeJsonList = jsonValue.GetArray("codeRepositoryProviderType");
    for(unsigned codeRepositoryProviderTypeIndex = 0; codeRepositoryProviderTypeIndex < codeRepositoryProviderTypeJsonList.GetLength(); ++codeRepositoryProviderTypeIndex)
    {
      m_codeRepositoryProviderType.push_back(codeRepositoryProviderTypeJsonList[codeRepositoryProviderTypeIndex].AsObject());
    }
    m_codeRepositoryProviderTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("codeRepositoryProviderTypeVisibility"))
  {
    Aws::Utils::Array<JsonView> codeRepositoryProviderTypeVisibilityJsonList = jsonValue.GetArray("codeRepositoryProviderTypeVisibility");
    for(unsigned codeRepositoryProviderTypeVisibilityIndex = 0; codeRepositoryProviderTypeVisibilityIndex < codeRepositoryProviderTypeVisibilityJsonList.GetLength(); ++codeRepositoryProviderTypeVisibilityIndex)
    {
      m_codeRepositoryProviderTypeVisibility.push_back(codeRepositoryProviderTypeVisibilityJsonList[codeRepositoryProviderTypeVisibilityIndex].AsObject());
    }
    m_codeRepositoryProviderTypeVisibilityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastScannedCommitId"))
  {
    Aws::Utils::Array<JsonView> lastScannedCommitIdJsonList = jsonValue.GetArray("lastScannedCommitId");
    for(unsigned lastScannedCommitIdIndex = 0; lastScannedCommitIdIndex < lastScannedCommitIdJsonList.GetLength(); ++lastScannedCommitIdIndex)
    {
      m_lastScannedCommitId.push_back(lastScannedCommitIdJsonList[lastScannedCommitIdIndex].AsObject());
    }
    m_lastScannedCommitIdHasBeenSet = true;
  }
  return *this;
}

JsonValue CoverageFilterCriteria::Jsonize() const
{
  JsonValue payload;

  if(m_scanStatusCodeHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> scanStatusCodeJsonList(m_scanStatusCode.size());
   for(unsigned scanStatusCodeIndex = 0; scanStatusCodeIndex < scanStatusCodeJsonList.GetLength(); ++scanStatusCodeIndex)
   {
     scanStatusCodeJsonList[scanStatusCodeIndex].AsObject(m_scanStatusCode[scanStatusCodeIndex].Jsonize());
   }
   payload.WithArray("scanStatusCode", std::move(scanStatusCodeJsonList));

  }

  if(m_scanStatusReasonHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> scanStatusReasonJsonList(m_scanStatusReason.size());
   for(unsigned scanStatusReasonIndex = 0; scanStatusReasonIndex < scanStatusReasonJsonList.GetLength(); ++scanStatusReasonIndex)
   {
     scanStatusReasonJsonList[scanStatusReasonIndex].AsObject(m_scanStatusReason[scanStatusReasonIndex].Jsonize());
   }
   payload.WithArray("scanStatusReason", std::move(scanStatusReasonJsonList));

  }

  if(m_accountIdHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> accountIdJsonList(m_accountId.size());
   for(unsigned accountIdIndex = 0; accountIdIndex < accountIdJsonList.GetLength(); ++accountIdIndex)
   {
     accountIdJsonList[accountIdIndex].AsObject(m_accountId[accountIdIndex].Jsonize());
   }
   payload.WithArray("accountId", std::move(accountIdJsonList));

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

  if(m_scanTypeHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> scanTypeJsonList(m_scanType.size());
   for(unsigned scanTypeIndex = 0; scanTypeIndex < scanTypeJsonList.GetLength(); ++scanTypeIndex)
   {
     scanTypeJsonList[scanTypeIndex].AsObject(m_scanType[scanTypeIndex].Jsonize());
   }
   payload.WithArray("scanType", std::move(scanTypeJsonList));

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

  if(m_ecrImageTagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ecrImageTagsJsonList(m_ecrImageTags.size());
   for(unsigned ecrImageTagsIndex = 0; ecrImageTagsIndex < ecrImageTagsJsonList.GetLength(); ++ecrImageTagsIndex)
   {
     ecrImageTagsJsonList[ecrImageTagsIndex].AsObject(m_ecrImageTags[ecrImageTagsIndex].Jsonize());
   }
   payload.WithArray("ecrImageTags", std::move(ecrImageTagsJsonList));

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

  if(m_lambdaFunctionRuntimeHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> lambdaFunctionRuntimeJsonList(m_lambdaFunctionRuntime.size());
   for(unsigned lambdaFunctionRuntimeIndex = 0; lambdaFunctionRuntimeIndex < lambdaFunctionRuntimeJsonList.GetLength(); ++lambdaFunctionRuntimeIndex)
   {
     lambdaFunctionRuntimeJsonList[lambdaFunctionRuntimeIndex].AsObject(m_lambdaFunctionRuntime[lambdaFunctionRuntimeIndex].Jsonize());
   }
   payload.WithArray("lambdaFunctionRuntime", std::move(lambdaFunctionRuntimeJsonList));

  }

  if(m_lastScannedAtHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> lastScannedAtJsonList(m_lastScannedAt.size());
   for(unsigned lastScannedAtIndex = 0; lastScannedAtIndex < lastScannedAtJsonList.GetLength(); ++lastScannedAtIndex)
   {
     lastScannedAtJsonList[lastScannedAtIndex].AsObject(m_lastScannedAt[lastScannedAtIndex].Jsonize());
   }
   payload.WithArray("lastScannedAt", std::move(lastScannedAtJsonList));

  }

  if(m_scanModeHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> scanModeJsonList(m_scanMode.size());
   for(unsigned scanModeIndex = 0; scanModeIndex < scanModeJsonList.GetLength(); ++scanModeIndex)
   {
     scanModeJsonList[scanModeIndex].AsObject(m_scanMode[scanModeIndex].Jsonize());
   }
   payload.WithArray("scanMode", std::move(scanModeJsonList));

  }

  if(m_imagePulledAtHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> imagePulledAtJsonList(m_imagePulledAt.size());
   for(unsigned imagePulledAtIndex = 0; imagePulledAtIndex < imagePulledAtJsonList.GetLength(); ++imagePulledAtIndex)
   {
     imagePulledAtJsonList[imagePulledAtIndex].AsObject(m_imagePulledAt[imagePulledAtIndex].Jsonize());
   }
   payload.WithArray("imagePulledAt", std::move(imagePulledAtJsonList));

  }

  if(m_ecrImageLastInUseAtHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ecrImageLastInUseAtJsonList(m_ecrImageLastInUseAt.size());
   for(unsigned ecrImageLastInUseAtIndex = 0; ecrImageLastInUseAtIndex < ecrImageLastInUseAtJsonList.GetLength(); ++ecrImageLastInUseAtIndex)
   {
     ecrImageLastInUseAtJsonList[ecrImageLastInUseAtIndex].AsObject(m_ecrImageLastInUseAt[ecrImageLastInUseAtIndex].Jsonize());
   }
   payload.WithArray("ecrImageLastInUseAt", std::move(ecrImageLastInUseAtJsonList));

  }

  if(m_ecrImageInUseCountHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> ecrImageInUseCountJsonList(m_ecrImageInUseCount.size());
   for(unsigned ecrImageInUseCountIndex = 0; ecrImageInUseCountIndex < ecrImageInUseCountJsonList.GetLength(); ++ecrImageInUseCountIndex)
   {
     ecrImageInUseCountJsonList[ecrImageInUseCountIndex].AsObject(m_ecrImageInUseCount[ecrImageInUseCountIndex].Jsonize());
   }
   payload.WithArray("ecrImageInUseCount", std::move(ecrImageInUseCountJsonList));

  }

  if(m_codeRepositoryProjectNameHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> codeRepositoryProjectNameJsonList(m_codeRepositoryProjectName.size());
   for(unsigned codeRepositoryProjectNameIndex = 0; codeRepositoryProjectNameIndex < codeRepositoryProjectNameJsonList.GetLength(); ++codeRepositoryProjectNameIndex)
   {
     codeRepositoryProjectNameJsonList[codeRepositoryProjectNameIndex].AsObject(m_codeRepositoryProjectName[codeRepositoryProjectNameIndex].Jsonize());
   }
   payload.WithArray("codeRepositoryProjectName", std::move(codeRepositoryProjectNameJsonList));

  }

  if(m_codeRepositoryProviderTypeHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> codeRepositoryProviderTypeJsonList(m_codeRepositoryProviderType.size());
   for(unsigned codeRepositoryProviderTypeIndex = 0; codeRepositoryProviderTypeIndex < codeRepositoryProviderTypeJsonList.GetLength(); ++codeRepositoryProviderTypeIndex)
   {
     codeRepositoryProviderTypeJsonList[codeRepositoryProviderTypeIndex].AsObject(m_codeRepositoryProviderType[codeRepositoryProviderTypeIndex].Jsonize());
   }
   payload.WithArray("codeRepositoryProviderType", std::move(codeRepositoryProviderTypeJsonList));

  }

  if(m_codeRepositoryProviderTypeVisibilityHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> codeRepositoryProviderTypeVisibilityJsonList(m_codeRepositoryProviderTypeVisibility.size());
   for(unsigned codeRepositoryProviderTypeVisibilityIndex = 0; codeRepositoryProviderTypeVisibilityIndex < codeRepositoryProviderTypeVisibilityJsonList.GetLength(); ++codeRepositoryProviderTypeVisibilityIndex)
   {
     codeRepositoryProviderTypeVisibilityJsonList[codeRepositoryProviderTypeVisibilityIndex].AsObject(m_codeRepositoryProviderTypeVisibility[codeRepositoryProviderTypeVisibilityIndex].Jsonize());
   }
   payload.WithArray("codeRepositoryProviderTypeVisibility", std::move(codeRepositoryProviderTypeVisibilityJsonList));

  }

  if(m_lastScannedCommitIdHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> lastScannedCommitIdJsonList(m_lastScannedCommitId.size());
   for(unsigned lastScannedCommitIdIndex = 0; lastScannedCommitIdIndex < lastScannedCommitIdJsonList.GetLength(); ++lastScannedCommitIdIndex)
   {
     lastScannedCommitIdJsonList[lastScannedCommitIdIndex].AsObject(m_lastScannedCommitId[lastScannedCommitIdIndex].Jsonize());
   }
   payload.WithArray("lastScannedCommitId", std::move(lastScannedCommitIdJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace Inspector2
} // namespace Aws
