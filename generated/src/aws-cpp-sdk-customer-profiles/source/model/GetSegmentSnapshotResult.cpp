/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/customer-profiles/model/GetSegmentSnapshotResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CustomerProfiles::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetSegmentSnapshotResult::GetSegmentSnapshotResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetSegmentSnapshotResult& GetSegmentSnapshotResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("SnapshotId"))
  {
    m_snapshotId = jsonValue.GetString("SnapshotId");
    m_snapshotIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Status"))
  {
    m_status = SegmentSnapshotStatusMapper::GetSegmentSnapshotStatusForName(jsonValue.GetString("Status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");
    m_statusMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DataFormat"))
  {
    m_dataFormat = DataFormatMapper::GetDataFormatForName(jsonValue.GetString("DataFormat"));
    m_dataFormatHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EncryptionKey"))
  {
    m_encryptionKey = jsonValue.GetString("EncryptionKey");
    m_encryptionKeyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");
    m_roleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("DestinationUri"))
  {
    m_destinationUri = jsonValue.GetString("DestinationUri");
    m_destinationUriHasBeenSet = true;
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
