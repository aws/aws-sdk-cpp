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

#include <aws/forecast/model/DescribeDatasetResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ForecastService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeDatasetResult::DescribeDatasetResult() : 
    m_domain(Domain::NOT_SET),
    m_datasetType(DatasetType::NOT_SET)
{
}

DescribeDatasetResult::DescribeDatasetResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_domain(Domain::NOT_SET),
    m_datasetType(DatasetType::NOT_SET)
{
  *this = result;
}

DescribeDatasetResult& DescribeDatasetResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DatasetArn"))
  {
    m_datasetArn = jsonValue.GetString("DatasetArn");

  }

  if(jsonValue.ValueExists("DatasetName"))
  {
    m_datasetName = jsonValue.GetString("DatasetName");

  }

  if(jsonValue.ValueExists("Domain"))
  {
    m_domain = DomainMapper::GetDomainForName(jsonValue.GetString("Domain"));

  }

  if(jsonValue.ValueExists("DatasetType"))
  {
    m_datasetType = DatasetTypeMapper::GetDatasetTypeForName(jsonValue.GetString("DatasetType"));

  }

  if(jsonValue.ValueExists("DataFrequency"))
  {
    m_dataFrequency = jsonValue.GetString("DataFrequency");

  }

  if(jsonValue.ValueExists("Schema"))
  {
    m_schema = jsonValue.GetObject("Schema");

  }

  if(jsonValue.ValueExists("EncryptionConfig"))
  {
    m_encryptionConfig = jsonValue.GetObject("EncryptionConfig");

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
