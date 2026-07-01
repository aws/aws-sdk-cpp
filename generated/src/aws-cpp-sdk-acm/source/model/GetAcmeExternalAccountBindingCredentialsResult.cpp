/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/acm/model/GetAcmeExternalAccountBindingCredentialsResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ACM::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetAcmeExternalAccountBindingCredentialsResult::GetAcmeExternalAccountBindingCredentialsResult(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

GetAcmeExternalAccountBindingCredentialsResult& GetAcmeExternalAccountBindingCredentialsResult::operator=(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("KeyId")) {
    m_keyId = jsonValue.GetString("KeyId");
    m_keyIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MacKey")) {
    m_macKey = jsonValue.GetString("MacKey");
    m_macKeyHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
