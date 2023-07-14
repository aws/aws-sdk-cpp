/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mediastore-data/model/GetObjectRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MediaStoreData::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetObjectRequest::GetObjectRequest() : 
    m_pathHasBeenSet(false),
    m_rangeHasBeenSet(false)
{
}

Aws::String GetObjectRequest::SerializePayload() const
{
  return {};
}

Aws::Http::HeaderValueCollection GetObjectRequest::GetRequestSpecificHeaders() const
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




