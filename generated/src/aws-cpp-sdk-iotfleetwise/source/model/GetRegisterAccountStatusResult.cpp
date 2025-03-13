/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/GetRegisterAccountStatusResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTFleetWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetRegisterAccountStatusResult::GetRegisterAccountStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetRegisterAccountStatusResult& GetRegisterAccountStatusResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("customerAccountId"))
  {
    m_customerAccountId = jsonValue.GetString("customerAccountId");
    m_customerAccountIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("accountStatus"))
  {
    m_accountStatus = RegistrationStatusMapper::GetRegistrationStatusForName(jsonValue.GetString("accountStatus"));
    m_accountStatusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("timestreamRegistrationResponse"))
  {
    m_timestreamRegistrationResponse = jsonValue.GetObject("timestreamRegistrationResponse");
    m_timestreamRegistrationResponseHasBeenSet = true;
  }
  if(jsonValue.ValueExists("iamRegistrationResponse"))
  {
    m_iamRegistrationResponse = jsonValue.GetObject("iamRegistrationResponse");
    m_iamRegistrationResponseHasBeenSet = true;
  }
  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetDouble("creationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastModificationTime"))
  {
    m_lastModificationTime = jsonValue.GetDouble("lastModificationTime");
    m_lastModificationTimeHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
