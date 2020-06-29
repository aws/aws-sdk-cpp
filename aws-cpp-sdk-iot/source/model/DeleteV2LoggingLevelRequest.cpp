/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iot/model/DeleteV2LoggingLevelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoT::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DeleteV2LoggingLevelRequest::DeleteV2LoggingLevelRequest() : 
    m_targetType(LogTargetType::NOT_SET),
    m_targetTypeHasBeenSet(false),
    m_targetNameHasBeenSet(false)
{
}

Aws::String DeleteV2LoggingLevelRequest::SerializePayload() const
{
  return {};
}

void DeleteV2LoggingLevelRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_targetTypeHasBeenSet)
    {
      ss << LogTargetTypeMapper::GetNameForLogTargetType(m_targetType);
      uri.AddQueryStringParameter("targetType", ss.str());
      ss.str("");
    }

    if(m_targetNameHasBeenSet)
    {
      ss << m_targetName;
      uri.AddQueryStringParameter("targetName", ss.str());
      ss.str("");
    }

}



