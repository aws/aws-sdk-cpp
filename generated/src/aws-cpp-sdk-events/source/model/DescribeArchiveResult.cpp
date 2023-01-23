/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/events/model/DescribeArchiveResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CloudWatchEvents::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeArchiveResult::DescribeArchiveResult() : 
    m_state(ArchiveState::NOT_SET),
    m_retentionDays(0),
    m_sizeBytes(0),
    m_eventCount(0)
{
}

DescribeArchiveResult::DescribeArchiveResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_state(ArchiveState::NOT_SET),
    m_retentionDays(0),
    m_sizeBytes(0),
    m_eventCount(0)
{
  *this = result;
}

DescribeArchiveResult& DescribeArchiveResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ArchiveArn"))
  {
    m_archiveArn = jsonValue.GetString("ArchiveArn");

  }

  if(jsonValue.ValueExists("ArchiveName"))
  {
    m_archiveName = jsonValue.GetString("ArchiveName");

  }

  if(jsonValue.ValueExists("EventSourceArn"))
  {
    m_eventSourceArn = jsonValue.GetString("EventSourceArn");

  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }

  if(jsonValue.ValueExists("EventPattern"))
  {
    m_eventPattern = jsonValue.GetString("EventPattern");

  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = ArchiveStateMapper::GetArchiveStateForName(jsonValue.GetString("State"));

  }

  if(jsonValue.ValueExists("StateReason"))
  {
    m_stateReason = jsonValue.GetString("StateReason");

  }

  if(jsonValue.ValueExists("RetentionDays"))
  {
    m_retentionDays = jsonValue.GetInteger("RetentionDays");

  }

  if(jsonValue.ValueExists("SizeBytes"))
  {
    m_sizeBytes = jsonValue.GetInt64("SizeBytes");

  }

  if(jsonValue.ValueExists("EventCount"))
  {
    m_eventCount = jsonValue.GetInt64("EventCount");

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }



  return *this;
}
