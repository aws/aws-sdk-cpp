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
  class CreateDomainRequest : public OpenSearchServiceRequest
  {
  public:
    AWS_OPENSEARCHSERVICE_API CreateDomainRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDomain"; }

    AWS_OPENSEARCHSERVICE_API Aws::String SerializePayload() const override;


    /**
     * <p>Name of the OpenSearch Service domain to create. Domain names are unique
     * across the domains owned by an account within an Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>Name of the OpenSearch Service domain to create. Domain names are unique
     * across the domains owned by an account within an Amazon Web Services Region.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>Name of the OpenSearch Service domain to create. Domain names are unique
     * across the domains owned by an account within an Amazon Web Services Region.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>Name of the OpenSearch Service domain to create. Domain names are unique
     * across the domains owned by an account within an Amazon Web Services Region.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>Name of the OpenSearch Service domain to create. Domain names are unique
     * across the domains owned by an account within an Amazon Web Services Region.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>Name of the OpenSearch Service domain to create. Domain names are unique
     * across the domains owned by an account within an Amazon Web Services Region.</p>
     */
    inline CreateDomainRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>Name of the OpenSearch Service domain to create. Domain names are unique
     * across the domains owned by an account within an Amazon Web Services Region.</p>
     */
    inline CreateDomainRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>Name of the OpenSearch Service domain to create. Domain names are unique
     * across the domains owned by an account within an Amazon Web Services Region.</p>
     */
    inline CreateDomainRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>String of format Elasticsearch_X.Y or OpenSearch_X.Y to specify the engine
     * version for the OpenSearch Service domain. For example,
     * <code>OpenSearch_1.0</code> or <code>Elasticsearch_7.9</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomains">Creating
     * and managing Amazon OpenSearch Service domains</a>.</p>
     */
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>String of format Elasticsearch_X.Y or OpenSearch_X.Y to specify the engine
     * version for the OpenSearch Service domain. For example,
     * <code>OpenSearch_1.0</code> or <code>Elasticsearch_7.9</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomains">Creating
     * and managing Amazon OpenSearch Service domains</a>.</p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>String of format Elasticsearch_X.Y or OpenSearch_X.Y to specify the engine
     * version for the OpenSearch Service domain. For example,
     * <code>OpenSearch_1.0</code> or <code>Elasticsearch_7.9</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomains">Creating
     * and managing Amazon OpenSearch Service domains</a>.</p>
     */
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>String of format Elasticsearch_X.Y or OpenSearch_X.Y to specify the engine
     * version for the OpenSearch Service domain. For example,
     * <code>OpenSearch_1.0</code> or <code>Elasticsearch_7.9</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomains">Creating
     * and managing Amazon OpenSearch Service domains</a>.</p>
     */
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>String of format Elasticsearch_X.Y or OpenSearch_X.Y to specify the engine
     * version for the OpenSearch Service domain. For example,
     * <code>OpenSearch_1.0</code> or <code>Elasticsearch_7.9</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomains">Creating
     * and managing Amazon OpenSearch Service domains</a>.</p>
     */
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    /**
     * <p>String of format Elasticsearch_X.Y or OpenSearch_X.Y to specify the engine
     * version for the OpenSearch Service domain. For example,
     * <code>OpenSearch_1.0</code> or <code>Elasticsearch_7.9</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomains">Creating
     * and managing Amazon OpenSearch Service domains</a>.</p>
     */
    inline CreateDomainRequest& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>String of format Elasticsearch_X.Y or OpenSearch_X.Y to specify the engine
     * version for the OpenSearch Service domain. For example,
     * <code>OpenSearch_1.0</code> or <code>Elasticsearch_7.9</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomains">Creating
     * and managing Amazon OpenSearch Service domains</a>.</p>
     */
    inline CreateDomainRequest& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    /**
     * <p>String of format Elasticsearch_X.Y or OpenSearch_X.Y to specify the engine
     * version for the OpenSearch Service domain. For example,
     * <code>OpenSearch_1.0</code> or <code>Elasticsearch_7.9</code>. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomains">Creating
     * and managing Amazon OpenSearch Service domains</a>.</p>
     */
    inline CreateDomainRequest& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p>Container for the cluster configuration of a domain.</p>
     */
    inline const ClusterConfig& GetClusterConfig() const{ return m_clusterConfig; }

    /**
     * <p>Container for the cluster configuration of a domain.</p>
     */
    inline bool ClusterConfigHasBeenSet() const { return m_clusterConfigHasBeenSet; }

    /**
     * <p>Container for the cluster configuration of a domain.</p>
     */
    inline void SetClusterConfig(const ClusterConfig& value) { m_clusterConfigHasBeenSet = true; m_clusterConfig = value; }

    /**
     * <p>Container for the cluster configuration of a domain.</p>
     */
    inline void SetClusterConfig(ClusterConfig&& value) { m_clusterConfigHasBeenSet = true; m_clusterConfig = std::move(value); }

    /**
     * <p>Container for the cluster configuration of a domain.</p>
     */
    inline CreateDomainRequest& WithClusterConfig(const ClusterConfig& value) { SetClusterConfig(value); return *this;}

    /**
     * <p>Container for the cluster configuration of a domain.</p>
     */
    inline CreateDomainRequest& WithClusterConfig(ClusterConfig&& value) { SetClusterConfig(std::move(value)); return *this;}


    /**
     * <p>Container for the parameters required to enable EBS-based storage for an
     * OpenSearch Service domain.</p>
     */
    inline const EBSOptions& GetEBSOptions() const{ return m_eBSOptions; }

    /**
     * <p>Container for the parameters required to enable EBS-based storage for an
     * OpenSearch Service domain.</p>
     */
    inline bool EBSOptionsHasBeenSet() const { return m_eBSOptionsHasBeenSet; }

    /**
     * <p>Container for the parameters required to enable EBS-based storage for an
     * OpenSearch Service domain.</p>
     */
    inline void SetEBSOptions(const EBSOptions& value) { m_eBSOptionsHasBeenSet = true; m_eBSOptions = value; }

    /**
     * <p>Container for the parameters required to enable EBS-based storage for an
     * OpenSearch Service domain.</p>
     */
    inline void SetEBSOptions(EBSOptions&& value) { m_eBSOptionsHasBeenSet = true; m_eBSOptions = std::move(value); }

    /**
     * <p>Container for the parameters required to enable EBS-based storage for an
     * OpenSearch Service domain.</p>
     */
    inline CreateDomainRequest& WithEBSOptions(const EBSOptions& value) { SetEBSOptions(value); return *this;}

    /**
     * <p>Container for the parameters required to enable EBS-based storage for an
     * OpenSearch Service domain.</p>
     */
    inline CreateDomainRequest& WithEBSOptions(EBSOptions&& value) { SetEBSOptions(std::move(value)); return *this;}


    /**
     * <p>Identity and Access Management (IAM) policy document specifying the access
     * policies for the new domain.</p>
     */
    inline const Aws::String& GetAccessPolicies() const{ return m_accessPolicies; }

    /**
     * <p>Identity and Access Management (IAM) policy document specifying the access
     * policies for the new domain.</p>
     */
    inline bool AccessPoliciesHasBeenSet() const { return m_accessPoliciesHasBeenSet; }

    /**
     * <p>Identity and Access Management (IAM) policy document specifying the access
     * policies for the new domain.</p>
     */
    inline void SetAccessPolicies(const Aws::String& value) { m_accessPoliciesHasBeenSet = true; m_accessPolicies = value; }

    /**
     * <p>Identity and Access Management (IAM) policy document specifying the access
     * policies for the new domain.</p>
     */
    inline void SetAccessPolicies(Aws::String&& value) { m_accessPoliciesHasBeenSet = true; m_accessPolicies = std::move(value); }

    /**
     * <p>Identity and Access Management (IAM) policy document specifying the access
     * policies for the new domain.</p>
     */
    inline void SetAccessPolicies(const char* value) { m_accessPoliciesHasBeenSet = true; m_accessPolicies.assign(value); }

    /**
     * <p>Identity and Access Management (IAM) policy document specifying the access
     * policies for the new domain.</p>
     */
    inline CreateDomainRequest& WithAccessPolicies(const Aws::String& value) { SetAccessPolicies(value); return *this;}

    /**
     * <p>Identity and Access Management (IAM) policy document specifying the access
     * policies for the new domain.</p>
     */
    inline CreateDomainRequest& WithAccessPolicies(Aws::String&& value) { SetAccessPolicies(std::move(value)); return *this;}

    /**
     * <p>Identity and Access Management (IAM) policy document specifying the access
     * policies for the new domain.</p>
     */
    inline CreateDomainRequest& WithAccessPolicies(const char* value) { SetAccessPolicies(value); return *this;}


    /**
     * <p>DEPRECATED. Container for the parameters required to configure automated
     * snapshots of domain indexes.</p>
     */
    inline const SnapshotOptions& GetSnapshotOptions() const{ return m_snapshotOptions; }

    /**
     * <p>DEPRECATED. Container for the parameters required to configure automated
     * snapshots of domain indexes.</p>
     */
    inline bool SnapshotOptionsHasBeenSet() const { return m_snapshotOptionsHasBeenSet; }

    /**
     * <p>DEPRECATED. Container for the parameters required to configure automated
     * snapshots of domain indexes.</p>
     */
    inline void SetSnapshotOptions(const SnapshotOptions& value) { m_snapshotOptionsHasBeenSet = true; m_snapshotOptions = value; }

    /**
     * <p>DEPRECATED. Container for the parameters required to configure automated
     * snapshots of domain indexes.</p>
     */
    inline void SetSnapshotOptions(SnapshotOptions&& value) { m_snapshotOptionsHasBeenSet = true; m_snapshotOptions = std::move(value); }

    /**
     * <p>DEPRECATED. Container for the parameters required to configure automated
     * snapshots of domain indexes.</p>
     */
    inline CreateDomainRequest& WithSnapshotOptions(const SnapshotOptions& value) { SetSnapshotOptions(value); return *this;}

    /**
     * <p>DEPRECATED. Container for the parameters required to configure automated
     * snapshots of domain indexes.</p>
     */
    inline CreateDomainRequest& WithSnapshotOptions(SnapshotOptions&& value) { SetSnapshotOptions(std::move(value)); return *this;}


    /**
     * <p>Container for the values required to configure VPC access domains. If you
     * don't specify these values, OpenSearch Service creates the domain with a public
     * endpoint. For more information, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/vpc.html">Launching
     * your Amazon OpenSearch Service domains using a VPC</a>.</p>
     */
    inline const VPCOptions& GetVPCOptions() const{ return m_vPCOptions; }

    /**
     * <p>Container for the values required to configure VPC access domains. If you
     * don't specify these values, OpenSearch Service creates the domain with a public
     * endpoint. For more information, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/vpc.html">Launching
     * your Amazon OpenSearch Service domains using a VPC</a>.</p>
     */
    inline bool VPCOptionsHasBeenSet() const { return m_vPCOptionsHasBeenSet; }

    /**
     * <p>Container for the values required to configure VPC access domains. If you
     * don't specify these values, OpenSearch Service creates the domain with a public
     * endpoint. For more information, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/vpc.html">Launching
     * your Amazon OpenSearch Service domains using a VPC</a>.</p>
     */
    inline void SetVPCOptions(const VPCOptions& value) { m_vPCOptionsHasBeenSet = true; m_vPCOptions = value; }

    /**
     * <p>Container for the values required to configure VPC access domains. If you
     * don't specify these values, OpenSearch Service creates the domain with a public
     * endpoint. For more information, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/vpc.html">Launching
     * your Amazon OpenSearch Service domains using a VPC</a>.</p>
     */
    inline void SetVPCOptions(VPCOptions&& value) { m_vPCOptionsHasBeenSet = true; m_vPCOptions = std::move(value); }

    /**
     * <p>Container for the values required to configure VPC access domains. If you
     * don't specify these values, OpenSearch Service creates the domain with a public
     * endpoint. For more information, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/vpc.html">Launching
     * your Amazon OpenSearch Service domains using a VPC</a>.</p>
     */
    inline CreateDomainRequest& WithVPCOptions(const VPCOptions& value) { SetVPCOptions(value); return *this;}

    /**
     * <p>Container for the values required to configure VPC access domains. If you
     * don't specify these values, OpenSearch Service creates the domain with a public
     * endpoint. For more information, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/vpc.html">Launching
     * your Amazon OpenSearch Service domains using a VPC</a>.</p>
     */
    inline CreateDomainRequest& WithVPCOptions(VPCOptions&& value) { SetVPCOptions(std::move(value)); return *this;}


    /**
     * <p>Key-value pairs to configure Amazon Cognito authentication. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/cognito-auth.html">Configuring
     * Amazon Cognito authentication for OpenSearch Dashboards</a>.</p>
     */
    inline const CognitoOptions& GetCognitoOptions() const{ return m_cognitoOptions; }

    /**
     * <p>Key-value pairs to configure Amazon Cognito authentication. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/cognito-auth.html">Configuring
     * Amazon Cognito authentication for OpenSearch Dashboards</a>.</p>
     */
    inline bool CognitoOptionsHasBeenSet() const { return m_cognitoOptionsHasBeenSet; }

    /**
     * <p>Key-value pairs to configure Amazon Cognito authentication. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/cognito-auth.html">Configuring
     * Amazon Cognito authentication for OpenSearch Dashboards</a>.</p>
     */
    inline void SetCognitoOptions(const CognitoOptions& value) { m_cognitoOptionsHasBeenSet = true; m_cognitoOptions = value; }

    /**
     * <p>Key-value pairs to configure Amazon Cognito authentication. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/cognito-auth.html">Configuring
     * Amazon Cognito authentication for OpenSearch Dashboards</a>.</p>
     */
    inline void SetCognitoOptions(CognitoOptions&& value) { m_cognitoOptionsHasBeenSet = true; m_cognitoOptions = std::move(value); }

    /**
     * <p>Key-value pairs to configure Amazon Cognito authentication. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/cognito-auth.html">Configuring
     * Amazon Cognito authentication for OpenSearch Dashboards</a>.</p>
     */
    inline CreateDomainRequest& WithCognitoOptions(const CognitoOptions& value) { SetCognitoOptions(value); return *this;}

    /**
     * <p>Key-value pairs to configure Amazon Cognito authentication. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/cognito-auth.html">Configuring
     * Amazon Cognito authentication for OpenSearch Dashboards</a>.</p>
     */
    inline CreateDomainRequest& WithCognitoOptions(CognitoOptions&& value) { SetCognitoOptions(std::move(value)); return *this;}


    /**
     * <p>Key-value pairs to enable encryption at rest.</p>
     */
    inline const EncryptionAtRestOptions& GetEncryptionAtRestOptions() const{ return m_encryptionAtRestOptions; }

    /**
     * <p>Key-value pairs to enable encryption at rest.</p>
     */
    inline bool EncryptionAtRestOptionsHasBeenSet() const { return m_encryptionAtRestOptionsHasBeenSet; }

    /**
     * <p>Key-value pairs to enable encryption at rest.</p>
     */
    inline void SetEncryptionAtRestOptions(const EncryptionAtRestOptions& value) { m_encryptionAtRestOptionsHasBeenSet = true; m_encryptionAtRestOptions = value; }

    /**
     * <p>Key-value pairs to enable encryption at rest.</p>
     */
    inline void SetEncryptionAtRestOptions(EncryptionAtRestOptions&& value) { m_encryptionAtRestOptionsHasBeenSet = true; m_encryptionAtRestOptions = std::move(value); }

    /**
     * <p>Key-value pairs to enable encryption at rest.</p>
     */
    inline CreateDomainRequest& WithEncryptionAtRestOptions(const EncryptionAtRestOptions& value) { SetEncryptionAtRestOptions(value); return *this;}

    /**
     * <p>Key-value pairs to enable encryption at rest.</p>
     */
    inline CreateDomainRequest& WithEncryptionAtRestOptions(EncryptionAtRestOptions&& value) { SetEncryptionAtRestOptions(std::move(value)); return *this;}


    /**
     * <p>Enables node-to-node encryption.</p>
     */
    inline const NodeToNodeEncryptionOptions& GetNodeToNodeEncryptionOptions() const{ return m_nodeToNodeEncryptionOptions; }

    /**
     * <p>Enables node-to-node encryption.</p>
     */
    inline bool NodeToNodeEncryptionOptionsHasBeenSet() const { return m_nodeToNodeEncryptionOptionsHasBeenSet; }

    /**
     * <p>Enables node-to-node encryption.</p>
     */
    inline void SetNodeToNodeEncryptionOptions(const NodeToNodeEncryptionOptions& value) { m_nodeToNodeEncryptionOptionsHasBeenSet = true; m_nodeToNodeEncryptionOptions = value; }

    /**
     * <p>Enables node-to-node encryption.</p>
     */
    inline void SetNodeToNodeEncryptionOptions(NodeToNodeEncryptionOptions&& value) { m_nodeToNodeEncryptionOptionsHasBeenSet = true; m_nodeToNodeEncryptionOptions = std::move(value); }

    /**
     * <p>Enables node-to-node encryption.</p>
     */
    inline CreateDomainRequest& WithNodeToNodeEncryptionOptions(const NodeToNodeEncryptionOptions& value) { SetNodeToNodeEncryptionOptions(value); return *this;}

    /**
     * <p>Enables node-to-node encryption.</p>
     */
    inline CreateDomainRequest& WithNodeToNodeEncryptionOptions(NodeToNodeEncryptionOptions&& value) { SetNodeToNodeEncryptionOptions(std::move(value)); return *this;}


    /**
     * <p>Key-value pairs to specify advanced configuration options. The following
     * key-value pairs are supported:</p> <ul> <li> <p>
     * <code>"rest.action.multi.allow_explicit_index": "true" | "false"</code> - Note
     * the use of a string rather than a boolean. Specifies whether explicit references
     * to indexes are allowed inside the body of HTTP requests. If you want to
     * configure access policies for domain sub-resources, such as specific indexes and
     * domain APIs, you must disable this property. Default is true.</p> </li> <li> <p>
     * <code>"indices.fielddata.cache.size": "80" </code> - Note the use of a string
     * rather than a boolean. Specifies the percentage of heap space allocated to field
     * data. Default is unbounded.</p> </li> <li> <p>
     * <code>"indices.query.bool.max_clause_count": "1024"</code> - Note the use of a
     * string rather than a boolean. Specifies the maximum number of clauses allowed in
     * a Lucene boolean query. Default is 1,024. Queries with more than the permitted
     * number of clauses result in a <code>TooManyClauses</code> error.</p> </li> <li>
     * <p> <code>"override_main_response_version": "true" | "false"</code> - Note the
     * use of a string rather than a boolean. Specifies whether the domain reports its
     * version as 7.10 to allow Elasticsearch OSS clients and plugins to continue
     * working with it. Default is false when creating a domain and true when upgrading
     * a domain.</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomain-configure-advanced-options">Advanced
     * cluster parameters</a>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAdvancedOptions() const{ return m_advancedOptions; }

    /**
     * <p>Key-value pairs to specify advanced configuration options. The following
     * key-value pairs are supported:</p> <ul> <li> <p>
     * <code>"rest.action.multi.allow_explicit_index": "true" | "false"</code> - Note
     * the use of a string rather than a boolean. Specifies whether explicit references
     * to indexes are allowed inside the body of HTTP requests. If you want to
     * configure access policies for domain sub-resources, such as specific indexes and
     * domain APIs, you must disable this property. Default is true.</p> </li> <li> <p>
     * <code>"indices.fielddata.cache.size": "80" </code> - Note the use of a string
     * rather than a boolean. Specifies the percentage of heap space allocated to field
     * data. Default is unbounded.</p> </li> <li> <p>
     * <code>"indices.query.bool.max_clause_count": "1024"</code> - Note the use of a
     * string rather than a boolean. Specifies the maximum number of clauses allowed in
     * a Lucene boolean query. Default is 1,024. Queries with more than the permitted
     * number of clauses result in a <code>TooManyClauses</code> error.</p> </li> <li>
     * <p> <code>"override_main_response_version": "true" | "false"</code> - Note the
     * use of a string rather than a boolean. Specifies whether the domain reports its
     * version as 7.10 to allow Elasticsearch OSS clients and plugins to continue
     * working with it. Default is false when creating a domain and true when upgrading
     * a domain.</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomain-configure-advanced-options">Advanced
     * cluster parameters</a>.</p>
     */
    inline bool AdvancedOptionsHasBeenSet() const { return m_advancedOptionsHasBeenSet; }

    /**
     * <p>Key-value pairs to specify advanced configuration options. The following
     * key-value pairs are supported:</p> <ul> <li> <p>
     * <code>"rest.action.multi.allow_explicit_index": "true" | "false"</code> - Note
     * the use of a string rather than a boolean. Specifies whether explicit references
     * to indexes are allowed inside the body of HTTP requests. If you want to
     * configure access policies for domain sub-resources, such as specific indexes and
     * domain APIs, you must disable this property. Default is true.</p> </li> <li> <p>
     * <code>"indices.fielddata.cache.size": "80" </code> - Note the use of a string
     * rather than a boolean. Specifies the percentage of heap space allocated to field
     * data. Default is unbounded.</p> </li> <li> <p>
     * <code>"indices.query.bool.max_clause_count": "1024"</code> - Note the use of a
     * string rather than a boolean. Specifies the maximum number of clauses allowed in
     * a Lucene boolean query. Default is 1,024. Queries with more than the permitted
     * number of clauses result in a <code>TooManyClauses</code> error.</p> </li> <li>
     * <p> <code>"override_main_response_version": "true" | "false"</code> - Note the
     * use of a string rather than a boolean. Specifies whether the domain reports its
     * version as 7.10 to allow Elasticsearch OSS clients and plugins to continue
     * working with it. Default is false when creating a domain and true when upgrading
     * a domain.</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomain-configure-advanced-options">Advanced
     * cluster parameters</a>.</p>
     */
    inline void SetAdvancedOptions(const Aws::Map<Aws::String, Aws::String>& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions = value; }

    /**
     * <p>Key-value pairs to specify advanced configuration options. The following
     * key-value pairs are supported:</p> <ul> <li> <p>
     * <code>"rest.action.multi.allow_explicit_index": "true" | "false"</code> - Note
     * the use of a string rather than a boolean. Specifies whether explicit references
     * to indexes are allowed inside the body of HTTP requests. If you want to
     * configure access policies for domain sub-resources, such as specific indexes and
     * domain APIs, you must disable this property. Default is true.</p> </li> <li> <p>
     * <code>"indices.fielddata.cache.size": "80" </code> - Note the use of a string
     * rather than a boolean. Specifies the percentage of heap space allocated to field
     * data. Default is unbounded.</p> </li> <li> <p>
     * <code>"indices.query.bool.max_clause_count": "1024"</code> - Note the use of a
     * string rather than a boolean. Specifies the maximum number of clauses allowed in
     * a Lucene boolean query. Default is 1,024. Queries with more than the permitted
     * number of clauses result in a <code>TooManyClauses</code> error.</p> </li> <li>
     * <p> <code>"override_main_response_version": "true" | "false"</code> - Note the
     * use of a string rather than a boolean. Specifies whether the domain reports its
     * version as 7.10 to allow Elasticsearch OSS clients and plugins to continue
     * working with it. Default is false when creating a domain and true when upgrading
     * a domain.</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomain-configure-advanced-options">Advanced
     * cluster parameters</a>.</p>
     */
    inline void SetAdvancedOptions(Aws::Map<Aws::String, Aws::String>&& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions = std::move(value); }

    /**
     * <p>Key-value pairs to specify advanced configuration options. The following
     * key-value pairs are supported:</p> <ul> <li> <p>
     * <code>"rest.action.multi.allow_explicit_index": "true" | "false"</code> - Note
     * the use of a string rather than a boolean. Specifies whether explicit references
     * to indexes are allowed inside the body of HTTP requests. If you want to
     * configure access policies for domain sub-resources, such as specific indexes and
     * domain APIs, you must disable this property. Default is true.</p> </li> <li> <p>
     * <code>"indices.fielddata.cache.size": "80" </code> - Note the use of a string
     * rather than a boolean. Specifies the percentage of heap space allocated to field
     * data. Default is unbounded.</p> </li> <li> <p>
     * <code>"indices.query.bool.max_clause_count": "1024"</code> - Note the use of a
     * string rather than a boolean. Specifies the maximum number of clauses allowed in
     * a Lucene boolean query. Default is 1,024. Queries with more than the permitted
     * number of clauses result in a <code>TooManyClauses</code> error.</p> </li> <li>
     * <p> <code>"override_main_response_version": "true" | "false"</code> - Note the
     * use of a string rather than a boolean. Specifies whether the domain reports its
     * version as 7.10 to allow Elasticsearch OSS clients and plugins to continue
     * working with it. Default is false when creating a domain and true when upgrading
     * a domain.</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomain-configure-advanced-options">Advanced
     * cluster parameters</a>.</p>
     */
    inline CreateDomainRequest& WithAdvancedOptions(const Aws::Map<Aws::String, Aws::String>& value) { SetAdvancedOptions(value); return *this;}

    /**
     * <p>Key-value pairs to specify advanced configuration options. The following
     * key-value pairs are supported:</p> <ul> <li> <p>
     * <code>"rest.action.multi.allow_explicit_index": "true" | "false"</code> - Note
     * the use of a string rather than a boolean. Specifies whether explicit references
     * to indexes are allowed inside the body of HTTP requests. If you want to
     * configure access policies for domain sub-resources, such as specific indexes and
     * domain APIs, you must disable this property. Default is true.</p> </li> <li> <p>
     * <code>"indices.fielddata.cache.size": "80" </code> - Note the use of a string
     * rather than a boolean. Specifies the percentage of heap space allocated to field
     * data. Default is unbounded.</p> </li> <li> <p>
     * <code>"indices.query.bool.max_clause_count": "1024"</code> - Note the use of a
     * string rather than a boolean. Specifies the maximum number of clauses allowed in
     * a Lucene boolean query. Default is 1,024. Queries with more than the permitted
     * number of clauses result in a <code>TooManyClauses</code> error.</p> </li> <li>
     * <p> <code>"override_main_response_version": "true" | "false"</code> - Note the
     * use of a string rather than a boolean. Specifies whether the domain reports its
     * version as 7.10 to allow Elasticsearch OSS clients and plugins to continue
     * working with it. Default is false when creating a domain and true when upgrading
     * a domain.</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomain-configure-advanced-options">Advanced
     * cluster parameters</a>.</p>
     */
    inline CreateDomainRequest& WithAdvancedOptions(Aws::Map<Aws::String, Aws::String>&& value) { SetAdvancedOptions(std::move(value)); return *this;}

    /**
     * <p>Key-value pairs to specify advanced configuration options. The following
     * key-value pairs are supported:</p> <ul> <li> <p>
     * <code>"rest.action.multi.allow_explicit_index": "true" | "false"</code> - Note
     * the use of a string rather than a boolean. Specifies whether explicit references
     * to indexes are allowed inside the body of HTTP requests. If you want to
     * configure access policies for domain sub-resources, such as specific indexes and
     * domain APIs, you must disable this property. Default is true.</p> </li> <li> <p>
     * <code>"indices.fielddata.cache.size": "80" </code> - Note the use of a string
     * rather than a boolean. Specifies the percentage of heap space allocated to field
     * data. Default is unbounded.</p> </li> <li> <p>
     * <code>"indices.query.bool.max_clause_count": "1024"</code> - Note the use of a
     * string rather than a boolean. Specifies the maximum number of clauses allowed in
     * a Lucene boolean query. Default is 1,024. Queries with more than the permitted
     * number of clauses result in a <code>TooManyClauses</code> error.</p> </li> <li>
     * <p> <code>"override_main_response_version": "true" | "false"</code> - Note the
     * use of a string rather than a boolean. Specifies whether the domain reports its
     * version as 7.10 to allow Elasticsearch OSS clients and plugins to continue
     * working with it. Default is false when creating a domain and true when upgrading
     * a domain.</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomain-configure-advanced-options">Advanced
     * cluster parameters</a>.</p>
     */
    inline CreateDomainRequest& AddAdvancedOptions(const Aws::String& key, const Aws::String& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(key, value); return *this; }

    /**
     * <p>Key-value pairs to specify advanced configuration options. The following
     * key-value pairs are supported:</p> <ul> <li> <p>
     * <code>"rest.action.multi.allow_explicit_index": "true" | "false"</code> - Note
     * the use of a string rather than a boolean. Specifies whether explicit references
     * to indexes are allowed inside the body of HTTP requests. If you want to
     * configure access policies for domain sub-resources, such as specific indexes and
     * domain APIs, you must disable this property. Default is true.</p> </li> <li> <p>
     * <code>"indices.fielddata.cache.size": "80" </code> - Note the use of a string
     * rather than a boolean. Specifies the percentage of heap space allocated to field
     * data. Default is unbounded.</p> </li> <li> <p>
     * <code>"indices.query.bool.max_clause_count": "1024"</code> - Note the use of a
     * string rather than a boolean. Specifies the maximum number of clauses allowed in
     * a Lucene boolean query. Default is 1,024. Queries with more than the permitted
     * number of clauses result in a <code>TooManyClauses</code> error.</p> </li> <li>
     * <p> <code>"override_main_response_version": "true" | "false"</code> - Note the
     * use of a string rather than a boolean. Specifies whether the domain reports its
     * version as 7.10 to allow Elasticsearch OSS clients and plugins to continue
     * working with it. Default is false when creating a domain and true when upgrading
     * a domain.</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomain-configure-advanced-options">Advanced
     * cluster parameters</a>.</p>
     */
    inline CreateDomainRequest& AddAdvancedOptions(Aws::String&& key, const Aws::String& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(std::move(key), value); return *this; }

    /**
     * <p>Key-value pairs to specify advanced configuration options. The following
     * key-value pairs are supported:</p> <ul> <li> <p>
     * <code>"rest.action.multi.allow_explicit_index": "true" | "false"</code> - Note
     * the use of a string rather than a boolean. Specifies whether explicit references
     * to indexes are allowed inside the body of HTTP requests. If you want to
     * configure access policies for domain sub-resources, such as specific indexes and
     * domain APIs, you must disable this property. Default is true.</p> </li> <li> <p>
     * <code>"indices.fielddata.cache.size": "80" </code> - Note the use of a string
     * rather than a boolean. Specifies the percentage of heap space allocated to field
     * data. Default is unbounded.</p> </li> <li> <p>
     * <code>"indices.query.bool.max_clause_count": "1024"</code> - Note the use of a
     * string rather than a boolean. Specifies the maximum number of clauses allowed in
     * a Lucene boolean query. Default is 1,024. Queries with more than the permitted
     * number of clauses result in a <code>TooManyClauses</code> error.</p> </li> <li>
     * <p> <code>"override_main_response_version": "true" | "false"</code> - Note the
     * use of a string rather than a boolean. Specifies whether the domain reports its
     * version as 7.10 to allow Elasticsearch OSS clients and plugins to continue
     * working with it. Default is false when creating a domain and true when upgrading
     * a domain.</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomain-configure-advanced-options">Advanced
     * cluster parameters</a>.</p>
     */
    inline CreateDomainRequest& AddAdvancedOptions(const Aws::String& key, Aws::String&& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Key-value pairs to specify advanced configuration options. The following
     * key-value pairs are supported:</p> <ul> <li> <p>
     * <code>"rest.action.multi.allow_explicit_index": "true" | "false"</code> - Note
     * the use of a string rather than a boolean. Specifies whether explicit references
     * to indexes are allowed inside the body of HTTP requests. If you want to
     * configure access policies for domain sub-resources, such as specific indexes and
     * domain APIs, you must disable this property. Default is true.</p> </li> <li> <p>
     * <code>"indices.fielddata.cache.size": "80" </code> - Note the use of a string
     * rather than a boolean. Specifies the percentage of heap space allocated to field
     * data. Default is unbounded.</p> </li> <li> <p>
     * <code>"indices.query.bool.max_clause_count": "1024"</code> - Note the use of a
     * string rather than a boolean. Specifies the maximum number of clauses allowed in
     * a Lucene boolean query. Default is 1,024. Queries with more than the permitted
     * number of clauses result in a <code>TooManyClauses</code> error.</p> </li> <li>
     * <p> <code>"override_main_response_version": "true" | "false"</code> - Note the
     * use of a string rather than a boolean. Specifies whether the domain reports its
     * version as 7.10 to allow Elasticsearch OSS clients and plugins to continue
     * working with it. Default is false when creating a domain and true when upgrading
     * a domain.</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomain-configure-advanced-options">Advanced
     * cluster parameters</a>.</p>
     */
    inline CreateDomainRequest& AddAdvancedOptions(Aws::String&& key, Aws::String&& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Key-value pairs to specify advanced configuration options. The following
     * key-value pairs are supported:</p> <ul> <li> <p>
     * <code>"rest.action.multi.allow_explicit_index": "true" | "false"</code> - Note
     * the use of a string rather than a boolean. Specifies whether explicit references
     * to indexes are allowed inside the body of HTTP requests. If you want to
     * configure access policies for domain sub-resources, such as specific indexes and
     * domain APIs, you must disable this property. Default is true.</p> </li> <li> <p>
     * <code>"indices.fielddata.cache.size": "80" </code> - Note the use of a string
     * rather than a boolean. Specifies the percentage of heap space allocated to field
     * data. Default is unbounded.</p> </li> <li> <p>
     * <code>"indices.query.bool.max_clause_count": "1024"</code> - Note the use of a
     * string rather than a boolean. Specifies the maximum number of clauses allowed in
     * a Lucene boolean query. Default is 1,024. Queries with more than the permitted
     * number of clauses result in a <code>TooManyClauses</code> error.</p> </li> <li>
     * <p> <code>"override_main_response_version": "true" | "false"</code> - Note the
     * use of a string rather than a boolean. Specifies whether the domain reports its
     * version as 7.10 to allow Elasticsearch OSS clients and plugins to continue
     * working with it. Default is false when creating a domain and true when upgrading
     * a domain.</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomain-configure-advanced-options">Advanced
     * cluster parameters</a>.</p>
     */
    inline CreateDomainRequest& AddAdvancedOptions(const char* key, Aws::String&& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Key-value pairs to specify advanced configuration options. The following
     * key-value pairs are supported:</p> <ul> <li> <p>
     * <code>"rest.action.multi.allow_explicit_index": "true" | "false"</code> - Note
     * the use of a string rather than a boolean. Specifies whether explicit references
     * to indexes are allowed inside the body of HTTP requests. If you want to
     * configure access policies for domain sub-resources, such as specific indexes and
     * domain APIs, you must disable this property. Default is true.</p> </li> <li> <p>
     * <code>"indices.fielddata.cache.size": "80" </code> - Note the use of a string
     * rather than a boolean. Specifies the percentage of heap space allocated to field
     * data. Default is unbounded.</p> </li> <li> <p>
     * <code>"indices.query.bool.max_clause_count": "1024"</code> - Note the use of a
     * string rather than a boolean. Specifies the maximum number of clauses allowed in
     * a Lucene boolean query. Default is 1,024. Queries with more than the permitted
     * number of clauses result in a <code>TooManyClauses</code> error.</p> </li> <li>
     * <p> <code>"override_main_response_version": "true" | "false"</code> - Note the
     * use of a string rather than a boolean. Specifies whether the domain reports its
     * version as 7.10 to allow Elasticsearch OSS clients and plugins to continue
     * working with it. Default is false when creating a domain and true when upgrading
     * a domain.</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomain-configure-advanced-options">Advanced
     * cluster parameters</a>.</p>
     */
    inline CreateDomainRequest& AddAdvancedOptions(Aws::String&& key, const char* value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(std::move(key), value); return *this; }

    /**
     * <p>Key-value pairs to specify advanced configuration options. The following
     * key-value pairs are supported:</p> <ul> <li> <p>
     * <code>"rest.action.multi.allow_explicit_index": "true" | "false"</code> - Note
     * the use of a string rather than a boolean. Specifies whether explicit references
     * to indexes are allowed inside the body of HTTP requests. If you want to
     * configure access policies for domain sub-resources, such as specific indexes and
     * domain APIs, you must disable this property. Default is true.</p> </li> <li> <p>
     * <code>"indices.fielddata.cache.size": "80" </code> - Note the use of a string
     * rather than a boolean. Specifies the percentage of heap space allocated to field
     * data. Default is unbounded.</p> </li> <li> <p>
     * <code>"indices.query.bool.max_clause_count": "1024"</code> - Note the use of a
     * string rather than a boolean. Specifies the maximum number of clauses allowed in
     * a Lucene boolean query. Default is 1,024. Queries with more than the permitted
     * number of clauses result in a <code>TooManyClauses</code> error.</p> </li> <li>
     * <p> <code>"override_main_response_version": "true" | "false"</code> - Note the
     * use of a string rather than a boolean. Specifies whether the domain reports its
     * version as 7.10 to allow Elasticsearch OSS clients and plugins to continue
     * working with it. Default is false when creating a domain and true when upgrading
     * a domain.</p> </li> </ul> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomain-configure-advanced-options">Advanced
     * cluster parameters</a>.</p>
     */
    inline CreateDomainRequest& AddAdvancedOptions(const char* key, const char* value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(key, value); return *this; }


    /**
     * <p>Key-value pairs to configure slow log publishing.</p>
     */
    inline const Aws::Map<LogType, LogPublishingOption>& GetLogPublishingOptions() const{ return m_logPublishingOptions; }

    /**
     * <p>Key-value pairs to configure slow log publishing.</p>
     */
    inline bool LogPublishingOptionsHasBeenSet() const { return m_logPublishingOptionsHasBeenSet; }

    /**
     * <p>Key-value pairs to configure slow log publishing.</p>
     */
    inline void SetLogPublishingOptions(const Aws::Map<LogType, LogPublishingOption>& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions = value; }

    /**
     * <p>Key-value pairs to configure slow log publishing.</p>
     */
    inline void SetLogPublishingOptions(Aws::Map<LogType, LogPublishingOption>&& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions = std::move(value); }

    /**
     * <p>Key-value pairs to configure slow log publishing.</p>
     */
    inline CreateDomainRequest& WithLogPublishingOptions(const Aws::Map<LogType, LogPublishingOption>& value) { SetLogPublishingOptions(value); return *this;}

    /**
     * <p>Key-value pairs to configure slow log publishing.</p>
     */
    inline CreateDomainRequest& WithLogPublishingOptions(Aws::Map<LogType, LogPublishingOption>&& value) { SetLogPublishingOptions(std::move(value)); return *this;}

    /**
     * <p>Key-value pairs to configure slow log publishing.</p>
     */
    inline CreateDomainRequest& AddLogPublishingOptions(const LogType& key, const LogPublishingOption& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions.emplace(key, value); return *this; }

    /**
     * <p>Key-value pairs to configure slow log publishing.</p>
     */
    inline CreateDomainRequest& AddLogPublishingOptions(LogType&& key, const LogPublishingOption& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions.emplace(std::move(key), value); return *this; }

    /**
     * <p>Key-value pairs to configure slow log publishing.</p>
     */
    inline CreateDomainRequest& AddLogPublishingOptions(const LogType& key, LogPublishingOption&& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Key-value pairs to configure slow log publishing.</p>
     */
    inline CreateDomainRequest& AddLogPublishingOptions(LogType&& key, LogPublishingOption&& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions.emplace(std::move(key), std::move(value)); return *this; }


    /**
     * <p>Additional options for the domain endpoint, such as whether to require HTTPS
     * for all traffic.</p>
     */
    inline const DomainEndpointOptions& GetDomainEndpointOptions() const{ return m_domainEndpointOptions; }

    /**
     * <p>Additional options for the domain endpoint, such as whether to require HTTPS
     * for all traffic.</p>
     */
    inline bool DomainEndpointOptionsHasBeenSet() const { return m_domainEndpointOptionsHasBeenSet; }

    /**
     * <p>Additional options for the domain endpoint, such as whether to require HTTPS
     * for all traffic.</p>
     */
    inline void SetDomainEndpointOptions(const DomainEndpointOptions& value) { m_domainEndpointOptionsHasBeenSet = true; m_domainEndpointOptions = value; }

    /**
     * <p>Additional options for the domain endpoint, such as whether to require HTTPS
     * for all traffic.</p>
     */
    inline void SetDomainEndpointOptions(DomainEndpointOptions&& value) { m_domainEndpointOptionsHasBeenSet = true; m_domainEndpointOptions = std::move(value); }

    /**
     * <p>Additional options for the domain endpoint, such as whether to require HTTPS
     * for all traffic.</p>
     */
    inline CreateDomainRequest& WithDomainEndpointOptions(const DomainEndpointOptions& value) { SetDomainEndpointOptions(value); return *this;}

    /**
     * <p>Additional options for the domain endpoint, such as whether to require HTTPS
     * for all traffic.</p>
     */
    inline CreateDomainRequest& WithDomainEndpointOptions(DomainEndpointOptions&& value) { SetDomainEndpointOptions(std::move(value)); return *this;}


    /**
     * <p>Options for fine-grained access control.</p>
     */
    inline const AdvancedSecurityOptionsInput& GetAdvancedSecurityOptions() const{ return m_advancedSecurityOptions; }

    /**
     * <p>Options for fine-grained access control.</p>
     */
    inline bool AdvancedSecurityOptionsHasBeenSet() const { return m_advancedSecurityOptionsHasBeenSet; }

    /**
     * <p>Options for fine-grained access control.</p>
     */
    inline void SetAdvancedSecurityOptions(const AdvancedSecurityOptionsInput& value) { m_advancedSecurityOptionsHasBeenSet = true; m_advancedSecurityOptions = value; }

    /**
     * <p>Options for fine-grained access control.</p>
     */
    inline void SetAdvancedSecurityOptions(AdvancedSecurityOptionsInput&& value) { m_advancedSecurityOptionsHasBeenSet = true; m_advancedSecurityOptions = std::move(value); }

    /**
     * <p>Options for fine-grained access control.</p>
     */
    inline CreateDomainRequest& WithAdvancedSecurityOptions(const AdvancedSecurityOptionsInput& value) { SetAdvancedSecurityOptions(value); return *this;}

    /**
     * <p>Options for fine-grained access control.</p>
     */
    inline CreateDomainRequest& WithAdvancedSecurityOptions(AdvancedSecurityOptionsInput&& value) { SetAdvancedSecurityOptions(std::move(value)); return *this;}


    /**
     * <p>List of tags to add to the domain upon creation.</p>
     */
    inline const Aws::Vector<Tag>& GetTagList() const{ return m_tagList; }

    /**
     * <p>List of tags to add to the domain upon creation.</p>
     */
    inline bool TagListHasBeenSet() const { return m_tagListHasBeenSet; }

    /**
     * <p>List of tags to add to the domain upon creation.</p>
     */
    inline void SetTagList(const Aws::Vector<Tag>& value) { m_tagListHasBeenSet = true; m_tagList = value; }

    /**
     * <p>List of tags to add to the domain upon creation.</p>
     */
    inline void SetTagList(Aws::Vector<Tag>&& value) { m_tagListHasBeenSet = true; m_tagList = std::move(value); }

    /**
     * <p>List of tags to add to the domain upon creation.</p>
     */
    inline CreateDomainRequest& WithTagList(const Aws::Vector<Tag>& value) { SetTagList(value); return *this;}

    /**
     * <p>List of tags to add to the domain upon creation.</p>
     */
    inline CreateDomainRequest& WithTagList(Aws::Vector<Tag>&& value) { SetTagList(std::move(value)); return *this;}

    /**
     * <p>List of tags to add to the domain upon creation.</p>
     */
    inline CreateDomainRequest& AddTagList(const Tag& value) { m_tagListHasBeenSet = true; m_tagList.push_back(value); return *this; }

    /**
     * <p>List of tags to add to the domain upon creation.</p>
     */
    inline CreateDomainRequest& AddTagList(Tag&& value) { m_tagListHasBeenSet = true; m_tagList.push_back(std::move(value)); return *this; }


    /**
     * <p>Options for Auto-Tune.</p>
     */
    inline const AutoTuneOptionsInput& GetAutoTuneOptions() const{ return m_autoTuneOptions; }

    /**
     * <p>Options for Auto-Tune.</p>
     */
    inline bool AutoTuneOptionsHasBeenSet() const { return m_autoTuneOptionsHasBeenSet; }

    /**
     * <p>Options for Auto-Tune.</p>
     */
    inline void SetAutoTuneOptions(const AutoTuneOptionsInput& value) { m_autoTuneOptionsHasBeenSet = true; m_autoTuneOptions = value; }

    /**
     * <p>Options for Auto-Tune.</p>
     */
    inline void SetAutoTuneOptions(AutoTuneOptionsInput&& value) { m_autoTuneOptionsHasBeenSet = true; m_autoTuneOptions = std::move(value); }

    /**
     * <p>Options for Auto-Tune.</p>
     */
    inline CreateDomainRequest& WithAutoTuneOptions(const AutoTuneOptionsInput& value) { SetAutoTuneOptions(value); return *this;}

    /**
     * <p>Options for Auto-Tune.</p>
     */
    inline CreateDomainRequest& WithAutoTuneOptions(AutoTuneOptionsInput&& value) { SetAutoTuneOptions(std::move(value)); return *this;}

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    ClusterConfig m_clusterConfig;
    bool m_clusterConfigHasBeenSet = false;

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

    Aws::Vector<Tag> m_tagList;
    bool m_tagListHasBeenSet = false;

    AutoTuneOptionsInput m_autoTuneOptions;
    bool m_autoTuneOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
