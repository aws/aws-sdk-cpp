/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticfilesystem/model/DeleteReplicationConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/http/URI.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::EFS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String DeleteReplicationConfigurationRequest::SerializePayload() const
{
  return {};
}

void DeleteReplicationConfigurationRequest::AddQueryStringParameters(URI& uri) const
{
    Aws::StringStream ss;
    if(m_deletionModeHasBeenSet)
    {
      ss << DeletionModeMapper::GetNameForDeletionMode(m_deletionMode);
      uri.AddQueryStringParameter("deletionMode", ss.str());
      ss.str("");
    }

}



