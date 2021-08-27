/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/frauddetector/model/GetKMSEncryptionKeyResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::FraudDetector::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetKMSEncryptionKeyResult::GetKMSEncryptionKeyResult()
{
}

GetKMSEncryptionKeyResult::GetKMSEncryptionKeyResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetKMSEncryptionKeyResult& GetKMSEncryptionKeyResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("kmsKey"))
  {
    m_kmsKey = jsonValue.GetObject("kmsKey");

  }



  return *this;
}
