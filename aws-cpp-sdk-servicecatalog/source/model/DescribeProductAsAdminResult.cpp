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

#include <aws/servicecatalog/model/DescribeProductAsAdminResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ServiceCatalog::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeProductAsAdminResult::DescribeProductAsAdminResult()
{
}

DescribeProductAsAdminResult::DescribeProductAsAdminResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeProductAsAdminResult& DescribeProductAsAdminResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ProductViewDetail"))
  {
    m_productViewDetail = jsonValue.GetObject("ProductViewDetail");

  }

  if(jsonValue.ValueExists("ProvisioningArtifactSummaries"))
  {
    Array<JsonView> provisioningArtifactSummariesJsonList = jsonValue.GetArray("ProvisioningArtifactSummaries");
    for(unsigned provisioningArtifactSummariesIndex = 0; provisioningArtifactSummariesIndex < provisioningArtifactSummariesJsonList.GetLength(); ++provisioningArtifactSummariesIndex)
    {
      m_provisioningArtifactSummaries.push_back(provisioningArtifactSummariesJsonList[provisioningArtifactSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("TagOptions"))
  {
    Array<JsonView> tagOptionsJsonList = jsonValue.GetArray("TagOptions");
    for(unsigned tagOptionsIndex = 0; tagOptionsIndex < tagOptionsJsonList.GetLength(); ++tagOptionsIndex)
    {
      m_tagOptions.push_back(tagOptionsJsonList[tagOptionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("Budgets"))
  {
    Array<JsonView> budgetsJsonList = jsonValue.GetArray("Budgets");
    for(unsigned budgetsIndex = 0; budgetsIndex < budgetsJsonList.GetLength(); ++budgetsIndex)
    {
      m_budgets.push_back(budgetsJsonList[budgetsIndex].AsObject());
    }
  }



  return *this;
}
