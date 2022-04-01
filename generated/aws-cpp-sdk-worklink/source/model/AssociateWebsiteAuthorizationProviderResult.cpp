/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/worklink/model/AssociateWebsiteAuthorizationProviderResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WorkLink::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

AssociateWebsiteAuthorizationProviderResult::AssociateWebsiteAuthorizationProviderResult()
{
}

AssociateWebsiteAuthorizationProviderResult::AssociateWebsiteAuthorizationProviderResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

AssociateWebsiteAuthorizationProviderResult& AssociateWebsiteAuthorizationProviderResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AuthorizationProviderId"))
  {
    m_authorizationProviderId = jsonValue.GetString("AuthorizationProviderId");

  }



  return *this;
}
