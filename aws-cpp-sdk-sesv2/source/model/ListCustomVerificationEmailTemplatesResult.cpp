/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sesv2/model/ListCustomVerificationEmailTemplatesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SESV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListCustomVerificationEmailTemplatesResult::ListCustomVerificationEmailTemplatesResult()
{
}

ListCustomVerificationEmailTemplatesResult::ListCustomVerificationEmailTemplatesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListCustomVerificationEmailTemplatesResult& ListCustomVerificationEmailTemplatesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("CustomVerificationEmailTemplates"))
  {
    Aws::Utils::Array<JsonView> customVerificationEmailTemplatesJsonList = jsonValue.GetArray("CustomVerificationEmailTemplates");
    for(unsigned customVerificationEmailTemplatesIndex = 0; customVerificationEmailTemplatesIndex < customVerificationEmailTemplatesJsonList.GetLength(); ++customVerificationEmailTemplatesIndex)
    {
      m_customVerificationEmailTemplates.push_back(customVerificationEmailTemplatesJsonList[customVerificationEmailTemplatesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
