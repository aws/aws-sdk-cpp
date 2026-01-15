/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/lakeformation/model/GetTemporaryDataLocationCredentialsResult.h>

#include <utility>

using namespace Aws::LakeFormation::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetTemporaryDataLocationCredentialsResult::GetTemporaryDataLocationCredentialsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

GetTemporaryDataLocationCredentialsResult& GetTemporaryDataLocationCredentialsResult::operator=(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("Credentials")) {
    m_credentials = jsonValue.GetObject("Credentials");
    m_credentialsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AccessibleDataLocations")) {
    Aws::Utils::Array<JsonView> accessibleDataLocationsJsonList = jsonValue.GetArray("AccessibleDataLocations");
    for (unsigned accessibleDataLocationsIndex = 0; accessibleDataLocationsIndex < accessibleDataLocationsJsonList.GetLength();
         ++accessibleDataLocationsIndex) {
      m_accessibleDataLocations.push_back(accessibleDataLocationsJsonList[accessibleDataLocationsIndex].AsString());
    }
    m_accessibleDataLocationsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CredentialsScope")) {
    m_credentialsScope = CredentialsScopeMapper::GetCredentialsScopeForName(jsonValue.GetString("CredentialsScope"));
    m_credentialsScopeHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
