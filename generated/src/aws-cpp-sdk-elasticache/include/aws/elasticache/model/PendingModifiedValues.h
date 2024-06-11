﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticache/ElastiCache_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/elasticache/model/AuthTokenUpdateStatus.h>
#include <aws/elasticache/model/TransitEncryptionMode.h>
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


    ///@{
    /**
     * <p>The new number of cache nodes for the cluster.</p> <p>For clusters running
     * Redis, this value must be 1. For clusters running Memcached, this value must be
     * between 1 and 40.</p>
     */
    inline int GetNumCacheNodes() const{ return m_numCacheNodes; }
    inline bool NumCacheNodesHasBeenSet() const { return m_numCacheNodesHasBeenSet; }
    inline void SetNumCacheNodes(int value) { m_numCacheNodesHasBeenSet = true; m_numCacheNodes = value; }
    inline PendingModifiedValues& WithNumCacheNodes(int value) { SetNumCacheNodes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of cache node IDs that are being removed (or will be removed) from the
     * cluster. A node ID is a 4-digit numeric identifier (0001, 0002, etc.).</p>
     */
    inline const Aws::Vector<Aws::String>& GetCacheNodeIdsToRemove() const{ return m_cacheNodeIdsToRemove; }
    inline bool CacheNodeIdsToRemoveHasBeenSet() const { return m_cacheNodeIdsToRemoveHasBeenSet; }
    inline void SetCacheNodeIdsToRemove(const Aws::Vector<Aws::String>& value) { m_cacheNodeIdsToRemoveHasBeenSet = true; m_cacheNodeIdsToRemove = value; }
    inline void SetCacheNodeIdsToRemove(Aws::Vector<Aws::String>&& value) { m_cacheNodeIdsToRemoveHasBeenSet = true; m_cacheNodeIdsToRemove = std::move(value); }
    inline PendingModifiedValues& WithCacheNodeIdsToRemove(const Aws::Vector<Aws::String>& value) { SetCacheNodeIdsToRemove(value); return *this;}
    inline PendingModifiedValues& WithCacheNodeIdsToRemove(Aws::Vector<Aws::String>&& value) { SetCacheNodeIdsToRemove(std::move(value)); return *this;}
    inline PendingModifiedValues& AddCacheNodeIdsToRemove(const Aws::String& value) { m_cacheNodeIdsToRemoveHasBeenSet = true; m_cacheNodeIdsToRemove.push_back(value); return *this; }
    inline PendingModifiedValues& AddCacheNodeIdsToRemove(Aws::String&& value) { m_cacheNodeIdsToRemoveHasBeenSet = true; m_cacheNodeIdsToRemove.push_back(std::move(value)); return *this; }
    inline PendingModifiedValues& AddCacheNodeIdsToRemove(const char* value) { m_cacheNodeIdsToRemoveHasBeenSet = true; m_cacheNodeIdsToRemove.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The new cache engine version that the cluster runs.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }
    inline PendingModifiedValues& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}
    inline PendingModifiedValues& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}
    inline PendingModifiedValues& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cache node type that this cluster or replication group is scaled to.</p>
     */
    inline const Aws::String& GetCacheNodeType() const{ return m_cacheNodeType; }
    inline bool CacheNodeTypeHasBeenSet() const { return m_cacheNodeTypeHasBeenSet; }
    inline void SetCacheNodeType(const Aws::String& value) { m_cacheNodeTypeHasBeenSet = true; m_cacheNodeType = value; }
    inline void SetCacheNodeType(Aws::String&& value) { m_cacheNodeTypeHasBeenSet = true; m_cacheNodeType = std::move(value); }
    inline void SetCacheNodeType(const char* value) { m_cacheNodeTypeHasBeenSet = true; m_cacheNodeType.assign(value); }
    inline PendingModifiedValues& WithCacheNodeType(const Aws::String& value) { SetCacheNodeType(value); return *this;}
    inline PendingModifiedValues& WithCacheNodeType(Aws::String&& value) { SetCacheNodeType(std::move(value)); return *this;}
    inline PendingModifiedValues& WithCacheNodeType(const char* value) { SetCacheNodeType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The auth token status</p>
     */
    inline const AuthTokenUpdateStatus& GetAuthTokenStatus() const{ return m_authTokenStatus; }
    inline bool AuthTokenStatusHasBeenSet() const { return m_authTokenStatusHasBeenSet; }
    inline void SetAuthTokenStatus(const AuthTokenUpdateStatus& value) { m_authTokenStatusHasBeenSet = true; m_authTokenStatus = value; }
    inline void SetAuthTokenStatus(AuthTokenUpdateStatus&& value) { m_authTokenStatusHasBeenSet = true; m_authTokenStatus = std::move(value); }
    inline PendingModifiedValues& WithAuthTokenStatus(const AuthTokenUpdateStatus& value) { SetAuthTokenStatus(value); return *this;}
    inline PendingModifiedValues& WithAuthTokenStatus(AuthTokenUpdateStatus&& value) { SetAuthTokenStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The log delivery configurations being modified </p>
     */
    inline const Aws::Vector<PendingLogDeliveryConfiguration>& GetLogDeliveryConfigurations() const{ return m_logDeliveryConfigurations; }
    inline bool LogDeliveryConfigurationsHasBeenSet() const { return m_logDeliveryConfigurationsHasBeenSet; }
    inline void SetLogDeliveryConfigurations(const Aws::Vector<PendingLogDeliveryConfiguration>& value) { m_logDeliveryConfigurationsHasBeenSet = true; m_logDeliveryConfigurations = value; }
    inline void SetLogDeliveryConfigurations(Aws::Vector<PendingLogDeliveryConfiguration>&& value) { m_logDeliveryConfigurationsHasBeenSet = true; m_logDeliveryConfigurations = std::move(value); }
    inline PendingModifiedValues& WithLogDeliveryConfigurations(const Aws::Vector<PendingLogDeliveryConfiguration>& value) { SetLogDeliveryConfigurations(value); return *this;}
    inline PendingModifiedValues& WithLogDeliveryConfigurations(Aws::Vector<PendingLogDeliveryConfiguration>&& value) { SetLogDeliveryConfigurations(std::move(value)); return *this;}
    inline PendingModifiedValues& AddLogDeliveryConfigurations(const PendingLogDeliveryConfiguration& value) { m_logDeliveryConfigurationsHasBeenSet = true; m_logDeliveryConfigurations.push_back(value); return *this; }
    inline PendingModifiedValues& AddLogDeliveryConfigurations(PendingLogDeliveryConfiguration&& value) { m_logDeliveryConfigurationsHasBeenSet = true; m_logDeliveryConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A flag that enables in-transit encryption when set to true.</p>
     */
    inline bool GetTransitEncryptionEnabled() const{ return m_transitEncryptionEnabled; }
    inline bool TransitEncryptionEnabledHasBeenSet() const { return m_transitEncryptionEnabledHasBeenSet; }
    inline void SetTransitEncryptionEnabled(bool value) { m_transitEncryptionEnabledHasBeenSet = true; m_transitEncryptionEnabled = value; }
    inline PendingModifiedValues& WithTransitEncryptionEnabled(bool value) { SetTransitEncryptionEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A setting that allows you to migrate your clients to use in-transit
     * encryption, with no downtime.</p>
     */
    inline const TransitEncryptionMode& GetTransitEncryptionMode() const{ return m_transitEncryptionMode; }
    inline bool TransitEncryptionModeHasBeenSet() const { return m_transitEncryptionModeHasBeenSet; }
    inline void SetTransitEncryptionMode(const TransitEncryptionMode& value) { m_transitEncryptionModeHasBeenSet = true; m_transitEncryptionMode = value; }
    inline void SetTransitEncryptionMode(TransitEncryptionMode&& value) { m_transitEncryptionModeHasBeenSet = true; m_transitEncryptionMode = std::move(value); }
    inline PendingModifiedValues& WithTransitEncryptionMode(const TransitEncryptionMode& value) { SetTransitEncryptionMode(value); return *this;}
    inline PendingModifiedValues& WithTransitEncryptionMode(TransitEncryptionMode&& value) { SetTransitEncryptionMode(std::move(value)); return *this;}
    ///@}
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

    bool m_transitEncryptionEnabled;
    bool m_transitEncryptionEnabledHasBeenSet = false;

    TransitEncryptionMode m_transitEncryptionMode;
    bool m_transitEncryptionModeHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
