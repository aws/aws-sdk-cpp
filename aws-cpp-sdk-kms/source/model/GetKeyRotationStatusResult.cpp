/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/GetKeyRotationStatusResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::KMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetKeyRotationStatusResult::GetKeyRotationStatusResult() : 
    m_keyRotationEnabled(false)
{
}

GetKeyRotationStatusResult::GetKeyRotationStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_keyRotationEnabled(false)
{
  *this = result;
}

GetKeyRotationStatusResult& GetKeyRotationStatusResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("KeyRotationEnabled"))
  {
    m_keyRotationEnabled = jsonValue.GetBool("KeyRotationEnabled");

  }



  return *this;
}
