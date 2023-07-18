/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotevents/model/DescribeAlarmModelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTEvents::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DescribeAlarmModelRequest::DescribeAlarmModelRequest() : 
    m_alarmModelNameHasBeenSet(false),
    m_alarmModelVersionHasBeenSet(false)
{
}

Aws::String DescribeAlarmModelRequest::SerializePayload() const
{
  return {};
}

void DescribeAlarmModelRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_alarmModelVersionHasBeenSet)
    {
      ss << m_alarmModelVersion;
      uri.AddQueryStringParameter("version", ss.str());
      ss.str("");
    }

}



