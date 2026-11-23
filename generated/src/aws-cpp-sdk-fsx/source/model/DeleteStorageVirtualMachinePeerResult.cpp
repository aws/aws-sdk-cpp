/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/fsx/model/DeleteStorageVirtualMachinePeerResult.h>

#include <utility>

using namespace Aws::FSx::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DeleteStorageVirtualMachinePeerResult::DeleteStorageVirtualMachinePeerResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

DeleteStorageVirtualMachinePeerResult& DeleteStorageVirtualMachinePeerResult::operator=(
    const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("StorageVirtualMachinePeerId")) {
    m_storageVirtualMachinePeerId = jsonValue.GetString("StorageVirtualMachinePeerId");
    m_storageVirtualMachinePeerIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Lifecycle")) {
    m_lifecycle = StorageVirtualMachinePeerLifecycleMapper::GetStorageVirtualMachinePeerLifecycleForName(jsonValue.GetString("Lifecycle"));
    m_lifecycleHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
