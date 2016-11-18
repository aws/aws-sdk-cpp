/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/es/model/ElasticsearchClusterConfig.h>
#include <aws/es/model/EBSOptions.h>
#include <aws/es/model/SnapshotOptions.h>
#include <aws/core/utils/memory/stl/AWSMap.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ElasticsearchService
{
namespace Model
{

  /**
   * <p>The current status of an Elasticsearch domain.</p>
   */
  class AWS_ELASTICSEARCHSERVICE_API ElasticsearchDomainStatus
  {
  public:
    ElasticsearchDomainStatus();
    ElasticsearchDomainStatus(const Aws::Utils::Json::JsonValue& jsonValue);
    ElasticsearchDomainStatus& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The unique identifier for the specified Elasticsearch domain.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }

    /**
     * <p>The unique identifier for the specified Elasticsearch domain.</p>
     */
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }

    /**
     * <p>The unique identifier for the specified Elasticsearch domain.</p>
     */
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = value; }

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
    inline ElasticsearchDomainStatus& WithDomainId(Aws::String&& value) { SetDomainId(value); return *this;}

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
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The name of an Elasticsearch domain. Domain names are unique across the
     * domains owned by an account within an AWS region. Domain names start with a
     * letter or number and can contain the following characters: a-z (lowercase), 0-9,
     * and - (hyphen).</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

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
    inline ElasticsearchDomainStatus& WithDomainName(Aws::String&& value) { SetDomainName(value); return *this;}

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
    inline void SetARN(const Aws::String& value) { m_aRNHasBeenSet = true; m_aRN = value; }

    /**
     * <p>The Amazon resource name (ARN) of an Elasticsearch domain. See <a
     * href="http://docs.aws.amazon.com/IAM/latest/UserGuide/index.html?Using_Identifiers.html"
     * target="_blank">Identifiers for IAM Entities</a> in <i>Using AWS Identity and
     * Access Management</i> for more information.</p>
     */
    inline void SetARN(Aws::String&& value) { m_aRNHasBeenSet = true; m_aRN = value; }

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
    inline ElasticsearchDomainStatus& WithARN(Aws::String&& value) { SetARN(value); return *this;}

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
    inline void SetEndpoint(const Aws::String& value) { m_endpointHasBeenSet = true; m_endpoint = value; }

    /**
     * <p>The Elasticsearch domain endpoint that you use to submit index and search
     * requests.</p>
     */
    inline void SetEndpoint(Aws::String&& value) { m_endpointHasBeenSet = true; m_endpoint = value; }

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
    inline ElasticsearchDomainStatus& WithEndpoint(Aws::String&& value) { SetEndpoint(value); return *this;}

    /**
     * <p>The Elasticsearch domain endpoint that you use to submit index and search
     * requests.</p>
     */
    inline ElasticsearchDomainStatus& WithEndpoint(const char* value) { SetEndpoint(value); return *this;}

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
    inline void SetProcessing(bool value) { m_processingHasBeenSet = true; m_processing = value; }

    /**
     * <p>The status of the Elasticsearch domain configuration. <code>True</code> if
     * Amazon Elasticsearch Service is processing configuration changes.
     * <code>False</code> if the configuration is active.</p>
     */
    inline ElasticsearchDomainStatus& WithProcessing(bool value) { SetProcessing(value); return *this;}

    
    inline const Aws::String& GetElasticsearchVersion() const{ return m_elasticsearchVersion; }

    
    inline void SetElasticsearchVersion(const Aws::String& value) { m_elasticsearchVersionHasBeenSet = true; m_elasticsearchVersion = value; }

    
    inline void SetElasticsearchVersion(Aws::String&& value) { m_elasticsearchVersionHasBeenSet = true; m_elasticsearchVersion = value; }

    
    inline void SetElasticsearchVersion(const char* value) { m_elasticsearchVersionHasBeenSet = true; m_elasticsearchVersion.assign(value); }

    
    inline ElasticsearchDomainStatus& WithElasticsearchVersion(const Aws::String& value) { SetElasticsearchVersion(value); return *this;}

    
    inline ElasticsearchDomainStatus& WithElasticsearchVersion(Aws::String&& value) { SetElasticsearchVersion(value); return *this;}

    
    inline ElasticsearchDomainStatus& WithElasticsearchVersion(const char* value) { SetElasticsearchVersion(value); return *this;}

    /**
     * <p>The type and number of instances in the domain cluster.</p>
     */
    inline const ElasticsearchClusterConfig& GetElasticsearchClusterConfig() const{ return m_elasticsearchClusterConfig; }

    /**
     * <p>The type and number of instances in the domain cluster.</p>
     */
    inline void SetElasticsearchClusterConfig(const ElasticsearchClusterConfig& value) { m_elasticsearchClusterConfigHasBeenSet = true; m_elasticsearchClusterConfig = value; }

    /**
     * <p>The type and number of instances in the domain cluster.</p>
     */
    inline void SetElasticsearchClusterConfig(ElasticsearchClusterConfig&& value) { m_elasticsearchClusterConfigHasBeenSet = true; m_elasticsearchClusterConfig = value; }

    /**
     * <p>The type and number of instances in the domain cluster.</p>
     */
    inline ElasticsearchDomainStatus& WithElasticsearchClusterConfig(const ElasticsearchClusterConfig& value) { SetElasticsearchClusterConfig(value); return *this;}

    /**
     * <p>The type and number of instances in the domain cluster.</p>
     */
    inline ElasticsearchDomainStatus& WithElasticsearchClusterConfig(ElasticsearchClusterConfig&& value) { SetElasticsearchClusterConfig(value); return *this;}

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
    inline void SetEBSOptions(const EBSOptions& value) { m_eBSOptionsHasBeenSet = true; m_eBSOptions = value; }

    /**
     * <p>The <code>EBSOptions</code> for the specified domain. See <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-createupdatedomains.html#es-createdomain-configure-ebs"
     * target="_blank">Configuring EBS-based Storage</a> for more information.</p>
     */
    inline void SetEBSOptions(EBSOptions&& value) { m_eBSOptionsHasBeenSet = true; m_eBSOptions = value; }

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
    inline ElasticsearchDomainStatus& WithEBSOptions(EBSOptions&& value) { SetEBSOptions(value); return *this;}

    /**
     * <p> IAM access policy as a JSON-formatted string.</p>
     */
    inline const Aws::String& GetAccessPolicies() const{ return m_accessPolicies; }

    /**
     * <p> IAM access policy as a JSON-formatted string.</p>
     */
    inline void SetAccessPolicies(const Aws::String& value) { m_accessPoliciesHasBeenSet = true; m_accessPolicies = value; }

    /**
     * <p> IAM access policy as a JSON-formatted string.</p>
     */
    inline void SetAccessPolicies(Aws::String&& value) { m_accessPoliciesHasBeenSet = true; m_accessPolicies = value; }

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
    inline ElasticsearchDomainStatus& WithAccessPolicies(Aws::String&& value) { SetAccessPolicies(value); return *this;}

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
    inline void SetSnapshotOptions(const SnapshotOptions& value) { m_snapshotOptionsHasBeenSet = true; m_snapshotOptions = value; }

    /**
     * <p>Specifies the status of the <code>SnapshotOptions</code></p>
     */
    inline void SetSnapshotOptions(SnapshotOptions&& value) { m_snapshotOptionsHasBeenSet = true; m_snapshotOptions = value; }

    /**
     * <p>Specifies the status of the <code>SnapshotOptions</code></p>
     */
    inline ElasticsearchDomainStatus& WithSnapshotOptions(const SnapshotOptions& value) { SetSnapshotOptions(value); return *this;}

    /**
     * <p>Specifies the status of the <code>SnapshotOptions</code></p>
     */
    inline ElasticsearchDomainStatus& WithSnapshotOptions(SnapshotOptions&& value) { SetSnapshotOptions(value); return *this;}

    /**
     * <p>Specifies the status of the <code>AdvancedOptions</code></p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAdvancedOptions() const{ return m_advancedOptions; }

    /**
     * <p>Specifies the status of the <code>AdvancedOptions</code></p>
     */
    inline void SetAdvancedOptions(const Aws::Map<Aws::String, Aws::String>& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions = value; }

    /**
     * <p>Specifies the status of the <code>AdvancedOptions</code></p>
     */
    inline void SetAdvancedOptions(Aws::Map<Aws::String, Aws::String>&& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions = value; }

    /**
     * <p>Specifies the status of the <code>AdvancedOptions</code></p>
     */
    inline ElasticsearchDomainStatus& WithAdvancedOptions(const Aws::Map<Aws::String, Aws::String>& value) { SetAdvancedOptions(value); return *this;}

    /**
     * <p>Specifies the status of the <code>AdvancedOptions</code></p>
     */
    inline ElasticsearchDomainStatus& WithAdvancedOptions(Aws::Map<Aws::String, Aws::String>&& value) { SetAdvancedOptions(value); return *this;}

    /**
     * <p>Specifies the status of the <code>AdvancedOptions</code></p>
     */
    inline ElasticsearchDomainStatus& AddAdvancedOptions(const Aws::String& key, const Aws::String& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions[key] = value; return *this; }

    /**
     * <p>Specifies the status of the <code>AdvancedOptions</code></p>
     */
    inline ElasticsearchDomainStatus& AddAdvancedOptions(Aws::String&& key, const Aws::String& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions[key] = value; return *this; }

    /**
     * <p>Specifies the status of the <code>AdvancedOptions</code></p>
     */
    inline ElasticsearchDomainStatus& AddAdvancedOptions(const Aws::String& key, Aws::String&& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions[key] = value; return *this; }

    /**
     * <p>Specifies the status of the <code>AdvancedOptions</code></p>
     */
    inline ElasticsearchDomainStatus& AddAdvancedOptions(Aws::String&& key, Aws::String&& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions[key] = value; return *this; }

    /**
     * <p>Specifies the status of the <code>AdvancedOptions</code></p>
     */
    inline ElasticsearchDomainStatus& AddAdvancedOptions(const char* key, Aws::String&& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions[key] = value; return *this; }

    /**
     * <p>Specifies the status of the <code>AdvancedOptions</code></p>
     */
    inline ElasticsearchDomainStatus& AddAdvancedOptions(Aws::String&& key, const char* value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions[key] = value; return *this; }

    /**
     * <p>Specifies the status of the <code>AdvancedOptions</code></p>
     */
    inline ElasticsearchDomainStatus& AddAdvancedOptions(const char* key, const char* value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions[key] = value; return *this; }

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
    bool m_processing;
    bool m_processingHasBeenSet;
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
    Aws::Map<Aws::String, Aws::String> m_advancedOptions;
    bool m_advancedOptionsHasBeenSet;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
