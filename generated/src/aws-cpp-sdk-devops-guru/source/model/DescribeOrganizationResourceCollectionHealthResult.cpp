/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/devops-guru/model/DescribeOrganizationResourceCollectionHealthResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DevOpsGuru::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeOrganizationResourceCollectionHealthResult::DescribeOrganizationResourceCollectionHealthResult()
{
}

DescribeOrganizationResourceCollectionHealthResult::DescribeOrganizationResourceCollectionHealthResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeOrganizationResourceCollectionHealthResult& DescribeOrganizationResourceCollectionHealthResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CloudFormation"))
  {
    Aws::Utils::Array<JsonView> cloudFormationJsonList = jsonValue.GetArray("CloudFormation");
    for(unsigned cloudFormationIndex = 0; cloudFormationIndex < cloudFormationJsonList.GetLength(); ++cloudFormationIndex)
    {
      m_cloudFormation.push_back(cloudFormationJsonList[cloudFormationIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("Service"))
  {
    Aws::Utils::Array<JsonView> serviceJsonList = jsonValue.GetArray("Service");
    for(unsigned serviceIndex = 0; serviceIndex < serviceJsonList.GetLength(); ++serviceIndex)
    {
      m_service.push_back(serviceJsonList[serviceIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("Account"))
  {
    Aws::Utils::Array<JsonView> accountJsonList = jsonValue.GetArray("Account");
    for(unsigned accountIndex = 0; accountIndex < accountJsonList.GetLength(); ++accountIndex)
    {
      m_account.push_back(accountJsonList[accountIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Utils::Array<JsonView> tagsJsonList = jsonValue.GetArray("Tags");
    for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
    {
      m_tags.push_back(tagsJsonList[tagsIndex].AsObject());
    }
  }



  return *this;
}
