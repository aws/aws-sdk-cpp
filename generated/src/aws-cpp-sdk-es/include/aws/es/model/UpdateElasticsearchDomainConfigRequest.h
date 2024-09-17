/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/ElasticsearchServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/es/model/ElasticsearchClusterConfig.h>
#include <aws/es/model/EBSOptions.h>
#include <aws/es/model/SnapshotOptions.h>
#include <aws/es/model/VPCOptions.h>
#include <aws/es/model/CognitoOptions.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/es/model/DomainEndpointOptions.h>
#include <aws/es/model/AdvancedSecurityOptionsInput.h>
#include <aws/es/model/NodeToNodeEncryptionOptions.h>
#include <aws/es/model/EncryptionAtRestOptions.h>
#include <aws/es/model/AutoTuneOptions.h>
#include <aws/es/model/LogType.h>
#include <aws/es/model/LogPublishingOption.h>
#include <utility>

namespace Aws
{
namespace ElasticsearchService
{
namespace Model
{

  /**
   * <p>Container for the parameters to the
   * <code><a>UpdateElasticsearchDomain</a></code> operation. Specifies the type and
   * number of instances in the domain cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/UpdateElasticsearchDomainConfigRequest">AWS
   * API Reference</a></p>
   */
  class UpdateElasticsearchDomainConfigRequest : public ElasticsearchServiceRequest
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API UpdateElasticsearchDomainConfigRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateElasticsearchDomainConfig"; }

    AWS_ELASTICSEARCHSERVICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the Elasticsearch domain that you are updating. </p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }
    inline UpdateElasticsearchDomainConfigRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline UpdateElasticsearchDomainConfigRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline UpdateElasticsearchDomainConfigRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type and number of instances to instantiate for the domain cluster.</p>
     */
    inline const ElasticsearchClusterConfig& GetElasticsearchClusterConfig() const{ return m_elasticsearchClusterConfig; }
    inline bool ElasticsearchClusterConfigHasBeenSet() const { return m_elasticsearchClusterConfigHasBeenSet; }
    inline void SetElasticsearchClusterConfig(const ElasticsearchClusterConfig& value) { m_elasticsearchClusterConfigHasBeenSet = true; m_elasticsearchClusterConfig = value; }
    inline void SetElasticsearchClusterConfig(ElasticsearchClusterConfig&& value) { m_elasticsearchClusterConfigHasBeenSet = true; m_elasticsearchClusterConfig = std::move(value); }
    inline UpdateElasticsearchDomainConfigRequest& WithElasticsearchClusterConfig(const ElasticsearchClusterConfig& value) { SetElasticsearchClusterConfig(value); return *this;}
    inline UpdateElasticsearchDomainConfigRequest& WithElasticsearchClusterConfig(ElasticsearchClusterConfig&& value) { SetElasticsearchClusterConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the type and size of the EBS volume that you want to use. </p>
     */
    inline const EBSOptions& GetEBSOptions() const{ return m_eBSOptions; }
    inline bool EBSOptionsHasBeenSet() const { return m_eBSOptionsHasBeenSet; }
    inline void SetEBSOptions(const EBSOptions& value) { m_eBSOptionsHasBeenSet = true; m_eBSOptions = value; }
    inline void SetEBSOptions(EBSOptions&& value) { m_eBSOptionsHasBeenSet = true; m_eBSOptions = std::move(value); }
    inline UpdateElasticsearchDomainConfigRequest& WithEBSOptions(const EBSOptions& value) { SetEBSOptions(value); return *this;}
    inline UpdateElasticsearchDomainConfigRequest& WithEBSOptions(EBSOptions&& value) { SetEBSOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Option to set the time, in UTC format, for the daily automated snapshot.
     * Default value is <code>0</code> hours. </p>
     */
    inline const SnapshotOptions& GetSnapshotOptions() const{ return m_snapshotOptions; }
    inline bool SnapshotOptionsHasBeenSet() const { return m_snapshotOptionsHasBeenSet; }
    inline void SetSnapshotOptions(const SnapshotOptions& value) { m_snapshotOptionsHasBeenSet = true; m_snapshotOptions = value; }
    inline void SetSnapshotOptions(SnapshotOptions&& value) { m_snapshotOptionsHasBeenSet = true; m_snapshotOptions = std::move(value); }
    inline UpdateElasticsearchDomainConfigRequest& WithSnapshotOptions(const SnapshotOptions& value) { SetSnapshotOptions(value); return *this;}
    inline UpdateElasticsearchDomainConfigRequest& WithSnapshotOptions(SnapshotOptions&& value) { SetSnapshotOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Options to specify the subnets and security groups for VPC endpoint. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-vpc.html#es-creating-vpc"
     * target="_blank">Creating a VPC</a> in <i>VPC Endpoints for Amazon Elasticsearch
     * Service Domains</i></p>
     */
    inline const VPCOptions& GetVPCOptions() const{ return m_vPCOptions; }
    inline bool VPCOptionsHasBeenSet() const { return m_vPCOptionsHasBeenSet; }
    inline void SetVPCOptions(const VPCOptions& value) { m_vPCOptionsHasBeenSet = true; m_vPCOptions = value; }
    inline void SetVPCOptions(VPCOptions&& value) { m_vPCOptionsHasBeenSet = true; m_vPCOptions = std::move(value); }
    inline UpdateElasticsearchDomainConfigRequest& WithVPCOptions(const VPCOptions& value) { SetVPCOptions(value); return *this;}
    inline UpdateElasticsearchDomainConfigRequest& WithVPCOptions(VPCOptions&& value) { SetVPCOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Options to specify the Cognito user and identity pools for Kibana
     * authentication. For more information, see <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-cognito-auth.html"
     * target="_blank">Amazon Cognito Authentication for Kibana</a>.</p>
     */
    inline const CognitoOptions& GetCognitoOptions() const{ return m_cognitoOptions; }
    inline bool CognitoOptionsHasBeenSet() const { return m_cognitoOptionsHasBeenSet; }
    inline void SetCognitoOptions(const CognitoOptions& value) { m_cognitoOptionsHasBeenSet = true; m_cognitoOptions = value; }
    inline void SetCognitoOptions(CognitoOptions&& value) { m_cognitoOptionsHasBeenSet = true; m_cognitoOptions = std::move(value); }
    inline UpdateElasticsearchDomainConfigRequest& WithCognitoOptions(const CognitoOptions& value) { SetCognitoOptions(value); return *this;}
    inline UpdateElasticsearchDomainConfigRequest& WithCognitoOptions(CognitoOptions&& value) { SetCognitoOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Modifies the advanced option to allow references to indices in an HTTP
     * request body. Must be <code>false</code> when configuring access to individual
     * sub-resources. By default, the value is <code>true</code>. See <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-createupdatedomains.html#es-createdomain-configure-advanced-options"
     * target="_blank">Configuration Advanced Options</a> for more information.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAdvancedOptions() const{ return m_advancedOptions; }
    inline bool AdvancedOptionsHasBeenSet() const { return m_advancedOptionsHasBeenSet; }
    inline void SetAdvancedOptions(const Aws::Map<Aws::String, Aws::String>& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions = value; }
    inline void SetAdvancedOptions(Aws::Map<Aws::String, Aws::String>&& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions = std::move(value); }
    inline UpdateElasticsearchDomainConfigRequest& WithAdvancedOptions(const Aws::Map<Aws::String, Aws::String>& value) { SetAdvancedOptions(value); return *this;}
    inline UpdateElasticsearchDomainConfigRequest& WithAdvancedOptions(Aws::Map<Aws::String, Aws::String>&& value) { SetAdvancedOptions(std::move(value)); return *this;}
    inline UpdateElasticsearchDomainConfigRequest& AddAdvancedOptions(const Aws::String& key, const Aws::String& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(key, value); return *this; }
    inline UpdateElasticsearchDomainConfigRequest& AddAdvancedOptions(Aws::String&& key, const Aws::String& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(std::move(key), value); return *this; }
    inline UpdateElasticsearchDomainConfigRequest& AddAdvancedOptions(const Aws::String& key, Aws::String&& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(key, std::move(value)); return *this; }
    inline UpdateElasticsearchDomainConfigRequest& AddAdvancedOptions(Aws::String&& key, Aws::String&& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(std::move(key), std::move(value)); return *this; }
    inline UpdateElasticsearchDomainConfigRequest& AddAdvancedOptions(const char* key, Aws::String&& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(key, std::move(value)); return *this; }
    inline UpdateElasticsearchDomainConfigRequest& AddAdvancedOptions(Aws::String&& key, const char* value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(std::move(key), value); return *this; }
    inline UpdateElasticsearchDomainConfigRequest& AddAdvancedOptions(const char* key, const char* value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>IAM access policy as a JSON-formatted string.</p>
     */
    inline const Aws::String& GetAccessPolicies() const{ return m_accessPolicies; }
    inline bool AccessPoliciesHasBeenSet() const { return m_accessPoliciesHasBeenSet; }
    inline void SetAccessPolicies(const Aws::String& value) { m_accessPoliciesHasBeenSet = true; m_accessPolicies = value; }
    inline void SetAccessPolicies(Aws::String&& value) { m_accessPoliciesHasBeenSet = true; m_accessPolicies = std::move(value); }
    inline void SetAccessPolicies(const char* value) { m_accessPoliciesHasBeenSet = true; m_accessPolicies.assign(value); }
    inline UpdateElasticsearchDomainConfigRequest& WithAccessPolicies(const Aws::String& value) { SetAccessPolicies(value); return *this;}
    inline UpdateElasticsearchDomainConfigRequest& WithAccessPolicies(Aws::String&& value) { SetAccessPolicies(std::move(value)); return *this;}
    inline UpdateElasticsearchDomainConfigRequest& WithAccessPolicies(const char* value) { SetAccessPolicies(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Map of <code>LogType</code> and <code>LogPublishingOption</code>, each
     * containing options to publish a given type of Elasticsearch log.</p>
     */
    inline const Aws::Map<LogType, LogPublishingOption>& GetLogPublishingOptions() const{ return m_logPublishingOptions; }
    inline bool LogPublishingOptionsHasBeenSet() const { return m_logPublishingOptionsHasBeenSet; }
    inline void SetLogPublishingOptions(const Aws::Map<LogType, LogPublishingOption>& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions = value; }
    inline void SetLogPublishingOptions(Aws::Map<LogType, LogPublishingOption>&& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions = std::move(value); }
    inline UpdateElasticsearchDomainConfigRequest& WithLogPublishingOptions(const Aws::Map<LogType, LogPublishingOption>& value) { SetLogPublishingOptions(value); return *this;}
    inline UpdateElasticsearchDomainConfigRequest& WithLogPublishingOptions(Aws::Map<LogType, LogPublishingOption>&& value) { SetLogPublishingOptions(std::move(value)); return *this;}
    inline UpdateElasticsearchDomainConfigRequest& AddLogPublishingOptions(const LogType& key, const LogPublishingOption& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions.emplace(key, value); return *this; }
    inline UpdateElasticsearchDomainConfigRequest& AddLogPublishingOptions(LogType&& key, const LogPublishingOption& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions.emplace(std::move(key), value); return *this; }
    inline UpdateElasticsearchDomainConfigRequest& AddLogPublishingOptions(const LogType& key, LogPublishingOption&& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions.emplace(key, std::move(value)); return *this; }
    inline UpdateElasticsearchDomainConfigRequest& AddLogPublishingOptions(LogType&& key, LogPublishingOption&& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions.emplace(std::move(key), std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Options to specify configuration that will be applied to the domain
     * endpoint.</p>
     */
    inline const DomainEndpointOptions& GetDomainEndpointOptions() const{ return m_domainEndpointOptions; }
    inline bool DomainEndpointOptionsHasBeenSet() const { return m_domainEndpointOptionsHasBeenSet; }
    inline void SetDomainEndpointOptions(const DomainEndpointOptions& value) { m_domainEndpointOptionsHasBeenSet = true; m_domainEndpointOptions = value; }
    inline void SetDomainEndpointOptions(DomainEndpointOptions&& value) { m_domainEndpointOptionsHasBeenSet = true; m_domainEndpointOptions = std::move(value); }
    inline UpdateElasticsearchDomainConfigRequest& WithDomainEndpointOptions(const DomainEndpointOptions& value) { SetDomainEndpointOptions(value); return *this;}
    inline UpdateElasticsearchDomainConfigRequest& WithDomainEndpointOptions(DomainEndpointOptions&& value) { SetDomainEndpointOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies advanced security options.</p>
     */
    inline const AdvancedSecurityOptionsInput& GetAdvancedSecurityOptions() const{ return m_advancedSecurityOptions; }
    inline bool AdvancedSecurityOptionsHasBeenSet() const { return m_advancedSecurityOptionsHasBeenSet; }
    inline void SetAdvancedSecurityOptions(const AdvancedSecurityOptionsInput& value) { m_advancedSecurityOptionsHasBeenSet = true; m_advancedSecurityOptions = value; }
    inline void SetAdvancedSecurityOptions(AdvancedSecurityOptionsInput&& value) { m_advancedSecurityOptionsHasBeenSet = true; m_advancedSecurityOptions = std::move(value); }
    inline UpdateElasticsearchDomainConfigRequest& WithAdvancedSecurityOptions(const AdvancedSecurityOptionsInput& value) { SetAdvancedSecurityOptions(value); return *this;}
    inline UpdateElasticsearchDomainConfigRequest& WithAdvancedSecurityOptions(AdvancedSecurityOptionsInput&& value) { SetAdvancedSecurityOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the NodeToNodeEncryptionOptions.</p>
     */
    inline const NodeToNodeEncryptionOptions& GetNodeToNodeEncryptionOptions() const{ return m_nodeToNodeEncryptionOptions; }
    inline bool NodeToNodeEncryptionOptionsHasBeenSet() const { return m_nodeToNodeEncryptionOptionsHasBeenSet; }
    inline void SetNodeToNodeEncryptionOptions(const NodeToNodeEncryptionOptions& value) { m_nodeToNodeEncryptionOptionsHasBeenSet = true; m_nodeToNodeEncryptionOptions = value; }
    inline void SetNodeToNodeEncryptionOptions(NodeToNodeEncryptionOptions&& value) { m_nodeToNodeEncryptionOptionsHasBeenSet = true; m_nodeToNodeEncryptionOptions = std::move(value); }
    inline UpdateElasticsearchDomainConfigRequest& WithNodeToNodeEncryptionOptions(const NodeToNodeEncryptionOptions& value) { SetNodeToNodeEncryptionOptions(value); return *this;}
    inline UpdateElasticsearchDomainConfigRequest& WithNodeToNodeEncryptionOptions(NodeToNodeEncryptionOptions&& value) { SetNodeToNodeEncryptionOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the Encryption At Rest Options.</p>
     */
    inline const EncryptionAtRestOptions& GetEncryptionAtRestOptions() const{ return m_encryptionAtRestOptions; }
    inline bool EncryptionAtRestOptionsHasBeenSet() const { return m_encryptionAtRestOptionsHasBeenSet; }
    inline void SetEncryptionAtRestOptions(const EncryptionAtRestOptions& value) { m_encryptionAtRestOptionsHasBeenSet = true; m_encryptionAtRestOptions = value; }
    inline void SetEncryptionAtRestOptions(EncryptionAtRestOptions&& value) { m_encryptionAtRestOptionsHasBeenSet = true; m_encryptionAtRestOptions = std::move(value); }
    inline UpdateElasticsearchDomainConfigRequest& WithEncryptionAtRestOptions(const EncryptionAtRestOptions& value) { SetEncryptionAtRestOptions(value); return *this;}
    inline UpdateElasticsearchDomainConfigRequest& WithEncryptionAtRestOptions(EncryptionAtRestOptions&& value) { SetEncryptionAtRestOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies Auto-Tune options.</p>
     */
    inline const AutoTuneOptions& GetAutoTuneOptions() const{ return m_autoTuneOptions; }
    inline bool AutoTuneOptionsHasBeenSet() const { return m_autoTuneOptionsHasBeenSet; }
    inline void SetAutoTuneOptions(const AutoTuneOptions& value) { m_autoTuneOptionsHasBeenSet = true; m_autoTuneOptions = value; }
    inline void SetAutoTuneOptions(AutoTuneOptions&& value) { m_autoTuneOptionsHasBeenSet = true; m_autoTuneOptions = std::move(value); }
    inline UpdateElasticsearchDomainConfigRequest& WithAutoTuneOptions(const AutoTuneOptions& value) { SetAutoTuneOptions(value); return *this;}
    inline UpdateElasticsearchDomainConfigRequest& WithAutoTuneOptions(AutoTuneOptions&& value) { SetAutoTuneOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> This flag, when set to True, specifies whether the
     * <code>UpdateElasticsearchDomain</code> request should return the results of
     * validation checks without actually applying the change. This flag, when set to
     * True, specifies the deployment mechanism through which the update shall be
     * applied on the domain. This will not actually perform the Update. </p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline UpdateElasticsearchDomainConfigRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    ElasticsearchClusterConfig m_elasticsearchClusterConfig;
    bool m_elasticsearchClusterConfigHasBeenSet = false;

    EBSOptions m_eBSOptions;
    bool m_eBSOptionsHasBeenSet = false;

    SnapshotOptions m_snapshotOptions;
    bool m_snapshotOptionsHasBeenSet = false;

    VPCOptions m_vPCOptions;
    bool m_vPCOptionsHasBeenSet = false;

    CognitoOptions m_cognitoOptions;
    bool m_cognitoOptionsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_advancedOptions;
    bool m_advancedOptionsHasBeenSet = false;

    Aws::String m_accessPolicies;
    bool m_accessPoliciesHasBeenSet = false;

    Aws::Map<LogType, LogPublishingOption> m_logPublishingOptions;
    bool m_logPublishingOptionsHasBeenSet = false;

    DomainEndpointOptions m_domainEndpointOptions;
    bool m_domainEndpointOptionsHasBeenSet = false;

    AdvancedSecurityOptionsInput m_advancedSecurityOptions;
    bool m_advancedSecurityOptionsHasBeenSet = false;

    NodeToNodeEncryptionOptions m_nodeToNodeEncryptionOptions;
    bool m_nodeToNodeEncryptionOptionsHasBeenSet = false;

    EncryptionAtRestOptions m_encryptionAtRestOptions;
    bool m_encryptionAtRestOptionsHasBeenSet = false;

    AutoTuneOptions m_autoTuneOptions;
    bool m_autoTuneOptionsHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
