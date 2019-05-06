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
#include <aws/es/model/LogType.h>
#include <aws/es/model/LogPublishingOption.h>
#include <utility>

namespace Aws
{
namespace ElasticsearchService
{
namespace Model
{

  /**
   */
  class AWS_ELASTICSEARCHSERVICE_API CreateElasticsearchDomainRequest : public ElasticsearchServiceRequest
  {
  public:
    CreateElasticsearchDomainRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateElasticsearchDomain"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the Elasticsearch domain that you are creating. Domain names are
     * unique across the domains owned by an account within an AWS region. Domain names
     * must start with a letter or number and can contain the following characters: a-z
     * (lowercase), 0-9, and - (hyphen).</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The name of the Elasticsearch domain that you are creating. Domain names are
     * unique across the domains owned by an account within an AWS region. Domain names
     * must start with a letter or number and can contain the following characters: a-z
     * (lowercase), 0-9, and - (hyphen).</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The name of the Elasticsearch domain that you are creating. Domain names are
     * unique across the domains owned by an account within an AWS region. Domain names
     * must start with a letter or number and can contain the following characters: a-z
     * (lowercase), 0-9, and - (hyphen).</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The name of the Elasticsearch domain that you are creating. Domain names are
     * unique across the domains owned by an account within an AWS region. Domain names
     * must start with a letter or number and can contain the following characters: a-z
     * (lowercase), 0-9, and - (hyphen).</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The name of the Elasticsearch domain that you are creating. Domain names are
     * unique across the domains owned by an account within an AWS region. Domain names
     * must start with a letter or number and can contain the following characters: a-z
     * (lowercase), 0-9, and - (hyphen).</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The name of the Elasticsearch domain that you are creating. Domain names are
     * unique across the domains owned by an account within an AWS region. Domain names
     * must start with a letter or number and can contain the following characters: a-z
     * (lowercase), 0-9, and - (hyphen).</p>
     */
    inline CreateElasticsearchDomainRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The name of the Elasticsearch domain that you are creating. Domain names are
     * unique across the domains owned by an account within an AWS region. Domain names
     * must start with a letter or number and can contain the following characters: a-z
     * (lowercase), 0-9, and - (hyphen).</p>
     */
    inline CreateElasticsearchDomainRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The name of the Elasticsearch domain that you are creating. Domain names are
     * unique across the domains owned by an account within an AWS region. Domain names
     * must start with a letter or number and can contain the following characters: a-z
     * (lowercase), 0-9, and - (hyphen).</p>
     */
    inline CreateElasticsearchDomainRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>String of format X.Y to specify version for the Elasticsearch domain eg.
     * "1.5" or "2.3". For more information, see <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-createupdatedomains.html#es-createdomains"
     * target="_blank">Creating Elasticsearch Domains</a> in the <i>Amazon
     * Elasticsearch Service Developer Guide</i>.</p>
     */
    inline const Aws::String& GetElasticsearchVersion() const{ return m_elasticsearchVersion; }

    /**
     * <p>String of format X.Y to specify version for the Elasticsearch domain eg.
     * "1.5" or "2.3". For more information, see <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-createupdatedomains.html#es-createdomains"
     * target="_blank">Creating Elasticsearch Domains</a> in the <i>Amazon
     * Elasticsearch Service Developer Guide</i>.</p>
     */
    inline bool ElasticsearchVersionHasBeenSet() const { return m_elasticsearchVersionHasBeenSet; }

    /**
     * <p>String of format X.Y to specify version for the Elasticsearch domain eg.
     * "1.5" or "2.3". For more information, see <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-createupdatedomains.html#es-createdomains"
     * target="_blank">Creating Elasticsearch Domains</a> in the <i>Amazon
     * Elasticsearch Service Developer Guide</i>.</p>
     */
    inline void SetElasticsearchVersion(const Aws::String& value) { m_elasticsearchVersionHasBeenSet = true; m_elasticsearchVersion = value; }

    /**
     * <p>String of format X.Y to specify version for the Elasticsearch domain eg.
     * "1.5" or "2.3". For more information, see <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-createupdatedomains.html#es-createdomains"
     * target="_blank">Creating Elasticsearch Domains</a> in the <i>Amazon
     * Elasticsearch Service Developer Guide</i>.</p>
     */
    inline void SetElasticsearchVersion(Aws::String&& value) { m_elasticsearchVersionHasBeenSet = true; m_elasticsearchVersion = std::move(value); }

