/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/VersionStatus.h>
#include <aws/opensearch/model/ClusterConfigStatus.h>
#include <aws/opensearch/model/EBSOptionsStatus.h>
#include <aws/opensearch/model/AccessPoliciesStatus.h>
#include <aws/opensearch/model/SnapshotOptionsStatus.h>
#include <aws/opensearch/model/VPCDerivedInfoStatus.h>
#include <aws/opensearch/model/CognitoOptionsStatus.h>
#include <aws/opensearch/model/EncryptionAtRestOptionsStatus.h>
#include <aws/opensearch/model/NodeToNodeEncryptionOptionsStatus.h>
#include <aws/opensearch/model/AdvancedOptionsStatus.h>
#include <aws/opensearch/model/LogPublishingOptionsStatus.h>
#include <aws/opensearch/model/DomainEndpointOptionsStatus.h>
#include <aws/opensearch/model/AdvancedSecurityOptionsStatus.h>
#include <aws/opensearch/model/AutoTuneOptionsStatus.h>
#include <aws/opensearch/model/ChangeProgressDetails.h>
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
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>The configuration of a domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DomainConfig">AWS
   * API Reference</a></p>
   */
  class AWS_OPENSEARCHSERVICE_API DomainConfig
  {
  public:
    DomainConfig();
    DomainConfig(Aws::Utils::Json::JsonView jsonValue);
    DomainConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>String of format Elasticsearch_X.Y or OpenSearch_X.Y to specify the engine
     * version for the OpenSearch or Elasticsearch domain.</p>
     */
    inline const VersionStatus& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>String of format Elasticsearch_X.Y or OpenSearch_X.Y to specify the engine
     * version for the OpenSearch or Elasticsearch domain.</p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>String of format Elasticsearch_X.Y or OpenSearch_X.Y to specify the engine
     * version for the OpenSearch or Elasticsearch domain.</p>
     */
    inline void SetEngineVersion(const VersionStatus& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>String of format Elasticsearch_X.Y or OpenSearch_X.Y to specify the engine
     * version for the OpenSearch or Elasticsearch domain.</p>
     */
    inline void SetEngineVersion(VersionStatus&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>String of format Elasticsearch_X.Y or OpenSearch_X.Y to specify the engine
     * version for the OpenSearch or Elasticsearch domain.</p>
     */
    inline DomainConfig& WithEngineVersion(const VersionStatus& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>String of format Elasticsearch_X.Y or OpenSearch_X.Y to specify the engine
     * version for the OpenSearch or Elasticsearch domain.</p>
     */
    inline DomainConfig& WithEngineVersion(VersionStatus&& value) { SetEngineVersion(std::move(value)); return *this;}


    /**
     * <p>The <code>ClusterConfig</code> for the domain. </p>
     */
    inline const ClusterConfigStatus& GetClusterConfig() const{ return m_clusterConfig; }

    /**
     * <p>The <code>ClusterConfig</code> for the domain. </p>
     */
    inline bool ClusterConfigHasBeenSet() const { return m_clusterConfigHasBeenSet; }

    /**
     * <p>The <code>ClusterConfig</code> for the domain. </p>
     */
    inline void SetClusterConfig(const ClusterConfigStatus& value) { m_clusterConfigHasBeenSet = true; m_clusterConfig = value; }

    /**
     * <p>The <code>ClusterConfig</code> for the domain. </p>
     */
    inline void SetClusterConfig(ClusterConfigStatus&& value) { m_clusterConfigHasBeenSet = true; m_clusterConfig = std::move(value); }

    /**
     * <p>The <code>ClusterConfig</code> for the domain. </p>
     */
    inline DomainConfig& WithClusterConfig(const ClusterConfigStatus& value) { SetClusterConfig(value); return *this;}

    /**
     * <p>The <code>ClusterConfig</code> for the domain. </p>
     */
    inline DomainConfig& WithClusterConfig(ClusterConfigStatus&& value) { SetClusterConfig(std::move(value)); return *this;}


    /**
     * <p>The <code>EBSOptions</code> for the domain. </p>
     */
    inline const EBSOptionsStatus& GetEBSOptions() const{ return m_eBSOptions; }

    /**
     * <p>The <code>EBSOptions</code> for the domain. </p>
     */
    inline bool EBSOptionsHasBeenSet() const { return m_eBSOptionsHasBeenSet; }

    /**
     * <p>The <code>EBSOptions</code> for the domain. </p>
     */
    inline void SetEBSOptions(const EBSOptionsStatus& value) { m_eBSOptionsHasBeenSet = true; m_eBSOptions = value; }

    /**
     * <p>The <code>EBSOptions</code> for the domain. </p>
     */
    inline void SetEBSOptions(EBSOptionsStatus&& value) { m_eBSOptionsHasBeenSet = true; m_eBSOptions = std::move(value); }

    /**
     * <p>The <code>EBSOptions</code> for the domain. </p>
     */
    inline DomainConfig& WithEBSOptions(const EBSOptionsStatus& value) { SetEBSOptions(value); return *this;}

    /**
     * <p>The <code>EBSOptions</code> for the domain. </p>
     */
    inline DomainConfig& WithEBSOptions(EBSOptionsStatus&& value) { SetEBSOptions(std::move(value)); return *this;}


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
    inline DomainConfig& WithAccessPolicies(const AccessPoliciesStatus& value) { SetAccessPolicies(value); return *this;}

    /**
     * <p>IAM access policy as a JSON-formatted string.</p>
     */
    inline DomainConfig& WithAccessPolicies(AccessPoliciesStatus&& value) { SetAccessPolicies(std::move(value)); return *this;}


    /**
     * <p>The <code>SnapshotOptions</code> for the domain. </p>
     */
    inline const SnapshotOptionsStatus& GetSnapshotOptions() const{ return m_snapshotOptions; }

    /**
     * <p>The <code>SnapshotOptions</code> for the domain. </p>
     */
    inline bool SnapshotOptionsHasBeenSet() const { return m_snapshotOptionsHasBeenSet; }

    /**
     * <p>The <code>SnapshotOptions</code> for the domain. </p>
     */
    inline void SetSnapshotOptions(const SnapshotOptionsStatus& value) { m_snapshotOptionsHasBeenSet = true; m_snapshotOptions = value; }

    /**
     * <p>The <code>SnapshotOptions</code> for the domain. </p>
     */
    inline void SetSnapshotOptions(SnapshotOptionsStatus&& value) { m_snapshotOptionsHasBeenSet = true; m_snapshotOptions = std::move(value); }

    /**
     * <p>The <code>SnapshotOptions</code> for the domain. </p>
     */
    inline DomainConfig& WithSnapshotOptions(const SnapshotOptionsStatus& value) { SetSnapshotOptions(value); return *this;}

    /**
     * <p>The <code>SnapshotOptions</code> for the domain. </p>
     */
    inline DomainConfig& WithSnapshotOptions(SnapshotOptionsStatus&& value) { SetSnapshotOptions(std::move(value)); return *this;}


    /**
     * <p>The <code>VPCOptions</code> for the specified domain. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/vpc.html"
     * target="_blank"> Launching your Amazon OpenSearch Service domains using a
     * VPC</a>. </p>
     */
    inline const VPCDerivedInfoStatus& GetVPCOptions() const{ return m_vPCOptions; }

    /**
     * <p>The <code>VPCOptions</code> for the specified domain. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/vpc.html"
     * target="_blank"> Launching your Amazon OpenSearch Service domains using a
     * VPC</a>. </p>
     */
    inline bool VPCOptionsHasBeenSet() const { return m_vPCOptionsHasBeenSet; }

    /**
     * <p>The <code>VPCOptions</code> for the specified domain. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/vpc.html"
     * target="_blank"> Launching your Amazon OpenSearch Service domains using a
     * VPC</a>. </p>
     */
    inline void SetVPCOptions(const VPCDerivedInfoStatus& value) { m_vPCOptionsHasBeenSet = true; m_vPCOptions = value; }

    /**
     * <p>The <code>VPCOptions</code> for the specified domain. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/vpc.html"
     * target="_blank"> Launching your Amazon OpenSearch Service domains using a
     * VPC</a>. </p>
     */
    inline void SetVPCOptions(VPCDerivedInfoStatus&& value) { m_vPCOptionsHasBeenSet = true; m_vPCOptions = std::move(value); }

    /**
     * <p>The <code>VPCOptions</code> for the specified domain. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/vpc.html"
     * target="_blank"> Launching your Amazon OpenSearch Service domains using a
     * VPC</a>. </p>
     */
    inline DomainConfig& WithVPCOptions(const VPCDerivedInfoStatus& value) { SetVPCOptions(value); return *this;}

    /**
     * <p>The <code>VPCOptions</code> for the specified domain. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/vpc.html"
     * target="_blank"> Launching your Amazon OpenSearch Service domains using a
     * VPC</a>. </p>
     */
    inline DomainConfig& WithVPCOptions(VPCDerivedInfoStatus&& value) { SetVPCOptions(std::move(value)); return *this;}


    /**
     * <p>The <code>CognitoOptions</code> for the specified domain. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/cognito-auth.html"
     * target="_blank">Configuring Amazon Cognito authentication for OpenSearch
     * Dashboards</a>. </p>
     */
    inline const CognitoOptionsStatus& GetCognitoOptions() const{ return m_cognitoOptions; }

    /**
     * <p>The <code>CognitoOptions</code> for the specified domain. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/cognito-auth.html"
     * target="_blank">Configuring Amazon Cognito authentication for OpenSearch
     * Dashboards</a>. </p>
     */
    inline bool CognitoOptionsHasBeenSet() const { return m_cognitoOptionsHasBeenSet; }

    /**
     * <p>The <code>CognitoOptions</code> for the specified domain. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/cognito-auth.html"
     * target="_blank">Configuring Amazon Cognito authentication for OpenSearch
     * Dashboards</a>. </p>
     */
    inline void SetCognitoOptions(const CognitoOptionsStatus& value) { m_cognitoOptionsHasBeenSet = true; m_cognitoOptions = value; }

    /**
     * <p>The <code>CognitoOptions</code> for the specified domain. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/cognito-auth.html"
     * target="_blank">Configuring Amazon Cognito authentication for OpenSearch
     * Dashboards</a>. </p>
     */
    inline void SetCognitoOptions(CognitoOptionsStatus&& value) { m_cognitoOptionsHasBeenSet = true; m_cognitoOptions = std::move(value); }

    /**
     * <p>The <code>CognitoOptions</code> for the specified domain. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/cognito-auth.html"
     * target="_blank">Configuring Amazon Cognito authentication for OpenSearch
     * Dashboards</a>. </p>
     */
    inline DomainConfig& WithCognitoOptions(const CognitoOptionsStatus& value) { SetCognitoOptions(value); return *this;}

    /**
     * <p>The <code>CognitoOptions</code> for the specified domain. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/cognito-auth.html"
     * target="_blank">Configuring Amazon Cognito authentication for OpenSearch
     * Dashboards</a>. </p>
     */
    inline DomainConfig& WithCognitoOptions(CognitoOptionsStatus&& value) { SetCognitoOptions(std::move(value)); return *this;}


    /**
     * <p>The <code>EncryptionAtRestOptions</code> for the domain. </p>
     */
    inline const EncryptionAtRestOptionsStatus& GetEncryptionAtRestOptions() const{ return m_encryptionAtRestOptions; }

    /**
     * <p>The <code>EncryptionAtRestOptions</code> for the domain. </p>
     */
    inline bool EncryptionAtRestOptionsHasBeenSet() const { return m_encryptionAtRestOptionsHasBeenSet; }

    /**
     * <p>The <code>EncryptionAtRestOptions</code> for the domain. </p>
     */
    inline void SetEncryptionAtRestOptions(const EncryptionAtRestOptionsStatus& value) { m_encryptionAtRestOptionsHasBeenSet = true; m_encryptionAtRestOptions = value; }

    /**
     * <p>The <code>EncryptionAtRestOptions</code> for the domain. </p>
     */
    inline void SetEncryptionAtRestOptions(EncryptionAtRestOptionsStatus&& value) { m_encryptionAtRestOptionsHasBeenSet = true; m_encryptionAtRestOptions = std::move(value); }

    /**
     * <p>The <code>EncryptionAtRestOptions</code> for the domain. </p>
     */
    inline DomainConfig& WithEncryptionAtRestOptions(const EncryptionAtRestOptionsStatus& value) { SetEncryptionAtRestOptions(value); return *this;}

    /**
     * <p>The <code>EncryptionAtRestOptions</code> for the domain. </p>
     */
    inline DomainConfig& WithEncryptionAtRestOptions(EncryptionAtRestOptionsStatus&& value) { SetEncryptionAtRestOptions(std::move(value)); return *this;}


    /**
     * <p>The <code>NodeToNodeEncryptionOptions</code> for the domain. </p>
     */
    inline const NodeToNodeEncryptionOptionsStatus& GetNodeToNodeEncryptionOptions() const{ return m_nodeToNodeEncryptionOptions; }

    /**
     * <p>The <code>NodeToNodeEncryptionOptions</code> for the domain. </p>
     */
    inline bool NodeToNodeEncryptionOptionsHasBeenSet() const { return m_nodeToNodeEncryptionOptionsHasBeenSet; }

    /**
     * <p>The <code>NodeToNodeEncryptionOptions</code> for the domain. </p>
     */
    inline void SetNodeToNodeEncryptionOptions(const NodeToNodeEncryptionOptionsStatus& value) { m_nodeToNodeEncryptionOptionsHasBeenSet = true; m_nodeToNodeEncryptionOptions = value; }

    /**
     * <p>The <code>NodeToNodeEncryptionOptions</code> for the domain. </p>
     */
    inline void SetNodeToNodeEncryptionOptions(NodeToNodeEncryptionOptionsStatus&& value) { m_nodeToNodeEncryptionOptionsHasBeenSet = true; m_nodeToNodeEncryptionOptions = std::move(value); }

    /**
     * <p>The <code>NodeToNodeEncryptionOptions</code> for the domain. </p>
     */
    inline DomainConfig& WithNodeToNodeEncryptionOptions(const NodeToNodeEncryptionOptionsStatus& value) { SetNodeToNodeEncryptionOptions(value); return *this;}

    /**
     * <p>The <code>NodeToNodeEncryptionOptions</code> for the domain. </p>
     */
    inline DomainConfig& WithNodeToNodeEncryptionOptions(NodeToNodeEncryptionOptionsStatus&& value) { SetNodeToNodeEncryptionOptions(std::move(value)); return *this;}


    /**
     * <p>The <code>AdvancedOptions</code> for the domain. See <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomain-configure-advanced-options"
     * target="_blank">Advanced options </a> for more information. </p>
     */
    inline const AdvancedOptionsStatus& GetAdvancedOptions() const{ return m_advancedOptions; }

    /**
     * <p>The <code>AdvancedOptions</code> for the domain. See <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomain-configure-advanced-options"
     * target="_blank">Advanced options </a> for more information. </p>
     */
    inline bool AdvancedOptionsHasBeenSet() const { return m_advancedOptionsHasBeenSet; }

    /**
     * <p>The <code>AdvancedOptions</code> for the domain. See <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomain-configure-advanced-options"
     * target="_blank">Advanced options </a> for more information. </p>
     */
    inline void SetAdvancedOptions(const AdvancedOptionsStatus& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions = value; }

    /**
     * <p>The <code>AdvancedOptions</code> for the domain. See <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomain-configure-advanced-options"
     * target="_blank">Advanced options </a> for more information. </p>
     */
    inline void SetAdvancedOptions(AdvancedOptionsStatus&& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions = std::move(value); }

    /**
     * <p>The <code>AdvancedOptions</code> for the domain. See <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomain-configure-advanced-options"
     * target="_blank">Advanced options </a> for more information. </p>
     */
    inline DomainConfig& WithAdvancedOptions(const AdvancedOptionsStatus& value) { SetAdvancedOptions(value); return *this;}

    /**
     * <p>The <code>AdvancedOptions</code> for the domain. See <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomain-configure-advanced-options"
     * target="_blank">Advanced options </a> for more information. </p>
     */
    inline DomainConfig& WithAdvancedOptions(AdvancedOptionsStatus&& value) { SetAdvancedOptions(std::move(value)); return *this;}


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
    inline DomainConfig& WithLogPublishingOptions(const LogPublishingOptionsStatus& value) { SetLogPublishingOptions(value); return *this;}

    /**
     * <p>Log publishing options for the given domain.</p>
     */
    inline DomainConfig& WithLogPublishingOptions(LogPublishingOptionsStatus&& value) { SetLogPublishingOptions(std::move(value)); return *this;}


    /**
     * <p>The <code>DomainEndpointOptions</code> for the domain. </p>
     */
    inline const DomainEndpointOptionsStatus& GetDomainEndpointOptions() const{ return m_domainEndpointOptions; }

    /**
     * <p>The <code>DomainEndpointOptions</code> for the domain. </p>
     */
    inline bool DomainEndpointOptionsHasBeenSet() const { return m_domainEndpointOptionsHasBeenSet; }

    /**
     * <p>The <code>DomainEndpointOptions</code> for the domain. </p>
     */
    inline void SetDomainEndpointOptions(const DomainEndpointOptionsStatus& value) { m_domainEndpointOptionsHasBeenSet = true; m_domainEndpointOptions = value; }

    /**
     * <p>The <code>DomainEndpointOptions</code> for the domain. </p>
     */
    inline void SetDomainEndpointOptions(DomainEndpointOptionsStatus&& value) { m_domainEndpointOptionsHasBeenSet = true; m_domainEndpointOptions = std::move(value); }

    /**
     * <p>The <code>DomainEndpointOptions</code> for the domain. </p>
     */
    inline DomainConfig& WithDomainEndpointOptions(const DomainEndpointOptionsStatus& value) { SetDomainEndpointOptions(value); return *this;}

    /**
     * <p>The <code>DomainEndpointOptions</code> for the domain. </p>
     */
    inline DomainConfig& WithDomainEndpointOptions(DomainEndpointOptionsStatus&& value) { SetDomainEndpointOptions(std::move(value)); return *this;}


    /**
     * <p>Specifies <code>AdvancedSecurityOptions</code> for the domain. </p>
     */
    inline const AdvancedSecurityOptionsStatus& GetAdvancedSecurityOptions() const{ return m_advancedSecurityOptions; }

    /**
     * <p>Specifies <code>AdvancedSecurityOptions</code> for the domain. </p>
     */
    inline bool AdvancedSecurityOptionsHasBeenSet() const { return m_advancedSecurityOptionsHasBeenSet; }

    /**
     * <p>Specifies <code>AdvancedSecurityOptions</code> for the domain. </p>
     */
    inline void SetAdvancedSecurityOptions(const AdvancedSecurityOptionsStatus& value) { m_advancedSecurityOptionsHasBeenSet = true; m_advancedSecurityOptions = value; }

    /**
     * <p>Specifies <code>AdvancedSecurityOptions</code> for the domain. </p>
     */
    inline void SetAdvancedSecurityOptions(AdvancedSecurityOptionsStatus&& value) { m_advancedSecurityOptionsHasBeenSet = true; m_advancedSecurityOptions = std::move(value); }

    /**
     * <p>Specifies <code>AdvancedSecurityOptions</code> for the domain. </p>
     */
    inline DomainConfig& WithAdvancedSecurityOptions(const AdvancedSecurityOptionsStatus& value) { SetAdvancedSecurityOptions(value); return *this;}

    /**
     * <p>Specifies <code>AdvancedSecurityOptions</code> for the domain. </p>
     */
    inline DomainConfig& WithAdvancedSecurityOptions(AdvancedSecurityOptionsStatus&& value) { SetAdvancedSecurityOptions(std::move(value)); return *this;}


    /**
     * <p>Specifies <code>AutoTuneOptions</code> for the domain. </p>
     */
    inline const AutoTuneOptionsStatus& GetAutoTuneOptions() const{ return m_autoTuneOptions; }

    /**
     * <p>Specifies <code>AutoTuneOptions</code> for the domain. </p>
     */
    inline bool AutoTuneOptionsHasBeenSet() const { return m_autoTuneOptionsHasBeenSet; }

    /**
     * <p>Specifies <code>AutoTuneOptions</code> for the domain. </p>
     */
    inline void SetAutoTuneOptions(const AutoTuneOptionsStatus& value) { m_autoTuneOptionsHasBeenSet = true; m_autoTuneOptions = value; }

    /**
     * <p>Specifies <code>AutoTuneOptions</code> for the domain. </p>
     */
    inline void SetAutoTuneOptions(AutoTuneOptionsStatus&& value) { m_autoTuneOptionsHasBeenSet = true; m_autoTuneOptions = std::move(value); }

    /**
     * <p>Specifies <code>AutoTuneOptions</code> for the domain. </p>
     */
    inline DomainConfig& WithAutoTuneOptions(const AutoTuneOptionsStatus& value) { SetAutoTuneOptions(value); return *this;}

    /**
     * <p>Specifies <code>AutoTuneOptions</code> for the domain. </p>
     */
    inline DomainConfig& WithAutoTuneOptions(AutoTuneOptionsStatus&& value) { SetAutoTuneOptions(std::move(value)); return *this;}


    /**
     * <p>Specifies change details of the domain configuration change.</p>
     */
    inline const ChangeProgressDetails& GetChangeProgressDetails() const{ return m_changeProgressDetails; }

    /**
     * <p>Specifies change details of the domain configuration change.</p>
     */
    inline bool ChangeProgressDetailsHasBeenSet() const { return m_changeProgressDetailsHasBeenSet; }

    /**
     * <p>Specifies change details of the domain configuration change.</p>
     */
    inline void SetChangeProgressDetails(const ChangeProgressDetails& value) { m_changeProgressDetailsHasBeenSet = true; m_changeProgressDetails = value; }

    /**
     * <p>Specifies change details of the domain configuration change.</p>
     */
    inline void SetChangeProgressDetails(ChangeProgressDetails&& value) { m_changeProgressDetailsHasBeenSet = true; m_changeProgressDetails = std::move(value); }

    /**
     * <p>Specifies change details of the domain configuration change.</p>
     */
    inline DomainConfig& WithChangeProgressDetails(const ChangeProgressDetails& value) { SetChangeProgressDetails(value); return *this;}

    /**
     * <p>Specifies change details of the domain configuration change.</p>
     */
    inline DomainConfig& WithChangeProgressDetails(ChangeProgressDetails&& value) { SetChangeProgressDetails(std::move(value)); return *this;}

  private:

    VersionStatus m_engineVersion;
    bool m_engineVersionHasBeenSet = false;

    ClusterConfigStatus m_clusterConfig;
    bool m_clusterConfigHasBeenSet = false;

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
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
