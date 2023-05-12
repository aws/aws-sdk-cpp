/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/inspector2/model/UpdateOrgEc2DeepInspectionConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Inspector2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateOrgEc2DeepInspectionConfigurationRequest::UpdateOrgEc2DeepInspectionConfigurationRequest() : 
    m_orgPackagePathsHasBeenSet(false)
{
}

Aws::String UpdateOrgEc2DeepInspectionConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_orgPackagePathsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> orgPackagePathsJsonList(m_orgPackagePaths.size());
   for(unsigned orgPackagePathsIndex = 0; orgPackagePathsIndex < orgPackagePathsJsonList.GetLength(); ++orgPackagePathsIndex)
   {
     orgPackagePathsJsonList[orgPackagePathsIndex].AsString(m_orgPackagePaths[orgPackagePathsIndex]);
   }
   payload.WithArray("orgPackagePaths", std::move(orgPackagePathsJsonList));

  }

  return payload.View().WriteReadable();
}




