/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/events/model/DescribeArchiveResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudWatchEvents::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeArchiveResult::DescribeArchiveResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeArchiveResult& DescribeArchiveResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ArchiveArn"))
  {
    m_archiveArn = jsonValue.GetString("ArchiveArn");
    m_archiveArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ArchiveName"))
  {
    m_archiveName = jsonValue.GetString("ArchiveName");
    m_archiveNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EventSourceArn"))
  {
    m_eventSourceArn = jsonValue.GetString("EventSourceArn");
    m_eventSourceArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EventPattern"))
  {
    m_eventPattern = jsonValue.GetString("EventPattern");
    m_eventPatternHasBeenSet = true;
  }
  if(jsonValue.ValueExists("State"))
  {
    m_state = ArchiveStateMapper::GetArchiveStateForName(jsonValue.GetString("State"));
    m_stateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StateReason"))
  {
    m_stateReason = jsonValue.GetString("StateReason");
    m_stateReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RetentionDays"))
  {
    m_retentionDays = jsonValue.GetInteger("RetentionDays");
    m_retentionDaysHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SizeBytes"))
  {
    m_sizeBytes = jsonValue.GetInt64("SizeBytes");
    m_sizeBytesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("EventCount"))
  {
    m_eventCount = jsonValue.GetInt64("EventCount");
    m_eventCountHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
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
