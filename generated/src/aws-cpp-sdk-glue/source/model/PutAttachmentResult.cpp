/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/glue/model/PutAttachmentResult.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

PutAttachmentResult::PutAttachmentResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

PutAttachmentResult& PutAttachmentResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("AssetIdentifier")) {
    m_assetIdentifier = jsonValue.GetString("AssetIdentifier");
    m_assetIdentifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("IterableFormName")) {
    m_iterableFormName = jsonValue.GetString("IterableFormName");
    m_iterableFormNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ItemIdentifier")) {
    m_itemIdentifier = jsonValue.GetString("ItemIdentifier");
    m_itemIdentifierHasBeenSet = true;
  }
  if (jsonValue.ValueExists("AttachmentName")) {
    m_attachmentName = jsonValue.GetString("AttachmentName");
    m_attachmentNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("FormTypeId")) {
    m_formTypeId = jsonValue.GetString("FormTypeId");
    m_formTypeIdHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
