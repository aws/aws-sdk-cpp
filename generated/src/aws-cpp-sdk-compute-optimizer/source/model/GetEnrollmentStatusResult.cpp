﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/compute-optimizer/model/GetEnrollmentStatusResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ComputeOptimizer::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetEnrollmentStatusResult::GetEnrollmentStatusResult() : 
    m_status(Status::NOT_SET),
    m_memberAccountsEnrolled(false),
    m_numberOfMemberAccountsOptedIn(0)
{
}

GetEnrollmentStatusResult::GetEnrollmentStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(Status::NOT_SET),
    m_memberAccountsEnrolled(false),
    m_numberOfMemberAccountsOptedIn(0)
{
  *this = result;
}

GetEnrollmentStatusResult& GetEnrollmentStatusResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("status"))
  {
    m_status = StatusMapper::GetStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("statusReason"))
  {
    m_statusReason = jsonValue.GetString("statusReason");

  }

  if(jsonValue.ValueExists("memberAccountsEnrolled"))
  {
    m_memberAccountsEnrolled = jsonValue.GetBool("memberAccountsEnrolled");

  }

  if(jsonValue.ValueExists("lastUpdatedTimestamp"))
  {
    m_lastUpdatedTimestamp = jsonValue.GetDouble("lastUpdatedTimestamp");

  }

  if(jsonValue.ValueExists("numberOfMemberAccountsOptedIn"))
  {
    m_numberOfMemberAccountsOptedIn = jsonValue.GetInteger("numberOfMemberAccountsOptedIn");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
