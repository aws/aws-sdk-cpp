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
  class AWS_ELASTICSEARCHSERVICE_API ElasticsearchDomainConfig
  {
  public:
    ElasticsearchDomainConfig();
    ElasticsearchDomainConfig(Aws::Utils::Json::JsonView jsonValue);
    ElasticsearchDomainConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>String of format X.Y to specify version for the Elasticsearch domain.</p>
     */
    inline const ElasticsearchVersionStatus& GetElasticsearchVersion() const{ return m_elasticsearchVersion; }

    /**
     * <p>String of format X.Y to specify version for the Elasticsearch domain.</p>
     */
    inline bool ElasticsearchVersionHasBeenSet() const { return m_elasticsearchVersionHasBeenSet; }

    /**
     * <p>String of format X.Y to specify version for the Elasticsearch domain.</p>
     */
    inline void SetElasticsearchVersion(const ElasticsearchVersionStatus& value) { m_elasticsearchVersionHasBeenSet = true; m_elasticsearchVersion = value; }

    /**
     * <p>String of format X.Y to specify version for the Elasticsearch domain.</p>
     */
    inline void SetElasticsearchVersion(ElasticsearchVersionStatus&& value) { m_elasticsearchVersionHasBeenSet = true; m_elasticsearchVersion = std::move(value); }

    /**
     * <p>String of format X.Y to specify version for the Elasticsearch domain.</p>
     */
    inline ElasticsearchDomainConfig& WithElasticsearchVersion(const ElasticsearchVersionStatus& value) { SetElasticsearchVersion(value); return *this;}

    /**
     * <p>String of format X.Y to specify version for the Elasticsearch domain.</p>
     */
    inline ElasticsearchDomainConfig& WithElasticsearchVersion(ElasticsearchVersionStatus&& value) { SetElasticsearchVersion(std::move(value)); return *this;}


    /**
     * <p>Specifies the <code>ElasticsearchClusterConfig</code> for the Elasticsearch
     * domain.</p>
     */
    inline const ElasticsearchClusterConfigStatus& GetElasticsearchClusterConfig() const{ return m_elasticsearchClusterConfig; }

    /**
     * <p>Specifies the <code>ElasticsearchClusterConfig</code> for the Elasticsearch
     * domain.</p>
     */
    inline bool ElasticsearchClusterConfigHasBeenSet() const { return m_elasticsearchClusterConfigHasBeenSet; }

    /**
     * <p>Specifies the <code>ElasticsearchClusterConfig</code> for the Elasticsearch
     * domain.</p>
     */
    inline void SetElasticsearchClusterConfig(const ElasticsearchClusterConfigStatus& value) { m_elasticsearchClusterConfigHasBeenSet = true; m_elasticsearchClusterConfig = value; }

    /**
     * <p>Specifies the <code>ElasticsearchClusterConfig</code> for the Elasticsearch
     * domain.</p>
     */
    inline void SetElasticsearchClusterConfig(ElasticsearchClusterConfigStatus&& value) { m_elasticsearchClusterConfigHasBeenSet = true; m_elasticsearchClusterConfig = std::move(value); }

    /**
     * <p>Specifies the <code>ElasticsearchClusterConfig</code> for the Elasticsearch
     * domain.</p>
     */
    inline ElasticsearchDomainConfig& WithElasticsearchClusterConfig(const ElasticsearchClusterConfigStatus& value) { SetElasticsearchClusterConfig(value); return *this;}

    /**
     * <p>Specifies the <code>ElasticsearchClusterConfig</code> for the Elasticsearch
     * domain.</p>
     */
    inline ElasticsearchDomainConfig& WithElasticsearchClusterConfig(ElasticsearchClusterConfigStatus&& value) { SetElasticsearchClusterConfig(std::move(value)); return *this;}


    /**
     * <p>Specifies the <code>EBSOptions</code> for the Elasticsearch domain.</p>
     */
    inline const EBSOptionsStatus& GetEBSOptions() const{ return m_eBSOptions; }

    /**
     * <p>Specifies the <code>EBSOptions</code> for the Elasticsearch domain.</p>
     */
    inline bool EBSOptionsHasBeenSet() const { return m_eBSOptionsHasBeenSet; }

    /**
     * <p>Specifies the <code>EBSOptions</code> for the Elasticsearch domain.</p>
     */
    inline void SetEBSOptions(const EBSOptionsStatus& value) { m_eBSOptionsHasBeenSet = true; m_eBSOptions = value; }

    /**
     * <p>Specifies the <code>EBSOptions</code> for the Elasticsearch domain.</p>
     */
    inline void SetEBSOptions(EBSOptionsStatus&& value) { m_eBSOptionsHasBeenSet = true; m_eBSOptions = std::move(value); }

    /**
     * <p>Specifies the <code>EBSOptions</code> for the Elasticsearch domain.</p>
     */
    inline ElasticsearchDomainConfig& WithEBSOptions(const EBSOptionsStatus& value) { SetEBSOptions(value); return *this;}

    /**
     * <p>Specifies the <code>EBSOptions</code> for the Elasticsearch domain.</p>
     */
    inline ElasticsearchDomainConfig& WithEBSOptions(EBSOptionsStatus&& value) { SetEBSOptions(std::move(value)); return *this;}


    /**
     * <p>IAM access policy as a JSON-formatted string.</p>
     */
    inline const AccessPoliciesStatus& GetAccessPolicies() const{ return m_accessPolicies; }

    /**
     * <p>IAM access policy as a JSON-formatted string.</p>
     */
    inline bool AccessPoliciesHasBeenSet() const { return m_accessPoliciesHasBeenSet; }

    /**
     * <p>IAM access policy as a JSON-formatted string.</p>
     */
    inline void SetAccessPolicies(const AccessPoliciesStatus& value) { m_accessPoliciesHasBeenSet = true; m_accessPolicies = value; }

    /**
     * <p>IAM access policy as a JSON-formatted string.</p>
     */
    inline void SetAccessPolicies(AccessPoliciesStatus&& value) { m_accessPoliciesHasBeenSet = true; m_accessPolicies = std::move(value); }

    /**
     * <p>IAM access policy as a JSON-formatted string.</p>
     */
    inline ElasticsearchDomainConfig& WithAccessPolicies(const AccessPoliciesStatus& value) { SetAccessPolicies(value); return *this;}

    /**
     * <p>IAM access policy as a JSON-formatted string.</p>
     */
    inline ElasticsearchDomainConfig& WithAccessPolicies(AccessPoliciesStatus&& value) { SetAccessPolicies(std::move(value)); return *this;}


    /**
     * <p>Specifies the <code>SnapshotOptions</code> for the Elasticsearch domain.</p>
     */
    inline const SnapshotOptionsStatus& GetSnapshotOptions() const{ return m_snapshotOptions; }

    /**
     * <p>Specifies the <code>SnapshotOptions</code> for the Elasticsearch domain.</p>
     */
    inline bool SnapshotOptionsHasBeenSet() const { return m_snapshotOptionsHasBeenSet; }

    /**
     * <p>Specifies the <code>SnapshotOptions</code> for the Elasticsearch domain.</p>
     */
    inline void SetSnapshotOptions(const SnapshotOptionsStatus& value) { m_snapshotOptionsHasBeenSet = true; m_snapshotOptions = value; }

    /**
     * <p>Specifies the <code>SnapshotOptions</code> for the Elasticsearch domain.</p>
     */
    inline void SetSnapshotOptions(SnapshotOptionsStatus&& value) { m_snapshotOptionsHasBeenSet = true; m_snapshotOptions = std::move(value); }

    /**
     * <p>Specifies the <code>SnapshotOptions</code> for the Elasticsearch domain.</p>
     */
    inline ElasticsearchDomainConfig& WithSnapshotOptions(const SnapshotOptionsStatus& value) { SetSnapshotOptions(value); return *this;}

    /**
     * <p>Specifies the <code>SnapshotOptions</code> for the Elasticsearch domain.</p>
     */
    inline ElasticsearchDomainConfig& WithSnapshotOptions(SnapshotOptionsStatus&& value) { SetSnapshotOptions(std::move(value)); return *this;}


    /**
     * <p>The <code>VPCOptions</code> for the specified domain. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-vpc.html"
     * target="_blank">VPC Endpoints for Amazon Elasticsearch Service Domains</a>.</p>
     */
    inline const VPCDerivedInfoStatus& GetVPCOptions() const{ return m_vPCOptions; }

    /**
     * <p>The <code>VPCOptions</code> for the specified domain. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-vpc.html"
     * target="_blank">VPC Endpoints for Amazon Elasticsearch Service Domains</a>.</p>
     */
    inline bool VPCOptionsHasBeenSet() const { return m_vPCOptionsHasBeenSet; }

    /**
     * <p>The <code>VPCOptions</code> for the specified domain. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-vpc.html"
     * target="_blank">VPC Endpoints for Amazon Elasticsearch Service Domains</a>.</p>
     */
    inline void SetVPCOptions(const VPCDerivedInfoStatus& value) { m_vPCOptionsHasBeenSet = true; m_vPCOptions = value; }

    /**
     * <p>The <code>VPCOptions</code> for the specified domain. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-vpc.html"
     * target="_blank">VPC Endpoints for Amazon Elasticsearch Service Domains</a>.</p>
     */
    inline void SetVPCOptions(VPCDerivedInfoStatus&& value) { m_vPCOptionsHasBeenSet = true; m_vPCOptions = std::move(value); }

    /**
     * <p>The <code>VPCOptions</code> for the specified domain. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-vpc.html"
     * target="_blank">VPC Endpoints for Amazon Elasticsearch Service Domains</a>.</p>
     */
    inline ElasticsearchDomainConfig& WithVPCOptions(const VPCDerivedInfoStatus& value) { SetVPCOptions(value); return *this;}

    /**
     * <p>The <code>VPCOptions</code> for the specified domain. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-vpc.html"
     * target="_blank">VPC Endpoints for Amazon Elasticsearch Service Domains</a>.</p>
     */
    inline ElasticsearchDomainConfig& WithVPCOptions(VPCDerivedInfoStatus&& value) { SetVPCOptions(std::move(value)); return *this;}


    /**
     * <p>The <code>CognitoOptions</code> for the specified domain. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-cognito-auth.html"
     * target="_blank">Amazon Cognito Authentication for Kibana</a>.</p>
     */
    inline const CognitoOptionsStatus& GetCognitoOptions() const{ return m_cognitoOptions; }

    /**
     * <p>The <code>CognitoOptions</code> for the specified domain. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-cognito-auth.html"
     * target="_blank">Amazon Cognito Authentication for Kibana</a>.</p>
     */
    inline bool CognitoOptionsHasBeenSet() const { return m_cognitoOptionsHasBeenSet; }

    /**
     * <p>The <code>CognitoOptions</code> for the specified domain. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-cognito-auth.html"
     * target="_blank">Amazon Cognito Authentication for Kibana</a>.</p>
     */
    inline void SetCognitoOptions(const CognitoOptionsStatus& value) { m_cognitoOptionsHasBeenSet = true; m_cognitoOptions = value; }

    /**
     * <p>The <code>CognitoOptions</code> for the specified domain. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-cognito-auth.html"
     * target="_blank">Amazon Cognito Authentication for Kibana</a>.</p>
     */
    inline void SetCognitoOptions(CognitoOptionsStatus&& value) { m_cognitoOptionsHasBeenSet = true; m_cognitoOptions = std::move(value); }

    /**
     * <p>The <code>CognitoOptions</code> for the specified domain. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-cognito-auth.html"
     * target="_blank">Amazon Cognito Authentication for Kibana</a>.</p>
     */
    inline ElasticsearchDomainConfig& WithCognitoOptions(const CognitoOptionsStatus& value) { SetCognitoOptions(value); return *this;}

    /**
     * <p>The <code>CognitoOptions</code> for the specified domain. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-cognito-auth.html"
     * target="_blank">Amazon Cognito Authentication for Kibana</a>.</p>
     */
    inline ElasticsearchDomainConfig& WithCognitoOptions(CognitoOptionsStatus&& value) { SetCognitoOptions(std::move(value)); return *this;}


    /**
     * <p>Specifies the <code>EncryptionAtRestOptions</code> for the Elasticsearch
     * domain.</p>
     */
    inline const EncryptionAtRestOptionsStatus& GetEncryptionAtRestOptions() const{ return m_encryptionAtRestOptions; }

    /**
     * <p>Specifies the <code>EncryptionAtRestOptions</code> for the Elasticsearch
     * domain.</p>
     */
    inline bool EncryptionAtRestOptionsHasBeenSet() const { return m_encryptionAtRestOptionsHasBeenSet; }

    /**
     * <p>Specifies the <code>EncryptionAtRestOptions</code> for the Elasticsearch
     * domain.</p>
     */
    inline void SetEncryptionAtRestOptions(const EncryptionAtRestOptionsStatus& value) { m_encryptionAtRestOptionsHasBeenSet = true; m_encryptionAtRestOptions = value; }

    /**
     * <p>Specifies the <code>EncryptionAtRestOptions</code> for the Elasticsearch
     * domain.</p>
     */
    inline void SetEncryptionAtRestOptions(EncryptionAtRestOptionsStatus&& value) { m_encryptionAtRestOptionsHasBeenSet = true; m_encryptionAtRestOptions = std::move(value); }

    /**
     * <p>Specifies the <code>EncryptionAtRestOptions</code> for the Elasticsearch
     * domain.</p>
     */
    inline ElasticsearchDomainConfig& WithEncryptionAtRestOptions(const EncryptionAtRestOptionsStatus& value) { SetEncryptionAtRestOptions(value); return *this;}

    /**
     * <p>Specifies the <code>EncryptionAtRestOptions</code> for the Elasticsearch
     * domain.</p>
     */
    inline ElasticsearchDomainConfig& WithEncryptionAtRestOptions(EncryptionAtRestOptionsStatus&& value) { SetEncryptionAtRestOptions(std::move(value)); return *this;}


    /**
     * <p>Specifies the <code>NodeToNodeEncryptionOptions</code> for the Elasticsearch
     * domain.</p>
     */
    inline const NodeToNodeEncryptionOptionsStatus& GetNodeToNodeEncryptionOptions() const{ return m_nodeToNodeEncryptionOptions; }

    /**
     * <p>Specifies the <code>NodeToNodeEncryptionOptions</code> for the Elasticsearch
     * domain.</p>
     */
    inline bool NodeToNodeEncryptionOptionsHasBeenSet() const { return m_nodeToNodeEncryptionOptionsHasBeenSet; }

    /**
     * <p>Specifies the <code>NodeToNodeEncryptionOptions</code> for the Elasticsearch
     * domain.</p>
     */
    inline void SetNodeToNodeEncryptionOptions(const NodeToNodeEncryptionOptionsStatus& value) { m_nodeToNodeEncryptionOptionsHasBeenSet = true; m_nodeToNodeEncryptionOptions = value; }

    /**
     * <p>Specifies the <code>NodeToNodeEncryptionOptions</code> for the Elasticsearch
     * domain.</p>
     */
    inline void SetNodeToNodeEncryptionOptions(NodeToNodeEncryptionOptionsStatus&& value) { m_nodeToNodeEncryptionOptionsHasBeenSet = true; m_nodeToNodeEncryptionOptions = std::move(value); }

    /**
     * <p>Specifies the <code>NodeToNodeEncryptionOptions</code> for the Elasticsearch
     * domain.</p>
     */
    inline ElasticsearchDomainConfig& WithNodeToNodeEncryptionOptions(const NodeToNodeEncryptionOptionsStatus& value) { SetNodeToNodeEncryptionOptions(value); return *this;}

    /**
     * <p>Specifies the <code>NodeToNodeEncryptionOptions</code> for the Elasticsearch
     * domain.</p>
     */
    inline ElasticsearchDomainConfig& WithNodeToNodeEncryptionOptions(NodeToNodeEncryptionOptionsStatus&& value) { SetNodeToNodeEncryptionOptions(std::move(value)); return *this;}


    /**
     * <p>Specifies the <code>AdvancedOptions</code> for the domain. See <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-createupdatedomains.html#es-createdomain-configure-advanced-options"
     * target="_blank">Configuring Advanced Options</a> for more information.</p>
     */
    inline const AdvancedOptionsStatus& GetAdvancedOptions() const{ return m_advancedOptions; }

    /**
     * <p>Specifies the <code>AdvancedOptions</code> for the domain. See <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-createupdatedomains.html#es-createdomain-configure-advanced-options"
     * target="_blank">Configuring Advanced Options</a> for more information.</p>
     */
    inline bool AdvancedOptionsHasBeenSet() const { return m_advancedOptionsHasBeenSet; }

    /**
     * <p>Specifies the <code>AdvancedOptions</code> for the domain. See <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-createupdatedomains.html#es-createdomain-configure-advanced-options"
     * target="_blank">Configuring Advanced Options</a> for more information.</p>
     */
    inline void SetAdvancedOptions(const AdvancedOptionsStatus& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions = value; }

    /**
     * <p>Specifies the <code>AdvancedOptions</code> for the domain. See <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-createupdatedomains.html#es-createdomain-configure-advanced-options"
     * target="_blank">Configuring Advanced Options</a> for more information.</p>
     */
    inline void SetAdvancedOptions(AdvancedOptionsStatus&& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions = std::move(value); }

    /**
     * <p>Specifies the <code>AdvancedOptions</code> for the domain. See <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-createupdatedomains.html#es-createdomain-configure-advanced-options"
     * target="_blank">Configuring Advanced Options</a> for more information.</p>
     */
    inline ElasticsearchDomainConfig& WithAdvancedOptions(const AdvancedOptionsStatus& value) { SetAdvancedOptions(value); return *this;}

    /**
     * <p>Specifies the <code>AdvancedOptions</code> for the domain. See <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-createupdatedomains.html#es-createdomain-configure-advanced-options"
     * target="_blank">Configuring Advanced Options</a> for more information.</p>
     */
    inline ElasticsearchDomainConfig& WithAdvancedOptions(AdvancedOptionsStatus&& value) { SetAdvancedOptions(std::move(value)); return *this;}


    /**
     * <p>Log publishing options for the given domain.</p>
     */
    inline const LogPublishingOptionsStatus& GetLogPublishingOptions() const{ return m_logPublishingOptions; }

    /**
     * <p>Log publishing options for the given domain.</p>
     */
    inline bool LogPublishingOptionsHasBeenSet() const { return m_logPublishingOptionsHasBeenSet; }

    /**
     * <p>Log publishing options for the given domain.</p>
     */
    inline void SetLogPublishingOptions(const LogPublishingOptionsStatus& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions = value; }

    /**
     * <p>Log publishing options for the given domain.</p>
     */
    inline void SetLogPublishingOptions(LogPublishingOptionsStatus&& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions = std::move(value); }

    /**
     * <p>Log publishing options for the given domain.</p>
     */
    inline ElasticsearchDomainConfig& WithLogPublishingOptions(const LogPublishingOptionsStatus& value) { SetLogPublishingOptions(value); return *this;}

    /**
     * <p>Log publishing options for the given domain.</p>
     */
    inline ElasticsearchDomainConfig& WithLogPublishingOptions(LogPublishingOptionsStatus&& value) { SetLogPublishingOptions(std::move(value)); return *this;}

  private:

    ElasticsearchVersionStatus m_elasticsearchVersion;
    bool m_elasticsearchVersionHasBeenSet;

    ElasticsearchClusterConfigStatus m_elasticsearchClusterConfig;
    bool m_elasticsearchClusterConfigHasBeenSet;

    EBSOptionsStatus m_eBSOptions;
    bool m_eBSOptionsHasBeenSet;

    AccessPoliciesStatus m_accessPolicies;
    bool m_accessPoliciesHasBeenSet;

    SnapshotOptionsStatus m_snapshotOptions;
    bool m_snapshotOptionsHasBeenSet;

    VPCDerivedInfoStatus m_vPCOptions;
    bool m_vPCOptionsHasBeenSet;

    CognitoOptionsStatus m_cognitoOptions;
    bool m_cognitoOptionsHasBeenSet;

    EncryptionAtRestOptionsStatus m_encryptionAtRestOptions;
    bool m_encryptionAtRestOptionsHasBeenSet;

    NodeToNodeEncryptionOptionsStatus m_nodeToNodeEncryptionOptions;
    bool m_nodeToNodeEncryptionOptionsHasBeenSet;

    AdvancedOptionsStatus m_advancedOptions;
    bool m_advancedOptionsHasBeenSet;

    LogPublishingOptionsStatus m_logPublishingOptions;
    bool m_logPublishingOptionsHasBeenSet;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