    /**
     * <p>String of format X.Y to specify version for the Elasticsearch domain eg.
     * "1.5" or "2.3". For more information, see <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-createupdatedomains.html#es-createdomains"
     * target="_blank">Creating Elasticsearch Domains</a> in the <i>Amazon
     * Elasticsearch Service Developer Guide</i>.</p>
     */
    inline void SetElasticsearchVersion(const char* value) { m_elasticsearchVersionHasBeenSet = true; m_elasticsearchVersion.assign(value); }

    /**
     * <p>String of format X.Y to specify version for the Elasticsearch domain eg.
     * "1.5" or "2.3". For more information, see <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-createupdatedomains.html#es-createdomains"
     * target="_blank">Creating Elasticsearch Domains</a> in the <i>Amazon
     * Elasticsearch Service Developer Guide</i>.</p>
     */
    inline CreateElasticsearchDomainRequest& WithElasticsearchVersion(const Aws::String& value) { SetElasticsearchVersion(value); return *this;}

    /**
     * <p>String of format X.Y to specify version for the Elasticsearch domain eg.
     * "1.5" or "2.3". For more information, see <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-createupdatedomains.html#es-createdomains"
     * target="_blank">Creating Elasticsearch Domains</a> in the <i>Amazon
     * Elasticsearch Service Developer Guide</i>.</p>
     */
    inline CreateElasticsearchDomainRequest& WithElasticsearchVersion(Aws::String&& value) { SetElasticsearchVersion(std::move(value)); return *this;}

    /**
     * <p>String of format X.Y to specify version for the Elasticsearch domain eg.
     * "1.5" or "2.3". For more information, see <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-createupdatedomains.html#es-createdomains"
     * target="_blank">Creating Elasticsearch Domains</a> in the <i>Amazon
     * Elasticsearch Service Developer Guide</i>.</p>
     */
    inline CreateElasticsearchDomainRequest& WithElasticsearchVersion(const char* value) { SetElasticsearchVersion(value); return *this;}


    /**
     * <p>Configuration options for an Elasticsearch domain. Specifies the instance
     * type and number of instances in the domain cluster. </p>
     */
    inline const ElasticsearchClusterConfig& GetElasticsearchClusterConfig() const{ return m_elasticsearchClusterConfig; }

    /**
     * <p>Configuration options for an Elasticsearch domain. Specifies the instance
     * type and number of instances in the domain cluster. </p>
     */
    inline bool ElasticsearchClusterConfigHasBeenSet() const { return m_elasticsearchClusterConfigHasBeenSet; }

    /**
     * <p>Configuration options for an Elasticsearch domain. Specifies the instance
     * type and number of instances in the domain cluster. </p>
     */
    inline void SetElasticsearchClusterConfig(const ElasticsearchClusterConfig& value) { m_elasticsearchClusterConfigHasBeenSet = true; m_elasticsearchClusterConfig = value; }

    /**
     * <p>Configuration options for an Elasticsearch domain. Specifies the instance
     * type and number of instances in the domain cluster. </p>
     */
    inline void SetElasticsearchClusterConfig(ElasticsearchClusterConfig&& value) { m_elasticsearchClusterConfigHasBeenSet = true; m_elasticsearchClusterConfig = std::move(value); }

    /**
     * <p>Configuration options for an Elasticsearch domain. Specifies the instance
     * type and number of instances in the domain cluster. </p>
     */
    inline CreateElasticsearchDomainRequest& WithElasticsearchClusterConfig(const ElasticsearchClusterConfig& value) { SetElasticsearchClusterConfig(value); return *this;}

    /**
     * <p>Configuration options for an Elasticsearch domain. Specifies the instance
     * type and number of instances in the domain cluster. </p>
     */
    inline CreateElasticsearchDomainRequest& WithElasticsearchClusterConfig(ElasticsearchClusterConfig&& value) { SetElasticsearchClusterConfig(std::move(value)); return *this;}


