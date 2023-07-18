/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/OpenSearchServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/model/ClusterConfig.h>
#include <aws/opensearch/model/EBSOptions.h>
#include <aws/opensearch/model/SnapshotOptions.h>
#include <aws/opensearch/model/VPCOptions.h>
#include <aws/opensearch/model/CognitoOptions.h>
#include <aws/opensearch/model/EncryptionAtRestOptions.h>
#include <aws/opensearch/model/NodeToNodeEncryptionOptions.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/opensearch/model/DomainEndpointOptions.h>
#include <aws/opensearch/model/AdvancedSecurityOptionsInput.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opensearch/model/AutoTuneOptionsInput.h>
#include <aws/opensearch/model/LogType.h>
#include <aws/opensearch/model/LogPublishingOption.h>
#include <aws/opensearch/model/Tag.h>
#include <utility>

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{

  /**
   */
  class AWS_OPENSEARCHSERVICE_API CreateDomainRequest : public OpenSearchServiceRequest
  {
  public:
    CreateDomainRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDomain"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the Amazon OpenSearch Service domain you're creating. Domain
     * names are unique across the domains owned by an account within an AWS region.
     * Domain names must start with a lowercase letter and can contain the following
     * characters: a-z (lowercase), 0-9, and - (hyphen). </p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The name of the Amazon OpenSearch Service domain you're creating. Domain
     * names are unique across the domains owned by an account within an AWS region.
     * Domain names must start with a lowercase letter and can contain the following
     * characters: a-z (lowercase), 0-9, and - (hyphen). </p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The name of the Amazon OpenSearch Service domain you're creating. Domain
     * names are unique across the domains owned by an account within an AWS region.
     * Domain names must start with a lowercase letter and can contain the following
     * characters: a-z (lowercase), 0-9, and - (hyphen). </p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The name of the Amazon OpenSearch Service domain you're creating. Domain
     * names are unique across the domains owned by an account within an AWS region.
     * Domain names must start with a lowercase letter and can contain the following
     * characters: a-z (lowercase), 0-9, and - (hyphen). </p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The name of the Amazon OpenSearch Service domain you're creating. Domain
     * names are unique across the domains owned by an account within an AWS region.
     * Domain names must start with a lowercase letter and can contain the following
     * characters: a-z (lowercase), 0-9, and - (hyphen). </p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The name of the Amazon OpenSearch Service domain you're creating. Domain
     * names are unique across the domains owned by an account within an AWS region.
     * Domain names must start with a lowercase letter and can contain the following
     * characters: a-z (lowercase), 0-9, and - (hyphen). </p>
     */
    inline CreateDomainRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The name of the Amazon OpenSearch Service domain you're creating. Domain
     * names are unique across the domains owned by an account within an AWS region.
     * Domain names must start with a lowercase letter and can contain the following
     * characters: a-z (lowercase), 0-9, and - (hyphen). </p>
     */
    inline CreateDomainRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon OpenSearch Service domain you're creating. Domain
     * names are unique across the domains owned by an account within an AWS region.
     * Domain names must start with a lowercase letter and can contain the following
     * characters: a-z (lowercase), 0-9, and - (hyphen). </p>
     */
    inline CreateDomainRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>String of format Elasticsearch_X.Y or OpenSearch_X.Y to specify the engine
     * version for the Amazon OpenSearch Service domain. For example, "OpenSearch_1.0"
     * or "Elasticsearch_7.9". For more information, see <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomains"
     * target="_blank">Creating and managing Amazon OpenSearch Service domains </a>.
     * </p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>String of format Elasticsearch_X.Y or OpenSearch_X.Y to specify the engine
     * version for the Amazon OpenSearch Service domain. For example, "OpenSearch_1.0"
     * or "Elasticsearch_7.9". For more information, see <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomains"
     * target="_blank">Creating and managing Amazon OpenSearch Service domains </a>.
     * </p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>String of format Elasticsearch_X.Y or OpenSearch_X.Y to specify the engine
     * version for the Amazon OpenSearch Service domain. For example, "OpenSearch_1.0"
     * or "Elasticsearch_7.9". For more information, see <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomains"
     * target="_blank">Creating and managing Amazon OpenSearch Service domains </a>.
     * </p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>String of format Elasticsearch_X.Y or OpenSearch_X.Y to specify the engine
     * version for the Amazon OpenSearch Service domain. For example, "OpenSearch_1.0"
     * or "Elasticsearch_7.9". For more information, see <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomains"
     * target="_blank">Creating and managing Amazon OpenSearch Service domains </a>.
     * </p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>String of format Elasticsearch_X.Y or OpenSearch_X.Y to specify the engine
     * version for the Amazon OpenSearch Service domain. For example, "OpenSearch_1.0"
     * or "Elasticsearch_7.9". For more information, see <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomains"
     * target="_blank">Creating and managing Amazon OpenSearch Service domains </a>.
     * </p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>String of format Elasticsearch_X.Y or OpenSearch_X.Y to specify the engine
     * version for the Amazon OpenSearch Service domain. For example, "OpenSearch_1.0"
     * or "Elasticsearch_7.9". For more information, see <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomains"
     * target="_blank">Creating and managing Amazon OpenSearch Service domains </a>.
     * </p>
     */
    inline CreateDomainRequest& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>String of format Elasticsearch_X.Y or OpenSearch_X.Y to specify the engine
     * version for the Amazon OpenSearch Service domain. For example, "OpenSearch_1.0"
     * or "Elasticsearch_7.9". For more information, see <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomains"
     * target="_blank">Creating and managing Amazon OpenSearch Service domains </a>.
     * </p>
     */
    inline CreateDomainRequest& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>String of format Elasticsearch_X.Y or OpenSearch_X.Y to specify the engine
     * version for the Amazon OpenSearch Service domain. For example, "OpenSearch_1.0"
     * or "Elasticsearch_7.9". For more information, see <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomains"
     * target="_blank">Creating and managing Amazon OpenSearch Service domains </a>.
     * </p>
     */
    inline CreateDomainRequest& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p>Configuration options for a domain. Specifies the instance type and number of
     * instances in the domain. </p>
     */
    inline const ClusterConfig& GetClusterConfig() const{ return m_clusterConfig; }

    /**
     * <p>Configuration options for a domain. Specifies the instance type and number of
     * instances in the domain. </p>
     */
    inline bool ClusterConfigHasBeenSet() const { return m_clusterConfigHasBeenSet; }

    /**
     * <p>Configuration options for a domain. Specifies the instance type and number of
     * instances in the domain. </p>
     */
    inline void SetClusterConfig(const ClusterConfig& value) { m_clusterConfigHasBeenSet = true; m_clusterConfig = value; }

    /**
     * <p>Configuration options for a domain. Specifies the instance type and number of
     * instances in the domain. </p>
     */
    inline void SetClusterConfig(ClusterConfig&& value) { m_clusterConfigHasBeenSet = true; m_clusterConfig = std::move(value); }

    /**
     * <p>Configuration options for a domain. Specifies the instance type and number of
     * instances in the domain. </p>
     */
    inline CreateDomainRequest& WithClusterConfig(const ClusterConfig& value) { SetClusterConfig(value); return *this;}

    /**
     * <p>Configuration options for a domain. Specifies the instance type and number of
     * instances in the domain. </p>
     */
    inline CreateDomainRequest& WithClusterConfig(ClusterConfig&& value) { SetClusterConfig(std::move(value)); return *this;}


    /**
     * <p>Options to enable, disable, and specify the type and size of EBS storage
     * volumes.</p>
     */
    inline const EBSOptions& GetEBSOptions() const{ return m_eBSOptions; }

    /**
     * <p>Options to enable, disable, and specify the type and size of EBS storage
     * volumes.</p>
     */
    inline bool EBSOptionsHasBeenSet() const { return m_eBSOptionsHasBeenSet; }

    /**
     * <p>Options to enable, disable, and specify the type and size of EBS storage
     * volumes.</p>
     */
    inline void SetEBSOptions(const EBSOptions& value) { m_eBSOptionsHasBeenSet = true; m_eBSOptions = value; }

    /**
     * <p>Options to enable, disable, and specify the type and size of EBS storage
     * volumes.</p>
     */
    inline void SetEBSOptions(EBSOptions&& value) { m_eBSOptionsHasBeenSet = true; m_eBSOptions = std::move(value); }

    /**
     * <p>Options to enable, disable, and specify the type and size of EBS storage
     * volumes.</p>
     */
    inline CreateDomainRequest& WithEBSOptions(const EBSOptions& value) { SetEBSOptions(value); return *this;}

    /**
     * <p>Options to enable, disable, and specify the type and size of EBS storage
     * volumes.</p>
     */
    inline CreateDomainRequest& WithEBSOptions(EBSOptions&& value) { SetEBSOptions(std::move(value)); return *this;}


    /**
     * <p>IAM access policy as a JSON-formatted string.</p>
     */
    inline const Aws::String& GetAccessPolicies() const{ return m_accessPolicies; }

    /**
     * <p>IAM access policy as a JSON-formatted string.</p>
     */
    inline bool AccessPoliciesHasBeenSet() const { return m_accessPoliciesHasBeenSet; }

    /**
     * <p>IAM access policy as a JSON-formatted string.</p>
     */
    inline void SetAccessPolicies(const Aws::String& value) { m_accessPoliciesHasBeenSet = true; m_accessPolicies = value; }

    /**
     * <p>IAM access policy as a JSON-formatted string.</p>
     */
    inline void SetAccessPolicies(Aws::String&& value) { m_accessPoliciesHasBeenSet = true; m_accessPolicies = std::move(value); }

    /**
     * <p>IAM access policy as a JSON-formatted string.</p>
     */
    inline void SetAccessPolicies(const char* value) { m_accessPoliciesHasBeenSet = true; m_accessPolicies.assign(value); }

    /**
     * <p>IAM access policy as a JSON-formatted string.</p>
     */
    inline CreateDomainRequest& WithAccessPolicies(const Aws::String& value) { SetAccessPolicies(value); return *this;}

    /**
     * <p>IAM access policy as a JSON-formatted string.</p>
     */
    inline CreateDomainRequest& WithAccessPolicies(Aws::String&& value) { SetAccessPolicies(std::move(value)); return *this;}

    /**
     * <p>IAM access policy as a JSON-formatted string.</p>
     */
    inline CreateDomainRequest& WithAccessPolicies(const char* value) { SetAccessPolicies(value); return *this;}


    /**
     * <p>Option to set time, in UTC format, of the daily automated snapshot. Default
     * value is 0 hours.</p>
     */
    inline const SnapshotOptions& GetSnapshotOptions() const{ return m_snapshotOptions; }

    /**
     * <p>Option to set time, in UTC format, of the daily automated snapshot. Default
     * value is 0 hours.</p>
     */
    inline bool SnapshotOptionsHasBeenSet() const { return m_snapshotOptionsHasBeenSet; }

    /**
     * <p>Option to set time, in UTC format, of the daily automated snapshot. Default
     * value is 0 hours.</p>
     */
    inline void SetSnapshotOptions(const SnapshotOptions& value) { m_snapshotOptionsHasBeenSet = true; m_snapshotOptions = value; }

    /**
     * <p>Option to set time, in UTC format, of the daily automated snapshot. Default
     * value is 0 hours.</p>
     */
    inline void SetSnapshotOptions(SnapshotOptions&& value) { m_snapshotOptionsHasBeenSet = true; m_snapshotOptions = std::move(value); }

    /**
     * <p>Option to set time, in UTC format, of the daily automated snapshot. Default
     * value is 0 hours.</p>
     */
    inline CreateDomainRequest& WithSnapshotOptions(const SnapshotOptions& value) { SetSnapshotOptions(value); return *this;}

    /**
     * <p>Option to set time, in UTC format, of the daily automated snapshot. Default
     * value is 0 hours.</p>
     */
    inline CreateDomainRequest& WithSnapshotOptions(SnapshotOptions&& value) { SetSnapshotOptions(std::move(value)); return *this;}


    /**
     * <p>Options to specify the subnets and security groups for a VPC endpoint. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/vpc.html"
     * target="_blank">Launching your Amazon OpenSearch Service domains using a VPC
     * </a>. </p>
     */
    inline const VPCOptions& GetVPCOptions() const{ return m_vPCOptions; }

    /**
     * <p>Options to specify the subnets and security groups for a VPC endpoint. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/vpc.html"
     * target="_blank">Launching your Amazon OpenSearch Service domains using a VPC
     * </a>. </p>
     */
    inline bool VPCOptionsHasBeenSet() const { return m_vPCOptionsHasBeenSet; }

    /**
     * <p>Options to specify the subnets and security groups for a VPC endpoint. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/vpc.html"
     * target="_blank">Launching your Amazon OpenSearch Service domains using a VPC
     * </a>. </p>
     */
    inline void SetVPCOptions(const VPCOptions& value) { m_vPCOptionsHasBeenSet = true; m_vPCOptions = value; }

    /**
     * <p>Options to specify the subnets and security groups for a VPC endpoint. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/vpc.html"
     * target="_blank">Launching your Amazon OpenSearch Service domains using a VPC
     * </a>. </p>
     */
    inline void SetVPCOptions(VPCOptions&& value) { m_vPCOptionsHasBeenSet = true; m_vPCOptions = std::move(value); }

    /**
     * <p>Options to specify the subnets and security groups for a VPC endpoint. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/vpc.html"
     * target="_blank">Launching your Amazon OpenSearch Service domains using a VPC
     * </a>. </p>
     */
    inline CreateDomainRequest& WithVPCOptions(const VPCOptions& value) { SetVPCOptions(value); return *this;}

    /**
     * <p>Options to specify the subnets and security groups for a VPC endpoint. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/vpc.html"
     * target="_blank">Launching your Amazon OpenSearch Service domains using a VPC
     * </a>. </p>
     */
    inline CreateDomainRequest& WithVPCOptions(VPCOptions&& value) { SetVPCOptions(std::move(value)); return *this;}


    /**
     * <p>Options to specify the Cognito user and identity pools for OpenSearch
     * Dashboards authentication. For more information, see <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/cognito-auth.html"
     * target="_blank">Configuring Amazon Cognito authentication for OpenSearch
     * Dashboards</a>. </p>
     */
    inline const CognitoOptions& GetCognitoOptions() const{ return m_cognitoOptions; }

    /**
     * <p>Options to specify the Cognito user and identity pools for OpenSearch
     * Dashboards authentication. For more information, see <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/cognito-auth.html"
     * target="_blank">Configuring Amazon Cognito authentication for OpenSearch
     * Dashboards</a>. </p>
     */
    inline bool CognitoOptionsHasBeenSet() const { return m_cognitoOptionsHasBeenSet; }

    /**
     * <p>Options to specify the Cognito user and identity pools for OpenSearch
     * Dashboards authentication. For more information, see <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/cognito-auth.html"
     * target="_blank">Configuring Amazon Cognito authentication for OpenSearch
     * Dashboards</a>. </p>
     */
    inline void SetCognitoOptions(const CognitoOptions& value) { m_cognitoOptionsHasBeenSet = true; m_cognitoOptions = value; }

    /**
     * <p>Options to specify the Cognito user and identity pools for OpenSearch
     * Dashboards authentication. For more information, see <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/cognito-auth.html"
     * target="_blank">Configuring Amazon Cognito authentication for OpenSearch
     * Dashboards</a>. </p>
     */
    inline void SetCognitoOptions(CognitoOptions&& value) { m_cognitoOptionsHasBeenSet = true; m_cognitoOptions = std::move(value); }

    /**
     * <p>Options to specify the Cognito user and identity pools for OpenSearch
     * Dashboards authentication. For more information, see <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/cognito-auth.html"
     * target="_blank">Configuring Amazon Cognito authentication for OpenSearch
     * Dashboards</a>. </p>
     */
    inline CreateDomainRequest& WithCognitoOptions(const CognitoOptions& value) { SetCognitoOptions(value); return *this;}

    /**
     * <p>Options to specify the Cognito user and identity pools for OpenSearch
     * Dashboards authentication. For more information, see <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/cognito-auth.html"
     * target="_blank">Configuring Amazon Cognito authentication for OpenSearch
     * Dashboards</a>. </p>
     */
    inline CreateDomainRequest& WithCognitoOptions(CognitoOptions&& value) { SetCognitoOptions(std::move(value)); return *this;}


    /**
     * <p>Options for encryption of data at rest.</p>
     */
    inline const EncryptionAtRestOptions& GetEncryptionAtRestOptions() const{ return m_encryptionAtRestOptions; }

    /**
     * <p>Options for encryption of data at rest.</p>
     */
    inline bool EncryptionAtRestOptionsHasBeenSet() const { return m_encryptionAtRestOptionsHasBeenSet; }

    /**
     * <p>Options for encryption of data at rest.</p>
     */
    inline void SetEncryptionAtRestOptions(const EncryptionAtRestOptions& value) { m_encryptionAtRestOptionsHasBeenSet = true; m_encryptionAtRestOptions = value; }

    /**
     * <p>Options for encryption of data at rest.</p>
     */
    inline void SetEncryptionAtRestOptions(EncryptionAtRestOptions&& value) { m_encryptionAtRestOptionsHasBeenSet = true; m_encryptionAtRestOptions = std::move(value); }

    /**
     * <p>Options for encryption of data at rest.</p>
     */
    inline CreateDomainRequest& WithEncryptionAtRestOptions(const EncryptionAtRestOptions& value) { SetEncryptionAtRestOptions(value); return *this;}

    /**
     * <p>Options for encryption of data at rest.</p>
     */
    inline CreateDomainRequest& WithEncryptionAtRestOptions(EncryptionAtRestOptions&& value) { SetEncryptionAtRestOptions(std::move(value)); return *this;}


    /**
     * <p>Node-to-node encryption options.</p>
     */
    inline const NodeToNodeEncryptionOptions& GetNodeToNodeEncryptionOptions() const{ return m_nodeToNodeEncryptionOptions; }

    /**
     * <p>Node-to-node encryption options.</p>
     */
    inline bool NodeToNodeEncryptionOptionsHasBeenSet() const { return m_nodeToNodeEncryptionOptionsHasBeenSet; }

    /**
     * <p>Node-to-node encryption options.</p>
     */
    inline void SetNodeToNodeEncryptionOptions(const NodeToNodeEncryptionOptions& value) { m_nodeToNodeEncryptionOptionsHasBeenSet = true; m_nodeToNodeEncryptionOptions = value; }

    /**
     * <p>Node-to-node encryption options.</p>
     */
    inline void SetNodeToNodeEncryptionOptions(NodeToNodeEncryptionOptions&& value) { m_nodeToNodeEncryptionOptionsHasBeenSet = true; m_nodeToNodeEncryptionOptions = std::move(value); }

    /**
     * <p>Node-to-node encryption options.</p>
     */
    inline CreateDomainRequest& WithNodeToNodeEncryptionOptions(const NodeToNodeEncryptionOptions& value) { SetNodeToNodeEncryptionOptions(value); return *this;}

    /**
     * <p>Node-to-node encryption options.</p>
     */
    inline CreateDomainRequest& WithNodeToNodeEncryptionOptions(NodeToNodeEncryptionOptions&& value) { SetNodeToNodeEncryptionOptions(std::move(value)); return *this;}


    /**
     * <p>Option to allow references to indices in an HTTP request body. Must be
     * <code>false</code> when configuring access to individual sub-resources. By
     * default, the value is <code>true</code>. See <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomain-configure-advanced-options"
     * target="_blank">Advanced cluster parameters </a> for more information. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAdvancedOptions() const{ return m_advancedOptions; }

    /**
     * <p>Option to allow references to indices in an HTTP request body. Must be
     * <code>false</code> when configuring access to individual sub-resources. By
     * default, the value is <code>true</code>. See <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomain-configure-advanced-options"
     * target="_blank">Advanced cluster parameters </a> for more information. </p>
     */
    inline bool AdvancedOptionsHasBeenSet() const { return m_advancedOptionsHasBeenSet; }

    /**
     * <p>Option to allow references to indices in an HTTP request body. Must be
     * <code>false</code> when configuring access to individual sub-resources. By
     * default, the value is <code>true</code>. See <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomain-configure-advanced-options"
     * target="_blank">Advanced cluster parameters </a> for more information. </p>
     */
    inline void SetAdvancedOptions(const Aws::Map<Aws::String, Aws::String>& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions = value; }

    /**
     * <p>Option to allow references to indices in an HTTP request body. Must be
     * <code>false</code> when configuring access to individual sub-resources. By
     * default, the value is <code>true</code>. See <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomain-configure-advanced-options"
     * target="_blank">Advanced cluster parameters </a> for more information. </p>
     */
    inline void SetAdvancedOptions(Aws::Map<Aws::String, Aws::String>&& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions = std::move(value); }

    /**
     * <p>Option to allow references to indices in an HTTP request body. Must be
     * <code>false</code> when configuring access to individual sub-resources. By
     * default, the value is <code>true</code>. See <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomain-configure-advanced-options"
     * target="_blank">Advanced cluster parameters </a> for more information. </p>
     */
    inline CreateDomainRequest& WithAdvancedOptions(const Aws::Map<Aws::String, Aws::String>& value) { SetAdvancedOptions(value); return *this;}

    /**
     * <p>Option to allow references to indices in an HTTP request body. Must be
     * <code>false</code> when configuring access to individual sub-resources. By
     * default, the value is <code>true</code>. See <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomain-configure-advanced-options"
     * target="_blank">Advanced cluster parameters </a> for more information. </p>
     */
    inline CreateDomainRequest& WithAdvancedOptions(Aws::Map<Aws::String, Aws::String>&& value) { SetAdvancedOptions(std::move(value)); return *this;}

    /**
     * <p>Option to allow references to indices in an HTTP request body. Must be
     * <code>false</code> when configuring access to individual sub-resources. By
     * default, the value is <code>true</code>. See <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomain-configure-advanced-options"
     * target="_blank">Advanced cluster parameters </a> for more information. </p>
     */
    inline CreateDomainRequest& AddAdvancedOptions(const Aws::String& key, const Aws::String& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(key, value); return *this; }

    /**
     * <p>Option to allow references to indices in an HTTP request body. Must be
     * <code>false</code> when configuring access to individual sub-resources. By
     * default, the value is <code>true</code>. See <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomain-configure-advanced-options"
     * target="_blank">Advanced cluster parameters </a> for more information. </p>
     */
    inline CreateDomainRequest& AddAdvancedOptions(Aws::String&& key, const Aws::String& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(std::move(key), value); return *this; }

    /**
     * <p>Option to allow references to indices in an HTTP request body. Must be
     * <code>false</code> when configuring access to individual sub-resources. By
     * default, the value is <code>true</code>. See <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomain-configure-advanced-options"
     * target="_blank">Advanced cluster parameters </a> for more information. </p>
     */
    inline CreateDomainRequest& AddAdvancedOptions(const Aws::String& key, Aws::String&& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Option to allow references to indices in an HTTP request body. Must be
     * <code>false</code> when configuring access to individual sub-resources. By
     * default, the value is <code>true</code>. See <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomain-configure-advanced-options"
     * target="_blank">Advanced cluster parameters </a> for more information. </p>
     */
    inline CreateDomainRequest& AddAdvancedOptions(Aws::String&& key, Aws::String&& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Option to allow references to indices in an HTTP request body. Must be
     * <code>false</code> when configuring access to individual sub-resources. By
     * default, the value is <code>true</code>. See <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomain-configure-advanced-options"
     * target="_blank">Advanced cluster parameters </a> for more information. </p>
     */
    inline CreateDomainRequest& AddAdvancedOptions(const char* key, Aws::String&& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Option to allow references to indices in an HTTP request body. Must be
     * <code>false</code> when configuring access to individual sub-resources. By
     * default, the value is <code>true</code>. See <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomain-configure-advanced-options"
     * target="_blank">Advanced cluster parameters </a> for more information. </p>
     */
    inline CreateDomainRequest& AddAdvancedOptions(Aws::String&& key, const char* value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(std::move(key), value); return *this; }

    /**
     * <p>Option to allow references to indices in an HTTP request body. Must be
     * <code>false</code> when configuring access to individual sub-resources. By
     * default, the value is <code>true</code>. See <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomain-configure-advanced-options"
     * target="_blank">Advanced cluster parameters </a> for more information. </p>
     */
    inline CreateDomainRequest& AddAdvancedOptions(const char* key, const char* value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(key, value); return *this; }


    /**
     * <p>Map of <code>LogType</code> and <code>LogPublishingOption</code>, each
     * containing options to publish a given type of OpenSearch log. </p>
     */
    inline const Aws::Map<LogType, LogPublishingOption>& GetLogPublishingOptions() const{ return m_logPublishingOptions; }

    /**
     * <p>Map of <code>LogType</code> and <code>LogPublishingOption</code>, each
     * containing options to publish a given type of OpenSearch log. </p>
     */
    inline bool LogPublishingOptionsHasBeenSet() const { return m_logPublishingOptionsHasBeenSet; }

    /**
     * <p>Map of <code>LogType</code> and <code>LogPublishingOption</code>, each
     * containing options to publish a given type of OpenSearch log. </p>
     */
    inline void SetLogPublishingOptions(const Aws::Map<LogType, LogPublishingOption>& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions = value; }

    /**
     * <p>Map of <code>LogType</code> and <code>LogPublishingOption</code>, each
     * containing options to publish a given type of OpenSearch log. </p>
     */
    inline void SetLogPublishingOptions(Aws::Map<LogType, LogPublishingOption>&& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions = std::move(value); }

    /**
     * <p>Map of <code>LogType</code> and <code>LogPublishingOption</code>, each
     * containing options to publish a given type of OpenSearch log. </p>
     */
    inline CreateDomainRequest& WithLogPublishingOptions(const Aws::Map<LogType, LogPublishingOption>& value) { SetLogPublishingOptions(value); return *this;}

    /**
     * <p>Map of <code>LogType</code> and <code>LogPublishingOption</code>, each
     * containing options to publish a given type of OpenSearch log. </p>
     */
    inline CreateDomainRequest& WithLogPublishingOptions(Aws::Map<LogType, LogPublishingOption>&& value) { SetLogPublishingOptions(std::move(value)); return *this;}

    /**
     * <p>Map of <code>LogType</code> and <code>LogPublishingOption</code>, each
     * containing options to publish a given type of OpenSearch log. </p>
     */
    inline CreateDomainRequest& AddLogPublishingOptions(const LogType& key, const LogPublishingOption& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions.emplace(key, value); return *this; }

    /**
     * <p>Map of <code>LogType</code> and <code>LogPublishingOption</code>, each
     * containing options to publish a given type of OpenSearch log. </p>
     */
    inline CreateDomainRequest& AddLogPublishingOptions(LogType&& key, const LogPublishingOption& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions.emplace(std::move(key), value); return *this; }

    /**
     * <p>Map of <code>LogType</code> and <code>LogPublishingOption</code>, each
     * containing options to publish a given type of OpenSearch log. </p>
     */
    inline CreateDomainRequest& AddLogPublishingOptions(const LogType& key, LogPublishingOption&& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Map of <code>LogType</code> and <code>LogPublishingOption</code>, each
     * containing options to publish a given type of OpenSearch log. </p>
     */
    inline CreateDomainRequest& AddLogPublishingOptions(LogType&& key, LogPublishingOption&& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions.emplace(std::move(key), std::move(value)); return *this; }


    /**
     * <p>Options to specify configurations that will be applied to the domain
     * endpoint.</p>
     */
    inline const DomainEndpointOptions& GetDomainEndpointOptions() const{ return m_domainEndpointOptions; }

    /**
     * <p>Options to specify configurations that will be applied to the domain
     * endpoint.</p>
     */
    inline bool DomainEndpointOptionsHasBeenSet() const { return m_domainEndpointOptionsHasBeenSet; }

    /**
     * <p>Options to specify configurations that will be applied to the domain
     * endpoint.</p>
     */
    inline void SetDomainEndpointOptions(const DomainEndpointOptions& value) { m_domainEndpointOptionsHasBeenSet = true; m_domainEndpointOptions = value; }

    /**
     * <p>Options to specify configurations that will be applied to the domain
     * endpoint.</p>
     */
    inline void SetDomainEndpointOptions(DomainEndpointOptions&& value) { m_domainEndpointOptionsHasBeenSet = true; m_domainEndpointOptions = std::move(value); }

    /**
     * <p>Options to specify configurations that will be applied to the domain
     * endpoint.</p>
     */
    inline CreateDomainRequest& WithDomainEndpointOptions(const DomainEndpointOptions& value) { SetDomainEndpointOptions(value); return *this;}

    /**
     * <p>Options to specify configurations that will be applied to the domain
     * endpoint.</p>
     */
    inline CreateDomainRequest& WithDomainEndpointOptions(DomainEndpointOptions&& value) { SetDomainEndpointOptions(std::move(value)); return *this;}


    /**
     * <p>Specifies advanced security options.</p>
     */
    inline const AdvancedSecurityOptionsInput& GetAdvancedSecurityOptions() const{ return m_advancedSecurityOptions; }

    /**
     * <p>Specifies advanced security options.</p>
     */
    inline bool AdvancedSecurityOptionsHasBeenSet() const { return m_advancedSecurityOptionsHasBeenSet; }

    /**
     * <p>Specifies advanced security options.</p>
     */
    inline void SetAdvancedSecurityOptions(const AdvancedSecurityOptionsInput& value) { m_advancedSecurityOptionsHasBeenSet = true; m_advancedSecurityOptions = value; }

    /**
     * <p>Specifies advanced security options.</p>
     */
    inline void SetAdvancedSecurityOptions(AdvancedSecurityOptionsInput&& value) { m_advancedSecurityOptionsHasBeenSet = true; m_advancedSecurityOptions = std::move(value); }

    /**
     * <p>Specifies advanced security options.</p>
     */
    inline CreateDomainRequest& WithAdvancedSecurityOptions(const AdvancedSecurityOptionsInput& value) { SetAdvancedSecurityOptions(value); return *this;}

    /**
     * <p>Specifies advanced security options.</p>
     */
    inline CreateDomainRequest& WithAdvancedSecurityOptions(AdvancedSecurityOptionsInput&& value) { SetAdvancedSecurityOptions(std::move(value)); return *this;}


    /**
     * <p>A list of <code>Tag</code> added during domain creation. </p>
     */
    inline const Aws::Vector<Tag>& GetTagList() const{ return m_tagList; }

    /**
     * <p>A list of <code>Tag</code> added during domain creation. </p>
     */
    inline bool TagListHasBeenSet() const { return m_tagListHasBeenSet; }

    /**
     * <p>A list of <code>Tag</code> added during domain creation. </p>
     */
    inline void SetTagList(const Aws::Vector<Tag>& value) { m_tagListHasBeenSet = true; m_tagList = value; }

    /**
     * <p>A list of <code>Tag</code> added during domain creation. </p>
     */
    inline void SetTagList(Aws::Vector<Tag>&& value) { m_tagListHasBeenSet = true; m_tagList = std::move(value); }

    /**
     * <p>A list of <code>Tag</code> added during domain creation. </p>
     */
    inline CreateDomainRequest& WithTagList(const Aws::Vector<Tag>& value) { SetTagList(value); return *this;}

    /**
     * <p>A list of <code>Tag</code> added during domain creation. </p>
     */
    inline CreateDomainRequest& WithTagList(Aws::Vector<Tag>&& value) { SetTagList(std::move(value)); return *this;}

    /**
     * <p>A list of <code>Tag</code> added during domain creation. </p>
     */
    inline CreateDomainRequest& AddTagList(const Tag& value) { m_tagListHasBeenSet = true; m_tagList.push_back(value); return *this; }

    /**
     * <p>A list of <code>Tag</code> added during domain creation. </p>
     */
    inline CreateDomainRequest& AddTagList(Tag&& value) { m_tagListHasBeenSet = true; m_tagList.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies Auto-Tune options.</p>
     */
    inline const AutoTuneOptionsInput& GetAutoTuneOptions() const{ return m_autoTuneOptions; }

    /**
     * <p>Specifies Auto-Tune options.</p>
     */
    inline bool AutoTuneOptionsHasBeenSet() const { return m_autoTuneOptionsHasBeenSet; }

    /**
     * <p>Specifies Auto-Tune options.</p>
     */
    inline void SetAutoTuneOptions(const AutoTuneOptionsInput& value) { m_autoTuneOptionsHasBeenSet = true; m_autoTuneOptions = value; }

    /**
     * <p>Specifies Auto-Tune options.</p>
     */
    inline void SetAutoTuneOptions(AutoTuneOptionsInput&& value) { m_autoTuneOptionsHasBeenSet = true; m_autoTuneOptions = std::move(value); }

    /**
     * <p>Specifies Auto-Tune options.</p>
     */
    inline CreateDomainRequest& WithAutoTuneOptions(const AutoTuneOptionsInput& value) { SetAutoTuneOptions(value); return *this;}

    /**
     * <p>Specifies Auto-Tune options.</p>
     */
    inline CreateDomainRequest& WithAutoTuneOptions(AutoTuneOptionsInput&& value) { SetAutoTuneOptions(std::move(value)); return *this;}

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet;

    ClusterConfig m_clusterConfig;
    bool m_clusterConfigHasBeenSet;

    EBSOptions m_eBSOptions;
    bool m_eBSOptionsHasBeenSet;

    Aws::String m_accessPolicies;
    bool m_accessPoliciesHasBeenSet;

    SnapshotOptions m_snapshotOptions;
    bool m_snapshotOptionsHasBeenSet;

    VPCOptions m_vPCOptions;
    bool m_vPCOptionsHasBeenSet;

    CognitoOptions m_cognitoOptions;
    bool m_cognitoOptionsHasBeenSet;

    EncryptionAtRestOptions m_encryptionAtRestOptions;
    bool m_encryptionAtRestOptionsHasBeenSet;

    NodeToNodeEncryptionOptions m_nodeToNodeEncryptionOptions;
    bool m_nodeToNodeEncryptionOptionsHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_advancedOptions;
    bool m_advancedOptionsHasBeenSet;

    Aws::Map<LogType, LogPublishingOption> m_logPublishingOptions;
    bool m_logPublishingOptionsHasBeenSet;

    DomainEndpointOptions m_domainEndpointOptions;
    bool m_domainEndpointOptionsHasBeenSet;

    AdvancedSecurityOptionsInput m_advancedSecurityOptions;
    bool m_advancedSecurityOptionsHasBeenSet;

    Aws::Vector<Tag> m_tagList;
    bool m_tagListHasBeenSet;

    AutoTuneOptionsInput m_autoTuneOptions;
    bool m_autoTuneOptionsHasBeenSet;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
