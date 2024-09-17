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
#include <aws/es/model/EncryptionAtRestOptions.h>
#include <aws/es/model/NodeToNodeEncryptionOptions.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/es/model/DomainEndpointOptions.h>
#include <aws/es/model/AdvancedSecurityOptionsInput.h>
#include <aws/es/model/AutoTuneOptionsInput.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/es/model/LogType.h>
#include <aws/es/model/LogPublishingOption.h>
#include <aws/es/model/Tag.h>
#include <utility>

namespace Aws
{
namespace ElasticsearchService
{
namespace Model
{

  /**
   */
  class CreateElasticsearchDomainRequest : public ElasticsearchServiceRequest
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API CreateElasticsearchDomainRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateElasticsearchDomain"; }

    AWS_ELASTICSEARCHSERVICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the Elasticsearch domain that you are creating. Domain names are
     * unique across the domains owned by an account within an AWS region. Domain names
     * must start with a lowercase letter and can contain the following characters: a-z
     * (lowercase), 0-9, and - (hyphen).</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }
    inline CreateElasticsearchDomainRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}
    inline CreateElasticsearchDomainRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}
    inline CreateElasticsearchDomainRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>String of format X.Y to specify version for the Elasticsearch domain eg.
     * "1.5" or "2.3". For more information, see <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-createupdatedomains.html#es-createdomains"
     * target="_blank">Creating Elasticsearch Domains</a> in the <i>Amazon
     * Elasticsearch Service Developer Guide</i>.</p>
     */
    inline const Aws::String& GetElasticsearchVersion() const{ return m_elasticsearchVersion; }
    inline bool ElasticsearchVersionHasBeenSet() const { return m_elasticsearchVersionHasBeenSet; }
    inline void SetElasticsearchVersion(const Aws::String& value) { m_elasticsearchVersionHasBeenSet = true; m_elasticsearchVersion = value; }
    inline void SetElasticsearchVersion(Aws::String&& value) { m_elasticsearchVersionHasBeenSet = true; m_elasticsearchVersion = std::move(value); }
    inline void SetElasticsearchVersion(const char* value) { m_elasticsearchVersionHasBeenSet = true; m_elasticsearchVersion.assign(value); }
    inline CreateElasticsearchDomainRequest& WithElasticsearchVersion(const Aws::String& value) { SetElasticsearchVersion(value); return *this;}
    inline CreateElasticsearchDomainRequest& WithElasticsearchVersion(Aws::String&& value) { SetElasticsearchVersion(std::move(value)); return *this;}
    inline CreateElasticsearchDomainRequest& WithElasticsearchVersion(const char* value) { SetElasticsearchVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Configuration options for an Elasticsearch domain. Specifies the instance
     * type and number of instances in the domain cluster. </p>
     */
    inline const ElasticsearchClusterConfig& GetElasticsearchClusterConfig() const{ return m_elasticsearchClusterConfig; }
    inline bool ElasticsearchClusterConfigHasBeenSet() const { return m_elasticsearchClusterConfigHasBeenSet; }
    inline void SetElasticsearchClusterConfig(const ElasticsearchClusterConfig& value) { m_elasticsearchClusterConfigHasBeenSet = true; m_elasticsearchClusterConfig = value; }
    inline void SetElasticsearchClusterConfig(ElasticsearchClusterConfig&& value) { m_elasticsearchClusterConfigHasBeenSet = true; m_elasticsearchClusterConfig = std::move(value); }
    inline CreateElasticsearchDomainRequest& WithElasticsearchClusterConfig(const ElasticsearchClusterConfig& value) { SetElasticsearchClusterConfig(value); return *this;}
    inline CreateElasticsearchDomainRequest& WithElasticsearchClusterConfig(ElasticsearchClusterConfig&& value) { SetElasticsearchClusterConfig(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Options to enable, disable and specify the type and size of EBS storage
     * volumes. </p>
     */
    inline const EBSOptions& GetEBSOptions() const{ return m_eBSOptions; }
    inline bool EBSOptionsHasBeenSet() const { return m_eBSOptionsHasBeenSet; }
    inline void SetEBSOptions(const EBSOptions& value) { m_eBSOptionsHasBeenSet = true; m_eBSOptions = value; }
    inline void SetEBSOptions(EBSOptions&& value) { m_eBSOptionsHasBeenSet = true; m_eBSOptions = std::move(value); }
    inline CreateElasticsearchDomainRequest& WithEBSOptions(const EBSOptions& value) { SetEBSOptions(value); return *this;}
    inline CreateElasticsearchDomainRequest& WithEBSOptions(EBSOptions&& value) { SetEBSOptions(std::move(value)); return *this;}
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
    inline CreateElasticsearchDomainRequest& WithAccessPolicies(const Aws::String& value) { SetAccessPolicies(value); return *this;}
    inline CreateElasticsearchDomainRequest& WithAccessPolicies(Aws::String&& value) { SetAccessPolicies(std::move(value)); return *this;}
    inline CreateElasticsearchDomainRequest& WithAccessPolicies(const char* value) { SetAccessPolicies(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Option to set time, in UTC format, of the daily automated snapshot. Default
     * value is 0 hours. </p>
     */
    inline const SnapshotOptions& GetSnapshotOptions() const{ return m_snapshotOptions; }
    inline bool SnapshotOptionsHasBeenSet() const { return m_snapshotOptionsHasBeenSet; }
    inline void SetSnapshotOptions(const SnapshotOptions& value) { m_snapshotOptionsHasBeenSet = true; m_snapshotOptions = value; }
    inline void SetSnapshotOptions(SnapshotOptions&& value) { m_snapshotOptionsHasBeenSet = true; m_snapshotOptions = std::move(value); }
    inline CreateElasticsearchDomainRequest& WithSnapshotOptions(const SnapshotOptions& value) { SetSnapshotOptions(value); return *this;}
    inline CreateElasticsearchDomainRequest& WithSnapshotOptions(SnapshotOptions&& value) { SetSnapshotOptions(std::move(value)); return *this;}
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
    inline CreateElasticsearchDomainRequest& WithVPCOptions(const VPCOptions& value) { SetVPCOptions(value); return *this;}
    inline CreateElasticsearchDomainRequest& WithVPCOptions(VPCOptions&& value) { SetVPCOptions(std::move(value)); return *this;}
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
    inline CreateElasticsearchDomainRequest& WithCognitoOptions(const CognitoOptions& value) { SetCognitoOptions(value); return *this;}
    inline CreateElasticsearchDomainRequest& WithCognitoOptions(CognitoOptions&& value) { SetCognitoOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the Encryption At Rest Options.</p>
     */
    inline const EncryptionAtRestOptions& GetEncryptionAtRestOptions() const{ return m_encryptionAtRestOptions; }
    inline bool EncryptionAtRestOptionsHasBeenSet() const { return m_encryptionAtRestOptionsHasBeenSet; }
    inline void SetEncryptionAtRestOptions(const EncryptionAtRestOptions& value) { m_encryptionAtRestOptionsHasBeenSet = true; m_encryptionAtRestOptions = value; }
    inline void SetEncryptionAtRestOptions(EncryptionAtRestOptions&& value) { m_encryptionAtRestOptionsHasBeenSet = true; m_encryptionAtRestOptions = std::move(value); }
    inline CreateElasticsearchDomainRequest& WithEncryptionAtRestOptions(const EncryptionAtRestOptions& value) { SetEncryptionAtRestOptions(value); return *this;}
    inline CreateElasticsearchDomainRequest& WithEncryptionAtRestOptions(EncryptionAtRestOptions&& value) { SetEncryptionAtRestOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the NodeToNodeEncryptionOptions.</p>
     */
    inline const NodeToNodeEncryptionOptions& GetNodeToNodeEncryptionOptions() const{ return m_nodeToNodeEncryptionOptions; }
    inline bool NodeToNodeEncryptionOptionsHasBeenSet() const { return m_nodeToNodeEncryptionOptionsHasBeenSet; }
    inline void SetNodeToNodeEncryptionOptions(const NodeToNodeEncryptionOptions& value) { m_nodeToNodeEncryptionOptionsHasBeenSet = true; m_nodeToNodeEncryptionOptions = value; }
    inline void SetNodeToNodeEncryptionOptions(NodeToNodeEncryptionOptions&& value) { m_nodeToNodeEncryptionOptionsHasBeenSet = true; m_nodeToNodeEncryptionOptions = std::move(value); }
    inline CreateElasticsearchDomainRequest& WithNodeToNodeEncryptionOptions(const NodeToNodeEncryptionOptions& value) { SetNodeToNodeEncryptionOptions(value); return *this;}
    inline CreateElasticsearchDomainRequest& WithNodeToNodeEncryptionOptions(NodeToNodeEncryptionOptions&& value) { SetNodeToNodeEncryptionOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Option to allow references to indices in an HTTP request body. Must be
     * <code>false</code> when configuring access to individual sub-resources. By
     * default, the value is <code>true</code>. See <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-createupdatedomains.html#es-createdomain-configure-advanced-options"
     * target="_blank">Configuration Advanced Options</a> for more information.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAdvancedOptions() const{ return m_advancedOptions; }
    inline bool AdvancedOptionsHasBeenSet() const { return m_advancedOptionsHasBeenSet; }
    inline void SetAdvancedOptions(const Aws::Map<Aws::String, Aws::String>& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions = value; }
    inline void SetAdvancedOptions(Aws::Map<Aws::String, Aws::String>&& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions = std::move(value); }
    inline CreateElasticsearchDomainRequest& WithAdvancedOptions(const Aws::Map<Aws::String, Aws::String>& value) { SetAdvancedOptions(value); return *this;}
    inline CreateElasticsearchDomainRequest& WithAdvancedOptions(Aws::Map<Aws::String, Aws::String>&& value) { SetAdvancedOptions(std::move(value)); return *this;}
    inline CreateElasticsearchDomainRequest& AddAdvancedOptions(const Aws::String& key, const Aws::String& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(key, value); return *this; }
    inline CreateElasticsearchDomainRequest& AddAdvancedOptions(Aws::String&& key, const Aws::String& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(std::move(key), value); return *this; }
    inline CreateElasticsearchDomainRequest& AddAdvancedOptions(const Aws::String& key, Aws::String&& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(key, std::move(value)); return *this; }
    inline CreateElasticsearchDomainRequest& AddAdvancedOptions(Aws::String&& key, Aws::String&& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(std::move(key), std::move(value)); return *this; }
    inline CreateElasticsearchDomainRequest& AddAdvancedOptions(const char* key, Aws::String&& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(key, std::move(value)); return *this; }
    inline CreateElasticsearchDomainRequest& AddAdvancedOptions(Aws::String&& key, const char* value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(std::move(key), value); return *this; }
    inline CreateElasticsearchDomainRequest& AddAdvancedOptions(const char* key, const char* value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(key, value); return *this; }
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
    inline CreateElasticsearchDomainRequest& WithLogPublishingOptions(const Aws::Map<LogType, LogPublishingOption>& value) { SetLogPublishingOptions(value); return *this;}
    inline CreateElasticsearchDomainRequest& WithLogPublishingOptions(Aws::Map<LogType, LogPublishingOption>&& value) { SetLogPublishingOptions(std::move(value)); return *this;}
    inline CreateElasticsearchDomainRequest& AddLogPublishingOptions(const LogType& key, const LogPublishingOption& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions.emplace(key, value); return *this; }
    inline CreateElasticsearchDomainRequest& AddLogPublishingOptions(LogType&& key, const LogPublishingOption& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions.emplace(std::move(key), value); return *this; }
    inline CreateElasticsearchDomainRequest& AddLogPublishingOptions(const LogType& key, LogPublishingOption&& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions.emplace(key, std::move(value)); return *this; }
    inline CreateElasticsearchDomainRequest& AddLogPublishingOptions(LogType&& key, LogPublishingOption&& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions.emplace(std::move(key), std::move(value)); return *this; }
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
    inline CreateElasticsearchDomainRequest& WithDomainEndpointOptions(const DomainEndpointOptions& value) { SetDomainEndpointOptions(value); return *this;}
    inline CreateElasticsearchDomainRequest& WithDomainEndpointOptions(DomainEndpointOptions&& value) { SetDomainEndpointOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies advanced security options.</p>
     */
    inline const AdvancedSecurityOptionsInput& GetAdvancedSecurityOptions() const{ return m_advancedSecurityOptions; }
    inline bool AdvancedSecurityOptionsHasBeenSet() const { return m_advancedSecurityOptionsHasBeenSet; }
    inline void SetAdvancedSecurityOptions(const AdvancedSecurityOptionsInput& value) { m_advancedSecurityOptionsHasBeenSet = true; m_advancedSecurityOptions = value; }
    inline void SetAdvancedSecurityOptions(AdvancedSecurityOptionsInput&& value) { m_advancedSecurityOptionsHasBeenSet = true; m_advancedSecurityOptions = std::move(value); }
    inline CreateElasticsearchDomainRequest& WithAdvancedSecurityOptions(const AdvancedSecurityOptionsInput& value) { SetAdvancedSecurityOptions(value); return *this;}
    inline CreateElasticsearchDomainRequest& WithAdvancedSecurityOptions(AdvancedSecurityOptionsInput&& value) { SetAdvancedSecurityOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies Auto-Tune options.</p>
     */
    inline const AutoTuneOptionsInput& GetAutoTuneOptions() const{ return m_autoTuneOptions; }
    inline bool AutoTuneOptionsHasBeenSet() const { return m_autoTuneOptionsHasBeenSet; }
    inline void SetAutoTuneOptions(const AutoTuneOptionsInput& value) { m_autoTuneOptionsHasBeenSet = true; m_autoTuneOptions = value; }
    inline void SetAutoTuneOptions(AutoTuneOptionsInput&& value) { m_autoTuneOptionsHasBeenSet = true; m_autoTuneOptions = std::move(value); }
    inline CreateElasticsearchDomainRequest& WithAutoTuneOptions(const AutoTuneOptionsInput& value) { SetAutoTuneOptions(value); return *this;}
    inline CreateElasticsearchDomainRequest& WithAutoTuneOptions(AutoTuneOptionsInput&& value) { SetAutoTuneOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of <code>Tag</code> added during domain creation.</p>
     */
    inline const Aws::Vector<Tag>& GetTagList() const{ return m_tagList; }
    inline bool TagListHasBeenSet() const { return m_tagListHasBeenSet; }
    inline void SetTagList(const Aws::Vector<Tag>& value) { m_tagListHasBeenSet = true; m_tagList = value; }
    inline void SetTagList(Aws::Vector<Tag>&& value) { m_tagListHasBeenSet = true; m_tagList = std::move(value); }
    inline CreateElasticsearchDomainRequest& WithTagList(const Aws::Vector<Tag>& value) { SetTagList(value); return *this;}
    inline CreateElasticsearchDomainRequest& WithTagList(Aws::Vector<Tag>&& value) { SetTagList(std::move(value)); return *this;}
    inline CreateElasticsearchDomainRequest& AddTagList(const Tag& value) { m_tagListHasBeenSet = true; m_tagList.push_back(value); return *this; }
    inline CreateElasticsearchDomainRequest& AddTagList(Tag&& value) { m_tagListHasBeenSet = true; m_tagList.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

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

    VPCOptions m_vPCOptions;
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

    DomainEndpointOptions m_domainEndpointOptions;
    bool m_domainEndpointOptionsHasBeenSet = false;

    AdvancedSecurityOptionsInput m_advancedSecurityOptions;
    bool m_advancedSecurityOptionsHasBeenSet = false;

    AutoTuneOptionsInput m_autoTuneOptions;
    bool m_autoTuneOptionsHasBeenSet = false;

    Aws::Vector<Tag> m_tagList;
    bool m_tagListHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
