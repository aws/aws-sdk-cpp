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

#include <aws/kendra/model/DescribeIndexResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::kendra::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeIndexResult::DescribeIndexResult() : 
    m_status(IndexStatus::NOT_SET)
{
}

DescribeIndexResult::DescribeIndexResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(IndexStatus::NOT_SET)
{
  *this = result;
}

DescribeIndexResult& DescribeIndexResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

  }

  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

  }

  if(jsonValue.ValueExists("ServerSideEncryptionConfiguration"))
  {
    m_serverSideEncryptionConfiguration = jsonValue.GetObject("ServerSideEncryptionConfiguration");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = IndexStatusMapper::GetIndexStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

  }

  if(jsonValue.ValueExists("UpdatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("UpdatedAt");

  }

  if(jsonValue.ValueExists("DocumentMetadataConfigurations"))
  {
    Array<JsonView> documentMetadataConfigurationsJsonList = jsonValue.GetArray("DocumentMetadataConfigurations");
    for(unsigned documentMetadataConfigurationsIndex = 0; documentMetadataConfigurationsIndex < documentMetadataConfigurationsJsonList.GetLength(); ++documentMetadataConfigurationsIndex)
    {
      m_documentMetadataConfigurations.push_back(documentMetadataConfigurationsJsonList[documentMetadataConfigurationsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("IndexStatistics"))
  {
    m_indexStatistics = jsonValue.GetObject("IndexStatistics");

  }

  if(jsonValue.ValueExists("ErrorMessage"))
  {
    m_errorMessage = jsonValue.GetString("ErrorMessage");

  }



  return *this;
}
