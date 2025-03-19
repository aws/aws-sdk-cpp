/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glacier/model/GetJobOutputRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Glacier::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetJobOutputRequest::SerializePayload() const
{
  return {};
}

Aws::Http::HeaderValueCollection GetJobOutputRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_rangeHasBeenSet)
  {
    ss << m_range;
    headers.emplace("range",  ss.str());
    ss.str("");
  }

  return headers;

}




