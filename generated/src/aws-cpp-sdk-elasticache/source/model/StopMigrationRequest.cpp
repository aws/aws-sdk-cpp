/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/elasticache/model/StopMigrationRequest.h>

using namespace Aws::ElastiCache::Model;
using namespace Aws::Utils;

Aws::String StopMigrationRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=StopMigration&";
  if (m_serverlessCacheNameHasBeenSet) {
    ss << "ServerlessCacheName=" << StringUtils::URLEncode(m_serverlessCacheName.c_str()) << "&";
  }

  ss << "Version=2015-02-02";
  return ss.str();
}

void StopMigrationRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
