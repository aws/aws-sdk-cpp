/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/application-signals/model/BatchDeleteInstrumentationConfigurationsResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ApplicationSignals::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

BatchDeleteInstrumentationConfigurationsResult::BatchDeleteInstrumentationConfigurationsResult(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

BatchDeleteInstrumentationConfigurationsResult& BatchDeleteInstrumentationConfigurationsResult::operator=(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("DeletedCount")) {
    m_deletedCount = jsonValue.GetInteger("DeletedCount");
    m_deletedCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SuccessfulDeletions")) {
    Aws::Utils::Array<JsonView> successfulDeletionsJsonList = jsonValue.GetArray("SuccessfulDeletions");
    for (unsigned successfulDeletionsIndex = 0; successfulDeletionsIndex < successfulDeletionsJsonList.GetLength();
         ++successfulDeletionsIndex) {
      m_successfulDeletions.push_back(successfulDeletionsJsonList[successfulDeletionsIndex].AsObject());
    }
    m_successfulDeletionsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Errors")) {
    Aws::Utils::Array<JsonView> errorsJsonList = jsonValue.GetArray("Errors");
    for (unsigned errorsIndex = 0; errorsIndex < errorsJsonList.GetLength(); ++errorsIndex) {
      m_errors.push_back(errorsJsonList[errorsIndex].AsObject());
    }
    m_errorsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
