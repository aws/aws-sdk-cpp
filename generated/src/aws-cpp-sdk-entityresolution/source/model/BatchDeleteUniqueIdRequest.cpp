/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/entityresolution/model/BatchDeleteUniqueIdRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>
#include <numeric>

using namespace Aws::EntityResolution::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String BatchDeleteUniqueIdRequest::SerializePayload() const
{
  return {};
}

Aws::Http::HeaderValueCollection BatchDeleteUniqueIdRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_inputSourceHasBeenSet)
  {
    ss << m_inputSource;
    headers.emplace("inputsource",  ss.str());
    ss.str("");
  }

  if(m_uniqueIdsHasBeenSet)
  {
    headers.emplace("uniqueids", std::accumulate(std::begin(m_uniqueIds),
      std::end(m_uniqueIds),
      Aws::String{},
      [](const Aws::String &acc, const Aws::String &item) -> Aws::String {
        const auto headerValue = item;
        return acc.empty() ? headerValue : acc + "," + headerValue;
      }));
  }

  return headers;

}




