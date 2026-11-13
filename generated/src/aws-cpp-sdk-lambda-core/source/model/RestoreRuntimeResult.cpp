/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/lambda-core/model/RestoreRuntimeResult.h>

#include <utility>

using namespace Aws::LambdaCore::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

RestoreRuntimeResult::RestoreRuntimeResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

RestoreRuntimeResult& RestoreRuntimeResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("RuntimeName")) {
    m_runtimeName = jsonValue.GetString("RuntimeName");
    m_runtimeNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RuntimeVersion")) {
    m_runtimeVersion = jsonValue.GetString("RuntimeVersion");
    m_runtimeVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("RuntimeAlias")) {
    m_runtimeAlias = jsonValue.GetString("RuntimeAlias");
    m_runtimeAliasHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Arn")) {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("State")) {
    m_state = RuntimeStateMapper::GetRuntimeStateForName(jsonValue.GetString("State"));
    m_stateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastModified")) {
    m_lastModified = jsonValue.GetString("LastModified");
    m_lastModifiedHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
