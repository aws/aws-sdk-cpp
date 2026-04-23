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
#include <aws/es/model/LogType.h>
#include <aws/es/model/LogPublishingOption.h>
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
  class AWS_ELASTICSEARCHSERVICE_API ElasticsearchDomainStatus
  {
  public:
    ElasticsearchDomainStatus();
    ElasticsearchDomainStatus(Aws::Utils::Json::JsonView jsonValue);
    ElasticsearchDomainStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier for the specified Elasticsearch domain.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }

    /**
     * <p>The unique identifier for the specified Elasticsearch domain.</p>
     */
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }

    /**
     * <p>The unique identifier for the specified Elasticsearch domain.</p>
     */
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }

    /**
     * <p>The unique identifier for the specified Elasticsearch domain.</p>
     */
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }

    /**
     * <p>The unique identifier for the specified Elasticsearch domain.</p>
     */
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }

    /**
     * <p>The unique identifier for the specified Elasticsearch domain.</p>
     */
    inline ElasticsearchDomainStatus& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}

    /**
     * <p>The unique identifier for the specified Elasticsearch domain.</p>
     */
    inline ElasticsearchDomainStatus& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the specified Elasticsearch domain.</p>
     */
    inline ElasticsearchDomainStatus& WithDomainId(const char* value) { SetDomainId(value); return *this;}


    /**
     * <p>The name of an Elasticsearch domain. Domain names are unique across the
     * domains owned by an account within an AWS region. Domain names start with a
     * letter or number and can contain the following characters: a-z (lowercase), 0-9,
     * and - (hyphen).</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The name of an Elasticsearch domain. Domain names are unique across the
     * domains owned by an account within an AWS region. Domain names start with a
     * letter or number and can contain the following characters: a-z (lowercase), 0-9,
     * and - (hyphen).</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The name of an Elasticsearch domain. Domain names are unique across the
     * domains owned by an account within an AWS region. Domain names start with a
     * letter or number and can contain the following characters: a-z (lowercase), 0-9,
     * and - (hyphen).</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The name of an Elasticsearch domain. Domain names are unique across the
     * domains owned by an account within an AWS region. Domain names start with a
     * letter or number and can contain the following characters: a-z (lowercase), 0-9,
     * and - (hyphen).</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The name of an Elasticsearch domain. Domain names are unique across the
     * domains owned by an account within an AWS region. Domain names start with a
     * letter or number and can contain the following characters: a-z (lowercase), 0-9,
     * and - (hyphen).</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The name of an Elasticsearch domain. Domain names are unique across the
     * domains owned by an account within an AWS region. Domain names start with a
     * letter or number and can contain the following characters: a-z (lowercase), 0-9,
     * and - (hyphen).</p>
     */
    inline ElasticsearchDomainStatus& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The name of an Elasticsearch domain. Domain names are unique across the
     * domains owned by an account within an AWS region. Domain names start with a
     * letter or number and can contain the following characters: a-z (lowercase), 0-9,
     * and - (hyphen).</p>
     */
    inline ElasticsearchDomainStatus& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The name of an Elasticsearch domain. Domain names are unique across the
     * domains owned by an account within an AWS region. Domain names start with a
     * letter or number and can contain the following characters: a-z (lowercase), 0-9,
     * and - (hyphen).</p>
     */
    inline ElasticsearchDomainStatus& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>The Amazon resource name (ARN) of an Elasticsearch domain. See <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/index.html?Using_Identifiers.html"
     * target="_blank">Identifiers for IAM Entities</a> in <i>Using AWS Identity and
     * Access Management</i> for more information.</p>
     */
    inline const Aws::String& GetARN() const{ return m_aRN; }

    /**
     * <p>The Amazon resource name (ARN) of an Elasticsearch domain. See <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/index.html?Using_Identifiers.html"
     * target="_blank">Identifiers for IAM Entities</a> in <i>Using AWS Identity and
     * Access Management</i> for more information.</p>
     */
    inline bool ARNHasBeenSet() const { return m_aRNHasBeenSet; }

    /**
     * <p>The Amazon resource name (ARN) of an Elasticsearch domain. See <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/index.html?Using_Identifiers.html"
     * target="_blank">Identifiers for IAM Entities</a> in <i>Using AWS Identity and
     * Access Management</i> for more information.</p>
     */
    inline void SetARN(const Aws::String& value) { m_aRNHasBeenSet = true; m_aRN = value; }

    /**
     * <p>The Amazon resource name (ARN) of an Elasticsearch domain. See <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/index.html?Using_Identifiers.html"
     * target="_blank">Identifiers for IAM Entities</a> in <i>Using AWS Identity and
     * Access Management</i> for more information.</p>
     */
    inline void SetARN(Aws::String&& value) { m_aRNHasBeenSet = true; m_aRN = std::move(value); }

    /**
     * <p>The Amazon resource name (ARN) of an Elasticsearch domain. See <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/index.html?Using_Identifiers.html"
     * target="_blank">Identifiers for IAM Entities</a> in <i>Using AWS Identity and
     * Access Management</i> for more information.</p>
     */
    inline void SetARN(const char* value) { m_aRNHasBeenSet = true; m_aRN.assign(value); }

    /**
     * <p>The Amazon resource name (ARN) of an Elasticsearch domain. See <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/index.html?Using_Identifiers.html"
     * target="_blank">Identifiers for IAM Entities</a> in <i>Using AWS Identity and
     * Access Management</i> for more information.</p>
     */
    inline ElasticsearchDomainStatus& WithARN(const Aws::String& value) { SetARN(value); return *this;}

    /**
     * <p>The Amazon resource name (ARN) of an Elasticsearch domain. See <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/index.html?Using_Identifiers.html"
     * target="_blank">Identifiers for IAM Entities</a> in <i>Using AWS Identity and
     * Access Management</i> for more information.</p>
     */
    inline ElasticsearchDomainStatus& WithARN(Aws::String&& value) { SetARN(std::move(value)); return *this;}

    /**
     * <p>The Amazon resource name (ARN) of an Elasticsearch domain. See <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/index.html?Using_Identifiers.html"
     * target="_blank">Identifiers for IAM Entities</a> in <i>Using AWS Identity and
     * Access Management</i> for more information.</p>
     */
    inline ElasticsearchDomainStatus& WithARN(const char* value) { SetARN(value); return *this;}


    /**
     * <p>The domain creation status. <code>True</code> if the creation of an
     * Elasticsearch domain is complete. <code>False</code> if domain creation is still
     * in progress.</p>
     */
    inline bool GetCreated() const{ return m_created; }

    /**
     * <p>The domain creation status. <code>True</code> if the creation of an
     * Elasticsearch domain is complete. <code>False</code> if domain creation is still
     * in progress.</p>
     */
    inline bool CreatedHasBeenSet() const { return m_createdHasBeenSet; }

    /**
     * <p>The domain creation status. <code>True</code> if the creation of an
     * Elasticsearch domain is complete. <code>False</code> if domain creation is still
     * in progress.</p>
     */
    inline void SetCreated(bool value) { m_createdHasBeenSet = true; m_created = value; }

    /**
     * <p>The domain creation status. <code>True</code> if the creation of an
     * Elasticsearch domain is complete. <code>False</code> if domain creation is still
     * in progress.</p>
     */
    inline ElasticsearchDomainStatus& WithCreated(bool value) { SetCreated(value); return *this;}


    /**
     * <p>The domain deletion status. <code>True</code> if a delete request has been
     * received for the domain but resource cleanup is still in progress.
     * <code>False</code> if the domain has not been deleted. Once domain deletion is
     * complete, the status of the domain is no longer returned.</p>
     */
    inline bool GetDeleted() const{ return m_deleted; }

    /**
     * <p>The domain deletion status. <code>True</code> if a delete request has been
     * received for the domain but resource cleanup is still in progress.
     * <code>False</code> if the domain has not been deleted. Once domain deletion is
     * complete, the status of the domain is no longer returned.</p>
     */
    inline bool DeletedHasBeenSet() const { return m_deletedHasBeenSet; }

    /**
     * <p>The domain deletion status. <code>True</code> if a delete request has been
     * received for the domain but resource cleanup is still in progress.
     * <code>False</code> if the domain has not been deleted. Once domain deletion is
     * complete, the status of the domain is no longer returned.</p>
     */
    inline void SetDeleted(bool value) { m_deletedHasBeenSet = true; m_deleted = value; }

    /**
     * <p>The domain deletion status. <code>True</code> if a delete request has been
     * received for the domain but resource cleanup is still in progress.
     * <code>False</code> if the domain has not been deleted. Once domain deletion is
     * complete, the status of the domain is no longer returned.</p>
     */
    inline ElasticsearchDomainStatus& WithDeleted(bool value) { SetDeleted(value); return *this;}


    /**
     * <p>The Elasticsearch domain endpoint that you use to submit index and search
     * requests.</p>
     */
    inline const Aws::String& GetEndpoint() const{ return m_endpoint; }

    /**
     * <p>The Elasticsearch domain endpoint that you use to submit index and search
     * requests.</p>
     */
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }

    /**
     * <p>The Elasticsearch domain endpoint that you use to submit index and search
     * requests.</p>
     */
    inline void SetEndpoint(const Aws::String& value) { m_endpointHasBeenSet = true; m_endpoint = value; }

    /**
     * <p>The Elasticsearch domain endpoint that you use to submit index and search
     * requests.</p>
     */
    inline void SetEndpoint(Aws::String&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }

    /**
     * <p>The Elasticsearch domain endpoint that you use to submit index and search
     * requests.</p>
     */
    inline void SetEndpoint(const char* value) { m_endpointHasBeenSet = true; m_endpoint.assign(value); }

    /**
     * <p>The Elasticsearch domain endpoint that you use to submit index and search
     * requests.</p>
     */
    inline ElasticsearchDomainStatus& WithEndpoint(const Aws::String& value) { SetEndpoint(value); return *this;}

    /**
     * <p>The Elasticsearch domain endpoint that you use to submit index and search
     * requests.</p>
     */
    inline ElasticsearchDomainStatus& WithEndpoint(Aws::String&& value) { SetEndpoint(std::move(value)); return *this;}

    /**
     * <p>The Elasticsearch domain endpoint that you use to submit index and search
     * requests.</p>
     */
    inline ElasticsearchDomainStatus& WithEndpoint(const char* value) { SetEndpoint(value); return *this;}


    /**
     * <p>Map containing the Elasticsearch domain endpoints used to submit index and
     * search requests. Example <code>key, value</code>:
     * <code>'vpc','vpc-endpoint-h2dsd34efgyghrtguk5gt6j2foh4.us-east-1.es.amazonaws.com'</code>.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEndpoints() const{ return m_endpoints; }

    /**
     * <p>Map containing the Elasticsearch domain endpoints used to submit index and
     * search requests. Example <code>key, value</code>:
     * <code>'vpc','vpc-endpoint-h2dsd34efgyghrtguk5gt6j2foh4.us-east-1.es.amazonaws.com'</code>.</p>
     */
    inline bool EndpointsHasBeenSet() const { return m_endpointsHasBeenSet; }

    /**
     * <p>Map containing the Elasticsearch domain endpoints used to submit index and
     * search requests. Example <code>key, value</code>:
     * <code>'vpc','vpc-endpoint-h2dsd34efgyghrtguk5gt6j2foh4.us-east-1.es.amazonaws.com'</code>.</p>
     */
    inline void SetEndpoints(const Aws::Map<Aws::String, Aws::String>& value) { m_endpointsHasBeenSet = true; m_endpoints = value; }

    /**
     * <p>Map containing the Elasticsearch domain endpoints used to submit index and
     * search requests. Example <code>key, value</code>:
     * <code>'vpc','vpc-endpoint-h2dsd34efgyghrtguk5gt6j2foh4.us-east-1.es.amazonaws.com'</code>.</p>
     */
    inline void SetEndpoints(Aws::Map<Aws::String, Aws::String>&& value) { m_endpointsHasBeenSet = true; m_endpoints = std::move(value); }

    /**
     * <p>Map containing the Elasticsearch domain endpoints used to submit index and
     * search requests. Example <code>key, value</code>:
     * <code>'vpc','vpc-endpoint-h2dsd34efgyghrtguk5gt6j2foh4.us-east-1.es.amazonaws.com'</code>.</p>
     */
    inline ElasticsearchDomainStatus& WithEndpoints(const Aws::Map<Aws::String, Aws::String>& value) { SetEndpoints(value); return *this;}

    /**
     * <p>Map containing the Elasticsearch domain endpoints used to submit index and
     * search requests. Example <code>key, value</code>:
     * <code>'vpc','vpc-endpoint-h2dsd34efgyghrtguk5gt6j2foh4.us-east-1.es.amazonaws.com'</code>.</p>
     */
    inline ElasticsearchDomainStatus& WithEndpoints(Aws::Map<Aws::String, Aws::String>&& value) { SetEndpoints(std::move(value)); return *this;}

    /**
     * <p>Map containing the Elasticsearch domain endpoints used to submit index and
     * search requests. Example <code>key, value</code>:
     * <code>'vpc','vpc-endpoint-h2dsd34efgyghrtguk5gt6j2foh4.us-east-1.es.amazonaws.com'</code>.</p>
     */
    inline ElasticsearchDomainStatus& AddEndpoints(const Aws::String& key, const Aws::String& value) { m_endpointsHasBeenSet = true; m_endpoints.emplace(key, value); return *this; }

    /**
     * <p>Map containing the Elasticsearch domain endpoints used to submit index and
     * search requests. Example <code>key, value</code>:
     * <code>'vpc','vpc-endpoint-h2dsd34efgyghrtguk5gt6j2foh4.us-east-1.es.amazonaws.com'</code>.</p>
     */
    inline ElasticsearchDomainStatus& AddEndpoints(Aws::String&& key, const Aws::String& value) { m_endpointsHasBeenSet = true; m_endpoints.emplace(std::move(key), value); return *this; }

    /**
     * <p>Map containing the Elasticsearch domain endpoints used to submit index and
     * search requests. Example <code>key, value</code>:
     * <code>'vpc','vpc-endpoint-h2dsd34efgyghrtguk5gt6j2foh4.us-east-1.es.amazonaws.com'</code>.</p>
     */
    inline ElasticsearchDomainStatus& AddEndpoints(const Aws::String& key, Aws::String&& value) { m_endpointsHasBeenSet = true; m_endpoints.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Map containing the Elasticsearch domain endpoints used to submit index and
     * search requests. Example <code>key, value</code>:
     * <code>'vpc','vpc-endpoint-h2dsd34efgyghrtguk5gt6j2foh4.us-east-1.es.amazonaws.com'</code>.</p>
     */
    inline ElasticsearchDomainStatus& AddEndpoints(Aws::String&& key, Aws::String&& value) { m_endpointsHasBeenSet = true; m_endpoints.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Map containing the Elasticsearch domain endpoints used to submit index and
     * search requests. Example <code>key, value</code>:
     * <code>'vpc','vpc-endpoint-h2dsd34efgyghrtguk5gt6j2foh4.us-east-1.es.amazonaws.com'</code>.</p>
     */
    inline ElasticsearchDomainStatus& AddEndpoints(const char* key, Aws::String&& value) { m_endpointsHasBeenSet = true; m_endpoints.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Map containing the Elasticsearch domain endpoints used to submit index and
     * search requests. Example <code>key, value</code>:
     * <code>'vpc','vpc-endpoint-h2dsd34efgyghrtguk5gt6j2foh4.us-east-1.es.amazonaws.com'</code>.</p>
     */
    inline ElasticsearchDomainStatus& AddEndpoints(Aws::String&& key, const char* value) { m_endpointsHasBeenSet = true; m_endpoints.emplace(std::move(key), value); return *this; }

    /**
     * <p>Map containing the Elasticsearch domain endpoints used to submit index and
     * search requests. Example <code>key, value</code>:
     * <code>'vpc','vpc-endpoint-h2dsd34efgyghrtguk5gt6j2foh4.us-east-1.es.amazonaws.com'</code>.</p>
     */
    inline ElasticsearchDomainStatus& AddEndpoints(const char* key, const char* value) { m_endpointsHasBeenSet = true; m_endpoints.emplace(key, value); return *this; }


    /**
     * <p>The status of the Elasticsearch domain configuration. <code>True</code> if
     * Amazon Elasticsearch Service is processing configuration changes.
     * <code>False</code> if the configuration is active.</p>
     */
    inline bool GetProcessing() const{ return m_processing; }

    /**
     * <p>The status of the Elasticsearch domain configuration. <code>True</code> if
     * Amazon Elasticsearch Service is processing configuration changes.
     * <code>False</code> if the configuration is active.</p>
     */
    inline bool ProcessingHasBeenSet() const { return m_processingHasBeenSet; }

    /**
     * <p>The status of the Elasticsearch domain configuration. <code>True</code> if
     * Amazon Elasticsearch Service is processing configuration changes.
     * <code>False</code> if the configuration is active.</p>
     */
    inline void SetProcessing(bool value) { m_processingHasBeenSet = true; m_processing = value; }

    /**
     * <p>The status of the Elasticsearch domain configuration. <code>True</code> if
     * Amazon Elasticsearch Service is processing configuration changes.
     * <code>False</code> if the configuration is active.</p>
     */
    inline ElasticsearchDomainStatus& WithProcessing(bool value) { SetProcessing(value); return *this;}


    /**
     * <p>The status of an Elasticsearch domain version upgrade. <code>True</code> if
     * Amazon Elasticsearch Service is undergoing a version upgrade. <code>False</code>
     * if the configuration is active.</p>
     */
    inline bool GetUpgradeProcessing() const{ return m_upgradeProcessing; }

    /**
     * <p>The status of an Elasticsearch domain version upgrade. <code>True</code> if
     * Amazon Elasticsearch Service is undergoing a version upgrade. <code>False</code>
     * if the configuration is active.</p>
     */
    inline bool UpgradeProcessingHasBeenSet() const { return m_upgradeProcessingHasBeenSet; }

    /**
     * <p>The status of an Elasticsearch domain version upgrade. <code>True</code> if
     * Amazon Elasticsearch Service is undergoing a version upgrade. <code>False</code>
     * if the configuration is active.</p>
     */
    inline void SetUpgradeProcessing(bool value) { m_upgradeProcessingHasBeenSet = true; m_upgradeProcessing = value; }

    /**
     * <p>The status of an Elasticsearch domain version upgrade. <code>True</code> if
     * Amazon Elasticsearch Service is undergoing a version upgrade. <code>False</code>
     * if the configuration is active.</p>
     */
    inline ElasticsearchDomainStatus& WithUpgradeProcessing(bool value) { SetUpgradeProcessing(value); return *this;}


    
    inline const Aws::String& GetElasticsearchVersion() const{ return m_elasticsearchVersion; }

    
    inline bool ElasticsearchVersionHasBeenSet() const { return m_elasticsearchVersionHasBeenSet; }

    
    inline void SetElasticsearchVersion(const Aws::String& value) { m_elasticsearchVersionHasBeenSet = true; m_elasticsearchVersion = value; }

    
    inline void SetElasticsearchVersion(Aws::String&& value) { m_elasticsearchVersionHasBeenSet = true; m_elasticsearchVersion = std::move(value); }

    
    inline void SetElasticsearchVersion(const char* value) { m_elasticsearchVersionHasBeenSet = true; m_elasticsearchVersion.assign(value); }

    
    inline ElasticsearchDomainStatus& WithElasticsearchVersion(const Aws::String& value) { SetElasticsearchVersion(value); return *this;}

    
    inline ElasticsearchDomainStatus& WithElasticsearchVersion(Aws::String&& value) { SetElasticsearchVersion(std::move(value)); return *this;}

    
    inline ElasticsearchDomainStatus& WithElasticsearchVersion(const char* value) { SetElasticsearchVersion(value); return *this;}


    /**
     * <p>The type and number of instances in the domain cluster.</p>
     */
    inline const ElasticsearchClusterConfig& GetElasticsearchClusterConfig() const{ return m_elasticsearchClusterConfig; }

    /**
     * <p>The type and number of instances in the domain cluster.</p>
     */
    inline bool ElasticsearchClusterConfigHasBeenSet() const { return m_elasticsearchClusterConfigHasBeenSet; }

    /**
     * <p>The type and number of instances in the domain cluster.</p>
     */
    inline void SetElasticsearchClusterConfig(const ElasticsearchClusterConfig& value) { m_elasticsearchClusterConfigHasBeenSet = true; m_elasticsearchClusterConfig = value; }

    /**
     * <p>The type and number of instances in the domain cluster.</p>
     */
    inline void SetElasticsearchClusterConfig(ElasticsearchClusterConfig&& value) { m_elasticsearchClusterConfigHasBeenSet = true; m_elasticsearchClusterConfig = std::move(value); }

    /**
     * <p>The type and number of instances in the domain cluster.</p>
     */
    inline ElasticsearchDomainStatus& WithElasticsearchClusterConfig(const ElasticsearchClusterConfig& value) { SetElasticsearchClusterConfig(value); return *this;}

    /**
     * <p>The type and number of instances in the domain cluster.</p>
     */
    inline ElasticsearchDomainStatus& WithElasticsearchClusterConfig(ElasticsearchClusterConfig&& value) { SetElasticsearchClusterConfig(std::move(value)); return *this;}


    /**
     * <p>The <code>EBSOptions</code> for the specified domain. See <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-createupdatedomains.html#es-createdomain-configure-ebs"
     * target="_blank">Configuring EBS-based Storage</a> for more information.</p>
     */
    inline const EBSOptions& GetEBSOptions() const{ return m_eBSOptions; }

    /**
     * <p>The <code>EBSOptions</code> for the specified domain. See <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-createupdatedomains.html#es-createdomain-configure-ebs"
     * target="_blank">Configuring EBS-based Storage</a> for more information.</p>
     */
    inline bool EBSOptionsHasBeenSet() const { return m_eBSOptionsHasBeenSet; }

    /**
     * <p>The <code>EBSOptions</code> for the specified domain. See <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-createupdatedomains.html#es-createdomain-configure-ebs"
     * target="_blank">Configuring EBS-based Storage</a> for more information.</p>
     */
    inline void SetEBSOptions(const EBSOptions& value) { m_eBSOptionsHasBeenSet = true; m_eBSOptions = value; }

    /**
     * <p>The <code>EBSOptions</code> for the specified domain. See <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-createupdatedomains.html#es-createdomain-configure-ebs"
     * target="_blank">Configuring EBS-based Storage</a> for more information.</p>
     */
    inline void SetEBSOptions(EBSOptions&& value) { m_eBSOptionsHasBeenSet = true; m_eBSOptions = std::move(value); }

    /**
     * <p>The <code>EBSOptions</code> for the specified domain. See <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-createupdatedomains.html#es-createdomain-configure-ebs"
     * target="_blank">Configuring EBS-based Storage</a> for more information.</p>
     */
    inline ElasticsearchDomainStatus& WithEBSOptions(const EBSOptions& value) { SetEBSOptions(value); return *this;}

    /**
     * <p>The <code>EBSOptions</code> for the specified domain. See <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-createupdatedomains.html#es-createdomain-configure-ebs"
     * target="_blank">Configuring EBS-based Storage</a> for more information.</p>
     */
    inline ElasticsearchDomainStatus& WithEBSOptions(EBSOptions&& value) { SetEBSOptions(std::move(value)); return *this;}


    /**
     * <p> IAM access policy as a JSON-formatted string.</p>
     */
    inline const Aws::String& GetAccessPolicies() const{ return m_accessPolicies; }

    /**
     * <p> IAM access policy as a JSON-formatted string.</p>
     */
    inline bool AccessPoliciesHasBeenSet() const { return m_accessPoliciesHasBeenSet; }

    /**
     * <p> IAM access policy as a JSON-formatted string.</p>
     */
    inline void SetAccessPolicies(const Aws::String& value) { m_accessPoliciesHasBeenSet = true; m_accessPolicies = value; }

    /**
     * <p> IAM access policy as a JSON-formatted string.</p>
     */
    inline void SetAccessPolicies(Aws::String&& value) { m_accessPoliciesHasBeenSet = true; m_accessPolicies = std::move(value); }

    /**
     * <p> IAM access policy as a JSON-formatted string.</p>
     */
    inline void SetAccessPolicies(const char* value) { m_accessPoliciesHasBeenSet = true; m_accessPolicies.assign(value); }

    /**
     * <p> IAM access policy as a JSON-formatted string.</p>
     */
    inline ElasticsearchDomainStatus& WithAccessPolicies(const Aws::String& value) { SetAccessPolicies(value); return *this;}

    /**
     * <p> IAM access policy as a JSON-formatted string.</p>
     */
    inline ElasticsearchDomainStatus& WithAccessPolicies(Aws::String&& value) { SetAccessPolicies(std::move(value)); return *this;}

    /**
     * <p> IAM access policy as a JSON-formatted string.</p>
     */
    inline ElasticsearchDomainStatus& WithAccessPolicies(const char* value) { SetAccessPolicies(value); return *this;}


    /**
     * <p>Specifies the status of the <code>SnapshotOptions</code></p>
     */
    inline const SnapshotOptions& GetSnapshotOptions() const{ return m_snapshotOptions; }

    /**
     * <p>Specifies the status of the <code>SnapshotOptions</code></p>
     */
    inline bool SnapshotOptionsHasBeenSet() const { return m_snapshotOptionsHasBeenSet; }

    /**
     * <p>Specifies the status of the <code>SnapshotOptions</code></p>
     */
    inline void SetSnapshotOptions(const SnapshotOptions& value) { m_snapshotOptionsHasBeenSet = true; m_snapshotOptions = value; }

    /**
     * <p>Specifies the status of the <code>SnapshotOptions</code></p>
     */
    inline void SetSnapshotOptions(SnapshotOptions&& value) { m_snapshotOptionsHasBeenSet = true; m_snapshotOptions = std::move(value); }

    /**
     * <p>Specifies the status of the <code>SnapshotOptions</code></p>
     */
    inline ElasticsearchDomainStatus& WithSnapshotOptions(const SnapshotOptions& value) { SetSnapshotOptions(value); return *this;}

    /**
     * <p>Specifies the status of the <code>SnapshotOptions</code></p>
     */
    inline ElasticsearchDomainStatus& WithSnapshotOptions(SnapshotOptions&& value) { SetSnapshotOptions(std::move(value)); return *this;}


    /**
     * <p>The <code>VPCOptions</code> for the specified domain. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-vpc.html"
     * target="_blank">VPC Endpoints for Amazon Elasticsearch Service Domains</a>.</p>
     */
    inline const VPCDerivedInfo& GetVPCOptions() const{ return m_vPCOptions; }

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
    inline void SetVPCOptions(const VPCDerivedInfo& value) { m_vPCOptionsHasBeenSet = true; m_vPCOptions = value; }

    /**
     * <p>The <code>VPCOptions</code> for the specified domain. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-vpc.html"
     * target="_blank">VPC Endpoints for Amazon Elasticsearch Service Domains</a>.</p>
     */
    inline void SetVPCOptions(VPCDerivedInfo&& value) { m_vPCOptionsHasBeenSet = true; m_vPCOptions = std::move(value); }

    /**
     * <p>The <code>VPCOptions</code> for the specified domain. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-vpc.html"
     * target="_blank">VPC Endpoints for Amazon Elasticsearch Service Domains</a>.</p>
     */
    inline ElasticsearchDomainStatus& WithVPCOptions(const VPCDerivedInfo& value) { SetVPCOptions(value); return *this;}

    /**
     * <p>The <code>VPCOptions</code> for the specified domain. For more information,
     * see <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-vpc.html"
     * target="_blank">VPC Endpoints for Amazon Elasticsearch Service Domains</a>.</p>
     */
    inline ElasticsearchDomainStatus& WithVPCOptions(VPCDerivedInfo&& value) { SetVPCOptions(std::move(value)); return *this;}


    /**
     * <p>The <code>CognitoOptions</code> for the specified domain. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-cognito-auth.html"
     * target="_blank">Amazon Cognito Authentication for Kibana</a>.</p>
     */
    inline const CognitoOptions& GetCognitoOptions() const{ return m_cognitoOptions; }

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
    inline void SetCognitoOptions(const CognitoOptions& value) { m_cognitoOptionsHasBeenSet = true; m_cognitoOptions = value; }

    /**
     * <p>The <code>CognitoOptions</code> for the specified domain. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-cognito-auth.html"
     * target="_blank">Amazon Cognito Authentication for Kibana</a>.</p>
     */
    inline void SetCognitoOptions(CognitoOptions&& value) { m_cognitoOptionsHasBeenSet = true; m_cognitoOptions = std::move(value); }

    /**
     * <p>The <code>CognitoOptions</code> for the specified domain. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-cognito-auth.html"
     * target="_blank">Amazon Cognito Authentication for Kibana</a>.</p>
     */
    inline ElasticsearchDomainStatus& WithCognitoOptions(const CognitoOptions& value) { SetCognitoOptions(value); return *this;}

    /**
     * <p>The <code>CognitoOptions</code> for the specified domain. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-cognito-auth.html"
     * target="_blank">Amazon Cognito Authentication for Kibana</a>.</p>
     */
    inline ElasticsearchDomainStatus& WithCognitoOptions(CognitoOptions&& value) { SetCognitoOptions(std::move(value)); return *this;}


    /**
     * <p> Specifies the status of the <code>EncryptionAtRestOptions</code>.</p>
     */
    inline const EncryptionAtRestOptions& GetEncryptionAtRestOptions() const{ return m_encryptionAtRestOptions; }

    /**
     * <p> Specifies the status of the <code>EncryptionAtRestOptions</code>.</p>
     */
    inline bool EncryptionAtRestOptionsHasBeenSet() const { return m_encryptionAtRestOptionsHasBeenSet; }

    /**
     * <p> Specifies the status of the <code>EncryptionAtRestOptions</code>.</p>
     */
    inline void SetEncryptionAtRestOptions(const EncryptionAtRestOptions& value) { m_encryptionAtRestOptionsHasBeenSet = true; m_encryptionAtRestOptions = value; }

    /**
     * <p> Specifies the status of the <code>EncryptionAtRestOptions</code>.</p>
     */
    inline void SetEncryptionAtRestOptions(EncryptionAtRestOptions&& value) { m_encryptionAtRestOptionsHasBeenSet = true; m_encryptionAtRestOptions = std::move(value); }

    /**
     * <p> Specifies the status of the <code>EncryptionAtRestOptions</code>.</p>
     */
    inline ElasticsearchDomainStatus& WithEncryptionAtRestOptions(const EncryptionAtRestOptions& value) { SetEncryptionAtRestOptions(value); return *this;}

    /**
     * <p> Specifies the status of the <code>EncryptionAtRestOptions</code>.</p>
     */
    inline ElasticsearchDomainStatus& WithEncryptionAtRestOptions(EncryptionAtRestOptions&& value) { SetEncryptionAtRestOptions(std::move(value)); return *this;}


    /**
     * <p>Specifies the status of the <code>NodeToNodeEncryptionOptions</code>.</p>
     */
    inline const NodeToNodeEncryptionOptions& GetNodeToNodeEncryptionOptions() const{ return m_nodeToNodeEncryptionOptions; }

    /**
     * <p>Specifies the status of the <code>NodeToNodeEncryptionOptions</code>.</p>
     */
    inline bool NodeToNodeEncryptionOptionsHasBeenSet() const { return m_nodeToNodeEncryptionOptionsHasBeenSet; }

    /**
     * <p>Specifies the status of the <code>NodeToNodeEncryptionOptions</code>.</p>
     */
    inline void SetNodeToNodeEncryptionOptions(const NodeToNodeEncryptionOptions& value) { m_nodeToNodeEncryptionOptionsHasBeenSet = true; m_nodeToNodeEncryptionOptions = value; }

    /**
     * <p>Specifies the status of the <code>NodeToNodeEncryptionOptions</code>.</p>
     */
    inline void SetNodeToNodeEncryptionOptions(NodeToNodeEncryptionOptions&& value) { m_nodeToNodeEncryptionOptionsHasBeenSet = true; m_nodeToNodeEncryptionOptions = std::move(value); }

    /**
     * <p>Specifies the status of the <code>NodeToNodeEncryptionOptions</code>.</p>
     */
    inline ElasticsearchDomainStatus& WithNodeToNodeEncryptionOptions(const NodeToNodeEncryptionOptions& value) { SetNodeToNodeEncryptionOptions(value); return *this;}

    /**
     * <p>Specifies the status of the <code>NodeToNodeEncryptionOptions</code>.</p>
     */
    inline ElasticsearchDomainStatus& WithNodeToNodeEncryptionOptions(NodeToNodeEncryptionOptions&& value) { SetNodeToNodeEncryptionOptions(std::move(value)); return *this;}


    /**
     * <p>Specifies the status of the <code>AdvancedOptions</code></p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAdvancedOptions() const{ return m_advancedOptions; }

    /**
     * <p>Specifies the status of the <code>AdvancedOptions</code></p>
     */
    inline bool AdvancedOptionsHasBeenSet() const { return m_advancedOptionsHasBeenSet; }

    /**
     * <p>Specifies the status of the <code>AdvancedOptions</code></p>
     */
    inline void SetAdvancedOptions(const Aws::Map<Aws::String, Aws::String>& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions = value; }

    /**
     * <p>Specifies the status of the <code>AdvancedOptions</code></p>
     */
    inline void SetAdvancedOptions(Aws::Map<Aws::String, Aws::String>&& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions = std::move(value); }

    /**
     * <p>Specifies the status of the <code>AdvancedOptions</code></p>
     */
    inline ElasticsearchDomainStatus& WithAdvancedOptions(const Aws::Map<Aws::String, Aws::String>& value) { SetAdvancedOptions(value); return *this;}

    /**
     * <p>Specifies the status of the <code>AdvancedOptions</code></p>
     */
    inline ElasticsearchDomainStatus& WithAdvancedOptions(Aws::Map<Aws::String, Aws::String>&& value) { SetAdvancedOptions(std::move(value)); return *this;}

    /**
     * <p>Specifies the status of the <code>AdvancedOptions</code></p>
     */
    inline ElasticsearchDomainStatus& AddAdvancedOptions(const Aws::String& key, const Aws::String& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(key, value); return *this; }

    /**
     * <p>Specifies the status of the <code>AdvancedOptions</code></p>
     */
    inline ElasticsearchDomainStatus& AddAdvancedOptions(Aws::String&& key, const Aws::String& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specifies the status of the <code>AdvancedOptions</code></p>
     */
    inline ElasticsearchDomainStatus& AddAdvancedOptions(const Aws::String& key, Aws::String&& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specifies the status of the <code>AdvancedOptions</code></p>
     */
    inline ElasticsearchDomainStatus& AddAdvancedOptions(Aws::String&& key, Aws::String&& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Specifies the status of the <code>AdvancedOptions</code></p>
     */
    inline ElasticsearchDomainStatus& AddAdvancedOptions(const char* key, Aws::String&& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specifies the status of the <code>AdvancedOptions</code></p>
     */
    inline ElasticsearchDomainStatus& AddAdvancedOptions(Aws::String&& key, const char* value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specifies the status of the <code>AdvancedOptions</code></p>
     */
    inline ElasticsearchDomainStatus& AddAdvancedOptions(const char* key, const char* value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(key, value); return *this; }


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
    inline ElasticsearchDomainStatus& WithLogPublishingOptions(const Aws::Map<LogType, LogPublishingOption>& value) { SetLogPublishingOptions(value); return *this;}

    /**
     * <p>Log publishing options for the given domain.</p>
     */
    inline ElasticsearchDomainStatus& WithLogPublishingOptions(Aws::Map<LogType, LogPublishingOption>&& value) { SetLogPublishingOptions(std::move(value)); return *this;}

    /**
     * <p>Log publishing options for the given domain.</p>
     */
    inline ElasticsearchDomainStatus& AddLogPublishingOptions(const LogType& key, const LogPublishingOption& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions.emplace(key, value); return *this; }

    /**
     * <p>Log publishing options for the given domain.</p>
     */
    inline ElasticsearchDomainStatus& AddLogPublishingOptions(LogType&& key, const LogPublishingOption& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions.emplace(std::move(key), value); return *this; }

    /**
     * <p>Log publishing options for the given domain.</p>
     */
    inline ElasticsearchDomainStatus& AddLogPublishingOptions(const LogType& key, LogPublishingOption&& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Log publishing options for the given domain.</p>
     */
    inline ElasticsearchDomainStatus& AddLogPublishingOptions(LogType&& key, LogPublishingOption&& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions.emplace(std::move(key), std::move(value)); return *this; }


    /**
     * <p>The current status of the Elasticsearch domain's service software.</p>
     */
    inline const ServiceSoftwareOptions& GetServiceSoftwareOptions() const{ return m_serviceSoftwareOptions; }

    /**
     * <p>The current status of the Elasticsearch domain's service software.</p>
     */
    inline bool ServiceSoftwareOptionsHasBeenSet() const { return m_serviceSoftwareOptionsHasBeenSet; }

    /**
     * <p>The current status of the Elasticsearch domain's service software.</p>
     */
    inline void SetServiceSoftwareOptions(const ServiceSoftwareOptions& value) { m_serviceSoftwareOptionsHasBeenSet = true; m_serviceSoftwareOptions = value; }

    /**
     * <p>The current status of the Elasticsearch domain's service software.</p>
     */
    inline void SetServiceSoftwareOptions(ServiceSoftwareOptions&& value) { m_serviceSoftwareOptionsHasBeenSet = true; m_serviceSoftwareOptions = std::move(value); }

    /**
     * <p>The current status of the Elasticsearch domain's service software.</p>
     */
    inline ElasticsearchDomainStatus& WithServiceSoftwareOptions(const ServiceSoftwareOptions& value) { SetServiceSoftwareOptions(value); return *this;}

    /**
     * <p>The current status of the Elasticsearch domain's service software.</p>
     */
    inline ElasticsearchDomainStatus& WithServiceSoftwareOptions(ServiceSoftwareOptions&& value) { SetServiceSoftwareOptions(std::move(value)); return *this;}

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

    Aws::String m_elasticsearchVersion;
    bool m_elasticsearchVersionHasBeenSet;

    ElasticsearchClusterConfig m_elasticsearchClusterConfig;
    bool m_elasticsearchClusterConfigHasBeenSet;

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
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
