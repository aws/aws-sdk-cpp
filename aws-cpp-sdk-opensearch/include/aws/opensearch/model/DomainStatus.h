/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/opensearch/model/ClusterConfig.h>
#include <aws/opensearch/model/EBSOptions.h>
#include <aws/opensearch/model/SnapshotOptions.h>
#include <aws/opensearch/model/VPCDerivedInfo.h>
#include <aws/opensearch/model/CognitoOptions.h>
#include <aws/opensearch/model/EncryptionAtRestOptions.h>
#include <aws/opensearch/model/NodeToNodeEncryptionOptions.h>
#include <aws/opensearch/model/ServiceSoftwareOptions.h>
#include <aws/opensearch/model/DomainEndpointOptions.h>
#include <aws/opensearch/model/AdvancedSecurityOptions.h>
#include <aws/opensearch/model/AutoTuneOptionsOutput.h>
#include <aws/opensearch/model/ChangeProgressDetails.h>
#include <aws/opensearch/model/LogType.h>
#include <aws/opensearch/model/LogPublishingOption.h>
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
   * <p>The current status of a domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DomainStatus">AWS
   * API Reference</a></p>
   */
  class AWS_OPENSEARCHSERVICE_API DomainStatus
  {
  public:
    DomainStatus();
    DomainStatus(Aws::Utils::Json::JsonView jsonValue);
    DomainStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier for the specified domain.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }

    /**
     * <p>The unique identifier for the specified domain.</p>
     */
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }

    /**
     * <p>The unique identifier for the specified domain.</p>
     */
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }

    /**
     * <p>The unique identifier for the specified domain.</p>
     */
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }

    /**
     * <p>The unique identifier for the specified domain.</p>
     */
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }

    /**
     * <p>The unique identifier for the specified domain.</p>
     */
    inline DomainStatus& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}

    /**
     * <p>The unique identifier for the specified domain.</p>
     */
    inline DomainStatus& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the specified domain.</p>
     */
    inline DomainStatus& WithDomainId(const char* value) { SetDomainId(value); return *this;}


    /**
     * <p>The name of a domain. Domain names are unique across the domains owned by an
     * account within an AWS region. Domain names start with a letter or number and can
     * contain the following characters: a-z (lowercase), 0-9, and - (hyphen). </p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The name of a domain. Domain names are unique across the domains owned by an
     * account within an AWS region. Domain names start with a letter or number and can
     * contain the following characters: a-z (lowercase), 0-9, and - (hyphen). </p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The name of a domain. Domain names are unique across the domains owned by an
     * account within an AWS region. Domain names start with a letter or number and can
     * contain the following characters: a-z (lowercase), 0-9, and - (hyphen). </p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The name of a domain. Domain names are unique across the domains owned by an
     * account within an AWS region. Domain names start with a letter or number and can
     * contain the following characters: a-z (lowercase), 0-9, and - (hyphen). </p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The name of a domain. Domain names are unique across the domains owned by an
     * account within an AWS region. Domain names start with a letter or number and can
     * contain the following characters: a-z (lowercase), 0-9, and - (hyphen). </p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The name of a domain. Domain names are unique across the domains owned by an
     * account within an AWS region. Domain names start with a letter or number and can
     * contain the following characters: a-z (lowercase), 0-9, and - (hyphen). </p>
     */
    inline DomainStatus& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The name of a domain. Domain names are unique across the domains owned by an
     * account within an AWS region. Domain names start with a letter or number and can
     * contain the following characters: a-z (lowercase), 0-9, and - (hyphen). </p>
     */
    inline DomainStatus& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The name of a domain. Domain names are unique across the domains owned by an
     * account within an AWS region. Domain names start with a letter or number and can
     * contain the following characters: a-z (lowercase), 0-9, and - (hyphen). </p>
     */
    inline DomainStatus& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of a domain. See <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html"
     * target="_blank">IAM identifiers </a> in the <i>AWS Identity and Access
     * Management User Guide</i> for more information. </p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }

    /**
     * <p>The Amazon Resource Name (ARN) of a domain. See <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html"
     * target="_blank">IAM identifiers </a> in the <i>AWS Identity and Access
     * Management User Guide</i> for more information. </p>
     */
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of a domain. See <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html"
     * target="_blank">IAM identifiers </a> in the <i>AWS Identity and Access
     * Management User Guide</i> for more information. </p>
     */
    inline void SetARN(const Aws::String& value) { m_aRNHasBeenSet = true; m_aRN = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of a domain. See <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html"
     * target="_blank">IAM identifiers </a> in the <i>AWS Identity and Access
     * Management User Guide</i> for more information. </p>
     */
    inline void SetARN(Aws::String&& value) { m_aRNHasBeenSet = true; m_aRN = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a domain. See <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html"
     * target="_blank">IAM identifiers </a> in the <i>AWS Identity and Access
     * Management User Guide</i> for more information. </p>
     */
    inline void SetARN(const char* value) { m_aRNHasBeenSet = true; m_aRN.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of a domain. See <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html"
     * target="_blank">IAM identifiers </a> in the <i>AWS Identity and Access
     * Management User Guide</i> for more information. </p>
     */
    inline DomainStatus& WithARN(const Aws::String& value) { SetARN(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a domain. See <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html"
     * target="_blank">IAM identifiers </a> in the <i>AWS Identity and Access
     * Management User Guide</i> for more information. </p>
     */
    inline DomainStatus& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of a domain. See <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_identifiers.html"
     * target="_blank">IAM identifiers </a> in the <i>AWS Identity and Access
     * Management User Guide</i> for more information. </p>
     */
    inline DomainStatus& WithARN(const char* value) { SetARN(value); return *this;}


    /**
     * <p>The domain creation status. <code>True</code> if the creation of a domain is
     * complete. <code> False </code> if domain creation is still in progress. </p>
     */
    inline bool GetCreated() const{ return m_created; }

    /**
     * <p>The domain creation status. <code>True</code> if the creation of a domain is
     * complete. <code> False </code> if domain creation is still in progress. </p>
     */
    inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }

    /**
     * <p>The domain creation status. <code>True</code> if the creation of a domain is
     * complete. <code> False </code> if domain creation is still in progress. </p>
     */
    inline void SetCreated(bool value) { m_createdHasBeenSet = true; m_created = value; }

    /**
     * <p>The domain creation status. <code>True</code> if the creation of a domain is
     * complete. <code> False </code> if domain creation is still in progress. </p>
     */
    inline DomainStatus& WithCreated(bool value) { SetCreated(value); return *this;}


    /**
     * <p>The domain deletion status. <code>True</code> if a delete request has been
     * received for the domain but resource cleanup is still in progress.
     * <code>False</code> if the domain has not been deleted. Once domain deletion is
     * complete, the status of the domain is no longer returned. </p>
     */
    inline bool GetDeleted() const{ return m_deleted; }

    /**
     * <p>The domain deletion status. <code>True</code> if a delete request has been
     * received for the domain but resource cleanup is still in progress.
     * <code>False</code> if the domain has not been deleted. Once domain deletion is
     * complete, the status of the domain is no longer returned. </p>
     */
    inline bool DeletedHasBeenSet() const { return m_deletedHasBeenSet; }

    /**
     * <p>The domain deletion status. <code>True</code> if a delete request has been
     * received for the domain but resource cleanup is still in progress.
     * <code>False</code> if the domain has not been deleted. Once domain deletion is
     * complete, the status of the domain is no longer returned. </p>
     */
    inline void SetDeleted(bool value) { m_deletedHasBeenSet = true; m_deleted = value; }

    /**
     * <p>The domain deletion status. <code>True</code> if a delete request has been
     * received for the domain but resource cleanup is still in progress.
     * <code>False</code> if the domain has not been deleted. Once domain deletion is
     * complete, the status of the domain is no longer returned. </p>
     */
    inline DomainStatus& WithDeleted(bool value) { SetDeleted(value); return *this;}


    /**
     * <p>The domain endpoint that you use to submit index and search requests.</p>
     */
    inline const Aws::String& GetEndpoint() const{ return m_endpoint; }

    /**
     * <p>The domain endpoint that you use to submit index and search requests.</p>
     */
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }

    /**
     * <p>The domain endpoint that you use to submit index and search requests.</p>
     */
    inline void SetEndpoint(const Aws::String& value) { m_endpointHasBeenSet = true; m_endpoint = value; }

    /**
     * <p>The domain endpoint that you use to submit index and search requests.</p>
     */
    inline void SetEndpoint(Aws::String&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }

    /**
     * <p>The domain endpoint that you use to submit index and search requests.</p>
     */
    inline void SetEndpoint(const char* value) { m_endpointHasBeenSet = true; m_endpoint.assign(value); }

    /**
     * <p>The domain endpoint that you use to submit index and search requests.</p>
     */
    inline DomainStatus& WithEndpoint(const Aws::String& value) { SetEndpoint(value); return *this;}

    /**
     * <p>The domain endpoint that you use to submit index and search requests.</p>
     */
    inline DomainStatus& WithEndpoint(Aws::String&& value) { SetEndpoint(std::move(value)); return *this;}

    /**
     * <p>The domain endpoint that you use to submit index and search requests.</p>
     */
    inline DomainStatus& WithEndpoint(const char* value) { SetEndpoint(value); return *this;}


    /**
     * <p>Map containing the domain endpoints used to submit index and search requests.
     * Example <code>key, value</code>:
     * <code>'vpc','vpc-endpoint-h2dsd34efgyghrtguk5gt6j2foh4.us-east-1.es.amazonaws.com'</code>.
     * </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEndpoints() const{ return m_endpoints; }

    /**
     * <p>Map containing the domain endpoints used to submit index and search requests.
     * Example <code>key, value</code>:
     * <code>'vpc','vpc-endpoint-h2dsd34efgyghrtguk5gt6j2foh4.us-east-1.es.amazonaws.com'</code>.
     * </p>
     */
    inline bool EndpointsHasBeenSet() const { return m_endpointsHasBeenSet; }

    /**
     * <p>Map containing the domain endpoints used to submit index and search requests.
     * Example <code>key, value</code>:
     * <code>'vpc','vpc-endpoint-h2dsd34efgyghrtguk5gt6j2foh4.us-east-1.es.amazonaws.com'</code>.
     * </p>
     */
    inline void SetEndpoints(const Aws::Map<Aws::String, Aws::String>& value) { m_endpointsHasBeenSet = true; m_endpoints = value; }

    /**
     * <p>Map containing the domain endpoints used to submit index and search requests.
     * Example <code>key, value</code>:
     * <code>'vpc','vpc-endpoint-h2dsd34efgyghrtguk5gt6j2foh4.us-east-1.es.amazonaws.com'</code>.
     * </p>
     */
    inline void SetEndpoints(Aws::Map<Aws::String, Aws::String>&& value) { m_endpointsHasBeenSet = true; m_endpoints = std::move(value); }

    /**
     * <p>Map containing the domain endpoints used to submit index and search requests.
     * Example <code>key, value</code>:
     * <code>'vpc','vpc-endpoint-h2dsd34efgyghrtguk5gt6j2foh4.us-east-1.es.amazonaws.com'</code>.
     * </p>
     */
    inline DomainStatus& WithEndpoints(const Aws::Map<Aws::String, Aws::String>& value) { SetEndpoints(value); return *this;}

    /**
     * <p>Map containing the domain endpoints used to submit index and search requests.
     * Example <code>key, value</code>:
     * <code>'vpc','vpc-endpoint-h2dsd34efgyghrtguk5gt6j2foh4.us-east-1.es.amazonaws.com'</code>.
     * </p>
     */
    inline DomainStatus& WithEndpoints(Aws::Map<Aws::String, Aws::String>&& value) { SetEndpoints(std::move(value)); return *this;}

    /**
     * <p>Map containing the domain endpoints used to submit index and search requests.
     * Example <code>key, value</code>:
     * <code>'vpc','vpc-endpoint-h2dsd34efgyghrtguk5gt6j2foh4.us-east-1.es.amazonaws.com'</code>.
     * </p>
     */
    inline DomainStatus& AddEndpoints(const Aws::String& key, const Aws::String& value) { m_endpointsHasBeenSet = true; m_endpoints.emplace(key, value); return *this; }

    /**
     * <p>Map containing the domain endpoints used to submit index and search requests.
     * Example <code>key, value</code>:
     * <code>'vpc','vpc-endpoint-h2dsd34efgyghrtguk5gt6j2foh4.us-east-1.es.amazonaws.com'</code>.
     * </p>
     */
    inline DomainStatus& AddEndpoints(Aws::String&& key, const Aws::String& value) { m_endpointsHasBeenSet = true; m_endpoints.emplace(std::move(key), value); return *this; }

    /**
     * <p>Map containing the domain endpoints used to submit index and search requests.
     * Example <code>key, value</code>:
     * <code>'vpc','vpc-endpoint-h2dsd34efgyghrtguk5gt6j2foh4.us-east-1.es.amazonaws.com'</code>.
     * </p>
     */
    inline DomainStatus& AddEndpoints(const Aws::String& key, Aws::String&& value) { m_endpointsHasBeenSet = true; m_endpoints.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Map containing the domain endpoints used to submit index and search requests.
     * Example <code>key, value</code>:
     * <code>'vpc','vpc-endpoint-h2dsd34efgyghrtguk5gt6j2foh4.us-east-1.es.amazonaws.com'</code>.
     * </p>
     */
    inline DomainStatus& AddEndpoints(Aws::String&& key, Aws::String&& value) { m_endpointsHasBeenSet = true; m_endpoints.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Map containing the domain endpoints used to submit index and search requests.
     * Example <code>key, value</code>:
     * <code>'vpc','vpc-endpoint-h2dsd34efgyghrtguk5gt6j2foh4.us-east-1.es.amazonaws.com'</code>.
     * </p>
     */
    inline DomainStatus& AddEndpoints(const char* key, Aws::String&& value) { m_endpointsHasBeenSet = true; m_endpoints.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Map containing the domain endpoints used to submit index and search requests.
     * Example <code>key, value</code>:
     * <code>'vpc','vpc-endpoint-h2dsd34efgyghrtguk5gt6j2foh4.us-east-1.es.amazonaws.com'</code>.
     * </p>
     */
    inline DomainStatus& AddEndpoints(Aws::String&& key, const char* value) { m_endpointsHasBeenSet = true; m_endpoints.emplace(std::move(key), value); return *this; }

    /**
     * <p>Map containing the domain endpoints used to submit index and search requests.
     * Example <code>key, value</code>:
     * <code>'vpc','vpc-endpoint-h2dsd34efgyghrtguk5gt6j2foh4.us-east-1.es.amazonaws.com'</code>.
     * </p>
     */
    inline DomainStatus& AddEndpoints(const char* key, const char* value) { m_endpointsHasBeenSet = true; m_endpoints.emplace(key, value); return *this; }


    /**
     * <p>The status of the domain configuration. <code>True</code> if Amazon
     * OpenSearch Service is processing configuration changes. <code>False</code> if
     * the configuration is active. </p>
     */
    inline bool GetProcessing() const{ return m_processing; }

    /**
     * <p>The status of the domain configuration. <code>True</code> if Amazon
     * OpenSearch Service is processing configuration changes. <code>False</code> if
     * the configuration is active. </p>
     */
    inline bool ProcessingHasBeenSet() const { return m_processingHasBeenSet; }

    /**
     * <p>The status of the domain configuration. <code>True</code> if Amazon
     * OpenSearch Service is processing configuration changes. <code>False</code> if
     * the configuration is active. </p>
     */
    inline void SetProcessing(bool value) { m_processingHasBeenSet = true; m_processing = value; }

    /**
     * <p>The status of the domain configuration. <code>True</code> if Amazon
     * OpenSearch Service is processing configuration changes. <code>False</code> if
     * the configuration is active. </p>
     */
    inline DomainStatus& WithProcessing(bool value) { SetProcessing(value); return *this;}


    /**
     * <p>The status of a domain version upgrade. <code>True</code> if Amazon
     * OpenSearch Service is undergoing a version upgrade. <code>False</code> if the
     * configuration is active. </p>
     */
    inline bool GetUpgradeProcessing() const{ return m_upgradeProcessing; }

    /**
     * <p>The status of a domain version upgrade. <code>True</code> if Amazon
     * OpenSearch Service is undergoing a version upgrade. <code>False</code> if the
     * configuration is active. </p>
     */
    inline bool UpgradeProcessingHasBeenSet() const { return m_upgradeProcessingHasBeenSet; }

    /**
     * <p>The status of a domain version upgrade. <code>True</code> if Amazon
     * OpenSearch Service is undergoing a version upgrade. <code>False</code> if the
     * configuration is active. </p>
     */
    inline void SetUpgradeProcessing(bool value) { m_upgradeProcessingHasBeenSet = true; m_upgradeProcessing = value; }

    /**
     * <p>The status of a domain version upgrade. <code>True</code> if Amazon
     * OpenSearch Service is undergoing a version upgrade. <code>False</code> if the
     * configuration is active. </p>
     */
    inline DomainStatus& WithUpgradeProcessing(bool value) { SetUpgradeProcessing(value); return *this;}


    
    inline const Aws::String& GetEngineVersion() const{ return m_engineVersion; }

    
    inline bool EngineVersionHasBeenSet() const { return m_engineVersionHasBeenSet; }

    
    inline void SetEngineVersion(const Aws::String& value) { m_engineVersionHasBeenSet = true; m_engineVersion = value; }

    
    inline void SetEngineVersion(Aws::String&& value) { m_engineVersionHasBeenSet = true; m_engineVersion = std::move(value); }

    
    inline void SetEngineVersion(const char* value) { m_engineVersionHasBeenSet = true; m_engineVersion.assign(value); }

    
    inline DomainStatus& WithEngineVersion(const Aws::String& value) { SetEngineVersion(value); return *this;}

    
    inline DomainStatus& WithEngineVersion(Aws::String&& value) { SetEngineVersion(std::move(value)); return *this;}

    
    inline DomainStatus& WithEngineVersion(const char* value) { SetEngineVersion(value); return *this;}


    /**
     * <p>The type and number of instances in the domain.</p>
     */
    inline const ClusterConfig& GetClusterConfig() const{ return m_clusterConfig; }

    /**
     * <p>The type and number of instances in the domain.</p>
     */
    inline bool ClusterConfigHasBeenSet() const { return m_clusterConfigHasBeenSet; }

    /**
     * <p>The type and number of instances in the domain.</p>
     */
    inline void SetClusterConfig(const ClusterConfig& value) { m_clusterConfigHasBeenSet = true; m_clusterConfig = value; }

    /**
     * <p>The type and number of instances in the domain.</p>
     */
    inline void SetClusterConfig(ClusterConfig&& value) { m_clusterConfigHasBeenSet = true; m_clusterConfig = std::move(value); }

    /**
     * <p>The type and number of instances in the domain.</p>
     */
    inline DomainStatus& WithClusterConfig(const ClusterConfig& value) { SetClusterConfig(value); return *this;}

    /**
     * <p>The type and number of instances in the domain.</p>
     */
    inline DomainStatus& WithClusterConfig(ClusterConfig&& value) { SetClusterConfig(std::move(value)); return *this;}


    /**
     * <p>The <code>EBSOptions</code> for the specified domain. </p>
     */
    inline const EBSOptions& GetEBSOptions() const{ return m_eBSOptions; }

    /**
     * <p>The <code>EBSOptions</code> for the specified domain. </p>
     */
    inline bool EBSOptionsHasBeenSet() const { return m_eBSOptionsHasBeenSet; }

    /**
     * <p>The <code>EBSOptions</code> for the specified domain. </p>
     */
    inline void SetEBSOptions(const EBSOptions& value) { m_eBSOptionsHasBeenSet = true; m_eBSOptions = value; }

    /**
     * <p>The <code>EBSOptions</code> for the specified domain. </p>
     */
    inline void SetEBSOptions(EBSOptions&& value) { m_eBSOptionsHasBeenSet = true; m_eBSOptions = std::move(value); }

    /**
     * <p>The <code>EBSOptions</code> for the specified domain. </p>
     */
    inline DomainStatus& WithEBSOptions(const EBSOptions& value) { SetEBSOptions(value); return *this;}

    /**
     * <p>The <code>EBSOptions</code> for the specified domain. </p>
     */
    inline DomainStatus& WithEBSOptions(EBSOptions&& value) { SetEBSOptions(std::move(value)); return *this;}


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
    inline DomainStatus& WithAccessPolicies(const Aws::String& value) { SetAccessPolicies(value); return *this;}

    /**
     * <p>IAM access policy as a JSON-formatted string.</p>
     */
    inline DomainStatus& WithAccessPolicies(Aws::String&& value) { SetAccessPolicies(std::move(value)); return *this;}

    /**
     * <p>IAM access policy as a JSON-formatted string.</p>
     */
    inline DomainStatus& WithAccessPolicies(const char* value) { SetAccessPolicies(value); return *this;}


    /**
     * <p>The status of the <code>SnapshotOptions</code>. </p>
     */
    inline const SnapshotOptions& GetSnapshotOptions() const{ return m_snapshotOptions; }

    /**
     * <p>The status of the <code>SnapshotOptions</code>. </p>
     */
    inline bool SnapshotOptionsHasBeenSet() const { return m_snapshotOptionsHasBeenSet; }

    /**
     * <p>The status of the <code>SnapshotOptions</code>. </p>
     */
    inline void SetSnapshotOptions(const SnapshotOptions& value) { m_snapshotOptionsHasBeenSet = true; m_snapshotOptions = value; }

    /**
     * <p>The status of the <code>SnapshotOptions</code>. </p>
     */
    inline void SetSnapshotOptions(SnapshotOptions&& value) { m_snapshotOptionsHasBeenSet = true; m_snapshotOptions = std::move(value); }

    /**
     * <p>The status of the <code>SnapshotOptions</code>. </p>
     */
    inline DomainStatus& WithSnapshotOptions(const SnapshotOptions& value) { SetSnapshotOptions(value); return *this;}

    /**
     * <p>The status of the <code>SnapshotOptions</code>. </p>
     */
    inline DomainStatus& WithSnapshotOptions(SnapshotOptions&& value) { SetSnapshotOptions(std::move(value)); return *this;}


    /**
     * <p>The <code>VPCOptions</code> for the specified domain. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/vpc.html"
     * target="_blank"> Launching your Amazon OpenSearch Service domains using a
     * VPC</a>. </p>
     */
    inline const VPCDerivedInfo& GetVPCOptions() const{ return m_vPCOptions; }

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
    inline void SetVPCOptions(const VPCDerivedInfo& value) { m_vPCOptionsHasBeenSet = true; m_vPCOptions = value; }

    /**
     * <p>The <code>VPCOptions</code> for the specified domain. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/vpc.html"
     * target="_blank"> Launching your Amazon OpenSearch Service domains using a
     * VPC</a>. </p>
     */
    inline void SetVPCOptions(VPCDerivedInfo&& value) { m_vPCOptionsHasBeenSet = true; m_vPCOptions = std::move(value); }

    /**
     * <p>The <code>VPCOptions</code> for the specified domain. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/vpc.html"
     * target="_blank"> Launching your Amazon OpenSearch Service domains using a
     * VPC</a>. </p>
     */
    inline DomainStatus& WithVPCOptions(const VPCDerivedInfo& value) { SetVPCOptions(value); return *this;}

    /**
     * <p>The <code>VPCOptions</code> for the specified domain. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/vpc.html"
     * target="_blank"> Launching your Amazon OpenSearch Service domains using a
     * VPC</a>. </p>
     */
    inline DomainStatus& WithVPCOptions(VPCDerivedInfo&& value) { SetVPCOptions(std::move(value)); return *this;}


    /**
     * <p>The <code>CognitoOptions</code> for the specified domain. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/cognito-auth.html"
     * target="_blank">Configuring Amazon Cognito authentication for OpenSearch
     * Dashboards</a>. </p>
     */
    inline const CognitoOptions& GetCognitoOptions() const{ return m_cognitoOptions; }

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
    inline void SetCognitoOptions(const CognitoOptions& value) { m_cognitoOptionsHasBeenSet = true; m_cognitoOptions = value; }

    /**
     * <p>The <code>CognitoOptions</code> for the specified domain. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/cognito-auth.html"
     * target="_blank">Configuring Amazon Cognito authentication for OpenSearch
     * Dashboards</a>. </p>
     */
    inline void SetCognitoOptions(CognitoOptions&& value) { m_cognitoOptionsHasBeenSet = true; m_cognitoOptions = std::move(value); }

    /**
     * <p>The <code>CognitoOptions</code> for the specified domain. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/cognito-auth.html"
     * target="_blank">Configuring Amazon Cognito authentication for OpenSearch
     * Dashboards</a>. </p>
     */
    inline DomainStatus& WithCognitoOptions(const CognitoOptions& value) { SetCognitoOptions(value); return *this;}

    /**
     * <p>The <code>CognitoOptions</code> for the specified domain. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/cognito-auth.html"
     * target="_blank">Configuring Amazon Cognito authentication for OpenSearch
     * Dashboards</a>. </p>
     */
    inline DomainStatus& WithCognitoOptions(CognitoOptions&& value) { SetCognitoOptions(std::move(value)); return *this;}


    /**
     * <p>The status of the <code>EncryptionAtRestOptions</code>. </p>
     */
    inline const EncryptionAtRestOptions& GetEncryptionAtRestOptions() const{ return m_encryptionAtRestOptions; }

    /**
     * <p>The status of the <code>EncryptionAtRestOptions</code>. </p>
     */
    inline bool EncryptionAtRestOptionsHasBeenSet() const { return m_encryptionAtRestOptionsHasBeenSet; }

    /**
     * <p>The status of the <code>EncryptionAtRestOptions</code>. </p>
     */
    inline void SetEncryptionAtRestOptions(const EncryptionAtRestOptions& value) { m_encryptionAtRestOptionsHasBeenSet = true; m_encryptionAtRestOptions = value; }

    /**
     * <p>The status of the <code>EncryptionAtRestOptions</code>. </p>
     */
    inline void SetEncryptionAtRestOptions(EncryptionAtRestOptions&& value) { m_encryptionAtRestOptionsHasBeenSet = true; m_encryptionAtRestOptions = std::move(value); }

    /**
     * <p>The status of the <code>EncryptionAtRestOptions</code>. </p>
     */
    inline DomainStatus& WithEncryptionAtRestOptions(const EncryptionAtRestOptions& value) { SetEncryptionAtRestOptions(value); return *this;}

    /**
     * <p>The status of the <code>EncryptionAtRestOptions</code>. </p>
     */
    inline DomainStatus& WithEncryptionAtRestOptions(EncryptionAtRestOptions&& value) { SetEncryptionAtRestOptions(std::move(value)); return *this;}


    /**
     * <p>The status of the <code>NodeToNodeEncryptionOptions</code>. </p>
     */
    inline const NodeToNodeEncryptionOptions& GetNodeToNodeEncryptionOptions() const{ return m_nodeToNodeEncryptionOptions; }

    /**
     * <p>The status of the <code>NodeToNodeEncryptionOptions</code>. </p>
     */
    inline bool NodeToNodeEncryptionOptionsHasBeenSet() const { return m_nodeToNodeEncryptionOptionsHasBeenSet; }

    /**
     * <p>The status of the <code>NodeToNodeEncryptionOptions</code>. </p>
     */
    inline void SetNodeToNodeEncryptionOptions(const NodeToNodeEncryptionOptions& value) { m_nodeToNodeEncryptionOptionsHasBeenSet = true; m_nodeToNodeEncryptionOptions = value; }

    /**
     * <p>The status of the <code>NodeToNodeEncryptionOptions</code>. </p>
     */
    inline void SetNodeToNodeEncryptionOptions(NodeToNodeEncryptionOptions&& value) { m_nodeToNodeEncryptionOptionsHasBeenSet = true; m_nodeToNodeEncryptionOptions = std::move(value); }

    /**
     * <p>The status of the <code>NodeToNodeEncryptionOptions</code>. </p>
     */
    inline DomainStatus& WithNodeToNodeEncryptionOptions(const NodeToNodeEncryptionOptions& value) { SetNodeToNodeEncryptionOptions(value); return *this;}

    /**
     * <p>The status of the <code>NodeToNodeEncryptionOptions</code>. </p>
     */
    inline DomainStatus& WithNodeToNodeEncryptionOptions(NodeToNodeEncryptionOptions&& value) { SetNodeToNodeEncryptionOptions(std::move(value)); return *this;}


    /**
     * <p>The status of the <code>AdvancedOptions</code>. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAdvancedOptions() const{ return m_advancedOptions; }

    /**
     * <p>The status of the <code>AdvancedOptions</code>. </p>
     */
    inline bool AdvancedOptionsHasBeenSet() const { return m_advancedOptionsHasBeenSet; }

    /**
     * <p>The status of the <code>AdvancedOptions</code>. </p>
     */
    inline void SetAdvancedOptions(const Aws::Map<Aws::String, Aws::String>& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions = value; }

    /**
     * <p>The status of the <code>AdvancedOptions</code>. </p>
     */
    inline void SetAdvancedOptions(Aws::Map<Aws::String, Aws::String>&& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions = std::move(value); }

    /**
     * <p>The status of the <code>AdvancedOptions</code>. </p>
     */
    inline DomainStatus& WithAdvancedOptions(const Aws::Map<Aws::String, Aws::String>& value) { SetAdvancedOptions(value); return *this;}

    /**
     * <p>The status of the <code>AdvancedOptions</code>. </p>
     */
    inline DomainStatus& WithAdvancedOptions(Aws::Map<Aws::String, Aws::String>&& value) { SetAdvancedOptions(std::move(value)); return *this;}

    /**
     * <p>The status of the <code>AdvancedOptions</code>. </p>
     */
    inline DomainStatus& AddAdvancedOptions(const Aws::String& key, const Aws::String& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(key, value); return *this; }

    /**
     * <p>The status of the <code>AdvancedOptions</code>. </p>
     */
    inline DomainStatus& AddAdvancedOptions(Aws::String&& key, const Aws::String& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(std::move(key), value); return *this; }

    /**
     * <p>The status of the <code>AdvancedOptions</code>. </p>
     */
    inline DomainStatus& AddAdvancedOptions(const Aws::String& key, Aws::String&& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The status of the <code>AdvancedOptions</code>. </p>
     */
    inline DomainStatus& AddAdvancedOptions(Aws::String&& key, Aws::String&& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The status of the <code>AdvancedOptions</code>. </p>
     */
    inline DomainStatus& AddAdvancedOptions(const char* key, Aws::String&& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The status of the <code>AdvancedOptions</code>. </p>
     */
    inline DomainStatus& AddAdvancedOptions(Aws::String&& key, const char* value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(std::move(key), value); return *this; }

    /**
     * <p>The status of the <code>AdvancedOptions</code>. </p>
     */
    inline DomainStatus& AddAdvancedOptions(const char* key, const char* value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(key, value); return *this; }


    /**
     * <p>Log publishing options for the given domain.</p>
     */
    inline const Aws::Map<LogType, LogPublishingOption>& GetLogPublishingOptions() const{ return m_logPublishingOptions; }

    /**
     * <p>Log publishing options for the given domain.</p>
     */
    inline bool LogPublishingOptionsHasBeenSet() const { return m_logPublishingOptionsHasBeenSet; }

    /**
     * <p>Log publishing options for the given domain.</p>
     */
    inline void SetLogPublishingOptions(const Aws::Map<LogType, LogPublishingOption>& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions = value; }

    /**
     * <p>Log publishing options for the given domain.</p>
     */
    inline void SetLogPublishingOptions(Aws::Map<LogType, LogPublishingOption>&& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions = std::move(value); }

    /**
     * <p>Log publishing options for the given domain.</p>
     */
    inline DomainStatus& WithLogPublishingOptions(const Aws::Map<LogType, LogPublishingOption>& value) { SetLogPublishingOptions(value); return *this;}

    /**
     * <p>Log publishing options for the given domain.</p>
     */
    inline DomainStatus& WithLogPublishingOptions(Aws::Map<LogType, LogPublishingOption>&& value) { SetLogPublishingOptions(std::move(value)); return *this;}

    /**
     * <p>Log publishing options for the given domain.</p>
     */
    inline DomainStatus& AddLogPublishingOptions(const LogType& key, const LogPublishingOption& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions.emplace(key, value); return *this; }

    /**
     * <p>Log publishing options for the given domain.</p>
     */
    inline DomainStatus& AddLogPublishingOptions(LogType&& key, const LogPublishingOption& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions.emplace(std::move(key), value); return *this; }

    /**
     * <p>Log publishing options for the given domain.</p>
     */
    inline DomainStatus& AddLogPublishingOptions(const LogType& key, LogPublishingOption&& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Log publishing options for the given domain.</p>
     */
    inline DomainStatus& AddLogPublishingOptions(LogType&& key, LogPublishingOption&& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions.emplace(std::move(key), std::move(value)); return *this; }


    /**
     * <p>The current status of the domain's service software.</p>
     */
    inline const ServiceSoftwareOptions& GetServiceSoftwareOptions() const{ return m_serviceSoftwareOptions; }

    /**
     * <p>The current status of the domain's service software.</p>
     */
    inline bool ServiceSoftwareOptionsHasBeenSet() const { return m_serviceSoftwareOptionsHasBeenSet; }

    /**
     * <p>The current status of the domain's service software.</p>
     */
    inline void SetServiceSoftwareOptions(const ServiceSoftwareOptions& value) { m_serviceSoftwareOptionsHasBeenSet = true; m_serviceSoftwareOptions = value; }

    /**
     * <p>The current status of the domain's service software.</p>
     */
    inline void SetServiceSoftwareOptions(ServiceSoftwareOptions&& value) { m_serviceSoftwareOptionsHasBeenSet = true; m_serviceSoftwareOptions = std::move(value); }

    /**
     * <p>The current status of the domain's service software.</p>
     */
    inline DomainStatus& WithServiceSoftwareOptions(const ServiceSoftwareOptions& value) { SetServiceSoftwareOptions(value); return *this;}

    /**
     * <p>The current status of the domain's service software.</p>
     */
    inline DomainStatus& WithServiceSoftwareOptions(ServiceSoftwareOptions&& value) { SetServiceSoftwareOptions(std::move(value)); return *this;}


    /**
     * <p>The current status of the domain's endpoint options.</p>
     */
    inline const DomainEndpointOptions& GetDomainEndpointOptions() const{ return m_domainEndpointOptions; }

    /**
     * <p>The current status of the domain's endpoint options.</p>
     */
    inline bool DomainEndpointOptionsHasBeenSet() const { return m_domainEndpointOptionsHasBeenSet; }

    /**
     * <p>The current status of the domain's endpoint options.</p>
     */
    inline void SetDomainEndpointOptions(const DomainEndpointOptions& value) { m_domainEndpointOptionsHasBeenSet = true; m_domainEndpointOptions = value; }

    /**
     * <p>The current status of the domain's endpoint options.</p>
     */
    inline void SetDomainEndpointOptions(DomainEndpointOptions&& value) { m_domainEndpointOptionsHasBeenSet = true; m_domainEndpointOptions = std::move(value); }

    /**
     * <p>The current status of the domain's endpoint options.</p>
     */
    inline DomainStatus& WithDomainEndpointOptions(const DomainEndpointOptions& value) { SetDomainEndpointOptions(value); return *this;}

    /**
     * <p>The current status of the domain's endpoint options.</p>
     */
    inline DomainStatus& WithDomainEndpointOptions(DomainEndpointOptions&& value) { SetDomainEndpointOptions(std::move(value)); return *this;}


    /**
     * <p>The current status of the domain's advanced security options.</p>
     */
    inline const AdvancedSecurityOptions& GetAdvancedSecurityOptions() const{ return m_advancedSecurityOptions; }

    /**
     * <p>The current status of the domain's advanced security options.</p>
     */
    inline bool AdvancedSecurityOptionsHasBeenSet() const { return m_advancedSecurityOptionsHasBeenSet; }

    /**
     * <p>The current status of the domain's advanced security options.</p>
     */
    inline void SetAdvancedSecurityOptions(const AdvancedSecurityOptions& value) { m_advancedSecurityOptionsHasBeenSet = true; m_advancedSecurityOptions = value; }

    /**
     * <p>The current status of the domain's advanced security options.</p>
     */
    inline void SetAdvancedSecurityOptions(AdvancedSecurityOptions&& value) { m_advancedSecurityOptionsHasBeenSet = true; m_advancedSecurityOptions = std::move(value); }

    /**
     * <p>The current status of the domain's advanced security options.</p>
     */
    inline DomainStatus& WithAdvancedSecurityOptions(const AdvancedSecurityOptions& value) { SetAdvancedSecurityOptions(value); return *this;}

    /**
     * <p>The current status of the domain's advanced security options.</p>
     */
    inline DomainStatus& WithAdvancedSecurityOptions(AdvancedSecurityOptions&& value) { SetAdvancedSecurityOptions(std::move(value)); return *this;}


    /**
     * <p>The current status of the domain's Auto-Tune options.</p>
     */
    inline const AutoTuneOptionsOutput& GetAutoTuneOptions() const{ return m_autoTuneOptions; }

    /**
     * <p>The current status of the domain's Auto-Tune options.</p>
     */
    inline bool AutoTuneOptionsHasBeenSet() const { return m_autoTuneOptionsHasBeenSet; }

    /**
     * <p>The current status of the domain's Auto-Tune options.</p>
     */
    inline void SetAutoTuneOptions(const AutoTuneOptionsOutput& value) { m_autoTuneOptionsHasBeenSet = true; m_autoTuneOptions = value; }

    /**
     * <p>The current status of the domain's Auto-Tune options.</p>
     */
    inline void SetAutoTuneOptions(AutoTuneOptionsOutput&& value) { m_autoTuneOptionsHasBeenSet = true; m_autoTuneOptions = std::move(value); }

    /**
     * <p>The current status of the domain's Auto-Tune options.</p>
     */
    inline DomainStatus& WithAutoTuneOptions(const AutoTuneOptionsOutput& value) { SetAutoTuneOptions(value); return *this;}

    /**
     * <p>The current status of the domain's Auto-Tune options.</p>
     */
    inline DomainStatus& WithAutoTuneOptions(AutoTuneOptionsOutput&& value) { SetAutoTuneOptions(std::move(value)); return *this;}


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
    inline DomainStatus& WithChangeProgressDetails(const ChangeProgressDetails& value) { SetChangeProgressDetails(value); return *this;}

    /**
     * <p>Specifies change details of the domain configuration change.</p>
     */
    inline DomainStatus& WithChangeProgressDetails(ChangeProgressDetails&& value) { SetChangeProgressDetails(std::move(value)); return *this;}

  private:

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;

    Aws::String m_aRN;
    bool m_aRNHasBeenSet;

    bool m_created;
    bool m_createdHasBeenSet;

    bool m_deleted;
    bool m_deletedHasBeenSet;

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_endpoints;
    bool m_endpointsHasBeenSet;

    bool m_processing;
    bool m_processingHasBeenSet;

    bool m_upgradeProcessing;
    bool m_upgradeProcessingHasBeenSet;

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

    VPCDerivedInfo m_vPCOptions;
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

    ServiceSoftwareOptions m_serviceSoftwareOptions;
    bool m_serviceSoftwareOptionsHasBeenSet;

    DomainEndpointOptions m_domainEndpointOptions;
    bool m_domainEndpointOptionsHasBeenSet;

    AdvancedSecurityOptions m_advancedSecurityOptions;
    bool m_advancedSecurityOptionsHasBeenSet;

    AutoTuneOptionsOutput m_autoTuneOptions;
    bool m_autoTuneOptionsHasBeenSet;

    ChangeProgressDetails m_changeProgressDetails;
    bool m_changeProgressDetailsHasBeenSet;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
