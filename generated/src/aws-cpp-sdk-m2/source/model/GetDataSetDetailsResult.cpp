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

GetDataSetDetailsResult::GetDataSetDetailsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetDataSetDetailsResult& GetDataSetDetailsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("blocksize"))
  {
    m_blocksize = jsonValue.GetInteger("blocksize");
    m_blocksizeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetDouble("creationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dataSetName"))
  {
    m_dataSetName = jsonValue.GetString("dataSetName");
    m_dataSetNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dataSetOrg"))
  {
    m_dataSetOrg = jsonValue.GetObject("dataSetOrg");
    m_dataSetOrgHasBeenSet = true;
  }
  if(jsonValue.ValueExists("fileSize"))
  {
    m_fileSize = jsonValue.GetInt64("fileSize");
    m_fileSizeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastReferencedTime"))
  {
    m_lastReferencedTime = jsonValue.GetDouble("lastReferencedTime");
    m_lastReferencedTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetDouble("lastUpdatedTime");
    m_lastUpdatedTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("location"))
  {
    m_location = jsonValue.GetString("location");
    m_locationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("recordLength"))
  {
    m_recordLength = jsonValue.GetInteger("recordLength");
    m_recordLengthHasBeenSet = true;
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
