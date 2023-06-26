/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/AssumeDecoratedRoleWithSAMLResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::LakeFormation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

AssumeDecoratedRoleWithSAMLResult::AssumeDecoratedRoleWithSAMLResult()
{
}

AssumeDecoratedRoleWithSAMLResult::AssumeDecoratedRoleWithSAMLResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

AssumeDecoratedRoleWithSAMLResult& AssumeDecoratedRoleWithSAMLResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AccessKeyId"))
  {
    m_accessKeyId = jsonValue.GetString("AccessKeyId");

  }

  if(jsonValue.ValueExists("SecretAccessKey"))
  {
    m_secretAccessKey = jsonValue.GetString("SecretAccessKey");

  }

  if(jsonValue.ValueExists("SessionToken"))
  {
    m_sessionToken = jsonValue.GetString("SessionToken");

  }

  if(jsonValue.ValueExists("Expiration"))
  {
    m_expiration = jsonValue.GetDouble("Expiration");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
