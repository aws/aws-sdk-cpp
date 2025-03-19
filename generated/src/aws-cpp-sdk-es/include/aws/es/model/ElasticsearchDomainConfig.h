/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/model/ElasticsearchVersionStatus.h>
#include <aws/es/model/ElasticsearchClusterConfigStatus.h>
#include <aws/es/model/EBSOptionsStatus.h>
#include <aws/es/model/AccessPoliciesStatus.h>
#include <aws/es/model/SnapshotOptionsStatus.h>
#include <aws/es/model/VPCDerivedInfoStatus.h>
#include <aws/es/model/CognitoOptionsStatus.h>
#include <aws/es/model/EncryptionAtRestOptionsStatus.h>
#include <aws/es/model/NodeToNodeEncryptionOptionsStatus.h>
#include <aws/es/model/AdvancedOptionsStatus.h>
#include <aws/es/model/LogPublishingOptionsStatus.h>
#include <aws/es/model/DomainEndpointOptionsStatus.h>
#include <aws/es/model/AdvancedSecurityOptionsStatus.h>
#include <aws/es/model/AutoTuneOptionsStatus.h>
#include <aws/es/model/ChangeProgressDetails.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>The configuration of an Elasticsearch domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/ElasticsearchDomainConfig">AWS
   * API Reference</a></p>
   */
  class ElasticsearchDomainConfig
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API ElasticsearchDomainConfig() = default;
    AWS_ELASTICSEARCHSERVICE_API ElasticsearchDomainConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API ElasticsearchDomainConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>String of format X.Y to specify version for the Elasticsearch domain.</p>
     */
    inline const ElasticsearchVersionStatus& GetElasticsearchVersion() const { return m_elasticsearchVersion; }
    inline bool ElasticsearchVersionHasBeenSet() const { return m_elasticsearchVersionHasBeenSet; }
    template<typename ElasticsearchVersionT = ElasticsearchVersionStatus>
    void SetElasticsearchVersion(ElasticsearchVersionT&& value) { m_elasticsearchVersionHasBeenSet = true; m_elasticsearchVersion = std::forward<ElasticsearchVersionT>(value); }
    template<typename ElasticsearchVersionT = ElasticsearchVersionStatus>
    ElasticsearchDomainConfig& WithElasticsearchVersion(ElasticsearchVersionT&& value) { SetElasticsearchVersion(std::forward<ElasticsearchVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the <code>ElasticsearchClusterConfig</code> for the Elasticsearch
     * domain.</p>
     */
    inline const ElasticsearchClusterConfigStatus& GetElasticsearchClusterConfig() const { return m_elasticsearchClusterConfig; }
    inline bool ElasticsearchClusterConfigHasBeenSet() const { return m_elasticsearchClusterConfigHasBeenSet; }
    template<typename ElasticsearchClusterConfigT = ElasticsearchClusterConfigStatus>
    void SetElasticsearchClusterConfig(ElasticsearchClusterConfigT&& value) { m_elasticsearchClusterConfigHasBeenSet = true; m_elasticsearchClusterConfig = std::forward<ElasticsearchClusterConfigT>(value); }
    template<typename ElasticsearchClusterConfigT = ElasticsearchClusterConfigStatus>
    ElasticsearchDomainConfig& WithElasticsearchClusterConfig(ElasticsearchClusterConfigT&& value) { SetElasticsearchClusterConfig(std::forward<ElasticsearchClusterConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the <code>EBSOptions</code> for the Elasticsearch domain.</p>
     */
    inline const EBSOptionsStatus& GetEBSOptions() const { return m_eBSOptions; }
    inline bool EBSOptionsHasBeenSet() const { return m_eBSOptionsHasBeenSet; }
    template<typename EBSOptionsT = EBSOptionsStatus>
    void SetEBSOptions(EBSOptionsT&& value) { m_eBSOptionsHasBeenSet = true; m_eBSOptions = std::forward<EBSOptionsT>(value); }
    template<typename EBSOptionsT = EBSOptionsStatus>
    ElasticsearchDomainConfig& WithEBSOptions(EBSOptionsT&& value) { SetEBSOptions(std::forward<EBSOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>IAM access policy as a JSON-formatted string.</p>
     */
    inline const AccessPoliciesStatus& GetAccessPolicies() const { return m_accessPolicies; }
    inline bool AccessPoliciesHasBeenSet() const { return m_accessPoliciesHasBeenSet; }
    template<typename AccessPoliciesT = AccessPoliciesStatus>
    void SetAccessPolicies(AccessPoliciesT&& value) { m_accessPoliciesHasBeenSet = true; m_accessPolicies = std::forward<AccessPoliciesT>(value); }
    template<typename AccessPoliciesT = AccessPoliciesStatus>
    ElasticsearchDomainConfig& WithAccessPolicies(AccessPoliciesT&& value) { SetAccessPolicies(std::forward<AccessPoliciesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the <code>SnapshotOptions</code> for the Elasticsearch domain.</p>
     */
    inline const SnapshotOptionsStatus& GetSnapshotOptions() const { return m_snapshotOptions; }
    inline bool SnapshotOptionsHasBeenSet() const { return m_snapshotOptionsHasBeenSet; }
    template<typename SnapshotOptionsT = SnapshotOptionsStatus>
    void SetSnapshotOptions(SnapshotOptionsT&& value) { m_snapshotOptionsHasBeenSet = true; m_snapshotOptions = std::forward<SnapshotOptionsT>(value); }
    template<typename SnapshotOptionsT = SnapshotOptionsStatus>
    ElasticsearchDomainConfig& WithSnapshotOptions(SnapshotOptionsT&& value) { SetSnapshotOptions(std::forward<SnapshotOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>VPCOptions</code> for the specified domain. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-vpc.html"
     * target="_blank">VPC Endpoints for Amazon Elasticsearch Service Domains</a>.</p>
     */
    inline const VPCDerivedInfoStatus& GetVPCOptions() const { return m_vPCOptions; }
    inline bool VPCOptionsHasBeenSet() const { return m_vPCOptionsHasBeenSet; }
    template<typename VPCOptionsT = VPCDerivedInfoStatus>
    void SetVPCOptions(VPCOptionsT&& value) { m_vPCOptionsHasBeenSet = true; m_vPCOptions = std::forward<VPCOptionsT>(value); }
    template<typename VPCOptionsT = VPCDerivedInfoStatus>
    ElasticsearchDomainConfig& WithVPCOptions(VPCOptionsT&& value) { SetVPCOptions(std::forward<VPCOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>CognitoOptions</code> for the specified domain. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-cognito-auth.html"
     * target="_blank">Amazon Cognito Authentication for Kibana</a>.</p>
     */
    inline const CognitoOptionsStatus& GetCognitoOptions() const { return m_cognitoOptions; }
    inline bool CognitoOptionsHasBeenSet() const { return m_cognitoOptionsHasBeenSet; }
    template<typename CognitoOptionsT = CognitoOptionsStatus>
    void SetCognitoOptions(CognitoOptionsT&& value) { m_cognitoOptionsHasBeenSet = true; m_cognitoOptions = std::forward<CognitoOptionsT>(value); }
    template<typename CognitoOptionsT = CognitoOptionsStatus>
    ElasticsearchDomainConfig& WithCognitoOptions(CognitoOptionsT&& value) { SetCognitoOptions(std::forward<CognitoOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the <code>EncryptionAtRestOptions</code> for the Elasticsearch
     * domain.</p>
     */
    inline const EncryptionAtRestOptionsStatus& GetEncryptionAtRestOptions() const { return m_encryptionAtRestOptions; }
    inline bool EncryptionAtRestOptionsHasBeenSet() const { return m_encryptionAtRestOptionsHasBeenSet; }
    template<typename EncryptionAtRestOptionsT = EncryptionAtRestOptionsStatus>
    void SetEncryptionAtRestOptions(EncryptionAtRestOptionsT&& value) { m_encryptionAtRestOptionsHasBeenSet = true; m_encryptionAtRestOptions = std::forward<EncryptionAtRestOptionsT>(value); }
    template<typename EncryptionAtRestOptionsT = EncryptionAtRestOptionsStatus>
    ElasticsearchDomainConfig& WithEncryptionAtRestOptions(EncryptionAtRestOptionsT&& value) { SetEncryptionAtRestOptions(std::forward<EncryptionAtRestOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the <code>NodeToNodeEncryptionOptions</code> for the Elasticsearch
     * domain.</p>
     */
    inline const NodeToNodeEncryptionOptionsStatus& GetNodeToNodeEncryptionOptions() const { return m_nodeToNodeEncryptionOptions; }
    inline bool NodeToNodeEncryptionOptionsHasBeenSet() const { return m_nodeToNodeEncryptionOptionsHasBeenSet; }
    template<typename NodeToNodeEncryptionOptionsT = NodeToNodeEncryptionOptionsStatus>
    void SetNodeToNodeEncryptionOptions(NodeToNodeEncryptionOptionsT&& value) { m_nodeToNodeEncryptionOptionsHasBeenSet = true; m_nodeToNodeEncryptionOptions = std::forward<NodeToNodeEncryptionOptionsT>(value); }
    template<typename NodeToNodeEncryptionOptionsT = NodeToNodeEncryptionOptionsStatus>
    ElasticsearchDomainConfig& WithNodeToNodeEncryptionOptions(NodeToNodeEncryptionOptionsT&& value) { SetNodeToNodeEncryptionOptions(std::forward<NodeToNodeEncryptionOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the <code>AdvancedOptions</code> for the domain. See <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-createupdatedomains.html#es-createdomain-configure-advanced-options"
     * target="_blank">Configuring Advanced Options</a> for more information.</p>
     */
    inline const AdvancedOptionsStatus& GetAdvancedOptions() const { return m_advancedOptions; }
    inline bool AdvancedOptionsHasBeenSet() const { return m_advancedOptionsHasBeenSet; }
    template<typename AdvancedOptionsT = AdvancedOptionsStatus>
    void SetAdvancedOptions(AdvancedOptionsT&& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions = std::forward<AdvancedOptionsT>(value); }
    template<typename AdvancedOptionsT = AdvancedOptionsStatus>
    ElasticsearchDomainConfig& WithAdvancedOptions(AdvancedOptionsT&& value) { SetAdvancedOptions(std::forward<AdvancedOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Log publishing options for the given domain.</p>
     */
    inline const LogPublishingOptionsStatus& GetLogPublishingOptions() const { return m_logPublishingOptions; }
    inline bool LogPublishingOptionsHasBeenSet() const { return m_logPublishingOptionsHasBeenSet; }
    template<typename LogPublishingOptionsT = LogPublishingOptionsStatus>
    void SetLogPublishingOptions(LogPublishingOptionsT&& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions = std::forward<LogPublishingOptionsT>(value); }
    template<typename LogPublishingOptionsT = LogPublishingOptionsStatus>
    ElasticsearchDomainConfig& WithLogPublishingOptions(LogPublishingOptionsT&& value) { SetLogPublishingOptions(std::forward<LogPublishingOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the <code>DomainEndpointOptions</code> for the Elasticsearch
     * domain.</p>
     */
    inline const DomainEndpointOptionsStatus& GetDomainEndpointOptions() const { return m_domainEndpointOptions; }
    inline bool DomainEndpointOptionsHasBeenSet() const { return m_domainEndpointOptionsHasBeenSet; }
    template<typename DomainEndpointOptionsT = DomainEndpointOptionsStatus>
    void SetDomainEndpointOptions(DomainEndpointOptionsT&& value) { m_domainEndpointOptionsHasBeenSet = true; m_domainEndpointOptions = std::forward<DomainEndpointOptionsT>(value); }
    template<typename DomainEndpointOptionsT = DomainEndpointOptionsStatus>
    ElasticsearchDomainConfig& WithDomainEndpointOptions(DomainEndpointOptionsT&& value) { SetDomainEndpointOptions(std::forward<DomainEndpointOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies <code>AdvancedSecurityOptions</code> for the domain. </p>
     */
    inline const AdvancedSecurityOptionsStatus& GetAdvancedSecurityOptions() const { return m_advancedSecurityOptions; }
    inline bool AdvancedSecurityOptionsHasBeenSet() const { return m_advancedSecurityOptionsHasBeenSet; }
    template<typename AdvancedSecurityOptionsT = AdvancedSecurityOptionsStatus>
    void SetAdvancedSecurityOptions(AdvancedSecurityOptionsT&& value) { m_advancedSecurityOptionsHasBeenSet = true; m_advancedSecurityOptions = std::forward<AdvancedSecurityOptionsT>(value); }
    template<typename AdvancedSecurityOptionsT = AdvancedSecurityOptionsStatus>
    ElasticsearchDomainConfig& WithAdvancedSecurityOptions(AdvancedSecurityOptionsT&& value) { SetAdvancedSecurityOptions(std::forward<AdvancedSecurityOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies <code>AutoTuneOptions</code> for the domain. </p>
     */
    inline const AutoTuneOptionsStatus& GetAutoTuneOptions() const { return m_autoTuneOptions; }
    inline bool AutoTuneOptionsHasBeenSet() const { return m_autoTuneOptionsHasBeenSet; }
    template<typename AutoTuneOptionsT = AutoTuneOptionsStatus>
    void SetAutoTuneOptions(AutoTuneOptionsT&& value) { m_autoTuneOptionsHasBeenSet = true; m_autoTuneOptions = std::forward<AutoTuneOptionsT>(value); }
    template<typename AutoTuneOptionsT = AutoTuneOptionsStatus>
    ElasticsearchDomainConfig& WithAutoTuneOptions(AutoTuneOptionsT&& value) { SetAutoTuneOptions(std::forward<AutoTuneOptionsT>(value)); return *this;}
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
    ElasticsearchDomainConfig& WithChangeProgressDetails(ChangeProgressDetailsT&& value) { SetChangeProgressDetails(std::forward<ChangeProgressDetailsT>(value)); return *this;}
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
    ElasticsearchDomainConfig& WithModifyingProperties(ModifyingPropertiesT&& value) { SetModifyingProperties(std::forward<ModifyingPropertiesT>(value)); return *this;}
    template<typename ModifyingPropertiesT = ModifyingProperties>
    ElasticsearchDomainConfig& AddModifyingProperties(ModifyingPropertiesT&& value) { m_modifyingPropertiesHasBeenSet = true; m_modifyingProperties.emplace_back(std::forward<ModifyingPropertiesT>(value)); return *this; }
    ///@}
  private:

    ElasticsearchVersionStatus m_elasticsearchVersion;
    bool m_elasticsearchVersionHasBeenSet = false;

    ElasticsearchClusterConfigStatus m_elasticsearchClusterConfig;
    bool m_elasticsearchClusterConfigHasBeenSet = false;

    EBSOptionsStatus m_eBSOptions;
    bool m_eBSOptionsHasBeenSet = false;

    AccessPoliciesStatus m_accessPolicies;
    bool m_accessPoliciesHasBeenSet = false;

    SnapshotOptionsStatus m_snapshotOptions;
    bool m_snapshotOptionsHasBeenSet = false;

    VPCDerivedInfoStatus m_vPCOptions;
    bool m_vPCOptionsHasBeenSet = false;

    CognitoOptionsStatus m_cognitoOptions;
    bool m_cognitoOptionsHasBeenSet = false;

    EncryptionAtRestOptionsStatus m_encryptionAtRestOptions;
    bool m_encryptionAtRestOptionsHasBeenSet = false;

    NodeToNodeEncryptionOptionsStatus m_nodeToNodeEncryptionOptions;
    bool m_nodeToNodeEncryptionOptionsHasBeenSet = false;

    AdvancedOptionsStatus m_advancedOptions;
    bool m_advancedOptionsHasBeenSet = false;

    LogPublishingOptionsStatus m_logPublishingOptions;
    bool m_logPublishingOptionsHasBeenSet = false;

    DomainEndpointOptionsStatus m_domainEndpointOptions;
    bool m_domainEndpointOptionsHasBeenSet = false;

    AdvancedSecurityOptionsStatus m_advancedSecurityOptions;
    bool m_advancedSecurityOptionsHasBeenSet = false;

    AutoTuneOptionsStatus m_autoTuneOptions;
    bool m_autoTuneOptionsHasBeenSet = false;

    ChangeProgressDetails m_changeProgressDetails;
    bool m_changeProgressDetailsHasBeenSet = false;

    Aws::Vector<ModifyingProperties> m_modifyingProperties;
    bool m_modifyingPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
