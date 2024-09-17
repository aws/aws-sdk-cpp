/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/model/ESPartitionInstanceType.h>
#include <aws/es/model/ZoneAwarenessConfig.h>
#include <aws/es/model/ESWarmPartitionInstanceType.h>
#include <aws/es/model/ColdStorageOptions.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ElasticsearchService
{
namespace Model
{

  /**
   * <p>Specifies the configuration for the domain cluster, such as the type and
   * number of instances.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/ElasticsearchClusterConfig">AWS
   * API Reference</a></p>
   */
  class ElasticsearchClusterConfig
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API ElasticsearchClusterConfig();
    AWS_ELASTICSEARCHSERVICE_API ElasticsearchClusterConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API ElasticsearchClusterConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The instance type for an Elasticsearch cluster. UltraWarm instance types are
     * not supported for data instances.</p>
     */
    inline const ESPartitionInstanceType& GetInstanceType() const{ return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(const ESPartitionInstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline void SetInstanceType(ESPartitionInstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }
    inline ElasticsearchClusterConfig& WithInstanceType(const ESPartitionInstanceType& value) { SetInstanceType(value); return *this;}
    inline ElasticsearchClusterConfig& WithInstanceType(ESPartitionInstanceType&& value) { SetInstanceType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of instances in the specified domain cluster.</p>
     */
    inline int GetInstanceCount() const{ return m_instanceCount; }
    inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }
    inline ElasticsearchClusterConfig& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A boolean value to indicate whether a dedicated master node is enabled. See
     * <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-managedomains.html#es-managedomains-dedicatedmasternodes"
     * target="_blank">About Dedicated Master Nodes</a> for more information.</p>
     */
    inline bool GetDedicatedMasterEnabled() const{ return m_dedicatedMasterEnabled; }
    inline bool DedicatedMasterEnabledHasBeenSet() const { return m_dedicatedMasterEnabledHasBeenSet; }
    inline void SetDedicatedMasterEnabled(bool value) { m_dedicatedMasterEnabledHasBeenSet = true; m_dedicatedMasterEnabled = value; }
    inline ElasticsearchClusterConfig& WithDedicatedMasterEnabled(bool value) { SetDedicatedMasterEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A boolean value to indicate whether zone awareness is enabled. See <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-managedomains.html#es-managedomains-zoneawareness"
     * target="_blank">About Zone Awareness</a> for more information.</p>
     */
    inline bool GetZoneAwarenessEnabled() const{ return m_zoneAwarenessEnabled; }
    inline bool ZoneAwarenessEnabledHasBeenSet() const { return m_zoneAwarenessEnabledHasBeenSet; }
    inline void SetZoneAwarenessEnabled(bool value) { m_zoneAwarenessEnabledHasBeenSet = true; m_zoneAwarenessEnabled = value; }
    inline ElasticsearchClusterConfig& WithZoneAwarenessEnabled(bool value) { SetZoneAwarenessEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the zone awareness configuration for a domain when zone awareness
     * is enabled.</p>
     */
    inline const ZoneAwarenessConfig& GetZoneAwarenessConfig() const{ return m_zoneAwarenessConfig; }
    inline bool ZoneAwarenessConfigHasBeenSet() const { return m_zoneAwarenessConfigHasBeenSet; }
    inline void SetZoneAwarenessConfig(const ZoneAwarenessConfig& value) { m_zoneAwarenessConfigHasBeenSet = true; m_zoneAwarenessConfig = value; }
    inline void SetZoneAwarenessConfig(ZoneAwarenessConfig&& value) { m_zoneAwarenessConfigHasBeenSet = true; m_zoneAwarenessConfig = std::move(value); }
    inline ElasticsearchClusterConfig& WithZoneAwarenessConfig(const ZoneAwarenessConfig& value) { SetZoneAwarenessConfig(value); return *this;}
    inline ElasticsearchClusterConfig& WithZoneAwarenessConfig(ZoneAwarenessConfig&& value) { SetZoneAwarenessConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type for a dedicated master node.</p>
     */
    inline const ESPartitionInstanceType& GetDedicatedMasterType() const{ return m_dedicatedMasterType; }
    inline bool DedicatedMasterTypeHasBeenSet() const { return m_dedicatedMasterTypeHasBeenSet; }
    inline void SetDedicatedMasterType(const ESPartitionInstanceType& value) { m_dedicatedMasterTypeHasBeenSet = true; m_dedicatedMasterType = value; }
    inline void SetDedicatedMasterType(ESPartitionInstanceType&& value) { m_dedicatedMasterTypeHasBeenSet = true; m_dedicatedMasterType = std::move(value); }
    inline ElasticsearchClusterConfig& WithDedicatedMasterType(const ESPartitionInstanceType& value) { SetDedicatedMasterType(value); return *this;}
    inline ElasticsearchClusterConfig& WithDedicatedMasterType(ESPartitionInstanceType&& value) { SetDedicatedMasterType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Total number of dedicated master nodes, active and on standby, for the
     * cluster.</p>
     */
    inline int GetDedicatedMasterCount() const{ return m_dedicatedMasterCount; }
    inline bool DedicatedMasterCountHasBeenSet() const { return m_dedicatedMasterCountHasBeenSet; }
    inline void SetDedicatedMasterCount(int value) { m_dedicatedMasterCountHasBeenSet = true; m_dedicatedMasterCount = value; }
    inline ElasticsearchClusterConfig& WithDedicatedMasterCount(int value) { SetDedicatedMasterCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>True to enable warm storage.</p>
     */
    inline bool GetWarmEnabled() const{ return m_warmEnabled; }
    inline bool WarmEnabledHasBeenSet() const { return m_warmEnabledHasBeenSet; }
    inline void SetWarmEnabled(bool value) { m_warmEnabledHasBeenSet = true; m_warmEnabled = value; }
    inline ElasticsearchClusterConfig& WithWarmEnabled(bool value) { SetWarmEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type for the Elasticsearch cluster's warm nodes.</p>
     */
    inline const ESWarmPartitionInstanceType& GetWarmType() const{ return m_warmType; }
    inline bool WarmTypeHasBeenSet() const { return m_warmTypeHasBeenSet; }
    inline void SetWarmType(const ESWarmPartitionInstanceType& value) { m_warmTypeHasBeenSet = true; m_warmType = value; }
    inline void SetWarmType(ESWarmPartitionInstanceType&& value) { m_warmTypeHasBeenSet = true; m_warmType = std::move(value); }
    inline ElasticsearchClusterConfig& WithWarmType(const ESWarmPartitionInstanceType& value) { SetWarmType(value); return *this;}
    inline ElasticsearchClusterConfig& WithWarmType(ESWarmPartitionInstanceType&& value) { SetWarmType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of warm nodes in the cluster.</p>
     */
    inline int GetWarmCount() const{ return m_warmCount; }
    inline bool WarmCountHasBeenSet() const { return m_warmCountHasBeenSet; }
    inline void SetWarmCount(int value) { m_warmCountHasBeenSet = true; m_warmCount = value; }
    inline ElasticsearchClusterConfig& WithWarmCount(int value) { SetWarmCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the <code>ColdStorageOptions</code> config for Elasticsearch
     * Domain</p>
     */
    inline const ColdStorageOptions& GetColdStorageOptions() const{ return m_coldStorageOptions; }
    inline bool ColdStorageOptionsHasBeenSet() const { return m_coldStorageOptionsHasBeenSet; }
    inline void SetColdStorageOptions(const ColdStorageOptions& value) { m_coldStorageOptionsHasBeenSet = true; m_coldStorageOptions = value; }
    inline void SetColdStorageOptions(ColdStorageOptions&& value) { m_coldStorageOptionsHasBeenSet = true; m_coldStorageOptions = std::move(value); }
    inline ElasticsearchClusterConfig& WithColdStorageOptions(const ColdStorageOptions& value) { SetColdStorageOptions(value); return *this;}
    inline ElasticsearchClusterConfig& WithColdStorageOptions(ColdStorageOptions&& value) { SetColdStorageOptions(std::move(value)); return *this;}
    ///@}
  private:

    ESPartitionInstanceType m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    int m_instanceCount;
    bool m_instanceCountHasBeenSet = false;

    bool m_dedicatedMasterEnabled;
    bool m_dedicatedMasterEnabledHasBeenSet = false;

    bool m_zoneAwarenessEnabled;
    bool m_zoneAwarenessEnabledHasBeenSet = false;

    ZoneAwarenessConfig m_zoneAwarenessConfig;
    bool m_zoneAwarenessConfigHasBeenSet = false;

    ESPartitionInstanceType m_dedicatedMasterType;
    bool m_dedicatedMasterTypeHasBeenSet = false;

    int m_dedicatedMasterCount;
    bool m_dedicatedMasterCountHasBeenSet = false;

    bool m_warmEnabled;
    bool m_warmEnabledHasBeenSet = false;

    ESWarmPartitionInstanceType m_warmType;
    bool m_warmTypeHasBeenSet = false;

    int m_warmCount;
    bool m_warmCountHasBeenSet = false;

    ColdStorageOptions m_coldStorageOptions;
    bool m_coldStorageOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
