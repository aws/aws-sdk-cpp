/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotfleetwise/model/GetRegisterAccountStatusResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoTFleetWise::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetRegisterAccountStatusResult::GetRegisterAccountStatusResult() : 
    m_accountStatus(RegistrationStatus::NOT_SET)
{
}

GetRegisterAccountStatusResult::GetRegisterAccountStatusResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_accountStatus(RegistrationStatus::NOT_SET)
{
  *this = result;
}

GetRegisterAccountStatusResult& GetRegisterAccountStatusResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("customerAccountId"))
  {
    m_customerAccountId = jsonValue.GetString("customerAccountId");

  }

  if(jsonValue.ValueExists("accountStatus"))
  {
    m_accountStatus = RegistrationStatusMapper::GetRegistrationStatusForName(jsonValue.GetString("accountStatus"));

  }

  if(jsonValue.ValueExists("timestreamRegistrationResponse"))
  {
    m_timestreamRegistrationResponse = jsonValue.GetObject("timestreamRegistrationResponse");

  }

  if(jsonValue.ValueExists("iamRegistrationResponse"))
  {
    m_iamRegistrationResponse = jsonValue.GetObject("iamRegistrationResponse");

  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetDouble("creationTime");

  }

  if(jsonValue.ValueExists("lastModificationTime"))
  {
    m_lastModificationTime = jsonValue.GetDouble("lastModificationTime");

  }



  return *this;
}
