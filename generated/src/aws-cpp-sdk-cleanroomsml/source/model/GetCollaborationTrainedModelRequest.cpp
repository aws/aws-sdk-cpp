/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanroomsml/model/GetCollaborationTrainedModelRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::CleanRoomsML::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String GetCollaborationTrainedModelRequest::SerializePayload() const
{
  return {};
}

void GetCollaborationTrainedModelRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_versionIdentifierHasBeenSet)
    {
      ss << m_versionIdentifier;
      uri.AddQueryStringParameter("versionIdentifier", ss.str());
      ss.str("");
    }

}



