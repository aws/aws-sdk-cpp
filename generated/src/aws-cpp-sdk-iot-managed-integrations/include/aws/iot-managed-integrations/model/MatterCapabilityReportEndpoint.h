/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot-managed-integrations/model/MatterCapabilityReportCluster.h>
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
namespace IoTManagedIntegrations
{
namespace Model
{

  /**
   * <p>Matter endpoint used in capability report.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iot-managed-integrations-2025-03-03/MatterCapabilityReportEndpoint">AWS
   * API Reference</a></p>
   */
  class MatterCapabilityReportEndpoint
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API MatterCapabilityReportEndpoint() = default;
    AWS_IOTMANAGEDINTEGRATIONS_API MatterCapabilityReportEndpoint(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API MatterCapabilityReportEndpoint& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTMANAGEDINTEGRATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The id of the Amazon Web Services Matter capability report endpoint.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    MatterCapabilityReportEndpoint& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of device.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeviceTypes() const { return m_deviceTypes; }
    inline bool DeviceTypesHasBeenSet() const { return m_deviceTypesHasBeenSet; }
    template<typename DeviceTypesT = Aws::Vector<Aws::String>>
    void SetDeviceTypes(DeviceTypesT&& value) { m_deviceTypesHasBeenSet = true; m_deviceTypes = std::forward<DeviceTypesT>(value); }
    template<typename DeviceTypesT = Aws::Vector<Aws::String>>
    MatterCapabilityReportEndpoint& WithDeviceTypes(DeviceTypesT&& value) { SetDeviceTypes(std::forward<DeviceTypesT>(value)); return *this;}
    template<typename DeviceTypesT = Aws::String>
    MatterCapabilityReportEndpoint& AddDeviceTypes(DeviceTypesT&& value) { m_deviceTypesHasBeenSet = true; m_deviceTypes.emplace_back(std::forward<DeviceTypesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Matter clusters used in capability report.</p>
     */
    inline const Aws::Vector<MatterCapabilityReportCluster>& GetClusters() const { return m_clusters; }
    inline bool ClustersHasBeenSet() const { return m_clustersHasBeenSet; }
    template<typename ClustersT = Aws::Vector<MatterCapabilityReportCluster>>
    void SetClusters(ClustersT&& value) { m_clustersHasBeenSet = true; m_clusters = std::forward<ClustersT>(value); }
    template<typename ClustersT = Aws::Vector<MatterCapabilityReportCluster>>
    MatterCapabilityReportEndpoint& WithClusters(ClustersT&& value) { SetClusters(std::forward<ClustersT>(value)); return *this;}
    template<typename ClustersT = MatterCapabilityReportCluster>
    MatterCapabilityReportEndpoint& AddClusters(ClustersT&& value) { m_clustersHasBeenSet = true; m_clusters.emplace_back(std::forward<ClustersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Heirachy of child endpoints contained in the given endpoint.</p>
     */
    inline const Aws::Vector<Aws::String>& GetParts() const { return m_parts; }
    inline bool PartsHasBeenSet() const { return m_partsHasBeenSet; }
    template<typename PartsT = Aws::Vector<Aws::String>>
    void SetParts(PartsT&& value) { m_partsHasBeenSet = true; m_parts = std::forward<PartsT>(value); }
    template<typename PartsT = Aws::Vector<Aws::String>>
    MatterCapabilityReportEndpoint& WithParts(PartsT&& value) { SetParts(std::forward<PartsT>(value)); return *this;}
    template<typename PartsT = Aws::String>
    MatterCapabilityReportEndpoint& AddParts(PartsT&& value) { m_partsHasBeenSet = true; m_parts.emplace_back(std::forward<PartsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Semantic information related to endpoint.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSemanticTags() const { return m_semanticTags; }
    inline bool SemanticTagsHasBeenSet() const { return m_semanticTagsHasBeenSet; }
    template<typename SemanticTagsT = Aws::Vector<Aws::String>>
    void SetSemanticTags(SemanticTagsT&& value) { m_semanticTagsHasBeenSet = true; m_semanticTags = std::forward<SemanticTagsT>(value); }
    template<typename SemanticTagsT = Aws::Vector<Aws::String>>
    MatterCapabilityReportEndpoint& WithSemanticTags(SemanticTagsT&& value) { SetSemanticTags(std::forward<SemanticTagsT>(value)); return *this;}
    template<typename SemanticTagsT = Aws::String>
    MatterCapabilityReportEndpoint& AddSemanticTags(SemanticTagsT&& value) { m_semanticTagsHasBeenSet = true; m_semanticTags.emplace_back(std::forward<SemanticTagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Semantic information related to endpoint.</p>
     */
    inline const Aws::Vector<Aws::String>& GetClientClusters() const { return m_clientClusters; }
    inline bool ClientClustersHasBeenSet() const { return m_clientClustersHasBeenSet; }
    template<typename ClientClustersT = Aws::Vector<Aws::String>>
    void SetClientClusters(ClientClustersT&& value) { m_clientClustersHasBeenSet = true; m_clientClusters = std::forward<ClientClustersT>(value); }
    template<typename ClientClustersT = Aws::Vector<Aws::String>>
    MatterCapabilityReportEndpoint& WithClientClusters(ClientClustersT&& value) { SetClientClusters(std::forward<ClientClustersT>(value)); return *this;}
    template<typename ClientClustersT = Aws::String>
    MatterCapabilityReportEndpoint& AddClientClusters(ClientClustersT&& value) { m_clientClustersHasBeenSet = true; m_clientClusters.emplace_back(std::forward<ClientClustersT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::Vector<Aws::String> m_deviceTypes;
    bool m_deviceTypesHasBeenSet = false;

    Aws::Vector<MatterCapabilityReportCluster> m_clusters;
    bool m_clustersHasBeenSet = false;

    Aws::Vector<Aws::String> m_parts;
    bool m_partsHasBeenSet = false;

    Aws::Vector<Aws::String> m_semanticTags;
    bool m_semanticTagsHasBeenSet = false;

    Aws::Vector<Aws::String> m_clientClusters;
    bool m_clientClustersHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
