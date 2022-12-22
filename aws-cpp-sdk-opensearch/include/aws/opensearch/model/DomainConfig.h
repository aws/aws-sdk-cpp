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
   * <p>Container for the configuration of an OpenSearch Service
   * domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DomainConfig">AWS
   * API Reference</a></p>
   */
  class DomainConfig
  {
  public:
    AWS_OPENSEARCHSERVICE_API DomainConfig();
    AWS_OPENSEARCHSERVICE_API DomainConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API DomainConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The OpenSearch or Elasticsearch version that the domain is running.</p>
     */
    inline const VersionStatus& GetEngineVersion() const{ return m_engineVersion; }

    /**
     * <p>The OpenSearch or Elasticsearch version that the domain is running.</p>
     */
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    /**
     * <p>The OpenSearch or Elasticsearch version that the domain is running.</p>
     */
    inline void SetEngineVersion(const VersionStatus& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    /**
     * <p>The OpenSearch or Elasticsearch version that the domain is running.</p>
     */
    inline void SetEngineVersion(VersionStatus&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    /**
     * <p>The OpenSearch or Elasticsearch version that the domain is running.</p>
     */
    inline DomainConfig& WithEngineVersion(const VersionStatus& value) { SetEngineVersion(value); return *this;}

    /**
     * <p>The OpenSearch or Elasticsearch version that the domain is running.</p>
     */
    inline DomainConfig& WithEngineVersion(VersionStatus&& value) { SetEngineVersion(std::move(value)); return *this;}


    /**
     * <p>Container for the cluster configuration of a the domain.</p>
     */
    inline const ClusterConfigStatus& GetClusterConfig() const{ return m_clusterConfig; }

    /**
     * <p>Container for the cluster configuration of a the domain.</p>
     */
    inline bool ClusterConfigHasBeenSet() const { return m_clusterConfigHasBeenSet; }

    /**
     * <p>Container for the cluster configuration of a the domain.</p>
     */
    inline void SetClusterConfig(const ClusterConfigStatus& value) { m_clusterConfigHasBeenSet = true; m_clusterConfig = value; }

    /**
     * <p>Container for the cluster configuration of a the domain.</p>
     */
    inline void SetClusterConfig(ClusterConfigStatus&& value) { m_clusterConfigHasBeenSet = true; m_clusterConfig = std::move(value); }

    /**
     * <p>Container for the cluster configuration of a the domain.</p>
     */
    inline DomainConfig& WithClusterConfig(const ClusterConfigStatus& value) { SetClusterConfig(value); return *this;}

    /**
     * <p>Container for the cluster configuration of a the domain.</p>
     */
    inline DomainConfig& WithClusterConfig(ClusterConfigStatus&& value) { SetClusterConfig(std::move(value)); return *this;}


    /**
     * <p>Container for EBS options configured for an OpenSearch Service domain.</p>
     */
    inline const EBSOptionsStatus& GetEBSOptions() const{ return m_eBSOptions; }

    /**
     * <p>Container for EBS options configured for an OpenSearch Service domain.</p>
     */
    inline bool EBSOptionsHasBeenSet() const { return m_eBSOptionsHasBeenSet; }

    /**
     * <p>Container for EBS options configured for an OpenSearch Service domain.</p>
     */
    inline void SetEBSOptions(const EBSOptionsStatus& value) { m_eBSOptionsHasBeenSet = true; m_eBSOptions = value; }

    /**
     * <p>Container for EBS options configured for an OpenSearch Service domain.</p>
     */
    inline void SetEBSOptions(EBSOptionsStatus&& value) { m_eBSOptionsHasBeenSet = true; m_eBSOptions = std::move(value); }

    /**
     * <p>Container for EBS options configured for an OpenSearch Service domain.</p>
     */
    inline DomainConfig& WithEBSOptions(const EBSOptionsStatus& value) { SetEBSOptions(value); return *this;}

    /**
     * <p>Container for EBS options configured for an OpenSearch Service domain.</p>
     */
    inline DomainConfig& WithEBSOptions(EBSOptionsStatus&& value) { SetEBSOptions(std::move(value)); return *this;}


    /**
     * <p>Specifies the access policies for the domain.</p>
     */
    inline const AccessPoliciesStatus& GetAccessPolicies() const{ return m_accessPolicies; }

    /**
     * <p>Specifies the access policies for the domain.</p>
     */
    inline bool AccessPoliciesHasBeenSet() const { return m_accessPoliciesHasBeenSet; }

    /**
     * <p>Specifies the access policies for the domain.</p>
     */
    inline void SetAccessPolicies(const AccessPoliciesStatus& value) { m_accessPoliciesHasBeenSet = true; m_accessPolicies = value; }

    /**
     * <p>Specifies the access policies for the domain.</p>
     */
    inline void SetAccessPolicies(AccessPoliciesStatus&& value) { m_accessPoliciesHasBeenSet = true; m_accessPolicies = std::move(value); }

    /**
     * <p>Specifies the access policies for the domain.</p>
     */
    inline DomainConfig& WithAccessPolicies(const AccessPoliciesStatus& value) { SetAccessPolicies(value); return *this;}

    /**
     * <p>Specifies the access policies for the domain.</p>
     */
    inline DomainConfig& WithAccessPolicies(AccessPoliciesStatus&& value) { SetAccessPolicies(std::move(value)); return *this;}


    /**
     * <p>DEPRECATED. Container for parameters required to configure automated
     * snapshots of domain indexes.</p>
     */
    inline const SnapshotOptionsStatus& GetSnapshotOptions() const{ return m_snapshotOptions; }

    /**
     * <p>DEPRECATED. Container for parameters required to configure automated
     * snapshots of domain indexes.</p>
     */
    inline bool SnapshotOptionsHasBeenSet() const { return m_snapshotOptionsHasBeenSet; }

    /**
     * <p>DEPRECATED. Container for parameters required to configure automated
     * snapshots of domain indexes.</p>
     */
    inline void SetSnapshotOptions(const SnapshotOptionsStatus& value) { m_snapshotOptionsHasBeenSet = true; m_snapshotOptions = value; }

    /**
     * <p>DEPRECATED. Container for parameters required to configure automated
     * snapshots of domain indexes.</p>
     */
    inline void SetSnapshotOptions(SnapshotOptionsStatus&& value) { m_snapshotOptionsHasBeenSet = true; m_snapshotOptions = std::move(value); }

    /**
     * <p>DEPRECATED. Container for parameters required to configure automated
     * snapshots of domain indexes.</p>
     */
    inline DomainConfig& WithSnapshotOptions(const SnapshotOptionsStatus& value) { SetSnapshotOptions(value); return *this;}

    /**
     * <p>DEPRECATED. Container for parameters required to configure automated
     * snapshots of domain indexes.</p>
     */
    inline DomainConfig& WithSnapshotOptions(SnapshotOptionsStatus&& value) { SetSnapshotOptions(std::move(value)); return *this;}


    /**
     * <p>The current VPC options for the domain and the status of any updates to their
     * configuration.</p>
     */
    inline const VPCDerivedInfoStatus& GetVPCOptions() const{ return m_vPCOptions; }

    /**
     * <p>The current VPC options for the domain and the status of any updates to their
     * configuration.</p>
     */
    inline bool VPCOptionsHasBeenSet() const { return m_vPCOptionsHasBeenSet; }

    /**
     * <p>The current VPC options for the domain and the status of any updates to their
     * configuration.</p>
     */
    inline void SetVPCOptions(const VPCDerivedInfoStatus& value) { m_vPCOptionsHasBeenSet = true; m_vPCOptions = value; }

    /**
     * <p>The current VPC options for the domain and the status of any updates to their
     * configuration.</p>
     */
    inline void SetVPCOptions(VPCDerivedInfoStatus&& value) { m_vPCOptionsHasBeenSet = true; m_vPCOptions = std::move(value); }

    /**
     * <p>The current VPC options for the domain and the status of any updates to their
     * configuration.</p>
     */
    inline DomainConfig& WithVPCOptions(const VPCDerivedInfoStatus& value) { SetVPCOptions(value); return *this;}

    /**
     * <p>The current VPC options for the domain and the status of any updates to their
     * configuration.</p>
     */
    inline DomainConfig& WithVPCOptions(VPCDerivedInfoStatus&& value) { SetVPCOptions(std::move(value)); return *this;}


    /**
     * <p>Container for Amazon Cognito options for the domain.</p>
     */
    inline const CognitoOptionsStatus& GetCognitoOptions() const{ return m_cognitoOptions; }

    /**
     * <p>Container for Amazon Cognito options for the domain.</p>
     */
    inline bool CognitoOptionsHasBeenSet() const { return m_cognitoOptionsHasBeenSet; }

    /**
     * <p>Container for Amazon Cognito options for the domain.</p>
     */
    inline void SetCognitoOptions(const CognitoOptionsStatus& value) { m_cognitoOptionsHasBeenSet = true; m_cognitoOptions = value; }

    /**
     * <p>Container for Amazon Cognito options for the domain.</p>
     */
    inline void SetCognitoOptions(CognitoOptionsStatus&& value) { m_cognitoOptionsHasBeenSet = true; m_cognitoOptions = std::move(value); }

    /**
     * <p>Container for Amazon Cognito options for the domain.</p>
     */
    inline DomainConfig& WithCognitoOptions(const CognitoOptionsStatus& value) { SetCognitoOptions(value); return *this;}

    /**
     * <p>Container for Amazon Cognito options for the domain.</p>
     */
    inline DomainConfig& WithCognitoOptions(CognitoOptionsStatus&& value) { SetCognitoOptions(std::move(value)); return *this;}


    /**
     * <p>Key-value pairs to enable encryption at rest.</p>
     */
    inline const EncryptionAtRestOptionsStatus& GetEncryptionAtRestOptions() const{ return m_encryptionAtRestOptions; }

    /**
     * <p>Key-value pairs to enable encryption at rest.</p>
     */
    inline bool EncryptionAtRestOptionsHasBeenSet() const { return m_encryptionAtRestOptionsHasBeenSet; }

    /**
     * <p>Key-value pairs to enable encryption at rest.</p>
     */
    inline void SetEncryptionAtRestOptions(const EncryptionAtRestOptionsStatus& value) { m_encryptionAtRestOptionsHasBeenSet = true; m_encryptionAtRestOptions = value; }

    /**
     * <p>Key-value pairs to enable encryption at rest.</p>
     */
    inline void SetEncryptionAtRestOptions(EncryptionAtRestOptionsStatus&& value) { m_encryptionAtRestOptionsHasBeenSet = true; m_encryptionAtRestOptions = std::move(value); }

    /**
     * <p>Key-value pairs to enable encryption at rest.</p>
     */
    inline DomainConfig& WithEncryptionAtRestOptions(const EncryptionAtRestOptionsStatus& value) { SetEncryptionAtRestOptions(value); return *this;}

    /**
     * <p>Key-value pairs to enable encryption at rest.</p>
     */
    inline DomainConfig& WithEncryptionAtRestOptions(EncryptionAtRestOptionsStatus&& value) { SetEncryptionAtRestOptions(std::move(value)); return *this;}


    /**
     * <p>Whether node-to-node encryption is enabled or disabled.</p>
     */
    inline const NodeToNodeEncryptionOptionsStatus& GetNodeToNodeEncryptionOptions() const{ return m_nodeToNodeEncryptionOptions; }

    /**
     * <p>Whether node-to-node encryption is enabled or disabled.</p>
     */
    inline bool NodeToNodeEncryptionOptionsHasBeenSet() const { return m_nodeToNodeEncryptionOptionsHasBeenSet; }

    /**
     * <p>Whether node-to-node encryption is enabled or disabled.</p>
     */
    inline void SetNodeToNodeEncryptionOptions(const NodeToNodeEncryptionOptionsStatus& value) { m_nodeToNodeEncryptionOptionsHasBeenSet = true; m_nodeToNodeEncryptionOptions = value; }

    /**
     * <p>Whether node-to-node encryption is enabled or disabled.</p>
     */
    inline void SetNodeToNodeEncryptionOptions(NodeToNodeEncryptionOptionsStatus&& value) { m_nodeToNodeEncryptionOptionsHasBeenSet = true; m_nodeToNodeEncryptionOptions = std::move(value); }

    /**
     * <p>Whether node-to-node encryption is enabled or disabled.</p>
     */
    inline DomainConfig& WithNodeToNodeEncryptionOptions(const NodeToNodeEncryptionOptionsStatus& value) { SetNodeToNodeEncryptionOptions(value); return *this;}

    /**
     * <p>Whether node-to-node encryption is enabled or disabled.</p>
     */
    inline DomainConfig& WithNodeToNodeEncryptionOptions(NodeToNodeEncryptionOptionsStatus&& value) { SetNodeToNodeEncryptionOptions(std::move(value)); return *this;}


    /**
     * <p>Key-value pairs to specify advanced configuration options. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomain-configure-advanced-options">Advanced
     * options</a>.</p>
     */
    inline const AdvancedOptionsStatus& GetAdvancedOptions() const{ return m_advancedOptions; }

    /**
     * <p>Key-value pairs to specify advanced configuration options. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomain-configure-advanced-options">Advanced
     * options</a>.</p>
     */
    inline bool AdvancedOptionsHasBeenSet() const { return m_advancedOptionsHasBeenSet; }

    /**
     * <p>Key-value pairs to specify advanced configuration options. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomain-configure-advanced-options">Advanced
     * options</a>.</p>
     */
    inline void SetAdvancedOptions(const AdvancedOptionsStatus& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions = value; }

    /**
     * <p>Key-value pairs to specify advanced configuration options. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomain-configure-advanced-options">Advanced
     * options</a>.</p>
     */
    inline void SetAdvancedOptions(AdvancedOptionsStatus&& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions = std::move(value); }

    /**
     * <p>Key-value pairs to specify advanced configuration options. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomain-configure-advanced-options">Advanced
     * options</a>.</p>
     */
    inline DomainConfig& WithAdvancedOptions(const AdvancedOptionsStatus& value) { SetAdvancedOptions(value); return *this;}

    /**
     * <p>Key-value pairs to specify advanced configuration options. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomain-configure-advanced-options">Advanced
     * options</a>.</p>
     */
    inline DomainConfig& WithAdvancedOptions(AdvancedOptionsStatus&& value) { SetAdvancedOptions(std::move(value)); return *this;}


    /**
     * <p>Key-value pairs to configure slow log publishing.</p>
     */
    inline const LogPublishingOptionsStatus& GetLogPublishingOptions() const{ return m_logPublishingOptions; }

    /**
     * <p>Key-value pairs to configure slow log publishing.</p>
     */
    inline bool LogPublishingOptionsHasBeenSet() const { return m_logPublishingOptionsHasBeenSet; }

    /**
     * <p>Key-value pairs to configure slow log publishing.</p>
     */
    inline void SetLogPublishingOptions(const LogPublishingOptionsStatus& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions = value; }

    /**
     * <p>Key-value pairs to configure slow log publishing.</p>
     */
    inline void SetLogPublishingOptions(LogPublishingOptionsStatus&& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions = std::move(value); }

    /**
     * <p>Key-value pairs to configure slow log publishing.</p>
     */
    inline DomainConfig& WithLogPublishingOptions(const LogPublishingOptionsStatus& value) { SetLogPublishingOptions(value); return *this;}

    /**
     * <p>Key-value pairs to configure slow log publishing.</p>
     */
    inline DomainConfig& WithLogPublishingOptions(LogPublishingOptionsStatus&& value) { SetLogPublishingOptions(std::move(value)); return *this;}


    /**
     * <p>Additional options for the domain endpoint, such as whether to require HTTPS
     * for all traffic.</p>
     */
    inline const DomainEndpointOptionsStatus& GetDomainEndpointOptions() const{ return m_domainEndpointOptions; }

    /**
     * <p>Additional options for the domain endpoint, such as whether to require HTTPS
     * for all traffic.</p>
     */
    inline bool DomainEndpointOptionsHasBeenSet() const { return m_domainEndpointOptionsHasBeenSet; }

    /**
     * <p>Additional options for the domain endpoint, such as whether to require HTTPS
     * for all traffic.</p>
     */
    inline void SetDomainEndpointOptions(const DomainEndpointOptionsStatus& value) { m_domainEndpointOptionsHasBeenSet = true; m_domainEndpointOptions = value; }

    /**
     * <p>Additional options for the domain endpoint, such as whether to require HTTPS
     * for all traffic.</p>
     */
    inline void SetDomainEndpointOptions(DomainEndpointOptionsStatus&& value) { m_domainEndpointOptionsHasBeenSet = true; m_domainEndpointOptions = std::move(value); }

    /**
     * <p>Additional options for the domain endpoint, such as whether to require HTTPS
     * for all traffic.</p>
     */
    inline DomainConfig& WithDomainEndpointOptions(const DomainEndpointOptionsStatus& value) { SetDomainEndpointOptions(value); return *this;}

    /**
     * <p>Additional options for the domain endpoint, such as whether to require HTTPS
     * for all traffic.</p>
     */
    inline DomainConfig& WithDomainEndpointOptions(DomainEndpointOptionsStatus&& value) { SetDomainEndpointOptions(std::move(value)); return *this;}


    /**
     * <p>Container for fine-grained access control settings for the domain.</p>
     */
    inline const AdvancedSecurityOptionsStatus& GetAdvancedSecurityOptions() const{ return m_advancedSecurityOptions; }

    /**
     * <p>Container for fine-grained access control settings for the domain.</p>
     */
    inline bool AdvancedSecurityOptionsHasBeenSet() const { return m_advancedSecurityOptionsHasBeenSet; }

    /**
     * <p>Container for fine-grained access control settings for the domain.</p>
     */
    inline void SetAdvancedSecurityOptions(const AdvancedSecurityOptionsStatus& value) { m_advancedSecurityOptionsHasBeenSet = true; m_advancedSecurityOptions = value; }

    /**
     * <p>Container for fine-grained access control settings for the domain.</p>
     */
    inline void SetAdvancedSecurityOptions(AdvancedSecurityOptionsStatus&& value) { m_advancedSecurityOptionsHasBeenSet = true; m_advancedSecurityOptions = std::move(value); }

    /**
     * <p>Container for fine-grained access control settings for the domain.</p>
     */
    inline DomainConfig& WithAdvancedSecurityOptions(const AdvancedSecurityOptionsStatus& value) { SetAdvancedSecurityOptions(value); return *this;}

    /**
     * <p>Container for fine-grained access control settings for the domain.</p>
     */
    inline DomainConfig& WithAdvancedSecurityOptions(AdvancedSecurityOptionsStatus&& value) { SetAdvancedSecurityOptions(std::move(value)); return *this;}


    /**
     * <p>Container for Auto-Tune settings for the domain.</p>
     */
    inline const AutoTuneOptionsStatus& GetAutoTuneOptions() const{ return m_autoTuneOptions; }

    /**
     * <p>Container for Auto-Tune settings for the domain.</p>
     */
    inline bool AutoTuneOptionsHasBeenSet() const { return m_autoTuneOptionsHasBeenSet; }

    /**
     * <p>Container for Auto-Tune settings for the domain.</p>
     */
    inline void SetAutoTuneOptions(const AutoTuneOptionsStatus& value) { m_autoTuneOptionsHasBeenSet = true; m_autoTuneOptions = value; }

    /**
     * <p>Container for Auto-Tune settings for the domain.</p>
     */
    inline void SetAutoTuneOptions(AutoTuneOptionsStatus&& value) { m_autoTuneOptionsHasBeenSet = true; m_autoTuneOptions = std::move(value); }

    /**
     * <p>Container for Auto-Tune settings for the domain.</p>
     */
    inline DomainConfig& WithAutoTuneOptions(const AutoTuneOptionsStatus& value) { SetAutoTuneOptions(value); return *this;}

    /**
     * <p>Container for Auto-Tune settings for the domain.</p>
     */
    inline DomainConfig& WithAutoTuneOptions(AutoTuneOptionsStatus&& value) { SetAutoTuneOptions(std::move(value)); return *this;}


    /**
     * <p>Container for information about the progress of an existing configuration
     * change.</p>
     */
    inline const ChangeProgressDetails& GetChangeProgressDetails() const{ return m_changeProgressDetails; }

    /**
     * <p>Container for information about the progress of an existing configuration
     * change.</p>
     */
    inline bool ChangeProgressDetailsHasBeenSet() const { return m_changeProgressDetailsHasBeenSet; }

    /**
     * <p>Container for information about the progress of an existing configuration
     * change.</p>
     */
    inline void SetChangeProgressDetails(const ChangeProgressDetails& value) { m_changeProgressDetailsHasBeenSet = true; m_changeProgressDetails = value; }

    /**
     * <p>Container for information about the progress of an existing configuration
     * change.</p>
     */
    inline void SetChangeProgressDetails(ChangeProgressDetails&& value) { m_changeProgressDetailsHasBeenSet = true; m_changeProgressDetails = std::move(value); }

    /**
     * <p>Container for information about the progress of an existing configuration
     * change.</p>
     */
    inline DomainConfig& WithChangeProgressDetails(const ChangeProgressDetails& value) { SetChangeProgressDetails(value); return *this;}

    /**
     * <p>Container for information about the progress of an existing configuration
     * change.</p>
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