    /**
     * <p>Options to enable, disable and specify the type and size of EBS storage
     * volumes. </p>
     */
    inline const EBSOptions& GetEBSOptions() const{ return m_eBSOptions; }

    /**
     * <p>Options to enable, disable and specify the type and size of EBS storage
     * volumes. </p>
     */
    inline bool EBSOptionsHasBeenSet() const { return m_eBSOptionsHasBeenSet; }

    /**
     * <p>Options to enable, disable and specify the type and size of EBS storage
     * volumes. </p>
     */
    inline void SetEBSOptions(const EBSOptions& value) { m_eBSOptionsHasBeenSet = true; m_eBSOptions = value; }

    /**
     * <p>Options to enable, disable and specify the type and size of EBS storage
     * volumes. </p>
     */
    inline void SetEBSOptions(EBSOptions&& value) { m_eBSOptionsHasBeenSet = true; m_eBSOptions = std::move(value); }

    /**
     * <p>Options to enable, disable and specify the type and size of EBS storage
     * volumes. </p>
     */
    inline CreateElasticsearchDomainRequest& WithEBSOptions(const EBSOptions& value) { SetEBSOptions(value); return *this;}

    /**
     * <p>Options to enable, disable and specify the type and size of EBS storage
     * volumes. </p>
     */
    inline CreateElasticsearchDomainRequest& WithEBSOptions(EBSOptions&& value) { SetEBSOptions(std::move(value)); return *this;}


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
    inline CreateElasticsearchDomainRequest& WithAccessPolicies(const Aws::String& value) { SetAccessPolicies(value); return *this;}

    /**
     * <p> IAM access policy as a JSON-formatted string.</p>
     */
    inline CreateElasticsearchDomainRequest& WithAccessPolicies(Aws::String&& value) { SetAccessPolicies(std::move(value)); return *this;}

    /**
     * <p> IAM access policy as a JSON-formatted string.</p>
     */
    inline CreateElasticsearchDomainRequest& WithAccessPolicies(const char* value) { SetAccessPolicies(value); return *this;}


    /**
     * <p>Option to set time, in UTC format, of the daily automated snapshot. Default
     * value is 0 hours. </p>
     */
    inline const SnapshotOptions& GetSnapshotOptions() const{ return m_snapshotOptions; }

    /**
     * <p>Option to set time, in UTC format, of the daily automated snapshot. Default
     * value is 0 hours. </p>
     */
    inline bool SnapshotOptionsHasBeenSet() const { return m_snapshotOptionsHasBeenSet; }

    /**
     * <p>Option to set time, in UTC format, of the daily automated snapshot. Default
     * value is 0 hours. </p>
     */
    inline void SetSnapshotOptions(const SnapshotOptions& value) { m_snapshotOptionsHasBeenSet = true; m_snapshotOptions = value; }

    /**
     * <p>Option to set time, in UTC format, of the daily automated snapshot. Default
     * value is 0 hours. </p>
     */
    inline void SetSnapshotOptions(SnapshotOptions&& value) { m_snapshotOptionsHasBeenSet = true; m_snapshotOptions = std::move(value); }

    /**
     * <p>Option to set time, in UTC format, of the daily automated snapshot. Default
     * value is 0 hours. </p>
     */
    inline CreateElasticsearchDomainRequest& WithSnapshotOptions(const SnapshotOptions& value) { SetSnapshotOptions(value); return *this;}

    /**
     * <p>Option to set time, in UTC format, of the daily automated snapshot. Default
     * value is 0 hours. </p>
     */
    inline CreateElasticsearchDomainRequest& WithSnapshotOptions(SnapshotOptions&& value) { SetSnapshotOptions(std::move(value)); return *this;}


    /**
     * <p>Options to specify the subnets and security groups for VPC endpoint. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-vpc.html#es-creating-vpc"
     * target="_blank">Creating a VPC</a> in <i>VPC Endpoints for Amazon Elasticsearch
     * Service Domains</i></p>
     */
    inline const VPCOptions& GetVPCOptions() const{ return m_vPCOptions; }

    /**
     * <p>Options to specify the subnets and security groups for VPC endpoint. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-vpc.html#es-creating-vpc"
     * target="_blank">Creating a VPC</a> in <i>VPC Endpoints for Amazon Elasticsearch
     * Service Domains</i></p>
     */
    inline bool VPCOptionsHasBeenSet() const { return m_vPCOptionsHasBeenSet; }

