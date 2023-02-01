/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/dynamodb/model/DescribeKinesisStreamingDestinationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::DynamoDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeKinesisStreamingDestinationResult::DescribeKinesisStreamingDestinationResult()
{
}

DescribeKinesisStreamingDestinationResult::DescribeKinesisStreamingDestinationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeKinesisStreamingDestinationResult& DescribeKinesisStreamingDestinationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TableName"))
  {
    m_tableName = jsonValue.GetString("TableName");

  }

  if(jsonValue.ValueExists("KinesisDataStreamDestinations"))
  {
    Aws::Utils::Array<JsonView> kinesisDataStreamDestinationsJsonList = jsonValue.GetArray("KinesisDataStreamDestinations");
    for(unsigned kinesisDataStreamDestinationsIndex = 0; kinesisDataStreamDestinationsIndex < kinesisDataStreamDestinationsJsonList.GetLength(); ++kinesisDataStreamDestinationsIndex)
    {
      m_kinesisDataStreamDestinations.push_back(kinesisDataStreamDestinationsJsonList[kinesisDataStreamDestinationsIndex].AsObject());
    }
  }



  return *this;
}
