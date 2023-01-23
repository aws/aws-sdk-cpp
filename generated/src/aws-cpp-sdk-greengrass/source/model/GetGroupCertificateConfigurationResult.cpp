/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/model/GetGroupCertificateConfigurationResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Greengrass::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetGroupCertificateConfigurationResult::GetGroupCertificateConfigurationResult()
{
}

GetGroupCertificateConfigurationResult::GetGroupCertificateConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetGroupCertificateConfigurationResult& GetGroupCertificateConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CertificateAuthorityExpiryInMilliseconds"))
  {
    m_certificateAuthorityExpiryInMilliseconds = jsonValue.GetString("CertificateAuthorityExpiryInMilliseconds");

  }

  if(jsonValue.ValueExists("CertificateExpiryInMilliseconds"))
  {
    m_certificateExpiryInMilliseconds = jsonValue.GetString("CertificateExpiryInMilliseconds");

  }

  if(jsonValue.ValueExists("GroupId"))
  {
    m_groupId = jsonValue.GetString("GroupId");

  }



  return *this;
}