    /**
     * <p>Options to specify the subnets and security groups for VPC endpoint. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-vpc.html#es-creating-vpc"
     * target="_blank">Creating a VPC</a> in <i>VPC Endpoints for Amazon Elasticsearch
     * Service Domains</i></p>
     */
    inline void SetVPCOptions(const VPCOptions& value) { m_vPCOptionsHasBeenSet = true; m_vPCOptions = value; }

    /**
     * <p>Options to specify the subnets and security groups for VPC endpoint. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-vpc.html#es-creating-vpc"
     * target="_blank">Creating a VPC</a> in <i>VPC Endpoints for Amazon Elasticsearch
     * Service Domains</i></p>
     */
    inline void SetVPCOptions(VPCOptions&& value) { m_vPCOptionsHasBeenSet = true; m_vPCOptions = std::move(value); }

    /**
     * <p>Options to specify the subnets and security groups for VPC endpoint. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-vpc.html#es-creating-vpc"
     * target="_blank">Creating a VPC</a> in <i>VPC Endpoints for Amazon Elasticsearch
     * Service Domains</i></p>
     */
    inline CreateElasticsearchDomainRequest& WithVPCOptions(const VPCOptions& value) { SetVPCOptions(value); return *this;}

    /**
     * <p>Options to specify the subnets and security groups for VPC endpoint. For more
     * information, see <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-vpc.html#es-creating-vpc"
     * target="_blank">Creating a VPC</a> in <i>VPC Endpoints for Amazon Elasticsearch
     * Service Domains</i></p>
     */
    inline CreateElasticsearchDomainRequest& WithVPCOptions(VPCOptions&& value) { SetVPCOptions(std::move(value)); return *this;}


    /**
     * <p>Options to specify the Cognito user and identity pools for Kibana
     * authentication. For more information, see <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-cognito-auth.html"
     * target="_blank">Amazon Cognito Authentication for Kibana</a>.</p>
     */
    inline const CognitoOptions& GetCognitoOptions() const{ return m_cognitoOptions; }

    /**
     * <p>Options to specify the Cognito user and identity pools for Kibana
     * authentication. For more information, see <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-cognito-auth.html"
     * target="_blank">Amazon Cognito Authentication for Kibana</a>.</p>
     */
    inline bool CognitoOptionsHasBeenSet() const { return m_cognitoOptionsHasBeenSet; }

    /**
     * <p>Options to specify the Cognito user and identity pools for Kibana
     * authentication. For more information, see <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-cognito-auth.html"
     * target="_blank">Amazon Cognito Authentication for Kibana</a>.</p>
     */
    inline void SetCognitoOptions(const CognitoOptions& value) { m_cognitoOptionsHasBeenSet = true; m_cognitoOptions = value; }

    /**
     * <p>Options to specify the Cognito user and identity pools for Kibana
     * authentication. For more information, see <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-cognito-auth.html"
     * target="_blank">Amazon Cognito Authentication for Kibana</a>.</p>
     */
    inline void SetCognitoOptions(CognitoOptions&& value) { m_cognitoOptionsHasBeenSet = true; m_cognitoOptions = std::move(value); }

    /**
     * <p>Options to specify the Cognito user and identity pools for Kibana
     * authentication. For more information, see <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-cognito-auth.html"
     * target="_blank">Amazon Cognito Authentication for Kibana</a>.</p>
     */
    inline CreateElasticsearchDomainRequest& WithCognitoOptions(const CognitoOptions& value) { SetCognitoOptions(value); return *this;}

    /**
     * <p>Options to specify the Cognito user and identity pools for Kibana
     * authentication. For more information, see <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-cognito-auth.html"
     * target="_blank">Amazon Cognito Authentication for Kibana</a>.</p>
     */
    inline CreateElasticsearchDomainRequest& WithCognitoOptions(CognitoOptions&& value) { SetCognitoOptions(std::move(value)); return *this;}


    /**
     * <p>Specifies the Encryption At Rest Options.</p>
     */
    inline const EncryptionAtRestOptions& GetEncryptionAtRestOptions() const{ return m_encryptionAtRestOptions; }

