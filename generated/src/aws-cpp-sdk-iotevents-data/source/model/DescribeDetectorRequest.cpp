/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents-data/model/DescribeDetectorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTEventsData::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DescribeDetectorRequest::DescribeDetectorRequest() : 
    m_detectorModelNameHasBeenSet(false),
    m_keyValueHasBeenSet(false)
{
}

Aws::String DescribeDetectorRequest::SerializePayload() const
{
  return {};
}

void DescribeDetectorRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_keyValueHasBeenSet)
    {
      ss << m_keyValue;
      uri.AddQueryStringParameter("keyValue", ss.str());
      ss.str("");
    }

}



