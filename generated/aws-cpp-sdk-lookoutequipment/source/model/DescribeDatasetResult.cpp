/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lookoutequipment/model/DescribeDatasetResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::LookoutEquipment::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeDatasetResult::DescribeDatasetResult() : 
    m_status(DatasetStatus::NOT_SET)
{
}

DescribeDatasetResult::DescribeDatasetResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(DatasetStatus::NOT_SET)
{
  *this = result;
}

DescribeDatasetResult& DescribeDatasetResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DatasetName"))
  {
    m_datasetName = jsonValue.GetString("DatasetName");

  }

  if(jsonValue.ValueExists("DatasetArn"))
  {
    m_datasetArn = jsonValue.GetString("DatasetArn");

  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

  }

  if(jsonValue.ValueExists("LastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetDouble("LastUpdatedAt");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = DatasetStatusMapper::GetDatasetStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("Schema"))
  {
    m_schema = jsonValue.GetString("Schema");

  }

  if(jsonValue.ValueExists("ServerSideKmsKeyId"))
  {
    m_serverSideKmsKeyId = jsonValue.GetString("ServerSideKmsKeyId");

  }

  if(jsonValue.ValueExists("IngestionInputConfiguration"))
  {
    m_ingestionInputConfiguration = jsonValue.GetObject("IngestionInputConfiguration");

  }



  return *this;
}
