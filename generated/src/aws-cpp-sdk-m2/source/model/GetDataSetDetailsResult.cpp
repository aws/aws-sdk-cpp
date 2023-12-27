/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/m2/model/GetDataSetDetailsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MainframeModernization::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetDataSetDetailsResult::GetDataSetDetailsResult() : 
    m_blocksize(0),
    m_fileSize(0),
    m_recordLength(0)
{
}

GetDataSetDetailsResult::GetDataSetDetailsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_blocksize(0),
    m_fileSize(0),
    m_recordLength(0)
{
  *this = result;
}

GetDataSetDetailsResult& GetDataSetDetailsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("blocksize"))
  {
    m_blocksize = jsonValue.GetInteger("blocksize");

  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetDouble("creationTime");

  }

  if(jsonValue.ValueExists("dataSetName"))
  {
    m_dataSetName = jsonValue.GetString("dataSetName");

  }

  if(jsonValue.ValueExists("dataSetOrg"))
  {
    m_dataSetOrg = jsonValue.GetObject("dataSetOrg");

  }

  if(jsonValue.ValueExists("fileSize"))
  {
    m_fileSize = jsonValue.GetInt64("fileSize");

  }

  if(jsonValue.ValueExists("lastReferencedTime"))
  {
    m_lastReferencedTime = jsonValue.GetDouble("lastReferencedTime");

  }

  if(jsonValue.ValueExists("lastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetDouble("lastUpdatedTime");

  }

  if(jsonValue.ValueExists("location"))
  {
    m_location = jsonValue.GetString("location");

  }

  if(jsonValue.ValueExists("recordLength"))
  {
    m_recordLength = jsonValue.GetInteger("recordLength");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
