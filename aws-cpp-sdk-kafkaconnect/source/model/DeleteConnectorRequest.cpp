/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafkaconnect/model/DeleteConnectorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::KafkaConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

DeleteConnectorRequest::DeleteConnectorRequest() : 
    m_connectorArnHasBeenSet(false),
    m_currentVersionHasBeenSet(false)
{
}

Aws::String DeleteConnectorRequest::SerializePayload() const
{
  return {};
}

void DeleteConnectorRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_currentVersionHasBeenSet)
    {
      ss << m_currentVersion;
      uri.AddQueryStringParameter("currentVersion", ss.str());
      ss.str("");
    }

}



