/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datazone/model/GetLineageNodeRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::DataZone::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String GetLineageNodeRequest::SerializePayload() const
{
  return {};
}

void GetLineageNodeRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_eventTimestampHasBeenSet)
    {
      ss << m_eventTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601);
      uri.AddQueryStringParameter("timestamp", ss.str());
      ss.str("");
    }

}



