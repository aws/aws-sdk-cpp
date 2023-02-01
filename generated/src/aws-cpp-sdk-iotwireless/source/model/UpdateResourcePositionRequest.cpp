/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/UpdateResourcePositionRequest.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::IoTWireless::Model;
using namespace Aws::Utils::Stream;
using namespace Aws::Utils;
using namespace Aws::Http;
using namespace Aws;

UpdateResourcePositionRequest::UpdateResourcePositionRequest() : 
    m_resourceIdentifierHasBeenSet(false),
    m_resourceType(PositionResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false)
{
}


void UpdateResourcePositionRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_resourceTypeHasBeenSet)
    {
      ss << PositionResourceTypeMapper::GetNameForPositionResourceType(m_resourceType);
      uri.AddQueryStringParameter("resourceType", ss.str());
      ss.str("");
    }

}

