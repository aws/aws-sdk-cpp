/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/ValidateSecurityProfileBehaviorsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ValidateSecurityProfileBehaviorsResult::ValidateSecurityProfileBehaviorsResult() : 
    m_valid(false)
{
}

ValidateSecurityProfileBehaviorsResult::ValidateSecurityProfileBehaviorsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_valid(false)
{
  *this = result;
}

ValidateSecurityProfileBehaviorsResult& ValidateSecurityProfileBehaviorsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("valid"))
  {
    m_valid = jsonValue.GetBool("valid");

  }

  if(jsonValue.ValueExists("validationErrors"))
  {
    Aws::Utils::Array<JsonView> validationErrorsJsonList = jsonValue.GetArray("validationErrors");
    for(unsigned validationErrorsIndex = 0; validationErrorsIndex < validationErrorsJsonList.GetLength(); ++validationErrorsIndex)
    {
      m_validationErrors.push_back(validationErrorsJsonList[validationErrorsIndex].AsObject());
    }
  }



  return *this;
}
