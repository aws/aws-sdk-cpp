/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/events/model/CreateArchiveResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CloudWatchEvents::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateArchiveResult::CreateArchiveResult() : 
    m_state(ArchiveState::NOT_SET)
{
}

CreateArchiveResult::CreateArchiveResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_state(ArchiveState::NOT_SET)
{
  *this = result;
}

CreateArchiveResult& CreateArchiveResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ArchiveArn"))
  {
    m_archiveArn = jsonValue.GetString("ArchiveArn");

  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = ArchiveStateMapper::GetArchiveStateForName(jsonValue.GetString("State"));

  }

  if(jsonValue.ValueExists("StateReason"))
  {
    m_stateReason = jsonValue.GetString("StateReason");

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }



  return *this;
}