    /**
     * <p>Specifies the Encryption At Rest Options.</p>
     */
    inline bool EncryptionAtRestOptionsHasBeenSet() const { return m_encryptionAtRestOptionsHasBeenSet; }

    /**
     * <p>Specifies the Encryption At Rest Options.</p>
     */
    inline void SetEncryptionAtRestOptions(const EncryptionAtRestOptions& value) { m_encryptionAtRestOptionsHasBeenSet = true; m_encryptionAtRestOptions = value; }

    /**
     * <p>Specifies the Encryption At Rest Options.</p>
     */
    inline void SetEncryptionAtRestOptions(EncryptionAtRestOptions&& value) { m_encryptionAtRestOptionsHasBeenSet = true; m_encryptionAtRestOptions = std::move(value); }

    /**
     * <p>Specifies the Encryption At Rest Options.</p>
     */
    inline CreateElasticsearchDomainRequest& WithEncryptionAtRestOptions(const EncryptionAtRestOptions& value) { SetEncryptionAtRestOptions(value); return *this;}

    /**
     * <p>Specifies the Encryption At Rest Options.</p>
     */
    inline CreateElasticsearchDomainRequest& WithEncryptionAtRestOptions(EncryptionAtRestOptions&& value) { SetEncryptionAtRestOptions(std::move(value)); return *this;}


    /**
     * <p>Specifies the NodeToNodeEncryptionOptions.</p>
     */
    inline const NodeToNodeEncryptionOptions& GetNodeToNodeEncryptionOptions() const{ return m_nodeToNodeEncryptionOptions; }

    /**
     * <p>Specifies the NodeToNodeEncryptionOptions.</p>
     */
    inline bool NodeToNodeEncryptionOptionsHasBeenSet() const { return m_nodeToNodeEncryptionOptionsHasBeenSet; }

    /**
     * <p>Specifies the NodeToNodeEncryptionOptions.</p>
     */
    inline void SetNodeToNodeEncryptionOptions(const NodeToNodeEncryptionOptions& value) { m_nodeToNodeEncryptionOptionsHasBeenSet = true; m_nodeToNodeEncryptionOptions = value; }

    /**
     * <p>Specifies the NodeToNodeEncryptionOptions.</p>
     */
    inline void SetNodeToNodeEncryptionOptions(NodeToNodeEncryptionOptions&& value) { m_nodeToNodeEncryptionOptionsHasBeenSet = true; m_nodeToNodeEncryptionOptions = std::move(value); }

    /**
     * <p>Specifies the NodeToNodeEncryptionOptions.</p>
     */
    inline CreateElasticsearchDomainRequest& WithNodeToNodeEncryptionOptions(const NodeToNodeEncryptionOptions& value) { SetNodeToNodeEncryptionOptions(value); return *this;}

    /**
     * <p>Specifies the NodeToNodeEncryptionOptions.</p>
     */
    inline CreateElasticsearchDomainRequest& WithNodeToNodeEncryptionOptions(NodeToNodeEncryptionOptions&& value) { SetNodeToNodeEncryptionOptions(std::move(value)); return *this;}


    /**
     * <p> Option to allow references to indices in an HTTP request body. Must be
     * <code>false</code> when configuring access to individual sub-resources. By
     * default, the value is <code>true</code>. See <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-createupdatedomains.html#es-createdomain-configure-advanced-options"
     * target="_blank">Configuration Advanced Options</a> for more information.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAdvancedOptions() const{ return m_advancedOptions; }

    /**
     * <p> Option to allow references to indices in an HTTP request body. Must be
     * <code>false</code> when configuring access to individual sub-resources. By
     * default, the value is <code>true</code>. See <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-createupdatedomains.html#es-createdomain-configure-advanced-options"
     * target="_blank">Configuration Advanced Options</a> for more information.</p>
     */
    inline bool AdvancedOptionsHasBeenSet() const { return m_advancedOptionsHasBeenSet; }

