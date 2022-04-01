/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafkaconnect/model/UpdateConnectorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::KafkaConnect::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

UpdateConnectorRequest::UpdateConnectorRequest() : 
    m_capacityHasBeenSet(false),
    m_connectorArnHasBeenSet(false),
    m_currentVersionHasBeenSet(false)
{
}

Aws::String UpdateConnectorRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_capacityHasBeenSet)
  {
   payload.WithObject("capacity", m_capacity.Jsonize());

  }

  return payload.View().WriteReadable();
}

void UpdateConnectorRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_currentVersionHasBeenSet)
    {
      ss << m_currentVersion;
      uri.AddQueryStringParameter("currentVersion", ss.str());
      ss.str("");
    }

}



