/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/identitystore/model/UpdateGroupResult.h>

#include <utility>

using namespace Aws::IdentityStore::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateGroupResult::UpdateGroupResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

UpdateGroupResult& UpdateGroupResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("IdentityStoreId")) {
    m_identityStoreId = jsonValue.GetString("IdentityStoreId");
    m_identityStoreIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("GroupId")) {
    m_groupId = jsonValue.GetString("GroupId");
    m_groupIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("GroupArn")) {
    m_groupArn = jsonValue.GetString("GroupArn");
    m_groupArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Revision")) {
    m_revision = jsonValue.GetString("Revision");
    m_revisionHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