    /**
     * <p> Option to allow references to indices in an HTTP request body. Must be
     * <code>false</code> when configuring access to individual sub-resources. By
     * default, the value is <code>true</code>. See <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-createupdatedomains.html#es-createdomain-configure-advanced-options"
     * target="_blank">Configuration Advanced Options</a> for more information.</p>
     */
    inline void SetAdvancedOptions(const Aws::Map<Aws::String, Aws::String>& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions = value; }

    /**
     * <p> Option to allow references to indices in an HTTP request body. Must be
     * <code>false</code> when configuring access to individual sub-resources. By
     * default, the value is <code>true</code>. See <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-createupdatedomains.html#es-createdomain-configure-advanced-options"
     * target="_blank">Configuration Advanced Options</a> for more information.</p>
     */
    inline void SetAdvancedOptions(Aws::Map<Aws::String, Aws::String>&& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions = std::move(value); }

    /**
     * <p> Option to allow references to indices in an HTTP request body. Must be
     * <code>false</code> when configuring access to individual sub-resources. By
     * default, the value is <code>true</code>. See <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-createupdatedomains.html#es-createdomain-configure-advanced-options"
     * target="_blank">Configuration Advanced Options</a> for more information.</p>
     */
    inline CreateElasticsearchDomainRequest& WithAdvancedOptions(const Aws::Map<Aws::String, Aws::String>& value) { SetAdvancedOptions(value); return *this;}

    /**
     * <p> Option to allow references to indices in an HTTP request body. Must be
     * <code>false</code> when configuring access to individual sub-resources. By
     * default, the value is <code>true</code>. See <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-createupdatedomains.html#es-createdomain-configure-advanced-options"
     * target="_blank">Configuration Advanced Options</a> for more information.</p>
     */
    inline CreateElasticsearchDomainRequest& WithAdvancedOptions(Aws::Map<Aws::String, Aws::String>&& value) { SetAdvancedOptions(std::move(value)); return *this;}

    /**
     * <p> Option to allow references to indices in an HTTP request body. Must be
     * <code>false</code> when configuring access to individual sub-resources. By
     * default, the value is <code>true</code>. See <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-createupdatedomains.html#es-createdomain-configure-advanced-options"
     * target="_blank">Configuration Advanced Options</a> for more information.</p>
     */
    inline CreateElasticsearchDomainRequest& AddAdvancedOptions(const Aws::String& key, const Aws::String& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(key, value); return *this; }

    /**
     * <p> Option to allow references to indices in an HTTP request body. Must be
     * <code>false</code> when configuring access to individual sub-resources. By
     * default, the value is <code>true</code>. See <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-createupdatedomains.html#es-createdomain-configure-advanced-options"
     * target="_blank">Configuration Advanced Options</a> for more information.</p>
     */
    inline CreateElasticsearchDomainRequest& AddAdvancedOptions(Aws::String&& key, const Aws::String& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(std::move(key), value); return *this; }

    /**
     * <p> Option to allow references to indices in an HTTP request body. Must be
     * <code>false</code> when configuring access to individual sub-resources. By
     * default, the value is <code>true</code>. See <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-createupdatedomains.html#es-createdomain-configure-advanced-options"
     * target="_blank">Configuration Advanced Options</a> for more information.</p>
     */
    inline CreateElasticsearchDomainRequest& AddAdvancedOptions(const Aws::String& key, Aws::String&& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(key, std::move(value)); return *this; }

