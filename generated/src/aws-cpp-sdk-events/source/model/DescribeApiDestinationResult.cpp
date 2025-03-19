/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/events/model/DescribeApiDestinationResult.h>
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

DescribeApiDestinationResult::DescribeApiDestinationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeApiDestinationResult& DescribeApiDestinationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ApiDestinationArn"))
  {
    m_apiDestinationArn = jsonValue.GetString("ApiDestinationArn");
    m_apiDestinationArnHasBeenSet = true;
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
  if(jsonValue.ValueExists("ApiDestinationState"))
  {
    m_apiDestinationState = ApiDestinationStateMapper::GetApiDestinationStateForName(jsonValue.GetString("ApiDestinationState"));
    m_apiDestinationStateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ConnectionArn"))
  {
    m_connectionArn = jsonValue.GetString("ConnectionArn");
    m_connectionArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InvocationEndpoint"))
  {
    m_invocationEndpoint = jsonValue.GetString("InvocationEndpoint");
    m_invocationEndpointHasBeenSet = true;
  }
  if(jsonValue.ValueExists("HttpMethod"))
  {
    m_httpMethod = ApiDestinationHttpMethodMapper::GetApiDestinationHttpMethodForName(jsonValue.GetString("HttpMethod"));
    m_httpMethodHasBeenSet = true;
  }
  if(jsonValue.ValueExists("InvocationRateLimitPerSecond"))
  {
    m_invocationRateLimitPerSecond = jsonValue.GetInteger("InvocationRateLimitPerSecond");
    m_invocationRateLimitPerSecondHasBeenSet = true;
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

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
