/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm-pca/model/ListCertificateAuthoritiesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::ACMPCA::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListCertificateAuthoritiesResult::ListCertificateAuthoritiesResult()
{
}

ListCertificateAuthoritiesResult::ListCertificateAuthoritiesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListCertificateAuthoritiesResult& ListCertificateAuthoritiesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CertificateAuthorities"))
  {
    Aws::Utils::Array<JsonView> certificateAuthoritiesJsonList = jsonValue.GetArray("CertificateAuthorities");
    for(unsigned certificateAuthoritiesIndex = 0; certificateAuthoritiesIndex < certificateAuthoritiesJsonList.GetLength(); ++certificateAuthoritiesIndex)
    {
      m_certificateAuthorities.push_back(certificateAuthoritiesJsonList[certificateAuthoritiesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
