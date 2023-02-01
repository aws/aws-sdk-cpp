/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/iotwireless/model/PutResourceLogLevelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::IoTWireless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

PutResourceLogLevelRequest::PutResourceLogLevelRequest() : 
    m_resourceIdentifierHasBeenSet(false),
    m_resourceTypeHasBeenSet(false),
    m_logLevel(LogLevel::NOT_SET),
    m_logLevelHasBeenSet(false)
{
}

Aws::String PutResourceLogLevelRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_logLevelHasBeenSet)
  {
   payload.WithString("LogLevel", LogLevelMapper::GetNameForLogLevel(m_logLevel));
  }

  return payload.View().WriteReadable();
}

void PutResourceLogLevelRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_resourceTypeHasBeenSet)
    {
      ss << m_resourceType;
      uri.AddQueryStringParameter("resourceType", ss.str());
      ss.str("");
    }

}



