﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/workmail/model/DescribeResourceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WorkMail::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeResourceResult::DescribeResourceResult() : 
    m_type(ResourceType::NOT_SET),
    m_state(EntityState::NOT_SET)
{
}

DescribeResourceResult::DescribeResourceResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_type(ResourceType::NOT_SET),
    m_state(EntityState::NOT_SET)
{
  *this = result;
}

DescribeResourceResult& DescribeResourceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ResourceId"))
  {
    m_resourceId = jsonValue.GetString("ResourceId");

  }

  if(jsonValue.ValueExists("Email"))
  {
    m_email = jsonValue.GetString("Email");

  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = ResourceTypeMapper::GetResourceTypeForName(jsonValue.GetString("Type"));

  }

  if(jsonValue.ValueExists("BookingOptions"))
  {
    m_bookingOptions = jsonValue.GetObject("BookingOptions");

  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = EntityStateMapper::GetEntityStateForName(jsonValue.GetString("State"));

  }

  if(jsonValue.ValueExists("EnabledDate"))
  {
    m_enabledDate = jsonValue.GetDouble("EnabledDate");

  }

  if(jsonValue.ValueExists("DisabledDate"))
  {
    m_disabledDate = jsonValue.GetDouble("DisabledDate");

  }



  return *this;
}
