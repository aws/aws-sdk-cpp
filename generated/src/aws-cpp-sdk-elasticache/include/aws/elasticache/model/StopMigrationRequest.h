/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticache/ElastiCacheRequest.h>
#include <aws/elasticache/ElastiCache_EXPORTS.h>

#include <utility>

namespace Aws {
namespace ElastiCache {
namespace Model {

/**
 */
class StopMigrationRequest : public ElastiCacheRequest {
 public:
  AWS_ELASTICACHE_API StopMigrationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StopMigration"; }

  AWS_ELASTICACHE_API Aws::String SerializePayload() const override;

 protected:
  AWS_ELASTICACHE_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p>The name of the serverless cache for which to stop the data sync.</p>
   */
  inline const Aws::String& GetServerlessCacheName() const { return m_serverlessCacheName; }
  inline bool ServerlessCacheNameHasBeenSet() const { return m_serverlessCacheNameHasBeenSet; }
  template <typename ServerlessCacheNameT = Aws::String>
  void SetServerlessCacheName(ServerlessCacheNameT&& value) {
    m_serverlessCacheNameHasBeenSet = true;
    m_serverlessCacheName = std::forward<ServerlessCacheNameT>(value);
  }
  template <typename ServerlessCacheNameT = Aws::String>
  StopMigrationRequest& WithServerlessCacheName(ServerlessCacheNameT&& value) {
    SetServerlessCacheName(std::forward<ServerlessCacheNameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_serverlessCacheName;
  bool m_serverlessCacheNameHasBeenSet = false;
};

}  // namespace Model
}  // namespace ElastiCache
}  // namespace Aws
