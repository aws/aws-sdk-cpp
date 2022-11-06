/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ebs/model/ListSnapshotBlocksResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::EBS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListSnapshotBlocksResult::ListSnapshotBlocksResult() : 
    m_volumeSize(0),
    m_blockSize(0)
{
}

ListSnapshotBlocksResult::ListSnapshotBlocksResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_volumeSize(0),
    m_blockSize(0)
{
  *this = result;
}

ListSnapshotBlocksResult& ListSnapshotBlocksResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Blocks"))
  {
    Aws::Utils::Array<JsonView> blocksJsonList = jsonValue.GetArray("Blocks");
    for(unsigned blocksIndex = 0; blocksIndex < blocksJsonList.GetLength(); ++blocksIndex)
    {
      m_blocks.push_back(blocksJsonList[blocksIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("ExpiryTime"))
  {
    m_expiryTime = jsonValue.GetDouble("ExpiryTime");

  }

  if(jsonValue.ValueExists("VolumeSize"))
  {
    m_volumeSize = jsonValue.GetInt64("VolumeSize");

  }

  if(jsonValue.ValueExists("BlockSize"))
  {
    m_blockSize = jsonValue.GetInteger("BlockSize");

  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
