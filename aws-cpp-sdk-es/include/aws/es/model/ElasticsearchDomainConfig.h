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
#include <aws/es/model/ElasticsearchVersionStatus.h>
#include <aws/es/model/ElasticsearchClusterConfigStatus.h>
#include <aws/es/model/EBSOptionsStatus.h>
#include <aws/es/model/AccessPoliciesStatus.h>
#include <aws/es/model/SnapshotOptionsStatus.h>
#include <aws/es/model/AdvancedOptionsStatus.h>

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
   * <p>The configuration of an Elasticsearch domain.</p>
   */
  class AWS_ELASTICSEARCHSERVICE_API ElasticsearchDomainConfig
  {
  public:
    ElasticsearchDomainConfig();
    ElasticsearchDomainConfig(const Aws::Utils::Json::JsonValue& jsonValue);
    ElasticsearchDomainConfig& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>String of format X.Y to specify version for the Elasticsearch domain.</p>
     */
    inline const ElasticsearchVersionStatus& GetElasticsearchVersion() const{ return m_elasticsearchVersion; }

    /**
     * <p>String of format X.Y to specify version for the Elasticsearch domain.</p>
     */
    inline void SetElasticsearchVersion(const ElasticsearchVersionStatus& value) { m_elasticsearchVersionHasBeenSet = true; m_elasticsearchVersion = value; }

    /**
     * <p>String of format X.Y to specify version for the Elasticsearch domain.</p>
     */
    inline void SetElasticsearchVersion(ElasticsearchVersionStatus&& value) { m_elasticsearchVersionHasBeenSet = true; m_elasticsearchVersion = value; }

    /**
     * <p>String of format X.Y to specify version for the Elasticsearch domain.</p>
     */
    inline ElasticsearchDomainConfig& WithElasticsearchVersion(const ElasticsearchVersionStatus& value) { SetElasticsearchVersion(value); return *this;}

    /**
     * <p>String of format X.Y to specify version for the Elasticsearch domain.</p>
     */
    inline ElasticsearchDomainConfig& WithElasticsearchVersion(ElasticsearchVersionStatus&& value) { SetElasticsearchVersion(value); return *this;}

    /**
     * <p>Specifies the <code>ElasticsearchClusterConfig</code> for the Elasticsearch
     * domain.</p>
     */
    inline const ElasticsearchClusterConfigStatus& GetElasticsearchClusterConfig() const{ return m_elasticsearchClusterConfig; }

    /**
     * <p>Specifies the <code>ElasticsearchClusterConfig</code> for the Elasticsearch
     * domain.</p>
     */
    inline void SetElasticsearchClusterConfig(const ElasticsearchClusterConfigStatus& value) { m_elasticsearchClusterConfigHasBeenSet = true; m_elasticsearchClusterConfig = value; }

    /**
     * <p>Specifies the <code>ElasticsearchClusterConfig</code> for the Elasticsearch
     * domain.</p>
     */
    inline void SetElasticsearchClusterConfig(ElasticsearchClusterConfigStatus&& value) { m_elasticsearchClusterConfigHasBeenSet = true; m_elasticsearchClusterConfig = value; }

    /**
     * <p>Specifies the <code>ElasticsearchClusterConfig</code> for the Elasticsearch
     * domain.</p>
     */
    inline ElasticsearchDomainConfig& WithElasticsearchClusterConfig(const ElasticsearchClusterConfigStatus& value) { SetElasticsearchClusterConfig(value); return *this;}

    /**
     * <p>Specifies the <code>ElasticsearchClusterConfig</code> for the Elasticsearch
     * domain.</p>
     */
    inline ElasticsearchDomainConfig& WithElasticsearchClusterConfig(ElasticsearchClusterConfigStatus&& value) { SetElasticsearchClusterConfig(value); return *this;}

    /**
     * <p>Specifies the <code>EBSOptions</code> for the Elasticsearch domain.</p>
     */
    inline const EBSOptionsStatus& GetEBSOptions() const{ return m_eBSOptions; }

    /**
     * <p>Specifies the <code>EBSOptions</code> for the Elasticsearch domain.</p>
     */
    inline void SetEBSOptions(const EBSOptionsStatus& value) { m_eBSOptionsHasBeenSet = true; m_eBSOptions = value; }

    /**
     * <p>Specifies the <code>EBSOptions</code> for the Elasticsearch domain.</p>
     */
    inline void SetEBSOptions(EBSOptionsStatus&& value) { m_eBSOptionsHasBeenSet = true; m_eBSOptions = value; }

    /**
     * <p>Specifies the <code>EBSOptions</code> for the Elasticsearch domain.</p>
     */
    inline ElasticsearchDomainConfig& WithEBSOptions(const EBSOptionsStatus& value) { SetEBSOptions(value); return *this;}

    /**
     * <p>Specifies the <code>EBSOptions</code> for the Elasticsearch domain.</p>
     */
    inline ElasticsearchDomainConfig& WithEBSOptions(EBSOptionsStatus&& value) { SetEBSOptions(value); return *this;}

    /**
     * <p>IAM access policy as a JSON-formatted string.</p>
     */
    inline const AccessPoliciesStatus& GetAccessPolicies() const{ return m_accessPolicies; }

    /**
     * <p>IAM access policy as a JSON-formatted string.</p>
     */
    inline void SetAccessPolicies(const AccessPoliciesStatus& value) { m_accessPoliciesHasBeenSet = true; m_accessPolicies = value; }

    /**
     * <p>IAM access policy as a JSON-formatted string.</p>
     */
    inline void SetAccessPolicies(AccessPoliciesStatus&& value) { m_accessPoliciesHasBeenSet = true; m_accessPolicies = value; }

    /**
     * <p>IAM access policy as a JSON-formatted string.</p>
     */
    inline ElasticsearchDomainConfig& WithAccessPolicies(const AccessPoliciesStatus& value) { SetAccessPolicies(value); return *this;}

    /**
     * <p>IAM access policy as a JSON-formatted string.</p>
     */
    inline ElasticsearchDomainConfig& WithAccessPolicies(AccessPoliciesStatus&& value) { SetAccessPolicies(value); return *this;}

    /**
     * <p>Specifies the <code>SnapshotOptions</code> for the Elasticsearch domain.</p>
     */
    inline const SnapshotOptionsStatus& GetSnapshotOptions() const{ return m_snapshotOptions; }

    /**
     * <p>Specifies the <code>SnapshotOptions</code> for the Elasticsearch domain.</p>
     */
    inline void SetSnapshotOptions(const SnapshotOptionsStatus& value) { m_snapshotOptionsHasBeenSet = true; m_snapshotOptions = value; }

    /**
     * <p>Specifies the <code>SnapshotOptions</code> for the Elasticsearch domain.</p>
     */
    inline void SetSnapshotOptions(SnapshotOptionsStatus&& value) { m_snapshotOptionsHasBeenSet = true; m_snapshotOptions = value; }

    /**
     * <p>Specifies the <code>SnapshotOptions</code> for the Elasticsearch domain.</p>
     */
    inline ElasticsearchDomainConfig& WithSnapshotOptions(const SnapshotOptionsStatus& value) { SetSnapshotOptions(value); return *this;}

    /**
     * <p>Specifies the <code>SnapshotOptions</code> for the Elasticsearch domain.</p>
     */
    inline ElasticsearchDomainConfig& WithSnapshotOptions(SnapshotOptionsStatus&& value) { SetSnapshotOptions(value); return *this;}

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
    inline void SetAdvancedOptions(const AdvancedOptionsStatus& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions = value; }

    /**
     * <p>Specifies the <code>AdvancedOptions</code> for the domain. See <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-createupdatedomains.html#es-createdomain-configure-advanced-options"
     * target="_blank">Configuring Advanced Options</a> for more information.</p>
     */
    inline void SetAdvancedOptions(AdvancedOptionsStatus&& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions = value; }

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
    inline ElasticsearchDomainConfig& WithAdvancedOptions(AdvancedOptionsStatus&& value) { SetAdvancedOptions(value); return *this;}

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
    AdvancedOptionsStatus m_advancedOptions;
    bool m_advancedOptionsHasBeenSet;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
