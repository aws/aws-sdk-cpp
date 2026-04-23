/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/model/ESPartitionInstanceType.h>
#include <aws/es/model/ZoneAwarenessConfig.h>
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
  class AWS_ELASTICSEARCHSERVICE_API ElasticsearchClusterConfig
  {
  public:
    ElasticsearchClusterConfig();
    ElasticsearchClusterConfig(Aws::Utils::Json::JsonView jsonValue);
    ElasticsearchClusterConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The instance type for an Elasticsearch cluster.</p>
     */
    inline const ESPartitionInstanceType& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The instance type for an Elasticsearch cluster.</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>The instance type for an Elasticsearch cluster.</p>
     */
    inline void SetInstanceType(const ESPartitionInstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The instance type for an Elasticsearch cluster.</p>
     */
    inline void SetInstanceType(ESPartitionInstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The instance type for an Elasticsearch cluster.</p>
     */
    inline ElasticsearchClusterConfig& WithInstanceType(const ESPartitionInstanceType& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The instance type for an Elasticsearch cluster.</p>
     */
    inline ElasticsearchClusterConfig& WithInstanceType(ESPartitionInstanceType&& value) { SetInstanceType(std::move(value)); return *this;}


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
    inline ElasticsearchClusterConfig& WithInstanceCount(int value) { SetInstanceCount(value); return *this;}


    /**
     * <p>A boolean value to indicate whether a dedicated master node is enabled. See
     * <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-managedomains.html#es-managedomains-dedicatedmasternodes"
     * target="_blank">About Dedicated Master Nodes</a> for more information.</p>
     */
    inline bool GetDedicatedMasterEnabled() const{ return m_dedicatedMasterEnabled; }

    /**
     * <p>A boolean value to indicate whether a dedicated master node is enabled. See
     * <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-managedomains.html#es-managedomains-dedicatedmasternodes"
     * target="_blank">About Dedicated Master Nodes</a> for more information.</p>
     */
    inline bool DedicatedMasterEnabledHasBeenSet() const { return m_dedicatedMasterEnabledHasBeenSet; }

    /**
     * <p>A boolean value to indicate whether a dedicated master node is enabled. See
     * <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-managedomains.html#es-managedomains-dedicatedmasternodes"
     * target="_blank">About Dedicated Master Nodes</a> for more information.</p>
     */
    inline void SetDedicatedMasterEnabled(bool value) { m_dedicatedMasterEnabledHasBeenSet = true; m_dedicatedMasterEnabled = value; }

    /**
     * <p>A boolean value to indicate whether a dedicated master node is enabled. See
     * <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-managedomains.html#es-managedomains-dedicatedmasternodes"
     * target="_blank">About Dedicated Master Nodes</a> for more information.</p>
     */
    inline ElasticsearchClusterConfig& WithDedicatedMasterEnabled(bool value) { SetDedicatedMasterEnabled(value); return *this;}


    /**
     * <p>A boolean value to indicate whether zone awareness is enabled. See <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-managedomains.html#es-managedomains-zoneawareness"
     * target="_blank">About Zone Awareness</a> for more information.</p>
     */
    inline bool GetZoneAwarenessEnabled() const{ return m_zoneAwarenessEnabled; }

    /**
     * <p>A boolean value to indicate whether zone awareness is enabled. See <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-managedomains.html#es-managedomains-zoneawareness"
     * target="_blank">About Zone Awareness</a> for more information.</p>
     */
    inline bool ZoneAwarenessEnabledHasBeenSet() const { return m_zoneAwarenessEnabledHasBeenSet; }

    /**
     * <p>A boolean value to indicate whether zone awareness is enabled. See <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-managedomains.html#es-managedomains-zoneawareness"
     * target="_blank">About Zone Awareness</a> for more information.</p>
     */
    inline void SetZoneAwarenessEnabled(bool value) { m_zoneAwarenessEnabledHasBeenSet = true; m_zoneAwarenessEnabled = value; }

    /**
     * <p>A boolean value to indicate whether zone awareness is enabled. See <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-managedomains.html#es-managedomains-zoneawareness"
     * target="_blank">About Zone Awareness</a> for more information.</p>
     */
    inline ElasticsearchClusterConfig& WithZoneAwarenessEnabled(bool value) { SetZoneAwarenessEnabled(value); return *this;}


    /**
     * <p>Specifies the zone awareness configuration for a domain when zone awareness
     * is enabled.</p>
     */
    inline const ZoneAwarenessConfig& GetZoneAwarenessConfig() const{ return m_zoneAwarenessConfig; }

    /**
     * <p>Specifies the zone awareness configuration for a domain when zone awareness
     * is enabled.</p>
     */
    inline bool ZoneAwarenessConfigHasBeenSet() const { return m_zoneAwarenessConfigHasBeenSet; }

    /**
     * <p>Specifies the zone awareness configuration for a domain when zone awareness
     * is enabled.</p>
     */
    inline void SetZoneAwarenessConfig(const ZoneAwarenessConfig& value) { m_zoneAwarenessConfigHasBeenSet = true; m_zoneAwarenessConfig = value; }

    /**
     * <p>Specifies the zone awareness configuration for a domain when zone awareness
     * is enabled.</p>
     */
    inline void SetZoneAwarenessConfig(ZoneAwarenessConfig&& value) { m_zoneAwarenessConfigHasBeenSet = true; m_zoneAwarenessConfig = std::move(value); }

    /**
     * <p>Specifies the zone awareness configuration for a domain when zone awareness
     * is enabled.</p>
     */
    inline ElasticsearchClusterConfig& WithZoneAwarenessConfig(const ZoneAwarenessConfig& value) { SetZoneAwarenessConfig(value); return *this;}

    /**
     * <p>Specifies the zone awareness configuration for a domain when zone awareness
     * is enabled.</p>
     */
    inline ElasticsearchClusterConfig& WithZoneAwarenessConfig(ZoneAwarenessConfig&& value) { SetZoneAwarenessConfig(std::move(value)); return *this;}


    /**
     * <p>The instance type for a dedicated master node.</p>
     */
    inline const ESPartitionInstanceType& GetDedicatedMasterType() const{ return m_dedicatedMasterType; }

    /**
     * <p>The instance type for a dedicated master node.</p>
     */
    inline bool DedicatedMasterTypeHasBeenSet() const { return m_dedicatedMasterTypeHasBeenSet; }

    /**
     * <p>The instance type for a dedicated master node.</p>
     */
    inline void SetDedicatedMasterType(const ESPartitionInstanceType& value) { m_dedicatedMasterTypeHasBeenSet = true; m_dedicatedMasterType = value; }

    /**
     * <p>The instance type for a dedicated master node.</p>
     */
    inline void SetDedicatedMasterType(ESPartitionInstanceType&& value) { m_dedicatedMasterTypeHasBeenSet = true; m_dedicatedMasterType = std::move(value); }

    /**
     * <p>The instance type for a dedicated master node.</p>
     */
    inline ElasticsearchClusterConfig& WithDedicatedMasterType(const ESPartitionInstanceType& value) { SetDedicatedMasterType(value); return *this;}

    /**
     * <p>The instance type for a dedicated master node.</p>
     */
    inline ElasticsearchClusterConfig& WithDedicatedMasterType(ESPartitionInstanceType&& value) { SetDedicatedMasterType(std::move(value)); return *this;}


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
    inline ElasticsearchClusterConfig& WithDedicatedMasterCount(int value) { SetDedicatedMasterCount(value); return *this;}

  private:

    ESPartitionInstanceType m_instanceType;
    bool m_instanceTypeHasBeenSet;

    int m_instanceCount;
    bool m_instanceCountHasBeenSet;

    bool m_dedicatedMasterEnabled;
    bool m_dedicatedMasterEnabledHasBeenSet;

    bool m_zoneAwarenessEnabled;
    bool m_zoneAwarenessEnabledHasBeenSet;

    ZoneAwarenessConfig m_zoneAwarenessConfig;
    bool m_zoneAwarenessConfigHasBeenSet;

    ESPartitionInstanceType m_dedicatedMasterType;
    bool m_dedicatedMasterTypeHasBeenSet;

    int m_dedicatedMasterCount;
    bool m_dedicatedMasterCountHasBeenSet;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
