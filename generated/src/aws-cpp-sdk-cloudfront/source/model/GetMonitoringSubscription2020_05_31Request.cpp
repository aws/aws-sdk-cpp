/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/GetMonitoringSubscription2020_05_31Request.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudFront::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

GetMonitoringSubscription2020_05_31Request::GetMonitoringSubscription2020_05_31Request() : 
    m_distributionIdHasBeenSet(false)
{
}

Aws::String GetMonitoringSubscription2020_05_31Request::SerializePayload() const
{
  return {};
}


