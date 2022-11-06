/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/secretsmanager/model/ValidateResourcePolicyResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SecretsManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ValidateResourcePolicyResult::ValidateResourcePolicyResult() : 
    m_policyValidationPassed(false)
{
}

ValidateResourcePolicyResult::ValidateResourcePolicyResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_policyValidationPassed(false)
{
  *this = result;
}

ValidateResourcePolicyResult& ValidateResourcePolicyResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("PolicyValidationPassed"))
  {
    m_policyValidationPassed = jsonValue.GetBool("PolicyValidationPassed");

  }

  if(jsonValue.ValueExists("ValidationErrors"))
  {
    Aws::Utils::Array<JsonView> validationErrorsJsonList = jsonValue.GetArray("ValidationErrors");
    for(unsigned validationErrorsIndex = 0; validationErrorsIndex < validationErrorsJsonList.GetLength(); ++validationErrorsIndex)
    {
      m_validationErrors.push_back(validationErrorsJsonList[validationErrorsIndex].AsObject());
    }
  }



  return *this;
}
