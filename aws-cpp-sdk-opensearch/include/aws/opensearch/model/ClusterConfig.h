/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/OpenSearchPartitionInstanceType.h>
#include <aws/opensearch/model/ZoneAwarenessConfig.h>
#include <aws/opensearch/model/OpenSearchWarmPartitionInstanceType.h>
#include <aws/opensearch/model/ColdStorageOptions.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>The configuration for the domain cluster, such as the type and number of
   * instances.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/ClusterConfig">AWS
   * API Reference</a></p>
   */
  class AWS_OPENSEARCHSERVICE_API ClusterConfig
  {
  public:
    ClusterConfig();
    ClusterConfig(Aws::Utils::Json::JsonView jsonValue);
    ClusterConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The instance type for an OpenSearch cluster. UltraWarm instance types are not
     * supported for data instances. </p>
     */
    inline const OpenSearchPartitionInstanceType& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The instance type for an OpenSearch cluster. UltraWarm instance types are not
     * supported for data instances. </p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>The instance type for an OpenSearch cluster. UltraWarm instance types are not
     * supported for data instances. </p>
     */
    inline void SetInstanceType(const OpenSearchPartitionInstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The instance type for an OpenSearch cluster. UltraWarm instance types are not
     * supported for data instances. </p>
     */
    inline void SetInstanceType(OpenSearchPartitionInstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The instance type for an OpenSearch cluster. UltraWarm instance types are not
     * supported for data instances. </p>
     */
    inline ClusterConfig& WithInstanceType(const OpenSearchPartitionInstanceType& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The instance type for an OpenSearch cluster. UltraWarm instance types are not
     * supported for data instances. </p>
     */
    inline ClusterConfig& WithInstanceType(OpenSearchPartitionInstanceType&& value) { SetInstanceType(std::move(value)); return *this;}


    /**
     * <p>The number of instances in the specified domain cluster.</p>
     */
    inline int GetInstanceCount() const{ return m_instanceCount; }

    /**
     * <p>The number of instances in the specified domain cluster.</p>
     */
    inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }

    /**
     * <p>The number of instances in the specified domain cluster.</p>
     */
    inline void SetInstanceCount(int value) { m_instanceCountHasBeenSet = true; m_instanceCount = value; }

    /**
     * <p>The number of instances in the specified domain cluster.</p>
     */
    inline ClusterConfig& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}


    /**
     * <p>A boolean value to indicate whether a dedicated master node is enabled. See
     * <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/managedomains.html#managedomains-dedicatedmasternodes"
     * target="_blank">Dedicated master nodes in Amazon OpenSearch Service </a> for
     * more information. </p>
     */
    inline bool GetDedicatedMasterEnabled() const{ return m_dedicatedMasterEnabled; }

    /**
     * <p>A boolean value to indicate whether a dedicated master node is enabled. See
     * <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/managedomains.html#managedomains-dedicatedmasternodes"
     * target="_blank">Dedicated master nodes in Amazon OpenSearch Service </a> for
     * more information. </p>
     */
    inline bool DedicatedMasterEnabledHasBeenSet() const { return m_dedicatedMasterEnabledHasBeenSet; }

    /**
     * <p>A boolean value to indicate whether a dedicated master node is enabled. See
     * <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/managedomains.html#managedomains-dedicatedmasternodes"
     * target="_blank">Dedicated master nodes in Amazon OpenSearch Service </a> for
     * more information. </p>
     */
    inline void SetDedicatedMasterEnabled(bool value) { m_dedicatedMasterEnabledHasBeenSet = true; m_dedicatedMasterEnabled = value; }

    /**
     * <p>A boolean value to indicate whether a dedicated master node is enabled. See
     * <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/managedomains.html#managedomains-dedicatedmasternodes"
     * target="_blank">Dedicated master nodes in Amazon OpenSearch Service </a> for
     * more information. </p>
     */
    inline ClusterConfig& WithDedicatedMasterEnabled(bool value) { SetDedicatedMasterEnabled(value); return *this;}


    /**
     * <p>A boolean value to indicate whether zone awareness is enabled. See <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/managedomains-multiaz.html"
     * target="_blank">Configuring a multi-AZ domain in Amazon OpenSearch Service </a>
     * for more information. </p>
     */
    inline bool GetZoneAwarenessEnabled() const{ return m_zoneAwarenessEnabled; }

    /**
     * <p>A boolean value to indicate whether zone awareness is enabled. See <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/managedomains-multiaz.html"
     * target="_blank">Configuring a multi-AZ domain in Amazon OpenSearch Service </a>
     * for more information. </p>
     */
    inline bool ZoneAwarenessEnabledHasBeenSet() const { return m_zoneAwarenessEnabledHasBeenSet; }

    /**
     * <p>A boolean value to indicate whether zone awareness is enabled. See <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/managedomains-multiaz.html"
     * target="_blank">Configuring a multi-AZ domain in Amazon OpenSearch Service </a>
     * for more information. </p>
     */
    inline void SetZoneAwarenessEnabled(bool value) { m_zoneAwarenessEnabledHasBeenSet = true; m_zoneAwarenessEnabled = value; }

    /**
     * <p>A boolean value to indicate whether zone awareness is enabled. See <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/managedomains-multiaz.html"
     * target="_blank">Configuring a multi-AZ domain in Amazon OpenSearch Service </a>
     * for more information. </p>
     */
    inline ClusterConfig& WithZoneAwarenessEnabled(bool value) { SetZoneAwarenessEnabled(value); return *this;}


    /**
     * <p>The zone awareness configuration for a domain when zone awareness is
     * enabled.</p>
     */
    inline const ZoneAwarenessConfig& GetZoneAwarenessConfig() const{ return m_zoneAwarenessConfig; }

    /**
     * <p>The zone awareness configuration for a domain when zone awareness is
     * enabled.</p>
     */
    inline bool ZoneAwarenessConfigHasBeenSet() const { return m_zoneAwarenessConfigHasBeenSet; }

    /**
     * <p>The zone awareness configuration for a domain when zone awareness is
     * enabled.</p>
     */
    inline void SetZoneAwarenessConfig(const ZoneAwarenessConfig& value) { m_zoneAwarenessConfigHasBeenSet = true; m_zoneAwarenessConfig = value; }

    /**
     * <p>The zone awareness configuration for a domain when zone awareness is
     * enabled.</p>
     */
    inline void SetZoneAwarenessConfig(ZoneAwarenessConfig&& value) { m_zoneAwarenessConfigHasBeenSet = true; m_zoneAwarenessConfig = std::move(value); }

    /**
     * <p>The zone awareness configuration for a domain when zone awareness is
     * enabled.</p>
     */
    inline ClusterConfig& WithZoneAwarenessConfig(const ZoneAwarenessConfig& value) { SetZoneAwarenessConfig(value); return *this;}

    /**
     * <p>The zone awareness configuration for a domain when zone awareness is
     * enabled.</p>
     */
    inline ClusterConfig& WithZoneAwarenessConfig(ZoneAwarenessConfig&& value) { SetZoneAwarenessConfig(std::move(value)); return *this;}


    /**
     * <p>The instance type for a dedicated master node.</p>
     */
    inline const OpenSearchPartitionInstanceType& GetDedicatedMasterType() const{ return m_dedicatedMasterType; }

    /**
     * <p>The instance type for a dedicated master node.</p>
     */
    inline bool DedicatedMasterTypeHasBeenSet() const { return m_dedicatedMasterTypeHasBeenSet; }

    /**
     * <p>The instance type for a dedicated master node.</p>
     */
    inline void SetDedicatedMasterType(const OpenSearchPartitionInstanceType& value) { m_dedicatedMasterTypeHasBeenSet = true; m_dedicatedMasterType = value; }

    /**
     * <p>The instance type for a dedicated master node.</p>
     */
    inline void SetDedicatedMasterType(OpenSearchPartitionInstanceType&& value) { m_dedicatedMasterTypeHasBeenSet = true; m_dedicatedMasterType = std::move(value); }

    /**
     * <p>The instance type for a dedicated master node.</p>
     */
    inline ClusterConfig& WithDedicatedMasterType(const OpenSearchPartitionInstanceType& value) { SetDedicatedMasterType(value); return *this;}

    /**
     * <p>The instance type for a dedicated master node.</p>
     */
    inline ClusterConfig& WithDedicatedMasterType(OpenSearchPartitionInstanceType&& value) { SetDedicatedMasterType(std::move(value)); return *this;}


    /**
     * <p>Total number of dedicated master nodes, active and on standby, for the
     * cluster.</p>
     */
    inline int GetDedicatedMasterCount() const{ return m_dedicatedMasterCount; }

    /**
     * <p>Total number of dedicated master nodes, active and on standby, for the
     * cluster.</p>
     */
    inline bool DedicatedMasterCountHasBeenSet() const { return m_dedicatedMasterCountHasBeenSet; }

    /**
     * <p>Total number of dedicated master nodes, active and on standby, for the
     * cluster.</p>
     */
    inline void SetDedicatedMasterCount(int value) { m_dedicatedMasterCountHasBeenSet = true; m_dedicatedMasterCount = value; }

    /**
     * <p>Total number of dedicated master nodes, active and on standby, for the
     * cluster.</p>
     */
    inline ClusterConfig& WithDedicatedMasterCount(int value) { SetDedicatedMasterCount(value); return *this;}


    /**
     * <p>True to enable UltraWarm storage.</p>
     */
    inline bool GetWarmEnabled() const{ return m_warmEnabled; }

    /**
     * <p>True to enable UltraWarm storage.</p>
     */
    inline bool WarmEnabledHasBeenSet() const { return m_warmEnabledHasBeenSet; }

    /**
     * <p>True to enable UltraWarm storage.</p>
     */
    inline void SetWarmEnabled(bool value) { m_warmEnabledHasBeenSet = true; m_warmEnabled = value; }

    /**
     * <p>True to enable UltraWarm storage.</p>
     */
    inline ClusterConfig& WithWarmEnabled(bool value) { SetWarmEnabled(value); return *this;}


    /**
     * <p>The instance type for the OpenSearch cluster's warm nodes.</p>
     */
    inline const OpenSearchWarmPartitionInstanceType& GetWarmType() const{ return m_warmType; }

    /**
     * <p>The instance type for the OpenSearch cluster's warm nodes.</p>
     */
    inline bool WarmTypeHasBeenSet() const { return m_warmTypeHasBeenSet; }

    /**
     * <p>The instance type for the OpenSearch cluster's warm nodes.</p>
     */
    inline void SetWarmType(const OpenSearchWarmPartitionInstanceType& value) { m_warmTypeHasBeenSet = true; m_warmType = value; }

    /**
     * <p>The instance type for the OpenSearch cluster's warm nodes.</p>
     */
    inline void SetWarmType(OpenSearchWarmPartitionInstanceType&& value) { m_warmTypeHasBeenSet = true; m_warmType = std::move(value); }

    /**
     * <p>The instance type for the OpenSearch cluster's warm nodes.</p>
     */
    inline ClusterConfig& WithWarmType(const OpenSearchWarmPartitionInstanceType& value) { SetWarmType(value); return *this;}

    /**
     * <p>The instance type for the OpenSearch cluster's warm nodes.</p>
     */
    inline ClusterConfig& WithWarmType(OpenSearchWarmPartitionInstanceType&& value) { SetWarmType(std::move(value)); return *this;}


    /**
     * <p>The number of UltraWarm nodes in the cluster.</p>
     */
    inline int GetWarmCount() const{ return m_warmCount; }

    /**
     * <p>The number of UltraWarm nodes in the cluster.</p>
     */
    inline bool WarmCountHasBeenSet() const { return m_warmCountHasBeenSet; }

    /**
     * <p>The number of UltraWarm nodes in the cluster.</p>
     */
    inline void SetWarmCount(int value) { m_warmCountHasBeenSet = true; m_warmCount = value; }

    /**
     * <p>The number of UltraWarm nodes in the cluster.</p>
     */
    inline ClusterConfig& WithWarmCount(int value) { SetWarmCount(value); return *this;}


    /**
     * <p>Specifies the <code>ColdStorageOptions</code> config for a Domain</p>
     */
    inline const ColdStorageOptions& GetColdStorageOptions() const{ return m_coldStorageOptions; }

    /**
     * <p>Specifies the <code>ColdStorageOptions</code> config for a Domain</p>
     */
    inline bool ColdStorageOptionsHasBeenSet() const { return m_coldStorageOptionsHasBeenSet; }

    /**
     * <p>Specifies the <code>ColdStorageOptions</code> config for a Domain</p>
     */
    inline void SetColdStorageOptions(const ColdStorageOptions& value) { m_coldStorageOptionsHasBeenSet = true; m_coldStorageOptions = value; }

    /**
     * <p>Specifies the <code>ColdStorageOptions</code> config for a Domain</p>
     */
    inline void SetColdStorageOptions(ColdStorageOptions&& value) { m_coldStorageOptionsHasBeenSet = true; m_coldStorageOptions = std::move(value); }

    /**
     * <p>Specifies the <code>ColdStorageOptions</code> config for a Domain</p>
     */
    inline ClusterConfig& WithColdStorageOptions(const ColdStorageOptions& value) { SetColdStorageOptions(value); return *this;}

    /**
     * <p>Specifies the <code>ColdStorageOptions</code> config for a Domain</p>
     */
    inline ClusterConfig& WithColdStorageOptions(ColdStorageOptions&& value) { SetColdStorageOptions(std::move(value)); return *this;}

  private:

    OpenSearchPartitionInstanceType m_instanceType;
    bool m_instanceTypeHasBeenSet;

    int m_instanceCount;
    bool m_instanceCountHasBeenSet;

    bool m_dedicatedMasterEnabled;
    bool m_dedicatedMasterEnabledHasBeenSet;

    bool m_zoneAwarenessEnabled;
    bool m_zoneAwarenessEnabledHasBeenSet;

    ZoneAwarenessConfig m_zoneAwarenessConfig;
    bool m_zoneAwarenessConfigHasBeenSet;

    OpenSearchPartitionInstanceType m_dedicatedMasterType;
    bool m_dedicatedMasterTypeHasBeenSet;

    int m_dedicatedMasterCount;
    bool m_dedicatedMasterCountHasBeenSet;

    bool m_warmEnabled;
    bool m_warmEnabledHasBeenSet;

    OpenSearchWarmPartitionInstanceType m_warmType;
    bool m_warmTypeHasBeenSet;

    int m_warmCount;
    bool m_warmCountHasBeenSet;

    ColdStorageOptions m_coldStorageOptions;
    bool m_coldStorageOptionsHasBeenSet;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
