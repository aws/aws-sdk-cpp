/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    Aws::Utils::Array<JsonView> provisioningArtifactSummariesJsonList = jsonValue.GetArray("ProvisioningArtifactSummaries");
    for(unsigned provisioningArtifactSummariesIndex = 0; provisioningArtifactSummariesIndex < provisioningArtifactSummariesJsonList.GetLength(); ++provisioningArtifactSummariesIndex)
    {
      m_provisioningArtifactSummaries.push_back(provisioningArtifactSummariesJsonList[provisioningArtifactSummariesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("TagOptions"))
  {
    Aws::Utils::Array<JsonView> tagOptionsJsonList = jsonValue.GetArray("TagOptions");
    for(unsigned tagOptionsIndex = 0; tagOptionsIndex < tagOptionsJsonList.GetLength(); ++tagOptionsIndex)
    {
      m_tagOptions.push_back(tagOptionsJsonList[tagOptionsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("Budgets"))
  {
    Aws::Utils::Array<JsonView> budgetsJsonList = jsonValue.GetArray("Budgets");
    for(unsigned budgetsIndex = 0; budgetsIndex < budgetsJsonList.GetLength(); ++budgetsIndex)
    {
      m_budgets.push_back(budgetsJsonList[budgetsIndex].AsObject());
    }
  }



  return *this;
}
