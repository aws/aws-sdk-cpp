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

CreateProfileResult::CreateProfileResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateProfileResult& CreateProfileResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("profileId"))
  {
    m_profileId = jsonValue.GetString("profileId");
    m_profileIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("profileArn"))
  {
    m_profileArn = jsonValue.GetString("profileArn");
    m_profileArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("businessName"))
  {
    m_businessName = jsonValue.GetString("businessName");
    m_businessNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("phone"))
  {
    m_phone = jsonValue.GetString("phone");
    m_phoneHasBeenSet = true;
  }
  if(jsonValue.ValueExists("email"))
  {
    m_email = jsonValue.GetString("email");
    m_emailHasBeenSet = true;
  }
  if(jsonValue.ValueExists("logging"))
  {
    m_logging = LoggingMapper::GetLoggingForName(jsonValue.GetString("logging"));
    m_loggingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("logGroupName"))
  {
    m_logGroupName = jsonValue.GetString("logGroupName");
    m_logGroupNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
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
