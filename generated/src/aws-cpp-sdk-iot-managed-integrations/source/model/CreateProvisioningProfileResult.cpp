/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/CreateProvisioningProfileResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTManagedIntegrations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateProvisioningProfileResult::CreateProvisioningProfileResult() : 
    m_provisioningType(ProvisioningType::NOT_SET)
{
}

CreateProvisioningProfileResult::CreateProvisioningProfileResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : CreateProvisioningProfileResult()
{
  *this = result;
}

CreateProvisioningProfileResult& CreateProvisioningProfileResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

  }

  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

  }

  if(jsonValue.ValueExists("ProvisioningType"))
  {
    m_provisioningType = ProvisioningTypeMapper::GetProvisioningTypeForName(jsonValue.GetString("ProvisioningType"));

  }

  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");

  }

  if(jsonValue.ValueExists("ClaimCertificate"))
  {
    m_claimCertificate = jsonValue.GetString("ClaimCertificate");

  }

  if(jsonValue.ValueExists("ClaimCertificatePrivateKey"))
  {
    m_claimCertificatePrivateKey = jsonValue.GetString("ClaimCertificatePrivateKey");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
