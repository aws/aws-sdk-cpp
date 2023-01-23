/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/CreateProvisioningClaimResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateProvisioningClaimResult::CreateProvisioningClaimResult()
{
}

CreateProvisioningClaimResult::CreateProvisioningClaimResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateProvisioningClaimResult& CreateProvisioningClaimResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("certificateId"))
  {
    m_certificateId = jsonValue.GetString("certificateId");

  }

  if(jsonValue.ValueExists("certificatePem"))
  {
    m_certificatePem = jsonValue.GetString("certificatePem");

  }

  if(jsonValue.ValueExists("keyPair"))
  {
    m_keyPair = jsonValue.GetObject("keyPair");

  }

  if(jsonValue.ValueExists("expiration"))
  {
    m_expiration = jsonValue.GetDouble("expiration");

  }



  return *this;
}