    /**
     * <p> Option to allow references to indices in an HTTP request body. Must be
     * <code>false</code> when configuring access to individual sub-resources. By
     * default, the value is <code>true</code>. See <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-createupdatedomains.html#es-createdomain-configure-advanced-options"
     * target="_blank">Configuration Advanced Options</a> for more information.</p>
     */
    inline CreateElasticsearchDomainRequest& AddAdvancedOptions(Aws::String&& key, Aws::String&& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> Option to allow references to indices in an HTTP request body. Must be
     * <code>false</code> when configuring access to individual sub-resources. By
     * default, the value is <code>true</code>. See <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-createupdatedomains.html#es-createdomain-configure-advanced-options"
     * target="_blank">Configuration Advanced Options</a> for more information.</p>
     */
    inline CreateElasticsearchDomainRequest& AddAdvancedOptions(const char* key, Aws::String&& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(key, std::move(value)); return *this; }

    /**
     * <p> Option to allow references to indices in an HTTP request body. Must be
     * <code>false</code> when configuring access to individual sub-resources. By
     * default, the value is <code>true</code>. See <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-createupdatedomains.html#es-createdomain-configure-advanced-options"
     * target="_blank">Configuration Advanced Options</a> for more information.</p>
     */
    inline CreateElasticsearchDomainRequest& AddAdvancedOptions(Aws::String&& key, const char* value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(std::move(key), value); return *this; }

    /**
     * <p> Option to allow references to indices in an HTTP request body. Must be
     * <code>false</code> when configuring access to individual sub-resources. By
     * default, the value is <code>true</code>. See <a
     * href="http://docs.aws.amazon.com/elasticsearch-service/latest/developerguide/es-createupdatedomains.html#es-createdomain-configure-advanced-options"
     * target="_blank">Configuration Advanced Options</a> for more information.</p>
     */
    inline CreateElasticsearchDomainRequest& AddAdvancedOptions(const char* key, const char* value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(key, value); return *this; }


    /**
     * <p>Map of <code>LogType</code> and <code>LogPublishingOption</code>, each
     * containing options to publish a given type of Elasticsearch log.</p>
     */
    inline const Aws::Map<LogType, LogPublishingOption>& GetLogPublishingOptions() const{ return m_logPublishingOptions; }

    /**
     * <p>Map of <code>LogType</code> and <code>LogPublishingOption</code>, each
     * containing options to publish a given type of Elasticsearch log.</p>
     */
    inline bool LogPublishingOptionsHasBeenSet() const { return m_logPublishingOptionsHasBeenSet; }

    /**
     * <p>Map of <code>LogType</code> and <code>LogPublishingOption</code>, each
     * containing options to publish a given type of Elasticsearch log.</p>
     */
    inline void SetLogPublishingOptions(const Aws::Map<LogType, LogPublishingOption>& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions = value; }

    /**
     * <p>Map of <code>LogType</code> and <code>LogPublishingOption</code>, each
     * containing options to publish a given type of Elasticsearch log.</p>
     */
    inline void SetLogPublishingOptions(Aws::Map<LogType, LogPublishingOption>&& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions = std::move(value); }

    /**
     * <p>Map of <code>LogType</code> and <code>LogPublishingOption</code>, each
     * containing options to publish a given type of Elasticsearch log.</p>
     */
    inline CreateElasticsearchDomainRequest& WithLogPublishingOptions(const Aws::Map<LogType, LogPublishingOption>& value) { SetLogPublishingOptions(value); return *this;}

    /**
     * <p>Map of <code>LogType</code> and <code>LogPublishingOption</code>, each
     * containing options to publish a given type of Elasticsearch log.</p>
     */
    inline CreateElasticsearchDomainRequest& WithLogPublishingOptions(Aws::Map<LogType, LogPublishingOption>&& value) { SetLogPublishingOptions(std::move(value)); return *this;}

    /**
     * <p>Map of <code>LogType</code> and <code>LogPublishingOption</code>, each
     * containing options to publish a given type of Elasticsearch log.</p>
     */
    inline CreateElasticsearchDomainRequest& AddLogPublishingOptions(const LogType& key, const LogPublishingOption& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions.emplace(key, value); return *this; }

    /**
     * <p>Map of <code>LogType</code> and <code>LogPublishingOption</code>, each
     * containing options to publish a given type of Elasticsearch log.</p>
     */
    inline CreateElasticsearchDomainRequest& AddLogPublishingOptions(LogType&& key, const LogPublishingOption& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions.emplace(std::move(key), value); return *this; }

    /**
     * <p>Map of <code>LogType</code> and <code>LogPublishingOption</code>, each
     * containing options to publish a given type of Elasticsearch log.</p>
     */
    inline CreateElasticsearchDomainRequest& AddLogPublishingOptions(const LogType& key, LogPublishingOption&& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Map of <code>LogType</code> and <code>LogPublishingOption</code>, each
     * containing options to publish a given type of Elasticsearch log.</p>
     */
    inline CreateElasticsearchDomainRequest& AddLogPublishingOptions(LogType&& key, LogPublishingOption&& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions.emplace(std::move(key), std::move(value)); return *this; }

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet;

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
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
