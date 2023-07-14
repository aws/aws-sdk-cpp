/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudhsm/model/CreateHapgResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CloudHSM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateHapgResult::CreateHapgResult()
{
}

CreateHapgResult::CreateHapgResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateHapgResult& CreateHapgResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("HapgArn"))
  {
    m_hapgArn = jsonValue.GetString("HapgArn");

  }



  return *this;
}
