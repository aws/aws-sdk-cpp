/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/sesv2/model/PutEmailIdentityDkimSigningAttributesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PutEmailIdentityDkimSigningAttributesResult::PutEmailIdentityDkimSigningAttributesResult() : 
    m_dkimStatus(DkimStatus::NOT_SET)
{
}

PutEmailIdentityDkimSigningAttributesResult::PutEmailIdentityDkimSigningAttributesResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_dkimStatus(DkimStatus::NOT_SET)
{
  *this = result;
}

PutEmailIdentityDkimSigningAttributesResult& PutEmailIdentityDkimSigningAttributesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DkimStatus"))
  {
    m_dkimStatus = DkimStatusMapper::GetDkimStatusForName(jsonValue.GetString("DkimStatus"));

  }

  if(jsonValue.ValueExists("DkimTokens"))
  {
    Array<JsonView> dkimTokensJsonList = jsonValue.GetArray("DkimTokens");
    for(unsigned dkimTokensIndex = 0; dkimTokensIndex < dkimTokensJsonList.GetLength(); ++dkimTokensIndex)
    {
      m_dkimTokens.push_back(dkimTokensJsonList[dkimTokensIndex].AsString());
    }
  }



  return *this;
}
