/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/detective/model/UpdateDatasourcePackagesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Detective::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateDatasourcePackagesRequest::UpdateDatasourcePackagesRequest() : 
    m_graphArnHasBeenSet(false),
    m_datasourcePackagesHasBeenSet(false)
{
}

Aws::String UpdateDatasourcePackagesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_graphArnHasBeenSet)
  {
   payload.WithString("GraphArn", m_graphArn);

  }

  if(m_datasourcePackagesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> datasourcePackagesJsonList(m_datasourcePackages.size());
   for(unsigned datasourcePackagesIndex = 0; datasourcePackagesIndex < datasourcePackagesJsonList.GetLength(); ++datasourcePackagesIndex)
   {
     datasourcePackagesJsonList[datasourcePackagesIndex].AsString(DatasourcePackageMapper::GetNameForDatasourcePackage(m_datasourcePackages[datasourcePackagesIndex]));
   }
   payload.WithArray("DatasourcePackages", std::move(datasourcePackagesJsonList));

  }

  return payload.View().WriteReadable();
}




