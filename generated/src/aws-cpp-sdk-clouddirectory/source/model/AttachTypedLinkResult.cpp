/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/clouddirectory/model/AttachTypedLinkResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::CloudDirectory::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

AttachTypedLinkResult::AttachTypedLinkResult()
{
}

AttachTypedLinkResult::AttachTypedLinkResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

AttachTypedLinkResult& AttachTypedLinkResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TypedLinkSpecifier"))
  {
    m_typedLinkSpecifier = jsonValue.GetObject("TypedLinkSpecifier");

  }



  return *this;
}
