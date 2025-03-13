/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/es/model/ElasticsearchClusterConfig.h>
#include <aws/es/model/EBSOptions.h>
#include <aws/es/model/SnapshotOptions.h>
#include <aws/es/model/VPCDerivedInfo.h>
#include <aws/es/model/CognitoOptions.h>
#include <aws/es/model/EncryptionAtRestOptions.h>
#include <aws/es/model/NodeToNodeEncryptionOptions.h>
#include <aws/es/model/ServiceSoftwareOptions.h>
#include <aws/es/model/DomainEndpointOptions.h>
#include <aws/es/model/AdvancedSecurityOptions.h>
#include <aws/es/model/AutoTuneOptionsOutput.h>
#include <aws/es/model/ChangeProgressDetails.h>
#include <aws/es/model/DomainProcessingStatusType.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/es/model/LogType.h>
#include <aws/es/model/LogPublishingOption.h>
#include <aws/es/model/ModifyingProperties.h>
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
   * <p>The current status of an Elasticsearch domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/ElasticsearchDomainStatus">AWS
   * API Reference</a></p>
   */
  class ElasticsearchDomainStatus
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API ElasticsearchDomainStatus() = default;
    AWS_ELASTICSEARCHSERVICE_API ElasticsearchDomainStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API ElasticsearchDomainStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the specified Elasticsearch domain.</p>
     */
    inline const Aws::String& GetDomainId() const { return m_domainId; }
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
    template<typename DomainIdT = Aws::String>
    void SetDomainId(DomainIdT&& value) { m_domainIdHasBeenSet = true; m_domainId = std::forward<DomainIdT>(value); }
    template<typename DomainIdT = Aws::String>
    ElasticsearchDomainStatus& WithDomainId(DomainIdT&& value) { SetDomainId(std::forward<DomainIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of an Elasticsearch domain. Domain names are unique across the
     * domains owned by an account within an AWS region. Domain names start with a
     * letter or number and can contain the following characters: a-z (lowercase), 0-9,
     * and - (hyphen).</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    ElasticsearchDomainStatus& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon resource name (ARN) of an Elasticsearch domain. See <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/index.html?Using_Identifiers.html"
     * target="_blank">Identifiers for IAM Entities</a> in <i>Using AWS Identity and
     * Access Management</i> for more information.</p>
     */
    inline const Aws::String& GetARN() const { return m_aRN; }
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }
    template<typename ARNT = Aws::String>
    void SetARN(ARNT&& value) { m_aRNHasBeenSet = true; m_aRN = std::forward<ARNT>(value); }
    template<typename ARNT = Aws::String>
    ElasticsearchDomainStatus& WithARN(ARNT&& value) { SetARN(std::forward<ARNT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain creation status. <code>True</code> if the creation of an
     * Elasticsearch domain is complete. <code>False</code> if domain creation is still
     * in progress.</p>
     */
    inline bool GetCreated() const { return m_created; }
    inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }
    inline void SetCreated(bool value) { m_createdHasBeenSet = true; m_created = value; }
    inline ElasticsearchDomainStatus& WithCreated(bool value) { SetCreated(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain deletion status. <code>True</code> if a delete request has been
     * received for the domain but resource cleanup is still in progress.
     * <code>False</code> if the domain has not been deleted. Once domain deletion is
     * complete, the status of the domain is no longer returned.</p>
     */
    inline bool GetDeleted() const { return m_deleted; }
    inline bool DeletedHasBeenSet() const { return m_deletedHasBeenSet; }
    inline void SetDeleted(bool value) { m_deletedHasBeenSet = true; m_deleted = value; }
    inline ElasticsearchDomainStatus& WithDeleted(bool value) { SetDeleted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Elasticsearch domain endpoint that you use to submit index and search
     * requests.</p>
     */
    inline const Aws::String& GetEndpoint() const { return m_endpoint; }
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
    template<typename EndpointT = Aws::String>
    void SetEndpoint(EndpointT&& value) { m_endpointHasBeenSet = true; m_endpoint = std::forward<EndpointT>(value); }
    template<typename EndpointT = Aws::String>
    ElasticsearchDomainStatus& WithEndpoint(EndpointT&& value) { SetEndpoint(std::forward<EndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Map containing the Elasticsearch domain endpoints used to submit index and
     * search requests. Example <code>key, value</code>:
     * <code>'vpc','vpc-endpoint-h2dsd34efgyghrtguk5gt6j2foh4.us-east-1.es.amazonaws.com'</code>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEndpoints() const { return m_endpoints; }
    inline bool EndpointsHasBeenSet() const { return m_endpointsHasBeenSet; }
    template<typename EndpointsT = Aws::Map<Aws::String, Aws::String>>
    void SetEndpoints(EndpointsT&& value) { m_endpointsHasBeenSet = true; m_endpoints = std::forward<EndpointsT>(value); }
    template<typename EndpointsT = Aws::Map<Aws::String, Aws::String>>
    ElasticsearchDomainStatus& WithEndpoints(EndpointsT&& value) { SetEndpoints(std::forward<EndpointsT>(value)); return *this;}
    template<typename EndpointsKeyT = Aws::String, typename EndpointsValueT = Aws::String>
    ElasticsearchDomainStatus& AddEndpoints(EndpointsKeyT&& key, EndpointsValueT&& value) {
      m_endpointsHasBeenSet = true; m_endpoints.emplace(std::forward<EndpointsKeyT>(key), std::forward<EndpointsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The status of the Elasticsearch domain configuration. <code>True</code> if
     * Amazon Elasticsearch Service is processing configuration changes.
     * <code>False</code> if the configuration is active.</p>
     */
    inline bool GetProcessing() const { return m_processing; }
    inline bool ProcessingHasBeenSet() const { return m_processingHasBeenSet; }
    inline void SetProcessing(bool value) { m_processingHasBeenSet = true; m_processing = value; }
    inline ElasticsearchDomainStatus& WithProcessing(bool value) { SetProcessing(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of an Elasticsearch domain version upgrade. <code>True</code> if
     * Amazon Elasticsearch Service is undergoing a version upgrade. <code>False</code>
     * if the configuration is active.</p>
     */
    inline bool GetUpgradeProcessing() const { return m_upgradeProcessing; }
    inline bool UpgradeProcessingHasBeenSet() const { return m_upgradeProcessingHasBeenSet; }
    inline void SetUpgradeProcessing(bool value) { m_upgradeProcessingHasBeenSet = true; m_upgradeProcessing = value; }
    inline ElasticsearchDomainStatus& WithUpgradeProcessing(bool value) { SetUpgradeProcessing(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetElasticsearchVersion() const { return m_elasticsearchVersion; }
    inline bool ElasticsearchVersionHasBeenSet() const { return m_elasticsearchVersionHasBeenSet; }
    template<typename ElasticsearchVersionT = Aws::String>
    void SetElasticsearchVersion(ElasticsearchVersionT&& value) { m_elasticsearchVersionHasBeenSet = true; m_elasticsearchVersion = std::forward<ElasticsearchVersionT>(value); }
    template<typename ElasticsearchVersionT = Aws::String>
    ElasticsearchDomainStatus& WithElasticsearchVersion(ElasticsearchVersionT&& value) { SetElasticsearchVersion(std::forward<ElasticsearchVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type and number of instances in the domain cluster.</p>
     */
    inline const ElasticsearchClusterConfig& GetElasticsearchClusterConfig() const { return m_elasticsearchClusterConfig; }
    inline bool ElasticsearchClusterConfigHasBeenSet() const { return m_elasticsearchClusterConfigHasBeenSet; }
    template<typename ElasticsearchClusterConfigT = ElasticsearchClusterConfig>
    void SetElasticsearchClusterConfig(ElasticsearchClusterConfigT&& value) { m_elasticsearchClusterConfigHasBeenSet = true; m_elasticsearchClusterConfig = std::forward<ElasticsearchClusterConfigT>(value); }
    template<typename ElasticsearchClusterConfigT = ElasticsearchClusterConfig>
    ElasticsearchDomainStatus& WithElasticsearchClusterConfig(ElasticsearchClusterConfigT&& value) { SetElasticsearchClusterConfig(std::forward<ElasticsearchClusterConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>EBSOptions</code> for the specified domain. See <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-createupdatedomains.html#es-createdomain-configure-ebs"
     * target="_blank">Configuring EBS-based Storage</a> for more information.</p>
     */
    inline const EBSOptions& GetEBSOptions() const { return m_eBSOptions; }
    inline bool EBSOptionsHasBeenSet() const { return m_eBSOptionsHasBeenSet; }
    template<typename EBSOptionsT = EBSOptions>
    void SetEBSOptions(EBSOptionsT&& value) { m_eBSOptionsHasBeenSet = true; m_eBSOptions = std::forward<EBSOptionsT>(value); }
    template<typename EBSOptionsT = EBSOptions>
    ElasticsearchDomainStatus& WithEBSOptions(EBSOptionsT&& value) { SetEBSOptions(std::forward<EBSOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> IAM access policy as a JSON-formatted string.</p>
     */
    inline const Aws::String& GetAccessPolicies() const { return m_accessPolicies; }
    inline bool AccessPoliciesHasBeenSet() const { return m_accessPoliciesHasBeenSet; }
    template<typename AccessPoliciesT = Aws::String>
    void SetAccessPolicies(AccessPoliciesT&& value) { m_accessPoliciesHasBeenSet = true; m_accessPolicies = std::forward<AccessPoliciesT>(value); }
    template<typename AccessPoliciesT = Aws::String>
    ElasticsearchDomainStatus& WithAccessPolicies(AccessPoliciesT&& value) { SetAccessPolicies(std::forward<AccessPoliciesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the status of the <code>SnapshotOptions</code></p>
     */
    inline const SnapshotOptions& GetSnapshotOptions() const { return m_snapshotOptions; }
    inline bool SnapshotOptionsHasBeenSet() const { return m_snapshotOptionsHasBeenSet; }
    template<typename SnapshotOptionsT = SnapshotOptions>
    void SetSnapshotOptions(SnapshotOptionsT&& value) { m_snapshotOptionsHasBeenSet = true; m_snapshotOptions = std::forward<SnapshotOptionsT>(value); }
    template<typename SnapshotOptionsT = SnapshotOptions>
    ElasticsearchDomainStatus& WithSnapshotOptions(SnapshotOptionsT&& value) { SetSnapshotOptions(std::forward<SnapshotOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>VPCOptions</code> for the specified domain. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-vpc.html"
     * target="_blank">VPC Endpoints for Amazon Elasticsearch Service Domains</a>.</p>
     */
    inline const VPCDerivedInfo& GetVPCOptions() const { return m_vPCOptions; }
    inline bool VPCOptionsHasBeenSet() const { return m_vPCOptionsHasBeenSet; }
    template<typename VPCOptionsT = VPCDerivedInfo>
    void SetVPCOptions(VPCOptionsT&& value) { m_vPCOptionsHasBeenSet = true; m_vPCOptions = std::forward<VPCOptionsT>(value); }
    template<typename VPCOptionsT = VPCDerivedInfo>
    ElasticsearchDomainStatus& WithVPCOptions(VPCOptionsT&& value) { SetVPCOptions(std::forward<VPCOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>CognitoOptions</code> for the specified domain. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-cognito-auth.html"
     * target="_blank">Amazon Cognito Authentication for Kibana</a>.</p>
     */
    inline const CognitoOptions& GetCognitoOptions() const { return m_cognitoOptions; }
    inline bool CognitoOptionsHasBeenSet() const { return m_cognitoOptionsHasBeenSet; }
    template<typename CognitoOptionsT = CognitoOptions>
    void SetCognitoOptions(CognitoOptionsT&& value) { m_cognitoOptionsHasBeenSet = true; m_cognitoOptions = std::forward<CognitoOptionsT>(value); }
    template<typename CognitoOptionsT = CognitoOptions>
    ElasticsearchDomainStatus& WithCognitoOptions(CognitoOptionsT&& value) { SetCognitoOptions(std::forward<CognitoOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the status of the <code>EncryptionAtRestOptions</code>.</p>
     */
    inline const EncryptionAtRestOptions& GetEncryptionAtRestOptions() const { return m_encryptionAtRestOptions; }
    inline bool EncryptionAtRestOptionsHasBeenSet() const { return m_encryptionAtRestOptionsHasBeenSet; }
    template<typename EncryptionAtRestOptionsT = EncryptionAtRestOptions>
    void SetEncryptionAtRestOptions(EncryptionAtRestOptionsT&& value) { m_encryptionAtRestOptionsHasBeenSet = true; m_encryptionAtRestOptions = std::forward<EncryptionAtRestOptionsT>(value); }
    template<typename EncryptionAtRestOptionsT = EncryptionAtRestOptions>
    ElasticsearchDomainStatus& WithEncryptionAtRestOptions(EncryptionAtRestOptionsT&& value) { SetEncryptionAtRestOptions(std::forward<EncryptionAtRestOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the status of the <code>NodeToNodeEncryptionOptions</code>.</p>
     */
    inline const NodeToNodeEncryptionOptions& GetNodeToNodeEncryptionOptions() const { return m_nodeToNodeEncryptionOptions; }
    inline bool NodeToNodeEncryptionOptionsHasBeenSet() const { return m_nodeToNodeEncryptionOptionsHasBeenSet; }
    template<typename NodeToNodeEncryptionOptionsT = NodeToNodeEncryptionOptions>
    void SetNodeToNodeEncryptionOptions(NodeToNodeEncryptionOptionsT&& value) { m_nodeToNodeEncryptionOptionsHasBeenSet = true; m_nodeToNodeEncryptionOptions = std::forward<NodeToNodeEncryptionOptionsT>(value); }
    template<typename NodeToNodeEncryptionOptionsT = NodeToNodeEncryptionOptions>
    ElasticsearchDomainStatus& WithNodeToNodeEncryptionOptions(NodeToNodeEncryptionOptionsT&& value) { SetNodeToNodeEncryptionOptions(std::forward<NodeToNodeEncryptionOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the status of the <code>AdvancedOptions</code></p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAdvancedOptions() const { return m_advancedOptions; }
    inline bool AdvancedOptionsHasBeenSet() const { return m_advancedOptionsHasBeenSet; }
    template<typename AdvancedOptionsT = Aws::Map<Aws::String, Aws::String>>
    void SetAdvancedOptions(AdvancedOptionsT&& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions = std::forward<AdvancedOptionsT>(value); }
    template<typename AdvancedOptionsT = Aws::Map<Aws::String, Aws::String>>
    ElasticsearchDomainStatus& WithAdvancedOptions(AdvancedOptionsT&& value) { SetAdvancedOptions(std::forward<AdvancedOptionsT>(value)); return *this;}
    template<typename AdvancedOptionsKeyT = Aws::String, typename AdvancedOptionsValueT = Aws::String>
    ElasticsearchDomainStatus& AddAdvancedOptions(AdvancedOptionsKeyT&& key, AdvancedOptionsValueT&& value) {
      m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(std::forward<AdvancedOptionsKeyT>(key), std::forward<AdvancedOptionsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Log publishing options for the given domain.</p>
     */
    inline const Aws::Map<LogType, LogPublishingOption>& GetLogPublishingOptions() const { return m_logPublishingOptions; }
    inline bool LogPublishingOptionsHasBeenSet() const { return m_logPublishingOptionsHasBeenSet; }
    template<typename LogPublishingOptionsT = Aws::Map<LogType, LogPublishingOption>>
    void SetLogPublishingOptions(LogPublishingOptionsT&& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions = std::forward<LogPublishingOptionsT>(value); }
    template<typename LogPublishingOptionsT = Aws::Map<LogType, LogPublishingOption>>
    ElasticsearchDomainStatus& WithLogPublishingOptions(LogPublishingOptionsT&& value) { SetLogPublishingOptions(std::forward<LogPublishingOptionsT>(value)); return *this;}
    inline ElasticsearchDomainStatus& AddLogPublishingOptions(LogType key, LogPublishingOption value) {
      m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The current status of the Elasticsearch domain's service software.</p>
     */
    inline const ServiceSoftwareOptions& GetServiceSoftwareOptions() const { return m_serviceSoftwareOptions; }
    inline bool ServiceSoftwareOptionsHasBeenSet() const { return m_serviceSoftwareOptionsHasBeenSet; }
    template<typename ServiceSoftwareOptionsT = ServiceSoftwareOptions>
    void SetServiceSoftwareOptions(ServiceSoftwareOptionsT&& value) { m_serviceSoftwareOptionsHasBeenSet = true; m_serviceSoftwareOptions = std::forward<ServiceSoftwareOptionsT>(value); }
    template<typename ServiceSoftwareOptionsT = ServiceSoftwareOptions>
    ElasticsearchDomainStatus& WithServiceSoftwareOptions(ServiceSoftwareOptionsT&& value) { SetServiceSoftwareOptions(std::forward<ServiceSoftwareOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the Elasticsearch domain's endpoint options.</p>
     */
    inline const DomainEndpointOptions& GetDomainEndpointOptions() const { return m_domainEndpointOptions; }
    inline bool DomainEndpointOptionsHasBeenSet() const { return m_domainEndpointOptionsHasBeenSet; }
    template<typename DomainEndpointOptionsT = DomainEndpointOptions>
    void SetDomainEndpointOptions(DomainEndpointOptionsT&& value) { m_domainEndpointOptionsHasBeenSet = true; m_domainEndpointOptions = std::forward<DomainEndpointOptionsT>(value); }
    template<typename DomainEndpointOptionsT = DomainEndpointOptions>
    ElasticsearchDomainStatus& WithDomainEndpointOptions(DomainEndpointOptionsT&& value) { SetDomainEndpointOptions(std::forward<DomainEndpointOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the Elasticsearch domain's advanced security
     * options.</p>
     */
    inline const AdvancedSecurityOptions& GetAdvancedSecurityOptions() const { return m_advancedSecurityOptions; }
    inline bool AdvancedSecurityOptionsHasBeenSet() const { return m_advancedSecurityOptionsHasBeenSet; }
    template<typename AdvancedSecurityOptionsT = AdvancedSecurityOptions>
    void SetAdvancedSecurityOptions(AdvancedSecurityOptionsT&& value) { m_advancedSecurityOptionsHasBeenSet = true; m_advancedSecurityOptions = std::forward<AdvancedSecurityOptionsT>(value); }
    template<typename AdvancedSecurityOptionsT = AdvancedSecurityOptions>
    ElasticsearchDomainStatus& WithAdvancedSecurityOptions(AdvancedSecurityOptionsT&& value) { SetAdvancedSecurityOptions(std::forward<AdvancedSecurityOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the Elasticsearch domain's Auto-Tune options.</p>
     */
    inline const AutoTuneOptionsOutput& GetAutoTuneOptions() const { return m_autoTuneOptions; }
    inline bool AutoTuneOptionsHasBeenSet() const { return m_autoTuneOptionsHasBeenSet; }
    template<typename AutoTuneOptionsT = AutoTuneOptionsOutput>
    void SetAutoTuneOptions(AutoTuneOptionsT&& value) { m_autoTuneOptionsHasBeenSet = true; m_autoTuneOptions = std::forward<AutoTuneOptionsT>(value); }
    template<typename AutoTuneOptionsT = AutoTuneOptionsOutput>
    ElasticsearchDomainStatus& WithAutoTuneOptions(AutoTuneOptionsT&& value) { SetAutoTuneOptions(std::forward<AutoTuneOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies change details of the domain configuration change.</p>
     */
    inline const ChangeProgressDetails& GetChangeProgressDetails() const { return m_changeProgressDetails; }
    inline bool ChangeProgressDetailsHasBeenSet() const { return m_changeProgressDetailsHasBeenSet; }
    template<typename ChangeProgressDetailsT = ChangeProgressDetails>
    void SetChangeProgressDetails(ChangeProgressDetailsT&& value) { m_changeProgressDetailsHasBeenSet = true; m_changeProgressDetails = std::forward<ChangeProgressDetailsT>(value); }
    template<typename ChangeProgressDetailsT = ChangeProgressDetails>
    ElasticsearchDomainStatus& WithChangeProgressDetails(ChangeProgressDetailsT&& value) { SetChangeProgressDetails(std::forward<ChangeProgressDetailsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of any changes that are currently in progress for the domain.</p>
     */
    inline DomainProcessingStatusType GetDomainProcessingStatus() const { return m_domainProcessingStatus; }
    inline bool DomainProcessingStatusHasBeenSet() const { return m_domainProcessingStatusHasBeenSet; }
    inline void SetDomainProcessingStatus(DomainProcessingStatusType value) { m_domainProcessingStatusHasBeenSet = true; m_domainProcessingStatus = value; }
    inline ElasticsearchDomainStatus& WithDomainProcessingStatus(DomainProcessingStatusType value) { SetDomainProcessingStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the domain properties that are currently being
     * modified.</p>
     */
    inline const Aws::Vector<ModifyingProperties>& GetModifyingProperties() const { return m_modifyingProperties; }
    inline bool ModifyingPropertiesHasBeenSet() const { return m_modifyingPropertiesHasBeenSet; }
    template<typename ModifyingPropertiesT = Aws::Vector<ModifyingProperties>>
    void SetModifyingProperties(ModifyingPropertiesT&& value) { m_modifyingPropertiesHasBeenSet = true; m_modifyingProperties = std::forward<ModifyingPropertiesT>(value); }
    template<typename ModifyingPropertiesT = Aws::Vector<ModifyingProperties>>
    ElasticsearchDomainStatus& WithModifyingProperties(ModifyingPropertiesT&& value) { SetModifyingProperties(std::forward<ModifyingPropertiesT>(value)); return *this;}
    template<typename ModifyingPropertiesT = ModifyingProperties>
    ElasticsearchDomainStatus& AddModifyingProperties(ModifyingPropertiesT&& value) { m_modifyingPropertiesHasBeenSet = true; m_modifyingProperties.emplace_back(std::forward<ModifyingPropertiesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_aRN;
    bool m_aRNHasBeenSet = false;

    bool m_created{false};
    bool m_createdHasBeenSet = false;

    bool m_deleted{false};
    bool m_deletedHasBeenSet = false;

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_endpoints;
    bool m_endpointsHasBeenSet = false;

    bool m_processing{false};
    bool m_processingHasBeenSet = false;

    bool m_upgradeProcessing{false};
    bool m_upgradeProcessingHasBeenSet = false;

    Aws::String m_elasticsearchVersion;
    bool m_elasticsearchVersionHasBeenSet = false;

    ElasticsearchClusterConfig m_elasticsearchClusterConfig;
    bool m_elasticsearchClusterConfigHasBeenSet = false;

    EBSOptions m_eBSOptions;
    bool m_eBSOptionsHasBeenSet = false;

    Aws::String m_accessPolicies;
    bool m_accessPoliciesHasBeenSet = false;

    SnapshotOptions m_snapshotOptions;
    bool m_snapshotOptionsHasBeenSet = false;

    VPCDerivedInfo m_vPCOptions;
    bool m_vPCOptionsHasBeenSet = false;

    CognitoOptions m_cognitoOptions;
    bool m_cognitoOptionsHasBeenSet = false;

    EncryptionAtRestOptions m_encryptionAtRestOptions;
    bool m_encryptionAtRestOptionsHasBeenSet = false;

    NodeToNodeEncryptionOptions m_nodeToNodeEncryptionOptions;
    bool m_nodeToNodeEncryptionOptionsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_advancedOptions;
    bool m_advancedOptionsHasBeenSet = false;

    Aws::Map<LogType, LogPublishingOption> m_logPublishingOptions;
    bool m_logPublishingOptionsHasBeenSet = false;

    ServiceSoftwareOptions m_serviceSoftwareOptions;
    bool m_serviceSoftwareOptionsHasBeenSet = false;

    DomainEndpointOptions m_domainEndpointOptions;
    bool m_domainEndpointOptionsHasBeenSet = false;

    AdvancedSecurityOptions m_advancedSecurityOptions;
    bool m_advancedSecurityOptionsHasBeenSet = false;

    AutoTuneOptionsOutput m_autoTuneOptions;
    bool m_autoTuneOptionsHasBeenSet = false;

    ChangeProgressDetails m_changeProgressDetails;
    bool m_changeProgressDetailsHasBeenSet = false;

    DomainProcessingStatusType m_domainProcessingStatus{DomainProcessingStatusType::NOT_SET};
    bool m_domainProcessingStatusHasBeenSet = false;

    Aws::Vector<ModifyingProperties> m_modifyingProperties;
    bool m_modifyingPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
