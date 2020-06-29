/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/worklink/model/ListWebsiteCertificateAuthoritiesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WorkLink::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListWebsiteCertificateAuthoritiesResult::ListWebsiteCertificateAuthoritiesResult()
{
}

ListWebsiteCertificateAuthoritiesResult::ListWebsiteCertificateAuthoritiesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListWebsiteCertificateAuthoritiesResult& ListWebsiteCertificateAuthoritiesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("WebsiteCertificateAuthorities"))
  {
    Array<JsonView> websiteCertificateAuthoritiesJsonList = jsonValue.GetArray("WebsiteCertificateAuthorities");
    for(unsigned websiteCertificateAuthoritiesIndex = 0; websiteCertificateAuthoritiesIndex < websiteCertificateAuthoritiesJsonList.GetLength(); ++websiteCertificateAuthoritiesIndex)
    {
      m_websiteCertificateAuthorities.push_back(websiteCertificateAuthoritiesJsonList[websiteCertificateAuthoritiesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
