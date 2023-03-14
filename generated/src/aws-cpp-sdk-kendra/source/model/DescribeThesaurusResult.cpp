/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kendra/model/DescribeThesaurusResult.h>
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

DescribeThesaurusResult::DescribeThesaurusResult() : 
    m_status(ThesaurusStatus::NOT_SET),
    m_fileSizeBytes(0),
    m_termCount(0),
    m_synonymRuleCount(0)
{
}

DescribeThesaurusResult::DescribeThesaurusResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(ThesaurusStatus::NOT_SET),
    m_fileSizeBytes(0),
    m_termCount(0),
    m_synonymRuleCount(0)
{
  *this = result;
}

DescribeThesaurusResult& DescribeThesaurusResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

  }

  if(jsonValue.ValueExists("IndexId"))
  {
    m_indexId = jsonValue.GetString("IndexId");

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
    m_status = ThesaurusStatusMapper::GetThesaurusStatusForName(jsonValue.GetString("Status"));

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

  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

  }

  if(jsonValue.ValueExists("SourceS3Path"))
  {
    m_sourceS3Path = jsonValue.GetObject("SourceS3Path");

  }

  if(jsonValue.ValueExists("FileSizeBytes"))
  {
    m_fileSizeBytes = jsonValue.GetInt64("FileSizeBytes");

  }

  if(jsonValue.ValueExists("TermCount"))
  {
    m_termCount = jsonValue.GetInt64("TermCount");

  }

  if(jsonValue.ValueExists("SynonymRuleCount"))
  {
    m_synonymRuleCount = jsonValue.GetInt64("SynonymRuleCount");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
