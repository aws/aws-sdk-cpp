/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/alexaforbusiness/model/GetConferencePreferenceResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::AlexaForBusiness::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetConferencePreferenceResult::GetConferencePreferenceResult()
{
}

GetConferencePreferenceResult::GetConferencePreferenceResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetConferencePreferenceResult& GetConferencePreferenceResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Preference"))
  {
    m_preference = jsonValue.GetObject("Preference");

  }



  return *this;
}
