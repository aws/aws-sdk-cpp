﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/eventbridge/model/DescribeConnectionResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::EventBridge::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeConnectionResult::DescribeConnectionResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeConnectionResult& DescribeConnectionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ConnectionArn"))
  {
    m_connectionArn = jsonValue.GetString("ConnectionArn");
    m_connectionArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InvocationConnectivityParameters"))
  {
    m_invocationConnectivityParameters = jsonValue.GetObject("InvocationConnectivityParameters");
    m_invocationConnectivityParametersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ConnectionState"))
  {
    m_connectionState = ConnectionStateMapper::GetConnectionStateForName(jsonValue.GetString("ConnectionState"));
    m_connectionStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StateReason"))
  {
    m_stateReason = jsonValue.GetString("StateReason");
    m_stateReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AuthorizationType"))
  {
    m_authorizationType = ConnectionAuthorizationTypeMapper::GetConnectionAuthorizationTypeForName(jsonValue.GetString("AuthorizationType"));
    m_authorizationTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SecretArn"))
  {
    m_secretArn = jsonValue.GetString("SecretArn");
    m_secretArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("AuthParameters"))
  {
    m_authParameters = jsonValue.GetObject("AuthParameters");
    m_authParametersHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreationTime"))
  {
    m_creationTime = jsonValue.GetDouble("CreationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");
    m_lastModifiedTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LastAuthorizedTime"))
  {
    m_lastAuthorizedTime = jsonValue.GetDouble("LastAuthorizedTime");
    m_lastAuthorizedTimeHasBeenSet = true;
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
