/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eventbridge/model/DescribeConnectionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::EventBridge::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeConnectionResult::DescribeConnectionResult() : 
    m_connectionState(ConnectionState::NOT_SET),
    m_authorizationType(ConnectionAuthorizationType::NOT_SET)
{
}

DescribeConnectionResult::DescribeConnectionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_connectionState(ConnectionState::NOT_SET),
    m_authorizationType(ConnectionAuthorizationType::NOT_SET)
{
  *this = result;
}

DescribeConnectionResult& DescribeConnectionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ConnectionArn"))
  {
    m_connectionArn = jsonValue.GetString("ConnectionArn");

  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

  }

  if(jsonValue.ValueExists("ConnectionState"))
  {
    m_connectionState = ConnectionStateMapper::GetConnectionStateForName(jsonValue.GetString("ConnectionState"));

  }

  if(jsonValue.ValueExists("StateReason"))
  {
    m_stateReason = jsonValue.GetString("StateReason");

  }

  if(jsonValue.ValueExists("AuthorizationType"))
  {
    m_authorizationType = ConnectionAuthorizationTypeMapper::GetConnectionAuthorizationTypeForName(jsonValue.GetString("AuthorizationType"));

  }

  if(jsonValue.ValueExists("SecretArn"))
  {
    m_secretArn = jsonValue.GetString("SecretArn");

  }

  if(jsonValue.ValueExists("AuthParameters"))
  {
    m_authParameters = jsonValue.GetObject("AuthParameters");

  }

  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");

  }

  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");

  }

  if(jsonValue.ValueExists("LastAuthorizedTime"))
  {
    m_lastAuthorizedTime = jsonValue.GetDouble("LastAuthorizedTime");

  }



  return *this;
}
