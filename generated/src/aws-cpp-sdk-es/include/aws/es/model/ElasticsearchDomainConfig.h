﻿/**
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
    AWS_ELASTICSEARCHSERVICE_API ElasticsearchDomainConfig();
    AWS_ELASTICSEARCHSERVICE_API ElasticsearchDomainConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API ElasticsearchDomainConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>String of format X.Y to specify version for the Elasticsearch domain.</p>
     */
    inline const ElasticsearchVersionStatus& GetElasticsearchVersion() const{ return m_elasticsearchVersion; }
    inline bool ElasticsearchVersionHasBeenSet() const { return m_elasticsearchVersionHasBeenSet; }
    inline void SetElasticsearchVersion(const ElasticsearchVersionStatus& value) { m_elasticsearchVersionHasBeenSet = true; m_elasticsearchVersion = value; }
    inline void SetElasticsearchVersion(ElasticsearchVersionStatus&& value) { m_elasticsearchVersionHasBeenSet = true; m_elasticsearchVersion = std::move(value); }
    inline ElasticsearchDomainConfig& WithElasticsearchVersion(const ElasticsearchVersionStatus& value) { SetElasticsearchVersion(value); return *this;}
    inline ElasticsearchDomainConfig& WithElasticsearchVersion(ElasticsearchVersionStatus&& value) { SetElasticsearchVersion(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the <code>ElasticsearchClusterConfig</code> for the Elasticsearch
     * domain.</p>
     */
    inline const ElasticsearchClusterConfigStatus& GetElasticsearchClusterConfig() const{ return m_elasticsearchClusterConfig; }
    inline bool ElasticsearchClusterConfigHasBeenSet() const { return m_elasticsearchClusterConfigHasBeenSet; }
    inline void SetElasticsearchClusterConfig(const ElasticsearchClusterConfigStatus& value) { m_elasticsearchClusterConfigHasBeenSet = true; m_elasticsearchClusterConfig = value; }
    inline void SetElasticsearchClusterConfig(ElasticsearchClusterConfigStatus&& value) { m_elasticsearchClusterConfigHasBeenSet = true; m_elasticsearchClusterConfig = std::move(value); }
    inline ElasticsearchDomainConfig& WithElasticsearchClusterConfig(const ElasticsearchClusterConfigStatus& value) { SetElasticsearchClusterConfig(value); return *this;}
    inline ElasticsearchDomainConfig& WithElasticsearchClusterConfig(ElasticsearchClusterConfigStatus&& value) { SetElasticsearchClusterConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the <code>EBSOptions</code> for the Elasticsearch domain.</p>
     */
    inline const EBSOptionsStatus& GetEBSOptions() const{ return m_eBSOptions; }
    inline bool EBSOptionsHasBeenSet() const { return m_eBSOptionsHasBeenSet; }
    inline void SetEBSOptions(const EBSOptionsStatus& value) { m_eBSOptionsHasBeenSet = true; m_eBSOptions = value; }
    inline void SetEBSOptions(EBSOptionsStatus&& value) { m_eBSOptionsHasBeenSet = true; m_eBSOptions = std::move(value); }
    inline ElasticsearchDomainConfig& WithEBSOptions(const EBSOptionsStatus& value) { SetEBSOptions(value); return *this;}
    inline ElasticsearchDomainConfig& WithEBSOptions(EBSOptionsStatus&& value) { SetEBSOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>IAM access policy as a JSON-formatted string.</p>
     */
    inline const AccessPoliciesStatus& GetAccessPolicies() const{ return m_accessPolicies; }
    inline bool AccessPoliciesHasBeenSet() const { return m_accessPoliciesHasBeenSet; }
    inline void SetAccessPolicies(const AccessPoliciesStatus& value) { m_accessPoliciesHasBeenSet = true; m_accessPolicies = value; }
    inline void SetAccessPolicies(AccessPoliciesStatus&& value) { m_accessPoliciesHasBeenSet = true; m_accessPolicies = std::move(value); }
    inline ElasticsearchDomainConfig& WithAccessPolicies(const AccessPoliciesStatus& value) { SetAccessPolicies(value); return *this;}
    inline ElasticsearchDomainConfig& WithAccessPolicies(AccessPoliciesStatus&& value) { SetAccessPolicies(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the <code>SnapshotOptions</code> for the Elasticsearch domain.</p>
     */
    inline const SnapshotOptionsStatus& GetSnapshotOptions() const{ return m_snapshotOptions; }
    inline bool SnapshotOptionsHasBeenSet() const { return m_snapshotOptionsHasBeenSet; }
    inline void SetSnapshotOptions(const SnapshotOptionsStatus& value) { m_snapshotOptionsHasBeenSet = true; m_snapshotOptions = value; }
    inline void SetSnapshotOptions(SnapshotOptionsStatus&& value) { m_snapshotOptionsHasBeenSet = true; m_snapshotOptions = std::move(value); }
    inline ElasticsearchDomainConfig& WithSnapshotOptions(const SnapshotOptionsStatus& value) { SetSnapshotOptions(value); return *this;}
    inline ElasticsearchDomainConfig& WithSnapshotOptions(SnapshotOptionsStatus&& value) { SetSnapshotOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>VPCOptions</code> for the specified domain. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-vpc.html"
     * target="_blank">VPC Endpoints for Amazon Elasticsearch Service Domains</a>.</p>
     */
    inline const VPCDerivedInfoStatus& GetVPCOptions() const{ return m_vPCOptions; }
    inline bool VPCOptionsHasBeenSet() const { return m_vPCOptionsHasBeenSet; }
    inline void SetVPCOptions(const VPCDerivedInfoStatus& value) { m_vPCOptionsHasBeenSet = true; m_vPCOptions = value; }
    inline void SetVPCOptions(VPCDerivedInfoStatus&& value) { m_vPCOptionsHasBeenSet = true; m_vPCOptions = std::move(value); }
    inline ElasticsearchDomainConfig& WithVPCOptions(const VPCDerivedInfoStatus& value) { SetVPCOptions(value); return *this;}
    inline ElasticsearchDomainConfig& WithVPCOptions(VPCDerivedInfoStatus&& value) { SetVPCOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>CognitoOptions</code> for the specified domain. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-cognito-auth.html"
     * target="_blank">Amazon Cognito Authentication for Kibana</a>.</p>
     */
    inline const CognitoOptionsStatus& GetCognitoOptions() const{ return m_cognitoOptions; }
    inline bool CognitoOptionsHasBeenSet() const { return m_cognitoOptionsHasBeenSet; }
    inline void SetCognitoOptions(const CognitoOptionsStatus& value) { m_cognitoOptionsHasBeenSet = true; m_cognitoOptions = value; }
    inline void SetCognitoOptions(CognitoOptionsStatus&& value) { m_cognitoOptionsHasBeenSet = true; m_cognitoOptions = std::move(value); }
    inline ElasticsearchDomainConfig& WithCognitoOptions(const CognitoOptionsStatus& value) { SetCognitoOptions(value); return *this;}
    inline ElasticsearchDomainConfig& WithCognitoOptions(CognitoOptionsStatus&& value) { SetCognitoOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the <code>EncryptionAtRestOptions</code> for the Elasticsearch
     * domain.</p>
     */
    inline const EncryptionAtRestOptionsStatus& GetEncryptionAtRestOptions() const{ return m_encryptionAtRestOptions; }
    inline bool EncryptionAtRestOptionsHasBeenSet() const { return m_encryptionAtRestOptionsHasBeenSet; }
    inline void SetEncryptionAtRestOptions(const EncryptionAtRestOptionsStatus& value) { m_encryptionAtRestOptionsHasBeenSet = true; m_encryptionAtRestOptions = value; }
    inline void SetEncryptionAtRestOptions(EncryptionAtRestOptionsStatus&& value) { m_encryptionAtRestOptionsHasBeenSet = true; m_encryptionAtRestOptions = std::move(value); }
    inline ElasticsearchDomainConfig& WithEncryptionAtRestOptions(const EncryptionAtRestOptionsStatus& value) { SetEncryptionAtRestOptions(value); return *this;}
    inline ElasticsearchDomainConfig& WithEncryptionAtRestOptions(EncryptionAtRestOptionsStatus&& value) { SetEncryptionAtRestOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the <code>NodeToNodeEncryptionOptions</code> for the Elasticsearch
     * domain.</p>
     */
    inline const NodeToNodeEncryptionOptionsStatus& GetNodeToNodeEncryptionOptions() const{ return m_nodeToNodeEncryptionOptions; }
    inline bool NodeToNodeEncryptionOptionsHasBeenSet() const { return m_nodeToNodeEncryptionOptionsHasBeenSet; }
    inline void SetNodeToNodeEncryptionOptions(const NodeToNodeEncryptionOptionsStatus& value) { m_nodeToNodeEncryptionOptionsHasBeenSet = true; m_nodeToNodeEncryptionOptions = value; }
    inline void SetNodeToNodeEncryptionOptions(NodeToNodeEncryptionOptionsStatus&& value) { m_nodeToNodeEncryptionOptionsHasBeenSet = true; m_nodeToNodeEncryptionOptions = std::move(value); }
    inline ElasticsearchDomainConfig& WithNodeToNodeEncryptionOptions(const NodeToNodeEncryptionOptionsStatus& value) { SetNodeToNodeEncryptionOptions(value); return *this;}
    inline ElasticsearchDomainConfig& WithNodeToNodeEncryptionOptions(NodeToNodeEncryptionOptionsStatus&& value) { SetNodeToNodeEncryptionOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the <code>AdvancedOptions</code> for the domain. See <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-createupdatedomains.html#es-createdomain-configure-advanced-options"
     * target="_blank">Configuring Advanced Options</a> for more information.</p>
     */
    inline const AdvancedOptionsStatus& GetAdvancedOptions() const{ return m_advancedOptions; }
    inline bool AdvancedOptionsHasBeenSet() const { return m_advancedOptionsHasBeenSet; }
    inline void SetAdvancedOptions(const AdvancedOptionsStatus& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions = value; }
    inline void SetAdvancedOptions(AdvancedOptionsStatus&& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions = std::move(value); }
    inline ElasticsearchDomainConfig& WithAdvancedOptions(const AdvancedOptionsStatus& value) { SetAdvancedOptions(value); return *this;}
    inline ElasticsearchDomainConfig& WithAdvancedOptions(AdvancedOptionsStatus&& value) { SetAdvancedOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Log publishing options for the given domain.</p>
     */
    inline const LogPublishingOptionsStatus& GetLogPublishingOptions() const{ return m_logPublishingOptions; }
    inline bool LogPublishingOptionsHasBeenSet() const { return m_logPublishingOptionsHasBeenSet; }
    inline void SetLogPublishingOptions(const LogPublishingOptionsStatus& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions = value; }
    inline void SetLogPublishingOptions(LogPublishingOptionsStatus&& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions = std::move(value); }
    inline ElasticsearchDomainConfig& WithLogPublishingOptions(const LogPublishingOptionsStatus& value) { SetLogPublishingOptions(value); return *this;}
    inline ElasticsearchDomainConfig& WithLogPublishingOptions(LogPublishingOptionsStatus&& value) { SetLogPublishingOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the <code>DomainEndpointOptions</code> for the Elasticsearch
     * domain.</p>
     */
    inline const DomainEndpointOptionsStatus& GetDomainEndpointOptions() const{ return m_domainEndpointOptions; }
    inline bool DomainEndpointOptionsHasBeenSet() const { return m_domainEndpointOptionsHasBeenSet; }
    inline void SetDomainEndpointOptions(const DomainEndpointOptionsStatus& value) { m_domainEndpointOptionsHasBeenSet = true; m_domainEndpointOptions = value; }
    inline void SetDomainEndpointOptions(DomainEndpointOptionsStatus&& value) { m_domainEndpointOptionsHasBeenSet = true; m_domainEndpointOptions = std::move(value); }
    inline ElasticsearchDomainConfig& WithDomainEndpointOptions(const DomainEndpointOptionsStatus& value) { SetDomainEndpointOptions(value); return *this;}
    inline ElasticsearchDomainConfig& WithDomainEndpointOptions(DomainEndpointOptionsStatus&& value) { SetDomainEndpointOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies <code>AdvancedSecurityOptions</code> for the domain. </p>
     */
    inline const AdvancedSecurityOptionsStatus& GetAdvancedSecurityOptions() const{ return m_advancedSecurityOptions; }
    inline bool AdvancedSecurityOptionsHasBeenSet() const { return m_advancedSecurityOptionsHasBeenSet; }
    inline void SetAdvancedSecurityOptions(const AdvancedSecurityOptionsStatus& value) { m_advancedSecurityOptionsHasBeenSet = true; m_advancedSecurityOptions = value; }
    inline void SetAdvancedSecurityOptions(AdvancedSecurityOptionsStatus&& value) { m_advancedSecurityOptionsHasBeenSet = true; m_advancedSecurityOptions = std::move(value); }
    inline ElasticsearchDomainConfig& WithAdvancedSecurityOptions(const AdvancedSecurityOptionsStatus& value) { SetAdvancedSecurityOptions(value); return *this;}
    inline ElasticsearchDomainConfig& WithAdvancedSecurityOptions(AdvancedSecurityOptionsStatus&& value) { SetAdvancedSecurityOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies <code>AutoTuneOptions</code> for the domain. </p>
     */
    inline const AutoTuneOptionsStatus& GetAutoTuneOptions() const{ return m_autoTuneOptions; }
    inline bool AutoTuneOptionsHasBeenSet() const { return m_autoTuneOptionsHasBeenSet; }
    inline void SetAutoTuneOptions(const AutoTuneOptionsStatus& value) { m_autoTuneOptionsHasBeenSet = true; m_autoTuneOptions = value; }
    inline void SetAutoTuneOptions(AutoTuneOptionsStatus&& value) { m_autoTuneOptionsHasBeenSet = true; m_autoTuneOptions = std::move(value); }
    inline ElasticsearchDomainConfig& WithAutoTuneOptions(const AutoTuneOptionsStatus& value) { SetAutoTuneOptions(value); return *this;}
    inline ElasticsearchDomainConfig& WithAutoTuneOptions(AutoTuneOptionsStatus&& value) { SetAutoTuneOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies change details of the domain configuration change.</p>
     */
    inline const ChangeProgressDetails& GetChangeProgressDetails() const{ return m_changeProgressDetails; }
    inline bool ChangeProgressDetailsHasBeenSet() const { return m_changeProgressDetailsHasBeenSet; }
    inline void SetChangeProgressDetails(const ChangeProgressDetails& value) { m_changeProgressDetailsHasBeenSet = true; m_changeProgressDetails = value; }
    inline void SetChangeProgressDetails(ChangeProgressDetails&& value) { m_changeProgressDetailsHasBeenSet = true; m_changeProgressDetails = std::move(value); }
    inline ElasticsearchDomainConfig& WithChangeProgressDetails(const ChangeProgressDetails& value) { SetChangeProgressDetails(value); return *this;}
    inline ElasticsearchDomainConfig& WithChangeProgressDetails(ChangeProgressDetails&& value) { SetChangeProgressDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the domain properties that are currently being
     * modified.</p>
     */
    inline const Aws::Vector<ModifyingProperties>& GetModifyingProperties() const{ return m_modifyingProperties; }
    inline bool ModifyingPropertiesHasBeenSet() const { return m_modifyingPropertiesHasBeenSet; }
    inline void SetModifyingProperties(const Aws::Vector<ModifyingProperties>& value) { m_modifyingPropertiesHasBeenSet = true; m_modifyingProperties = value; }
    inline void SetModifyingProperties(Aws::Vector<ModifyingProperties>&& value) { m_modifyingPropertiesHasBeenSet = true; m_modifyingProperties = std::move(value); }
    inline ElasticsearchDomainConfig& WithModifyingProperties(const Aws::Vector<ModifyingProperties>& value) { SetModifyingProperties(value); return *this;}
    inline ElasticsearchDomainConfig& WithModifyingProperties(Aws::Vector<ModifyingProperties>&& value) { SetModifyingProperties(std::move(value)); return *this;}
    inline ElasticsearchDomainConfig& AddModifyingProperties(const ModifyingProperties& value) { m_modifyingPropertiesHasBeenSet = true; m_modifyingProperties.push_back(value); return *this; }
    inline ElasticsearchDomainConfig& AddModifyingProperties(ModifyingProperties&& value) { m_modifyingPropertiesHasBeenSet = true; m_modifyingProperties.push_back(std::move(value)); return *this; }
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
