/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ebs/model/ListChangedBlocksResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::EBS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListChangedBlocksResult::ListChangedBlocksResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListChangedBlocksResult& ListChangedBlocksResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ChangedBlocks"))
  {
    Aws::Utils::Array<JsonView> changedBlocksJsonList = jsonValue.GetArray("ChangedBlocks");
    for(unsigned changedBlocksIndex = 0; changedBlocksIndex < changedBlocksJsonList.GetLength(); ++changedBlocksIndex)
    {
      m_changedBlocks.push_back(changedBlocksJsonList[changedBlocksIndex].AsObject());
    }
    m_changedBlocksHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ExpiryTime"))
  {
    m_expiryTime = jsonValue.GetDouble("ExpiryTime");
    m_expiryTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("VolumeSize"))
  {
    m_volumeSize = jsonValue.GetInt64("VolumeSize");
    m_volumeSizeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("BlockSize"))
  {
    m_blockSize = jsonValue.GetInteger("BlockSize");
    m_blockSizeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
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
