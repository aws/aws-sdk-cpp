/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/GetKeyGroupConfig2020_05_31Request.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CloudFront::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

GetKeyGroupConfig2020_05_31Request::GetKeyGroupConfig2020_05_31Request() : 
    m_idHasBeenSet(false)
{
}

Aws::String GetKeyGroupConfig2020_05_31Request::SerializePayload() const
{
  return {};
}


