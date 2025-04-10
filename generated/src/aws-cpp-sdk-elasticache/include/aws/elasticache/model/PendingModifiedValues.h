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
#include <aws/elasticache/model/TransitEncryptionMode.h>
#include <aws/elasticache/model/ScaleConfig.h>
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
    AWS_ELASTICACHE_API PendingModifiedValues() = default;
    AWS_ELASTICACHE_API PendingModifiedValues(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICACHE_API PendingModifiedValues& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICACHE_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The new number of cache nodes for the cluster.</p> <p>For clusters running
     * Valkey or Redis OSS, this value must be 1. For clusters running Memcached, this
     * value must be between 1 and 40.</p>
     */
    inline int GetNumCacheNodes() const { return m_numCacheNodes; }
    inline bool NumCacheNodesHasBeenSet() const { return m_numCacheNodesHasBeenSet; }
    inline void SetNumCacheNodes(int value) { m_numCacheNodesHasBeenSet = true; m_numCacheNodes = value; }
    inline PendingModifiedValues& WithNumCacheNodes(int value) { SetNumCacheNodes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of cache node IDs that are being removed (or will be removed) from the
     * cluster. A node ID is a 4-digit numeric identifier (0001, 0002, etc.).</p>
     */
    inline const Aws::Vector<Aws::String>& GetCacheNodeIdsToRemove() const { return m_cacheNodeIdsToRemove; }
    inline bool CacheNodeIdsToRemoveHasBeenSet() const { return m_cacheNodeIdsToRemoveHasBeenSet; }
    template<typename CacheNodeIdsToRemoveT = Aws::Vector<Aws::String>>
    void SetCacheNodeIdsToRemove(CacheNodeIdsToRemoveT&& value) { m_cacheNodeIdsToRemoveHasBeenSet = true; m_cacheNodeIdsToRemove = std::forward<CacheNodeIdsToRemoveT>(value); }
    template<typename CacheNodeIdsToRemoveT = Aws::Vector<Aws::String>>
    PendingModifiedValues& WithCacheNodeIdsToRemove(CacheNodeIdsToRemoveT&& value) { SetCacheNodeIdsToRemove(std::forward<CacheNodeIdsToRemoveT>(value)); return *this;}
    template<typename CacheNodeIdsToRemoveT = Aws::String>
    PendingModifiedValues& AddCacheNodeIdsToRemove(CacheNodeIdsToRemoveT&& value) { m_cacheNodeIdsToRemoveHasBeenSet = true; m_cacheNodeIdsToRemove.emplace_back(std::forward<CacheNodeIdsToRemoveT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The new cache engine version that the cluster runs.</p>
     */
    inline const Aws::String& GetEngineVersion() const { return m_engineVersion; }
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }
    template<typename EngineVersionT = Aws::String>
    void SetEngineVersion(EngineVersionT&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::forward<EngineVersionT>(value); }
    template<typename EngineVersionT = Aws::String>
    PendingModifiedValues& WithEngineVersion(EngineVersionT&& value) { SetEngineVersion(std::forward<EngineVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The cache node type that this cluster or replication group is scaled to.</p>
     */
    inline const Aws::String& GetCacheNodeType() const { return m_cacheNodeType; }
    inline bool CacheNodeTypeHasBeenSet() const { return m_cacheNodeTypeHasBeenSet; }
    template<typename CacheNodeTypeT = Aws::String>
    void SetCacheNodeType(CacheNodeTypeT&& value) { m_cacheNodeTypeHasBeenSet = true; m_cacheNodeType = std::forward<CacheNodeTypeT>(value); }
    template<typename CacheNodeTypeT = Aws::String>
    PendingModifiedValues& WithCacheNodeType(CacheNodeTypeT&& value) { SetCacheNodeType(std::forward<CacheNodeTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The auth token status</p>
     */
    inline AuthTokenUpdateStatus GetAuthTokenStatus() const { return m_authTokenStatus; }
    inline bool AuthTokenStatusHasBeenSet() const { return m_authTokenStatusHasBeenSet; }
    inline void SetAuthTokenStatus(AuthTokenUpdateStatus value) { m_authTokenStatusHasBeenSet = true; m_authTokenStatus = value; }
    inline PendingModifiedValues& WithAuthTokenStatus(AuthTokenUpdateStatus value) { SetAuthTokenStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The log delivery configurations being modified </p>
     */
    inline const Aws::Vector<PendingLogDeliveryConfiguration>& GetLogDeliveryConfigurations() const { return m_logDeliveryConfigurations; }
    inline bool LogDeliveryConfigurationsHasBeenSet() const { return m_logDeliveryConfigurationsHasBeenSet; }
    template<typename LogDeliveryConfigurationsT = Aws::Vector<PendingLogDeliveryConfiguration>>
    void SetLogDeliveryConfigurations(LogDeliveryConfigurationsT&& value) { m_logDeliveryConfigurationsHasBeenSet = true; m_logDeliveryConfigurations = std::forward<LogDeliveryConfigurationsT>(value); }
    template<typename LogDeliveryConfigurationsT = Aws::Vector<PendingLogDeliveryConfiguration>>
    PendingModifiedValues& WithLogDeliveryConfigurations(LogDeliveryConfigurationsT&& value) { SetLogDeliveryConfigurations(std::forward<LogDeliveryConfigurationsT>(value)); return *this;}
    template<typename LogDeliveryConfigurationsT = PendingLogDeliveryConfiguration>
    PendingModifiedValues& AddLogDeliveryConfigurations(LogDeliveryConfigurationsT&& value) { m_logDeliveryConfigurationsHasBeenSet = true; m_logDeliveryConfigurations.emplace_back(std::forward<LogDeliveryConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A flag that enables in-transit encryption when set to true.</p>
     */
    inline bool GetTransitEncryptionEnabled() const { return m_transitEncryptionEnabled; }
    inline bool TransitEncryptionEnabledHasBeenSet() const { return m_transitEncryptionEnabledHasBeenSet; }
    inline void SetTransitEncryptionEnabled(bool value) { m_transitEncryptionEnabledHasBeenSet = true; m_transitEncryptionEnabled = value; }
    inline PendingModifiedValues& WithTransitEncryptionEnabled(bool value) { SetTransitEncryptionEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A setting that allows you to migrate your clients to use in-transit
     * encryption, with no downtime.</p>
     */
    inline TransitEncryptionMode GetTransitEncryptionMode() const { return m_transitEncryptionMode; }
    inline bool TransitEncryptionModeHasBeenSet() const { return m_transitEncryptionModeHasBeenSet; }
    inline void SetTransitEncryptionMode(TransitEncryptionMode value) { m_transitEncryptionModeHasBeenSet = true; m_transitEncryptionMode = value; }
    inline PendingModifiedValues& WithTransitEncryptionMode(TransitEncryptionMode value) { SetTransitEncryptionMode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scaling configuration changes that are pending for the Memcached
     * cluster.</p>
     */
    inline const ScaleConfig& GetScaleConfig() const { return m_scaleConfig; }
    inline bool ScaleConfigHasBeenSet() const { return m_scaleConfigHasBeenSet; }
    template<typename ScaleConfigT = ScaleConfig>
    void SetScaleConfig(ScaleConfigT&& value) { m_scaleConfigHasBeenSet = true; m_scaleConfig = std::forward<ScaleConfigT>(value); }
    template<typename ScaleConfigT = ScaleConfig>
    PendingModifiedValues& WithScaleConfig(ScaleConfigT&& value) { SetScaleConfig(std::forward<ScaleConfigT>(value)); return *this;}
    ///@}
  private:

    int m_numCacheNodes{0};
    bool m_numCacheNodesHasBeenSet = false;

    Aws::Vector<Aws::String> m_cacheNodeIdsToRemove;
    bool m_cacheNodeIdsToRemoveHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    Aws::String m_cacheNodeType;
    bool m_cacheNodeTypeHasBeenSet = false;

    AuthTokenUpdateStatus m_authTokenStatus{AuthTokenUpdateStatus::NOT_SET};
    bool m_authTokenStatusHasBeenSet = false;

    Aws::Vector<PendingLogDeliveryConfiguration> m_logDeliveryConfigurations;
    bool m_logDeliveryConfigurationsHasBeenSet = false;

    bool m_transitEncryptionEnabled{false};
    bool m_transitEncryptionEnabledHasBeenSet = false;

    TransitEncryptionMode m_transitEncryptionMode{TransitEncryptionMode::NOT_SET};
    bool m_transitEncryptionModeHasBeenSet = false;

    ScaleConfig m_scaleConfig;
    bool m_scaleConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
