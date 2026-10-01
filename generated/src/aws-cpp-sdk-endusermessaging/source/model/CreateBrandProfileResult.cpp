/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/endusermessaging/model/CreateBrandProfileResult.h>

#include <utility>

using namespace Aws::EndUserMessaging::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateBrandProfileResult::CreateBrandProfileResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

CreateBrandProfileResult& CreateBrandProfileResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("brandProfileId")) {
    m_brandProfileId = jsonValue.GetString("brandProfileId");
    m_brandProfileIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("brandProfileArn")) {
    m_brandProfileArn = jsonValue.GetString("brandProfileArn");
    m_brandProfileArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("brandProfileName")) {
    m_brandProfileName = jsonValue.GetString("brandProfileName");
    m_brandProfileNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = StatusMapper::GetStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("deletionProtectionEnabled")) {
    m_deletionProtectionEnabled = jsonValue.GetBool("deletionProtectionEnabled");
    m_deletionProtectionEnabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("attributesCreated")) {
    m_attributesCreated = jsonValue.GetInteger("attributesCreated");
    m_attributesCreatedHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
