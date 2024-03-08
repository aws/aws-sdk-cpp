/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lakeformation/model/GetTemporaryGlueTableCredentialsResult.h>
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

GetTemporaryGlueTableCredentialsResult::GetTemporaryGlueTableCredentialsResult()
{
}

GetTemporaryGlueTableCredentialsResult::GetTemporaryGlueTableCredentialsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetTemporaryGlueTableCredentialsResult& GetTemporaryGlueTableCredentialsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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

  if(jsonValue.ValueExists("VendedS3Path"))
  {
    Aws::Utils::Array<JsonView> vendedS3PathJsonList = jsonValue.GetArray("VendedS3Path");
    for(unsigned vendedS3PathIndex = 0; vendedS3PathIndex < vendedS3PathJsonList.GetLength(); ++vendedS3PathIndex)
    {
      m_vendedS3Path.push_back(vendedS3PathJsonList[vendedS3PathIndex].AsString());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
