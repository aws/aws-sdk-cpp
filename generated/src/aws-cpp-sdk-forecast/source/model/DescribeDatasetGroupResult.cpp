/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/forecast/model/DescribeDatasetGroupResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ForecastService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeDatasetGroupResult::DescribeDatasetGroupResult() : 
    m_domain(Domain::NOT_SET)
{
}

DescribeDatasetGroupResult::DescribeDatasetGroupResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_domain(Domain::NOT_SET)
{
  *this = result;
}

DescribeDatasetGroupResult& DescribeDatasetGroupResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DatasetGroupName"))
  {
    m_datasetGroupName = jsonValue.GetString("DatasetGroupName");

  }

  if(jsonValue.ValueExists("DatasetGroupArn"))
  {
    m_datasetGroupArn = jsonValue.GetString("DatasetGroupArn");

  }

  if(jsonValue.ValueExists("DatasetArns"))
  {
    Aws::Utils::Array<JsonView> datasetArnsJsonList = jsonValue.GetArray("DatasetArns");
    for(unsigned datasetArnsIndex = 0; datasetArnsIndex < datasetArnsJsonList.GetLength(); ++datasetArnsIndex)
    {
      m_datasetArns.push_back(datasetArnsJsonList[datasetArnsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("Domain"))
  {
    m_domain = DomainMapper::GetDomainForName(jsonValue.GetString("Domain"));

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = jsonValue.GetString("Status");

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("LastModificationTime"))
  {
    m_lastModificationTime = jsonValue.GetDouble("LastModificationTime");

  }



  return *this;
}
