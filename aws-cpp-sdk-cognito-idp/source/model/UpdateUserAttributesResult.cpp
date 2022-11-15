/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cognito-idp/model/UpdateUserAttributesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CognitoIdentityProvider::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateUserAttributesResult::UpdateUserAttributesResult()
{
}

UpdateUserAttributesResult::UpdateUserAttributesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpdateUserAttributesResult& UpdateUserAttributesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CodeDeliveryDetailsList"))
  {
    Aws::Utils::Array<JsonView> codeDeliveryDetailsListJsonList = jsonValue.GetArray("CodeDeliveryDetailsList");
    for(unsigned codeDeliveryDetailsListIndex = 0; codeDeliveryDetailsListIndex < codeDeliveryDetailsListJsonList.GetLength(); ++codeDeliveryDetailsListIndex)
    {
      m_codeDeliveryDetailsList.push_back(codeDeliveryDetailsListJsonList[codeDeliveryDetailsListIndex].AsObject());
    }
  }



  return *this;
}
