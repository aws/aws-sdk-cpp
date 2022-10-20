/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/greengrass/model/ListGroupCertificateAuthoritiesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Greengrass::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListGroupCertificateAuthoritiesResult::ListGroupCertificateAuthoritiesResult()
{
}

ListGroupCertificateAuthoritiesResult::ListGroupCertificateAuthoritiesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListGroupCertificateAuthoritiesResult& ListGroupCertificateAuthoritiesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("GroupCertificateAuthorities"))
  {
    Aws::Utils::Array<JsonView> groupCertificateAuthoritiesJsonList = jsonValue.GetArray("GroupCertificateAuthorities");
    for(unsigned groupCertificateAuthoritiesIndex = 0; groupCertificateAuthoritiesIndex < groupCertificateAuthoritiesJsonList.GetLength(); ++groupCertificateAuthoritiesIndex)
    {
      m_groupCertificateAuthorities.push_back(groupCertificateAuthoritiesJsonList[groupCertificateAuthoritiesIndex].AsObject());
    }
  }



  return *this;
}
