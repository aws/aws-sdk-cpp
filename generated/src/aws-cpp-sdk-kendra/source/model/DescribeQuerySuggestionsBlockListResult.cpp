/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/DescribeQuerySuggestionsBlockListResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::kendra::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeQuerySuggestionsBlockListResult::DescribeQuerySuggestionsBlockListResult() : 
    m_status(QuerySuggestionsBlockListStatus::NOT_SET),
    m_itemCount(0),
    m_fileSizeBytes(0)
{
}

DescribeQuerySuggestionsBlockListResult::DescribeQuerySuggestionsBlockListResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(QuerySuggestionsBlockListStatus::NOT_SET),
    m_itemCount(0),
    m_fileSizeBytes(0)
{
  *this = result;
}

DescribeQuerySuggestionsBlockListResult& DescribeQuerySuggestionsBlockListResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("IndexId"))
  {
    m_indexId = jsonValue.GetString("IndexId");

  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = QuerySuggestionsBlockListStatusMapper::GetQuerySuggestionsBlockListStatusForName(jsonValue.GetString("Status"));

  }

  if(jsonValue.ValueExists("ErrorMessage"))
  {
    m_errorMessage = jsonValue.GetString("ErrorMessage");

  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

  }

  if(jsonValue.ValueExists("UpdatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("UpdatedAt");

  }

  if(jsonValue.ValueExists("SourceS3Path"))
  {
    m_sourceS3Path = jsonValue.GetObject("SourceS3Path");

  }

  if(jsonValue.ValueExists("ItemCount"))
  {
    m_itemCount = jsonValue.GetInteger("ItemCount");

  }

  if(jsonValue.ValueExists("FileSizeBytes"))
  {
    m_fileSizeBytes = jsonValue.GetInt64("FileSizeBytes");

  }

  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
