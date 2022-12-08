/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticache/model/AuthTokenUpdateStatus.h>
#include <aws/elasticache/model/PendingLogDeliveryConfiguration.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace ElastiCache
{
namespace Model
{

  /**
   * <p>A group of settings that are applied to the cluster in the future, or that
   * are currently being applied.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticache-2015-02-02/PendingModifiedValues">AWS
   * API Reference</a></p>
   */
  class PendingModifiedValues
  {
  public:
    AWS_ELASTICACHE_API PendingModifiedValues();
    AWS_ELASTICACHE_API PendingModifiedValues(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API PendingModifiedValues& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The new number of cache nodes for the cluster.</p> <p>For clusters running
     * Redis, this value must be 1. For clusters running Memcached, this value must be
     * between 1 and 40.</p>
     */
    inline int GetNumCacheNodes() const{ return m_numCacheNodes; }

    /**
     * <p>The new number of cache nodes for the cluster.</p> <p>For clusters running
     * Redis, this value must be 1. For clusters running Memcached, this value must be
     * between 1 and 40.</p>
     */
    inline bool NumCacheNodesHasBeenSet() const { return m_numCacheNodesHasBeenSet; }

    /**
     * <p>The new number of cache nodes for the cluster.</p> <p>For clusters running
     * Redis, this value must be 1. For clusters running Memcached, this value must be
     * between 1 and 40.</p>
     */
    inline void SetNumCacheNodes(int value) { m_numCacheNodesHasBeenSet = true; m_numCacheNodes = value; }

    /**
     * <p>The new number of cache nodes for the cluster.</p> <p>For clusters running
     * Redis, this value must be 1. For clusters running Memcached, this value must be
     * between 1 and 40.</p>
     */
    inline PendingModifiedValues& WithNumCacheNodes(int value) { SetNumCacheNodes(value); return *this;}


    /**
     * <p>A list of cache node IDs that are being removed (or will be removed) from the
     * cluster. A node ID is a 4-digit numeric identifier (0001, 0002, etc.).</p>
     */
    inline const Aws::Vector<Aws::String>& GetCacheNodeIdsToRemove() const{ return m_cacheNodeIdsToRemove; }

    /**
     * <p>A list of cache node IDs that are being removed (or will be removed) from the
     * cluster. A node ID is a 4-digit numeric identifier (0001, 0002, etc.).</p>
     */
    inline bool CacheNodeIdsToRemoveHasBeenSet() const { return m_cacheNodeIdsToRemoveHasBeenSet; }

    /**
     * <p>A list of cache node IDs that are being removed (or will be removed) from the
     * cluster. A node ID is a 4-digit numeric identifier (0001, 0002, etc.).</p>
     */
    inline void SetCacheNodeIdsToRemove(const Aws::Vector<Aws::String>& value) { m_cacheNodeIdsToRemoveHasBeenSet = true; m_cacheNodeIdsToRemove = value; }

    /**
     * <p>A list of cache node IDs that are being removed (or will be removed) from the
     * cluster. A node ID is a 4-digit numeric identifier (0001, 0002, etc.).</p>
     */
    inline void SetCacheNodeIdsToRemove(Aws::Vector<Aws::String>&& value) { m_cacheNodeIdsToRemoveHasBeenSet = true; m_cacheNodeIdsToRemove = std::move(value); }

    /**
     * <p>A list of cache node IDs that are being removed (or will be removed) from the
     * cluster. A node ID is a 4-digit numeric identifier (0001, 0002, etc.).</p>
     */
    inline PendingModifiedValues& WithCacheNodeIdsToRemove(const Aws::Vector<Aws::String>& value) { SetCacheNodeIdsToRemove(value); return *this;}

    /**
     * <p>A list of cache node IDs that are being removed (or will be removed) from the
     * cluster. A node ID is a 4-digit numeric identifier (0001, 0002, etc.).</p>
     */
    inline PendingModifiedValues& WithCacheNodeIdsToRemove(Aws::Vector<Aws::String>&& value) { SetCacheNodeIdsToRemove(std::move(value)); return *this;}

    /**
     * <p>A list of cache node IDs that are being removed (or will be removed) from the
     * cluster. A node ID is a 4-digit numeric identifier (0001, 0002, etc.).</p>
     */
    inline PendingModifiedValues& AddCacheNodeIdsToRemove(const Aws::String& value) { m_cacheNodeIdsToRemoveHasBeenSet = true; m_cacheNodeIdsToRemove.push_back(value); return *this; }

    /**
     * <p>A list of cache node IDs that are being removed (or will be removed) from the
     * cluster. A node ID is a 4-digit numeric identifier (0001, 0002, etc.).</p>
     */
    inline PendingModifiedValues& AddCacheNodeIdsToRemove(Aws::String&& value) { m_cacheNodeIdsToRemoveHasBeenSet = true; m_cacheNodeIdsToRemove.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of cache node IDs that are being removed (or will be removed) from the
     * cluster. A node ID is a 4-digit numeric identifier (0001, 0002, etc.).</p>
     */
    inline PendingModifiedValues& AddCacheNodeIdsToRemove(const char* value) { m_cacheNodeIdsToRemoveHasBeenSet = true; m_cacheNodeIdsToRemove.push_back(value); return *this; }


    /**
     * <p>The new cache engine version that the cluster runs.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The new cache engine version that the cluster runs.</p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>The new cache engine version that the cluster runs.</p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The new cache engine version that the cluster runs.</p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>The new cache engine version that the cluster runs.</p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>The new cache engine version that the cluster runs.</p>
     */
    inline PendingModifiedValues& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The new cache engine version that the cluster runs.</p>
     */
    inline PendingModifiedValues& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>The new cache engine version that the cluster runs.</p>
     */
    inline PendingModifiedValues& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p>The cache node type that this cluster or replication group is scaled to.</p>
     */
    inline const Aws::String& GetCacheNodeType() const{ return m_cacheNodeType; }

    /**
     * <p>The cache node type that this cluster or replication group is scaled to.</p>
     */
    inline bool CacheNodeTypeHasBeenSet() const { return m_cacheNodeTypeHasBeenSet; }

    /**
     * <p>The cache node type that this cluster or replication group is scaled to.</p>
     */
    inline void SetCacheNodeType(const Aws::String& value) { m_cacheNodeTypeHasBeenSet = true; m_cacheNodeType = value; }

    /**
     * <p>The cache node type that this cluster or replication group is scaled to.</p>
     */
    inline void SetCacheNodeType(Aws::String&& value) { m_cacheNodeTypeHasBeenSet = true; m_cacheNodeType = std::move(value); }

    /**
     * <p>The cache node type that this cluster or replication group is scaled to.</p>
     */
    inline void SetCacheNodeType(const char* value) { m_cacheNodeTypeHasBeenSet = true; m_cacheNodeType.assign(value); }

    /**
     * <p>The cache node type that this cluster or replication group is scaled to.</p>
     */
    inline PendingModifiedValues& WithCacheNodeType(const Aws::String& value) { SetCacheNodeType(value); return *this;}

    /**
     * <p>The cache node type that this cluster or replication group is scaled to.</p>
     */
    inline PendingModifiedValues& WithCacheNodeType(Aws::String&& value) { SetCacheNodeType(std::move(value)); return *this;}

    /**
     * <p>The cache node type that this cluster or replication group is scaled to.</p>
     */
    inline PendingModifiedValues& WithCacheNodeType(const char* value) { SetCacheNodeType(value); return *this;}


    /**
     * <p>The auth token status</p>
     */
    inline const AuthTokenUpdateStatus& GetAuthTokenStatus() const{ return m_authTokenStatus; }

    /**
     * <p>The auth token status</p>
     */
    inline bool AuthTokenStatusHasBeenSet() const { return m_authTokenStatusHasBeenSet; }

    /**
     * <p>The auth token status</p>
     */
    inline void SetAuthTokenStatus(const AuthTokenUpdateStatus& value) { m_authTokenStatusHasBeenSet = true; m_authTokenStatus = value; }

    /**
     * <p>The auth token status</p>
     */
    inline void SetAuthTokenStatus(AuthTokenUpdateStatus&& value) { m_authTokenStatusHasBeenSet = true; m_authTokenStatus = std::move(value); }

    /**
     * <p>The auth token status</p>
     */
    inline PendingModifiedValues& WithAuthTokenStatus(const AuthTokenUpdateStatus& value) { SetAuthTokenStatus(value); return *this;}

    /**
     * <p>The auth token status</p>
     */
    inline PendingModifiedValues& WithAuthTokenStatus(AuthTokenUpdateStatus&& value) { SetAuthTokenStatus(std::move(value)); return *this;}


    /**
     * <p>The log delivery configurations being modified </p>
     */
    inline const Aws::Vector<PendingLogDeliveryConfiguration>& GetLogDeliveryConfigurations() const{ return m_logDeliveryConfigurations; }

    /**
     * <p>The log delivery configurations being modified </p>
     */
    inline bool LogDeliveryConfigurationsHasBeenSet() const { return m_logDeliveryConfigurationsHasBeenSet; }

    /**
     * <p>The log delivery configurations being modified </p>
     */
    inline void SetLogDeliveryConfigurations(const Aws::Vector<PendingLogDeliveryConfiguration>& value) { m_logDeliveryConfigurationsHasBeenSet = true; m_logDeliveryConfigurations = value; }

    /**
     * <p>The log delivery configurations being modified </p>
     */
    inline void SetLogDeliveryConfigurations(Aws::Vector<PendingLogDeliveryConfiguration>&& value) { m_logDeliveryConfigurationsHasBeenSet = true; m_logDeliveryConfigurations = std::move(value); }

    /**
     * <p>The log delivery configurations being modified </p>
     */
    inline PendingModifiedValues& WithLogDeliveryConfigurations(const Aws::Vector<PendingLogDeliveryConfiguration>& value) { SetLogDeliveryConfigurations(value); return *this;}

    /**
     * <p>The log delivery configurations being modified </p>
     */
    inline PendingModifiedValues& WithLogDeliveryConfigurations(Aws::Vector<PendingLogDeliveryConfiguration>&& value) { SetLogDeliveryConfigurations(std::move(value)); return *this;}

    /**
     * <p>The log delivery configurations being modified </p>
     */
    inline PendingModifiedValues& AddLogDeliveryConfigurations(const PendingLogDeliveryConfiguration& value) { m_logDeliveryConfigurationsHasBeenSet = true; m_logDeliveryConfigurations.push_back(value); return *this; }

    /**
     * <p>The log delivery configurations being modified </p>
     */
    inline PendingModifiedValues& AddLogDeliveryConfigurations(PendingLogDeliveryConfiguration&& value) { m_logDeliveryConfigurationsHasBeenSet = true; m_logDeliveryConfigurations.push_back(std::move(value)); return *this; }

  private:

    int m_numCacheNodes;
    bool m_numCacheNodesHasBeenSet = false;

    Aws::Vector<Aws::String> m_cacheNodeIdsToRemove;
    bool m_cacheNodeIdsToRemoveHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    Aws::String m_cacheNodeType;
    bool m_cacheNodeTypeHasBeenSet = false;

    AuthTokenUpdateStatus m_authTokenStatus;
    bool m_authTokenStatusHasBeenSet = false;

    Aws::Vector<PendingLogDeliveryConfiguration> m_logDeliveryConfigurations;
    bool m_logDeliveryConfigurationsHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
