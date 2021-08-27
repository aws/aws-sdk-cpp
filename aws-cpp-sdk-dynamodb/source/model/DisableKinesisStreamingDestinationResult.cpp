/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/DisableKinesisStreamingDestinationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DisableKinesisStreamingDestinationResult::DisableKinesisStreamingDestinationResult() : 
    m_destinationStatus(DestinationStatus::NOT_SET)
{
}

DisableKinesisStreamingDestinationResult::DisableKinesisStreamingDestinationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_destinationStatus(DestinationStatus::NOT_SET)
{
  *this = result;
}

DisableKinesisStreamingDestinationResult& DisableKinesisStreamingDestinationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TableName"))
  {
    m_tableName = jsonValue.GetString("TableName");

  }

  if(jsonValue.ValueExists("StreamArn"))
  {
    m_streamArn = jsonValue.GetString("StreamArn");

  }

  if(jsonValue.ValueExists("DestinationStatus"))
  {
    m_destinationStatus = DestinationStatusMapper::GetDestinationStatusForName(jsonValue.GetString("DestinationStatus"));

  }



  return *this;
}
