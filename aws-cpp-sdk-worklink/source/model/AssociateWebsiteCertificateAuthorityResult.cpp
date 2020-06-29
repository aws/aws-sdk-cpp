/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/worklink/model/AssociateWebsiteCertificateAuthorityResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WorkLink::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

AssociateWebsiteCertificateAuthorityResult::AssociateWebsiteCertificateAuthorityResult()
{
}

AssociateWebsiteCertificateAuthorityResult::AssociateWebsiteCertificateAuthorityResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

AssociateWebsiteCertificateAuthorityResult& AssociateWebsiteCertificateAuthorityResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("WebsiteCaId"))
  {
    m_websiteCaId = jsonValue.GetString("WebsiteCaId");

  }



  return *this;
}
