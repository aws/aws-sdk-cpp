/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents/model/DescribeDetectorModelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTEvents::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DescribeDetectorModelRequest::DescribeDetectorModelRequest() : 
    m_detectorModelNameHasBeenSet(false),
    m_detectorModelVersionHasBeenSet(false)
{
}

Aws::String DescribeDetectorModelRequest::SerializePayload() const
{
  return {};
}

void DescribeDetectorModelRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_detectorModelVersionHasBeenSet)
    {
      ss << m_detectorModelVersion;
      uri.AddQueryStringParameter("version", ss.str());
      ss.str("");
    }

}



