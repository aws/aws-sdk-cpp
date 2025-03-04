/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot-managed-integrations/model/GetDefaultEncryptionConfigurationResult.h>
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

GetDefaultEncryptionConfigurationResult::GetDefaultEncryptionConfigurationResult() : 
    m_encryptionType(EncryptionType::NOT_SET)
{
}

GetDefaultEncryptionConfigurationResult::GetDefaultEncryptionConfigurationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : GetDefaultEncryptionConfigurationResult()
{
  *this = result;
}

GetDefaultEncryptionConfigurationResult& GetDefaultEncryptionConfigurationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("configurationStatus"))
  {
    m_configurationStatus = jsonValue.GetObject("configurationStatus");

  }

  if(jsonValue.ValueExists("encryptionType"))
  {
    m_encryptionType = EncryptionTypeMapper::GetEncryptionTypeForName(jsonValue.GetString("encryptionType"));

  }

  if(jsonValue.ValueExists("kmsKeyArn"))
  {
    m_kmsKeyArn = jsonValue.GetString("kmsKeyArn");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
