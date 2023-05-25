/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/model/GetGroupCertificateAuthorityResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Greengrass::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetGroupCertificateAuthorityResult::GetGroupCertificateAuthorityResult()
{
}

GetGroupCertificateAuthorityResult::GetGroupCertificateAuthorityResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetGroupCertificateAuthorityResult& GetGroupCertificateAuthorityResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("GroupCertificateAuthorityArn"))
  {
    m_groupCertificateAuthorityArn = jsonValue.GetString("GroupCertificateAuthorityArn");

  }

  if(jsonValue.ValueExists("GroupCertificateAuthorityId"))
  {
    m_groupCertificateAuthorityId = jsonValue.GetString("GroupCertificateAuthorityId");

  }

  if(jsonValue.ValueExists("PemEncodedCertificate"))
  {
    m_pemEncodedCertificate = jsonValue.GetString("PemEncodedCertificate");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
