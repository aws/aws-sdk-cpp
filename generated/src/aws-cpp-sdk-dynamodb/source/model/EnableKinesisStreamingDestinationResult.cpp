/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/EnableKinesisStreamingDestinationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

EnableKinesisStreamingDestinationResult::EnableKinesisStreamingDestinationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

EnableKinesisStreamingDestinationResult& EnableKinesisStreamingDestinationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TableName"))
  {
    m_tableName = jsonValue.GetString("TableName");
    m_tableNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StreamArn"))
  {
    m_streamArn = jsonValue.GetString("StreamArn");
    m_streamArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DestinationStatus"))
  {
    m_destinationStatus = DestinationStatusMapper::GetDestinationStatusForName(jsonValue.GetString("DestinationStatus"));
    m_destinationStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EnableKinesisStreamingConfiguration"))
  {
    m_enableKinesisStreamingConfiguration = jsonValue.GetObject("EnableKinesisStreamingConfiguration");
    m_enableKinesisStreamingConfigurationHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
