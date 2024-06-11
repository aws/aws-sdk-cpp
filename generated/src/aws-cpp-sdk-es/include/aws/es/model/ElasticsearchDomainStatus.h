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
    AWS_ELASTICSEARCHSERVICE_API ElasticsearchDomainStatus();
    AWS_ELASTICSEARCHSERVICE_API ElasticsearchDomainStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API ElasticsearchDomainStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ELASTICSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the specified Elasticsearch domain.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }
    inline ElasticsearchDomainStatus& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}
    inline ElasticsearchDomainStatus& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}
    inline ElasticsearchDomainStatus& WithDomainId(const char* value) { SetDomainId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of an Elasticsearch domain. Domain names are unique across the
     * domains owned by an account within an AWS region. Domain names start with a
     * letter or number and can contain the following characters: a-z (lowercase), 0-9,
     * and - (hyphen).</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }
    inline ElasticsearchDomainStatus& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline ElasticsearchDomainStatus& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline ElasticsearchDomainStatus& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon resource name (ARN) of an Elasticsearch domain. See <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/index.html?Using_Identifiers.html"
     * target="_blank">Identifiers for IAM Entities</a> in <i>Using AWS Identity and
     * Access Management</i> for more information.</p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }
    inline void SetARN(const Aws::String& value) { m_aRNHasBeenSet = true; m_aRN = value; }
    inline void SetARN(Aws::String&& value) { m_aRNHasBeenSet = true; m_aRN = std::move(value); }
    inline void SetARN(const char* value) { m_aRNHasBeenSet = true; m_aRN.assign(value); }
    inline ElasticsearchDomainStatus& WithARN(const Aws::String& value) { SetARN(value); return *this;}
    inline ElasticsearchDomainStatus& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}
    inline ElasticsearchDomainStatus& WithARN(const char* value) { SetARN(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The domain creation status. <code>True</code> if the creation of an
     * Elasticsearch domain is complete. <code>False</code> if domain creation is still
     * in progress.</p>
     */
    inline bool GetCreated() const{ return m_created; }
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
    inline bool GetDeleted() const{ return m_deleted; }
    inline bool DeletedHasBeenSet() const { return m_deletedHasBeenSet; }
    inline void SetDeleted(bool value) { m_deletedHasBeenSet = true; m_deleted = value; }
    inline ElasticsearchDomainStatus& WithDeleted(bool value) { SetDeleted(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Elasticsearch domain endpoint that you use to submit index and search
     * requests.</p>
     */
    inline const Aws::String& GetEndpoint() const{ return m_endpoint; }
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
    inline void SetEndpoint(const Aws::String& value) { m_endpointHasBeenSet = true; m_endpoint = value; }
    inline void SetEndpoint(Aws::String&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }
    inline void SetEndpoint(const char* value) { m_endpointHasBeenSet = true; m_endpoint.assign(value); }
    inline ElasticsearchDomainStatus& WithEndpoint(const Aws::String& value) { SetEndpoint(value); return *this;}
    inline ElasticsearchDomainStatus& WithEndpoint(Aws::String&& value) { SetEndpoint(std::move(value)); return *this;}
    inline ElasticsearchDomainStatus& WithEndpoint(const char* value) { SetEndpoint(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Map containing the Elasticsearch domain endpoints used to submit index and
     * search requests. Example <code>key, value</code>:
     * <code>'vpc','vpc-endpoint-h2dsd34efgyghrtguk5gt6j2foh4.us-east-1.es.amazonaws.com'</code>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEndpoints() const{ return m_endpoints; }
    inline bool EndpointsHasBeenSet() const { return m_endpointsHasBeenSet; }
    inline void SetEndpoints(const Aws::Map<Aws::String, Aws::String>& value) { m_endpointsHasBeenSet = true; m_endpoints = value; }
    inline void SetEndpoints(Aws::Map<Aws::String, Aws::String>&& value) { m_endpointsHasBeenSet = true; m_endpoints = std::move(value); }
    inline ElasticsearchDomainStatus& WithEndpoints(const Aws::Map<Aws::String, Aws::String>& value) { SetEndpoints(value); return *this;}
    inline ElasticsearchDomainStatus& WithEndpoints(Aws::Map<Aws::String, Aws::String>&& value) { SetEndpoints(std::move(value)); return *this;}
    inline ElasticsearchDomainStatus& AddEndpoints(const Aws::String& key, const Aws::String& value) { m_endpointsHasBeenSet = true; m_endpoints.emplace(key, value); return *this; }
    inline ElasticsearchDomainStatus& AddEndpoints(Aws::String&& key, const Aws::String& value) { m_endpointsHasBeenSet = true; m_endpoints.emplace(std::move(key), value); return *this; }
    inline ElasticsearchDomainStatus& AddEndpoints(const Aws::String& key, Aws::String&& value) { m_endpointsHasBeenSet = true; m_endpoints.emplace(key, std::move(value)); return *this; }
    inline ElasticsearchDomainStatus& AddEndpoints(Aws::String&& key, Aws::String&& value) { m_endpointsHasBeenSet = true; m_endpoints.emplace(std::move(key), std::move(value)); return *this; }
    inline ElasticsearchDomainStatus& AddEndpoints(const char* key, Aws::String&& value) { m_endpointsHasBeenSet = true; m_endpoints.emplace(key, std::move(value)); return *this; }
    inline ElasticsearchDomainStatus& AddEndpoints(Aws::String&& key, const char* value) { m_endpointsHasBeenSet = true; m_endpoints.emplace(std::move(key), value); return *this; }
    inline ElasticsearchDomainStatus& AddEndpoints(const char* key, const char* value) { m_endpointsHasBeenSet = true; m_endpoints.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The status of the Elasticsearch domain configuration. <code>True</code> if
     * Amazon Elasticsearch Service is processing configuration changes.
     * <code>False</code> if the configuration is active.</p>
     */
    inline bool GetProcessing() const{ return m_processing; }
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
    inline bool GetUpgradeProcessing() const{ return m_upgradeProcessing; }
    inline bool UpgradeProcessingHasBeenSet() const { return m_upgradeProcessingHasBeenSet; }
    inline void SetUpgradeProcessing(bool value) { m_upgradeProcessingHasBeenSet = true; m_upgradeProcessing = value; }
    inline ElasticsearchDomainStatus& WithUpgradeProcessing(bool value) { SetUpgradeProcessing(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetElasticsearchVersion() const{ return m_elasticsearchVersion; }
    inline bool ElasticsearchVersionHasBeenSet() const { return m_elasticsearchVersionHasBeenSet; }
    inline void SetElasticsearchVersion(const Aws::String& value) { m_elasticsearchVersionHasBeenSet = true; m_elasticsearchVersion = value; }
    inline void SetElasticsearchVersion(Aws::String&& value) { m_elasticsearchVersionHasBeenSet = true; m_elasticsearchVersion = std::move(value); }
    inline void SetElasticsearchVersion(const char* value) { m_elasticsearchVersionHasBeenSet = true; m_elasticsearchVersion.assign(value); }
    inline ElasticsearchDomainStatus& WithElasticsearchVersion(const Aws::String& value) { SetElasticsearchVersion(value); return *this;}
    inline ElasticsearchDomainStatus& WithElasticsearchVersion(Aws::String&& value) { SetElasticsearchVersion(std::move(value)); return *this;}
    inline ElasticsearchDomainStatus& WithElasticsearchVersion(const char* value) { SetElasticsearchVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type and number of instances in the domain cluster.</p>
     */
    inline const ElasticsearchClusterConfig& GetElasticsearchClusterConfig() const{ return m_elasticsearchClusterConfig; }
    inline bool ElasticsearchClusterConfigHasBeenSet() const { return m_elasticsearchClusterConfigHasBeenSet; }
    inline void SetElasticsearchClusterConfig(const ElasticsearchClusterConfig& value) { m_elasticsearchClusterConfigHasBeenSet = true; m_elasticsearchClusterConfig = value; }
    inline void SetElasticsearchClusterConfig(ElasticsearchClusterConfig&& value) { m_elasticsearchClusterConfigHasBeenSet = true; m_elasticsearchClusterConfig = std::move(value); }
    inline ElasticsearchDomainStatus& WithElasticsearchClusterConfig(const ElasticsearchClusterConfig& value) { SetElasticsearchClusterConfig(value); return *this;}
    inline ElasticsearchDomainStatus& WithElasticsearchClusterConfig(ElasticsearchClusterConfig&& value) { SetElasticsearchClusterConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>EBSOptions</code> for the specified domain. See <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-createupdatedomains.html#es-createdomain-configure-ebs"
     * target="_blank">Configuring EBS-based Storage</a> for more information.</p>
     */
    inline const EBSOptions& GetEBSOptions() const{ return m_eBSOptions; }
    inline bool EBSOptionsHasBeenSet() const { return m_eBSOptionsHasBeenSet; }
    inline void SetEBSOptions(const EBSOptions& value) { m_eBSOptionsHasBeenSet = true; m_eBSOptions = value; }
    inline void SetEBSOptions(EBSOptions&& value) { m_eBSOptionsHasBeenSet = true; m_eBSOptions = std::move(value); }
    inline ElasticsearchDomainStatus& WithEBSOptions(const EBSOptions& value) { SetEBSOptions(value); return *this;}
    inline ElasticsearchDomainStatus& WithEBSOptions(EBSOptions&& value) { SetEBSOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> IAM access policy as a JSON-formatted string.</p>
     */
    inline const Aws::String& GetAccessPolicies() const{ return m_accessPolicies; }
    inline bool AccessPoliciesHasBeenSet() const { return m_accessPoliciesHasBeenSet; }
    inline void SetAccessPolicies(const Aws::String& value) { m_accessPoliciesHasBeenSet = true; m_accessPolicies = value; }
    inline void SetAccessPolicies(Aws::String&& value) { m_accessPoliciesHasBeenSet = true; m_accessPolicies = std::move(value); }
    inline void SetAccessPolicies(const char* value) { m_accessPoliciesHasBeenSet = true; m_accessPolicies.assign(value); }
    inline ElasticsearchDomainStatus& WithAccessPolicies(const Aws::String& value) { SetAccessPolicies(value); return *this;}
    inline ElasticsearchDomainStatus& WithAccessPolicies(Aws::String&& value) { SetAccessPolicies(std::move(value)); return *this;}
    inline ElasticsearchDomainStatus& WithAccessPolicies(const char* value) { SetAccessPolicies(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the status of the <code>SnapshotOptions</code></p>
     */
    inline const SnapshotOptions& GetSnapshotOptions() const{ return m_snapshotOptions; }
    inline bool SnapshotOptionsHasBeenSet() const { return m_snapshotOptionsHasBeenSet; }
    inline void SetSnapshotOptions(const SnapshotOptions& value) { m_snapshotOptionsHasBeenSet = true; m_snapshotOptions = value; }
    inline void SetSnapshotOptions(SnapshotOptions&& value) { m_snapshotOptionsHasBeenSet = true; m_snapshotOptions = std::move(value); }
    inline ElasticsearchDomainStatus& WithSnapshotOptions(const SnapshotOptions& value) { SetSnapshotOptions(value); return *this;}
    inline ElasticsearchDomainStatus& WithSnapshotOptions(SnapshotOptions&& value) { SetSnapshotOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>VPCOptions</code> for the specified domain. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-vpc.html"
     * target="_blank">VPC Endpoints for Amazon Elasticsearch Service Domains</a>.</p>
     */
    inline const VPCDerivedInfo& GetVPCOptions() const{ return m_vPCOptions; }
    inline bool VPCOptionsHasBeenSet() const { return m_vPCOptionsHasBeenSet; }
    inline void SetVPCOptions(const VPCDerivedInfo& value) { m_vPCOptionsHasBeenSet = true; m_vPCOptions = value; }
    inline void SetVPCOptions(VPCDerivedInfo&& value) { m_vPCOptionsHasBeenSet = true; m_vPCOptions = std::move(value); }
    inline ElasticsearchDomainStatus& WithVPCOptions(const VPCDerivedInfo& value) { SetVPCOptions(value); return *this;}
    inline ElasticsearchDomainStatus& WithVPCOptions(VPCDerivedInfo&& value) { SetVPCOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>CognitoOptions</code> for the specified domain. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-cognito-auth.html"
     * target="_blank">Amazon Cognito Authentication for Kibana</a>.</p>
     */
    inline const CognitoOptions& GetCognitoOptions() const{ return m_cognitoOptions; }
    inline bool CognitoOptionsHasBeenSet() const { return m_cognitoOptionsHasBeenSet; }
    inline void SetCognitoOptions(const CognitoOptions& value) { m_cognitoOptionsHasBeenSet = true; m_cognitoOptions = value; }
    inline void SetCognitoOptions(CognitoOptions&& value) { m_cognitoOptionsHasBeenSet = true; m_cognitoOptions = std::move(value); }
    inline ElasticsearchDomainStatus& WithCognitoOptions(const CognitoOptions& value) { SetCognitoOptions(value); return *this;}
    inline ElasticsearchDomainStatus& WithCognitoOptions(CognitoOptions&& value) { SetCognitoOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Specifies the status of the <code>EncryptionAtRestOptions</code>.</p>
     */
    inline const EncryptionAtRestOptions& GetEncryptionAtRestOptions() const{ return m_encryptionAtRestOptions; }
    inline bool EncryptionAtRestOptionsHasBeenSet() const { return m_encryptionAtRestOptionsHasBeenSet; }
    inline void SetEncryptionAtRestOptions(const EncryptionAtRestOptions& value) { m_encryptionAtRestOptionsHasBeenSet = true; m_encryptionAtRestOptions = value; }
    inline void SetEncryptionAtRestOptions(EncryptionAtRestOptions&& value) { m_encryptionAtRestOptionsHasBeenSet = true; m_encryptionAtRestOptions = std::move(value); }
    inline ElasticsearchDomainStatus& WithEncryptionAtRestOptions(const EncryptionAtRestOptions& value) { SetEncryptionAtRestOptions(value); return *this;}
    inline ElasticsearchDomainStatus& WithEncryptionAtRestOptions(EncryptionAtRestOptions&& value) { SetEncryptionAtRestOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the status of the <code>NodeToNodeEncryptionOptions</code>.</p>
     */
    inline const NodeToNodeEncryptionOptions& GetNodeToNodeEncryptionOptions() const{ return m_nodeToNodeEncryptionOptions; }
    inline bool NodeToNodeEncryptionOptionsHasBeenSet() const { return m_nodeToNodeEncryptionOptionsHasBeenSet; }
    inline void SetNodeToNodeEncryptionOptions(const NodeToNodeEncryptionOptions& value) { m_nodeToNodeEncryptionOptionsHasBeenSet = true; m_nodeToNodeEncryptionOptions = value; }
    inline void SetNodeToNodeEncryptionOptions(NodeToNodeEncryptionOptions&& value) { m_nodeToNodeEncryptionOptionsHasBeenSet = true; m_nodeToNodeEncryptionOptions = std::move(value); }
    inline ElasticsearchDomainStatus& WithNodeToNodeEncryptionOptions(const NodeToNodeEncryptionOptions& value) { SetNodeToNodeEncryptionOptions(value); return *this;}
    inline ElasticsearchDomainStatus& WithNodeToNodeEncryptionOptions(NodeToNodeEncryptionOptions&& value) { SetNodeToNodeEncryptionOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the status of the <code>AdvancedOptions</code></p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAdvancedOptions() const{ return m_advancedOptions; }
    inline bool AdvancedOptionsHasBeenSet() const { return m_advancedOptionsHasBeenSet; }
    inline void SetAdvancedOptions(const Aws::Map<Aws::String, Aws::String>& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions = value; }
    inline void SetAdvancedOptions(Aws::Map<Aws::String, Aws::String>&& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions = std::move(value); }
    inline ElasticsearchDomainStatus& WithAdvancedOptions(const Aws::Map<Aws::String, Aws::String>& value) { SetAdvancedOptions(value); return *this;}
    inline ElasticsearchDomainStatus& WithAdvancedOptions(Aws::Map<Aws::String, Aws::String>&& value) { SetAdvancedOptions(std::move(value)); return *this;}
    inline ElasticsearchDomainStatus& AddAdvancedOptions(const Aws::String& key, const Aws::String& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(key, value); return *this; }
    inline ElasticsearchDomainStatus& AddAdvancedOptions(Aws::String&& key, const Aws::String& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(std::move(key), value); return *this; }
    inline ElasticsearchDomainStatus& AddAdvancedOptions(const Aws::String& key, Aws::String&& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(key, std::move(value)); return *this; }
    inline ElasticsearchDomainStatus& AddAdvancedOptions(Aws::String&& key, Aws::String&& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(std::move(key), std::move(value)); return *this; }
    inline ElasticsearchDomainStatus& AddAdvancedOptions(const char* key, Aws::String&& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(key, std::move(value)); return *this; }
    inline ElasticsearchDomainStatus& AddAdvancedOptions(Aws::String&& key, const char* value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(std::move(key), value); return *this; }
    inline ElasticsearchDomainStatus& AddAdvancedOptions(const char* key, const char* value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Log publishing options for the given domain.</p>
     */
    inline const Aws::Map<LogType, LogPublishingOption>& GetLogPublishingOptions() const{ return m_logPublishingOptions; }
    inline bool LogPublishingOptionsHasBeenSet() const { return m_logPublishingOptionsHasBeenSet; }
    inline void SetLogPublishingOptions(const Aws::Map<LogType, LogPublishingOption>& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions = value; }
    inline void SetLogPublishingOptions(Aws::Map<LogType, LogPublishingOption>&& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions = std::move(value); }
    inline ElasticsearchDomainStatus& WithLogPublishingOptions(const Aws::Map<LogType, LogPublishingOption>& value) { SetLogPublishingOptions(value); return *this;}
    inline ElasticsearchDomainStatus& WithLogPublishingOptions(Aws::Map<LogType, LogPublishingOption>&& value) { SetLogPublishingOptions(std::move(value)); return *this;}
    inline ElasticsearchDomainStatus& AddLogPublishingOptions(const LogType& key, const LogPublishingOption& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions.emplace(key, value); return *this; }
    inline ElasticsearchDomainStatus& AddLogPublishingOptions(LogType&& key, const LogPublishingOption& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions.emplace(std::move(key), value); return *this; }
    inline ElasticsearchDomainStatus& AddLogPublishingOptions(const LogType& key, LogPublishingOption&& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions.emplace(key, std::move(value)); return *this; }
    inline ElasticsearchDomainStatus& AddLogPublishingOptions(LogType&& key, LogPublishingOption&& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions.emplace(std::move(key), std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The current status of the Elasticsearch domain's service software.</p>
     */
    inline const ServiceSoftwareOptions& GetServiceSoftwareOptions() const{ return m_serviceSoftwareOptions; }
    inline bool ServiceSoftwareOptionsHasBeenSet() const { return m_serviceSoftwareOptionsHasBeenSet; }
    inline void SetServiceSoftwareOptions(const ServiceSoftwareOptions& value) { m_serviceSoftwareOptionsHasBeenSet = true; m_serviceSoftwareOptions = value; }
    inline void SetServiceSoftwareOptions(ServiceSoftwareOptions&& value) { m_serviceSoftwareOptionsHasBeenSet = true; m_serviceSoftwareOptions = std::move(value); }
    inline ElasticsearchDomainStatus& WithServiceSoftwareOptions(const ServiceSoftwareOptions& value) { SetServiceSoftwareOptions(value); return *this;}
    inline ElasticsearchDomainStatus& WithServiceSoftwareOptions(ServiceSoftwareOptions&& value) { SetServiceSoftwareOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the Elasticsearch domain's endpoint options.</p>
     */
    inline const DomainEndpointOptions& GetDomainEndpointOptions() const{ return m_domainEndpointOptions; }
    inline bool DomainEndpointOptionsHasBeenSet() const { return m_domainEndpointOptionsHasBeenSet; }
    inline void SetDomainEndpointOptions(const DomainEndpointOptions& value) { m_domainEndpointOptionsHasBeenSet = true; m_domainEndpointOptions = value; }
    inline void SetDomainEndpointOptions(DomainEndpointOptions&& value) { m_domainEndpointOptionsHasBeenSet = true; m_domainEndpointOptions = std::move(value); }
    inline ElasticsearchDomainStatus& WithDomainEndpointOptions(const DomainEndpointOptions& value) { SetDomainEndpointOptions(value); return *this;}
    inline ElasticsearchDomainStatus& WithDomainEndpointOptions(DomainEndpointOptions&& value) { SetDomainEndpointOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the Elasticsearch domain's advanced security
     * options.</p>
     */
    inline const AdvancedSecurityOptions& GetAdvancedSecurityOptions() const{ return m_advancedSecurityOptions; }
    inline bool AdvancedSecurityOptionsHasBeenSet() const { return m_advancedSecurityOptionsHasBeenSet; }
    inline void SetAdvancedSecurityOptions(const AdvancedSecurityOptions& value) { m_advancedSecurityOptionsHasBeenSet = true; m_advancedSecurityOptions = value; }
    inline void SetAdvancedSecurityOptions(AdvancedSecurityOptions&& value) { m_advancedSecurityOptionsHasBeenSet = true; m_advancedSecurityOptions = std::move(value); }
    inline ElasticsearchDomainStatus& WithAdvancedSecurityOptions(const AdvancedSecurityOptions& value) { SetAdvancedSecurityOptions(value); return *this;}
    inline ElasticsearchDomainStatus& WithAdvancedSecurityOptions(AdvancedSecurityOptions&& value) { SetAdvancedSecurityOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current status of the Elasticsearch domain's Auto-Tune options.</p>
     */
    inline const AutoTuneOptionsOutput& GetAutoTuneOptions() const{ return m_autoTuneOptions; }
    inline bool AutoTuneOptionsHasBeenSet() const { return m_autoTuneOptionsHasBeenSet; }
    inline void SetAutoTuneOptions(const AutoTuneOptionsOutput& value) { m_autoTuneOptionsHasBeenSet = true; m_autoTuneOptions = value; }
    inline void SetAutoTuneOptions(AutoTuneOptionsOutput&& value) { m_autoTuneOptionsHasBeenSet = true; m_autoTuneOptions = std::move(value); }
    inline ElasticsearchDomainStatus& WithAutoTuneOptions(const AutoTuneOptionsOutput& value) { SetAutoTuneOptions(value); return *this;}
    inline ElasticsearchDomainStatus& WithAutoTuneOptions(AutoTuneOptionsOutput&& value) { SetAutoTuneOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies change details of the domain configuration change.</p>
     */
    inline const ChangeProgressDetails& GetChangeProgressDetails() const{ return m_changeProgressDetails; }
    inline bool ChangeProgressDetailsHasBeenSet() const { return m_changeProgressDetailsHasBeenSet; }
    inline void SetChangeProgressDetails(const ChangeProgressDetails& value) { m_changeProgressDetailsHasBeenSet = true; m_changeProgressDetails = value; }
    inline void SetChangeProgressDetails(ChangeProgressDetails&& value) { m_changeProgressDetailsHasBeenSet = true; m_changeProgressDetails = std::move(value); }
    inline ElasticsearchDomainStatus& WithChangeProgressDetails(const ChangeProgressDetails& value) { SetChangeProgressDetails(value); return *this;}
    inline ElasticsearchDomainStatus& WithChangeProgressDetails(ChangeProgressDetails&& value) { SetChangeProgressDetails(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of any changes that are currently in progress for the domain.</p>
     */
    inline const DomainProcessingStatusType& GetDomainProcessingStatus() const{ return m_domainProcessingStatus; }
    inline bool DomainProcessingStatusHasBeenSet() const { return m_domainProcessingStatusHasBeenSet; }
    inline void SetDomainProcessingStatus(const DomainProcessingStatusType& value) { m_domainProcessingStatusHasBeenSet = true; m_domainProcessingStatus = value; }
    inline void SetDomainProcessingStatus(DomainProcessingStatusType&& value) { m_domainProcessingStatusHasBeenSet = true; m_domainProcessingStatus = std::move(value); }
    inline ElasticsearchDomainStatus& WithDomainProcessingStatus(const DomainProcessingStatusType& value) { SetDomainProcessingStatus(value); return *this;}
    inline ElasticsearchDomainStatus& WithDomainProcessingStatus(DomainProcessingStatusType&& value) { SetDomainProcessingStatus(std::move(value)); return *this;}
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
    inline ElasticsearchDomainStatus& WithModifyingProperties(const Aws::Vector<ModifyingProperties>& value) { SetModifyingProperties(value); return *this;}
    inline ElasticsearchDomainStatus& WithModifyingProperties(Aws::Vector<ModifyingProperties>&& value) { SetModifyingProperties(std::move(value)); return *this;}
    inline ElasticsearchDomainStatus& AddModifyingProperties(const ModifyingProperties& value) { m_modifyingPropertiesHasBeenSet = true; m_modifyingProperties.push_back(value); return *this; }
    inline ElasticsearchDomainStatus& AddModifyingProperties(ModifyingProperties&& value) { m_modifyingPropertiesHasBeenSet = true; m_modifyingProperties.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_aRN;
    bool m_aRNHasBeenSet = false;

    bool m_created;
    bool m_createdHasBeenSet = false;

    bool m_deleted;
    bool m_deletedHasBeenSet = false;

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_endpoints;
    bool m_endpointsHasBeenSet = false;

    bool m_processing;
    bool m_processingHasBeenSet = false;

    bool m_upgradeProcessing;
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

    DomainProcessingStatusType m_domainProcessingStatus;
    bool m_domainProcessingStatusHasBeenSet = false;

    Aws::Vector<ModifyingProperties> m_modifyingProperties;
    bool m_modifyingPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
