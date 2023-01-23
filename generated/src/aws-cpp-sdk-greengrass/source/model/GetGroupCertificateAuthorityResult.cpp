/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/model/GetGroupCertificateAuthorityResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

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



  return *this;
}
