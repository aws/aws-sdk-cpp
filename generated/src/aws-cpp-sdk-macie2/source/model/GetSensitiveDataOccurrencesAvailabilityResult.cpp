/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/macie2/model/GetSensitiveDataOccurrencesAvailabilityResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Macie2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetSensitiveDataOccurrencesAvailabilityResult::GetSensitiveDataOccurrencesAvailabilityResult() : 
    m_code(AvailabilityCode::NOT_SET)
{
}

GetSensitiveDataOccurrencesAvailabilityResult::GetSensitiveDataOccurrencesAvailabilityResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_code(AvailabilityCode::NOT_SET)
{
  *this = result;
}

GetSensitiveDataOccurrencesAvailabilityResult& GetSensitiveDataOccurrencesAvailabilityResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("code"))
  {
    m_code = AvailabilityCodeMapper::GetAvailabilityCodeForName(jsonValue.GetString("code"));

  }

  if(jsonValue.ValueExists("reasons"))
  {
    Aws::Utils::Array<JsonView> reasonsJsonList = jsonValue.GetArray("reasons");
    for(unsigned reasonsIndex = 0; reasonsIndex < reasonsJsonList.GetLength(); ++reasonsIndex)
    {
      m_reasons.push_back(UnavailabilityReasonCodeMapper::GetUnavailabilityReasonCodeForName(reasonsJsonList[reasonsIndex].AsString()));
    }
  }



  return *this;
}
