/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/account/model/GetGovCloudAccountInformationResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Account::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetGovCloudAccountInformationResult::GetGovCloudAccountInformationResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

GetGovCloudAccountInformationResult& GetGovCloudAccountInformationResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("AccountState")) {
    m_accountState = AwsAccountStateMapper::GetAwsAccountStateForName(jsonValue.GetString("AccountState"));
    m_accountStateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("GovCloudAccountId")) {
    m_govCloudAccountId = jsonValue.GetString("GovCloudAccountId");
    m_govCloudAccountIdHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
