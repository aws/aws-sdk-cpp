/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/GetTrustedAccessProgramResult.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Bedrock::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetTrustedAccessProgramResult::GetTrustedAccessProgramResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

GetTrustedAccessProgramResult& GetTrustedAccessProgramResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("programId")) {
    m_programId = jsonValue.GetString("programId");
    m_programIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("providerName")) {
    m_providerName = jsonValue.GetString("providerName");
    m_providerNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("detailsUrl")) {
    m_detailsUrl = jsonValue.GetString("detailsUrl");
    m_detailsUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("enrollmentUrl")) {
    m_enrollmentUrl = jsonValue.GetString("enrollmentUrl");
    m_enrollmentUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = TrustedAccessProgramStatusMapper::GetTrustedAccessProgramStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("statusReason")) {
    m_statusReason = jsonValue.GetString("statusReason");
    m_statusReasonHasBeenSet = true;
  }
  if (jsonValue.ValueExists("source")) {
    m_source = TrustedAccessProgramScopeMapper::GetTrustedAccessProgramScopeForName(jsonValue.GetString("source"));
    m_sourceHasBeenSet = true;
  }
  if (jsonValue.ValueExists("eligibilityScope")) {
    m_eligibilityScope = TrustedAccessProgramScopeMapper::GetTrustedAccessProgramScopeForName(jsonValue.GetString("eligibilityScope"));
    m_eligibilityScopeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resolvedFor")) {
    m_resolvedFor = jsonValue.GetObject("resolvedFor");
    m_resolvedForHasBeenSet = true;
  }
  if (jsonValue.ValueExists("optIn")) {
    m_optIn = TrustedAccessProgramOptInMapper::GetTrustedAccessProgramOptInForName(jsonValue.GetString("optIn"));
    m_optInHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetString("updatedAt");
    m_updatedAtHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
