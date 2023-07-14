/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kms/model/GetParametersForImportResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::KMS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetParametersForImportResult::GetParametersForImportResult()
{
}

GetParametersForImportResult::GetParametersForImportResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetParametersForImportResult& GetParametersForImportResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("KeyId"))
  {
    m_keyId = jsonValue.GetString("KeyId");

  }

  if(jsonValue.ValueExists("ImportToken"))
  {
    m_importToken = HashingUtils::Base64Decode(jsonValue.GetString("ImportToken"));
  }

  if(jsonValue.ValueExists("PublicKey"))
  {
    m_publicKey = HashingUtils::Base64Decode(jsonValue.GetString("PublicKey"));
  }

  if(jsonValue.ValueExists("ParametersValidTo"))
  {
    m_parametersValidTo = jsonValue.GetDouble("ParametersValidTo");

  }



  return *this;
}
