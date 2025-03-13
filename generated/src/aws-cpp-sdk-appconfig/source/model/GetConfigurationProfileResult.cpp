/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/model/GetConfigurationProfileResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AppConfig::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetConfigurationProfileResult::GetConfigurationProfileResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetConfigurationProfileResult& GetConfigurationProfileResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ApplicationId"))
  {
    m_applicationId = jsonValue.GetString("ApplicationId");
    m_applicationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Id"))
  {
    m_id = jsonValue.GetString("Id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LocationUri"))
  {
    m_locationUri = jsonValue.GetString("LocationUri");
    m_locationUriHasBeenSet = true;
  }
  if(jsonValue.ValueExists("RetrievalRoleArn"))
  {
    m_retrievalRoleArn = jsonValue.GetString("RetrievalRoleArn");
    m_retrievalRoleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Validators"))
  {
    Aws::Utils::Array<JsonView> validatorsJsonList = jsonValue.GetArray("Validators");
    for(unsigned validatorsIndex = 0; validatorsIndex < validatorsJsonList.GetLength(); ++validatorsIndex)
    {
      m_validators.push_back(validatorsJsonList[validatorsIndex].AsObject());
    }
    m_validatorsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Type"))
  {
    m_type = jsonValue.GetString("Type");
    m_typeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KmsKeyArn"))
  {
    m_kmsKeyArn = jsonValue.GetString("KmsKeyArn");
    m_kmsKeyArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("KmsKeyIdentifier"))
  {
    m_kmsKeyIdentifier = jsonValue.GetString("KmsKeyIdentifier");
    m_kmsKeyIdentifierHasBeenSet = true;
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
