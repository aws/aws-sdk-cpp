/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/b2bi/model/CreateProfileResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::B2BI::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateProfileResult::CreateProfileResult() : 
    m_logging(Logging::NOT_SET)
{
}

CreateProfileResult::CreateProfileResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_logging(Logging::NOT_SET)
{
  *this = result;
}

CreateProfileResult& CreateProfileResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("profileId"))
  {
    m_profileId = jsonValue.GetString("profileId");

  }

  if(jsonValue.ValueExists("profileArn"))
  {
    m_profileArn = jsonValue.GetString("profileArn");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("businessName"))
  {
    m_businessName = jsonValue.GetString("businessName");

  }

  if(jsonValue.ValueExists("phone"))
  {
    m_phone = jsonValue.GetString("phone");

  }

  if(jsonValue.ValueExists("email"))
  {
    m_email = jsonValue.GetString("email");

  }

  if(jsonValue.ValueExists("logging"))
  {
    m_logging = LoggingMapper::GetLoggingForName(jsonValue.GetString("logging"));

  }

  if(jsonValue.ValueExists("logGroupName"))
  {
    m_logGroupName = jsonValue.GetString("logGroupName");

  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
