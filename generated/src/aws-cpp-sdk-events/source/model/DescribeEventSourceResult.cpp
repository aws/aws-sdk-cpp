/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/events/model/DescribeEventSourceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CloudWatchEvents::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeEventSourceResult::DescribeEventSourceResult() : 
    m_state(EventSourceState::NOT_SET)
{
}

DescribeEventSourceResult::DescribeEventSourceResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_state(EventSourceState::NOT_SET)
{
  *this = result;
}

DescribeEventSourceResult& DescribeEventSourceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

  }

  if(jsonValue.ValueExists("CreatedBy"))
  {
    m_createdBy = jsonValue.GetString("CreatedBy");

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("ExpirationTime"))
  {
    m_expirationTime = jsonValue.GetDouble("ExpirationTime");

  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = EventSourceStateMapper::GetEventSourceStateForName(jsonValue.GetString("State"));

  }



  return *this;
}
