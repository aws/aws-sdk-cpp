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
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/opensearch/model/EncryptionAtRestOptions.h>
#include <aws/opensearch/model/DomainEndpointOptions.h>
#include <aws/opensearch/model/NodeToNodeEncryptionOptions.h>
#include <aws/opensearch/model/AdvancedSecurityOptionsInput.h>
#include <aws/opensearch/model/AutoTuneOptions.h>
#include <aws/opensearch/model/LogType.h>
#include <aws/opensearch/model/LogPublishingOption.h>
#include <utility>

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Container for the parameters to the <code> <a>UpdateDomain</a> </code>
   * operation. Specifies the type and number of instances in the domain cluster.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/UpdateDomainConfigRequest">AWS
   * API Reference</a></p>
   */
  class AWS_OPENSEARCHSERVICE_API UpdateDomainConfigRequest : public OpenSearchServiceRequest
  {
  public:
    UpdateDomainConfigRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDomainConfig"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the domain you're updating.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The name of the domain you're updating.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The name of the domain you're updating.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The name of the domain you're updating.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The name of the domain you're updating.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The name of the domain you're updating.</p>
     */
    inline UpdateDomainConfigRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The name of the domain you're updating.</p>
     */
    inline UpdateDomainConfigRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The name of the domain you're updating.</p>
     */
    inline UpdateDomainConfigRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>The type and number of instances to instantiate for the domain cluster.</p>
     */
    inline const ClusterConfig& GetClusterConfig() const{ return m_clusterConfig; }

    /**
     * <p>The type and number of instances to instantiate for the domain cluster.</p>
     */
    inline bool ClusterConfigHasBeenSet() const { return m_clusterConfigHasBeenSet; }

    /**
     * <p>The type and number of instances to instantiate for the domain cluster.</p>
     */
    inline void SetClusterConfig(const ClusterConfig& value) { m_clusterConfigHasBeenSet = true; m_clusterConfig = value; }

    /**
     * <p>The type and number of instances to instantiate for the domain cluster.</p>
     */
    inline void SetClusterConfig(ClusterConfig&& value) { m_clusterConfigHasBeenSet = true; m_clusterConfig = std::move(value); }

    /**
     * <p>The type and number of instances to instantiate for the domain cluster.</p>
     */
    inline UpdateDomainConfigRequest& WithClusterConfig(const ClusterConfig& value) { SetClusterConfig(value); return *this;}

    /**
     * <p>The type and number of instances to instantiate for the domain cluster.</p>
     */
    inline UpdateDomainConfigRequest& WithClusterConfig(ClusterConfig&& value) { SetClusterConfig(std::move(value)); return *this;}


    /**
     * <p>Specify the type and size of the EBS volume to use.</p>
     */
    inline const EBSOptions& GetEBSOptions() const{ return m_eBSOptions; }

    /**
     * <p>Specify the type and size of the EBS volume to use.</p>
     */
    inline bool EBSOptionsHasBeenSet() const { return m_eBSOptionsHasBeenSet; }

    /**
     * <p>Specify the type and size of the EBS volume to use.</p>
     */
    inline void SetEBSOptions(const EBSOptions& value) { m_eBSOptionsHasBeenSet = true; m_eBSOptions = value; }

    /**
     * <p>Specify the type and size of the EBS volume to use.</p>
     */
    inline void SetEBSOptions(EBSOptions&& value) { m_eBSOptionsHasBeenSet = true; m_eBSOptions = std::move(value); }

    /**
     * <p>Specify the type and size of the EBS volume to use.</p>
     */
    inline UpdateDomainConfigRequest& WithEBSOptions(const EBSOptions& value) { SetEBSOptions(value); return *this;}

    /**
     * <p>Specify the type and size of the EBS volume to use.</p>
     */
    inline UpdateDomainConfigRequest& WithEBSOptions(EBSOptions&& value) { SetEBSOptions(std::move(value)); return *this;}


    /**
     * <p>Option to set the time, in UTC format, for the daily automated snapshot.
     * Default value is <code>0</code> hours. </p>
     */
    inline const SnapshotOptions& GetSnapshotOptions() const{ return m_snapshotOptions; }

    /**
     * <p>Option to set the time, in UTC format, for the daily automated snapshot.
     * Default value is <code>0</code> hours. </p>
     */
    inline bool SnapshotOptionsHasBeenSet() const { return m_snapshotOptionsHasBeenSet; }

    /**
     * <p>Option to set the time, in UTC format, for the daily automated snapshot.
     * Default value is <code>0</code> hours. </p>
     */
    inline void SetSnapshotOptions(const SnapshotOptions& value) { m_snapshotOptionsHasBeenSet = true; m_snapshotOptions = value; }

    /**
     * <p>Option to set the time, in UTC format, for the daily automated snapshot.
     * Default value is <code>0</code> hours. </p>
     */
    inline void SetSnapshotOptions(SnapshotOptions&& value) { m_snapshotOptionsHasBeenSet = true; m_snapshotOptions = std::move(value); }

    /**
     * <p>Option to set the time, in UTC format, for the daily automated snapshot.
     * Default value is <code>0</code> hours. </p>
     */
    inline UpdateDomainConfigRequest& WithSnapshotOptions(const SnapshotOptions& value) { SetSnapshotOptions(value); return *this;}

    /**
     * <p>Option to set the time, in UTC format, for the daily automated snapshot.
     * Default value is <code>0</code> hours. </p>
     */
    inline UpdateDomainConfigRequest& WithSnapshotOptions(SnapshotOptions&& value) { SetSnapshotOptions(std::move(value)); return *this;}


    /**
     * <p>Options to specify the subnets and security groups for the VPC endpoint. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/vpc.html"
     * target="_blank">Launching your Amazon OpenSearch Service domains using a VPC
     * </a>. </p>
     */
    inline const VPCOptions& GetVPCOptions() const{ return m_vPCOptions; }

    /**
     * <p>Options to specify the subnets and security groups for the VPC endpoint. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/vpc.html"
     * target="_blank">Launching your Amazon OpenSearch Service domains using a VPC
     * </a>. </p>
     */
    inline bool VPCOptionsHasBeenSet() const { return m_vPCOptionsHasBeenSet; }

    /**
     * <p>Options to specify the subnets and security groups for the VPC endpoint. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/vpc.html"
     * target="_blank">Launching your Amazon OpenSearch Service domains using a VPC
     * </a>. </p>
     */
    inline void SetVPCOptions(const VPCOptions& value) { m_vPCOptionsHasBeenSet = true; m_vPCOptions = value; }

    /**
     * <p>Options to specify the subnets and security groups for the VPC endpoint. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/vpc.html"
     * target="_blank">Launching your Amazon OpenSearch Service domains using a VPC
     * </a>. </p>
     */
    inline void SetVPCOptions(VPCOptions&& value) { m_vPCOptionsHasBeenSet = true; m_vPCOptions = std::move(value); }

    /**
     * <p>Options to specify the subnets and security groups for the VPC endpoint. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/vpc.html"
     * target="_blank">Launching your Amazon OpenSearch Service domains using a VPC
     * </a>. </p>
     */
    inline UpdateDomainConfigRequest& WithVPCOptions(const VPCOptions& value) { SetVPCOptions(value); return *this;}

    /**
     * <p>Options to specify the subnets and security groups for the VPC endpoint. For
     * more information, see <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/vpc.html"
     * target="_blank">Launching your Amazon OpenSearch Service domains using a VPC
     * </a>. </p>
     */
    inline UpdateDomainConfigRequest& WithVPCOptions(VPCOptions&& value) { SetVPCOptions(std::move(value)); return *this;}


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
    inline UpdateDomainConfigRequest& WithCognitoOptions(const CognitoOptions& value) { SetCognitoOptions(value); return *this;}

    /**
     * <p>Options to specify the Cognito user and identity pools for OpenSearch
     * Dashboards authentication. For more information, see <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/cognito-auth.html"
     * target="_blank">Configuring Amazon Cognito authentication for OpenSearch
     * Dashboards</a>. </p>
     */
    inline UpdateDomainConfigRequest& WithCognitoOptions(CognitoOptions&& value) { SetCognitoOptions(std::move(value)); return *this;}


    /**
     * <p>Modifies the advanced option to allow references to indices in an HTTP
     * request body. Must be <code>false</code> when configuring access to individual
     * sub-resources. By default, the value is <code>true</code>. See <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomain-configure-advanced-options"
     * target="_blank">Advanced options </a> for more information. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAdvancedOptions() const{ return m_advancedOptions; }

    /**
     * <p>Modifies the advanced option to allow references to indices in an HTTP
     * request body. Must be <code>false</code> when configuring access to individual
     * sub-resources. By default, the value is <code>true</code>. See <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomain-configure-advanced-options"
     * target="_blank">Advanced options </a> for more information. </p>
     */
    inline bool AdvancedOptionsHasBeenSet() const { return m_advancedOptionsHasBeenSet; }

    /**
     * <p>Modifies the advanced option to allow references to indices in an HTTP
     * request body. Must be <code>false</code> when configuring access to individual
     * sub-resources. By default, the value is <code>true</code>. See <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomain-configure-advanced-options"
     * target="_blank">Advanced options </a> for more information. </p>
     */
    inline void SetAdvancedOptions(const Aws::Map<Aws::String, Aws::String>& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions = value; }

    /**
     * <p>Modifies the advanced option to allow references to indices in an HTTP
     * request body. Must be <code>false</code> when configuring access to individual
     * sub-resources. By default, the value is <code>true</code>. See <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomain-configure-advanced-options"
     * target="_blank">Advanced options </a> for more information. </p>
     */
    inline void SetAdvancedOptions(Aws::Map<Aws::String, Aws::String>&& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions = std::move(value); }

    /**
     * <p>Modifies the advanced option to allow references to indices in an HTTP
     * request body. Must be <code>false</code> when configuring access to individual
     * sub-resources. By default, the value is <code>true</code>. See <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomain-configure-advanced-options"
     * target="_blank">Advanced options </a> for more information. </p>
     */
    inline UpdateDomainConfigRequest& WithAdvancedOptions(const Aws::Map<Aws::String, Aws::String>& value) { SetAdvancedOptions(value); return *this;}

    /**
     * <p>Modifies the advanced option to allow references to indices in an HTTP
     * request body. Must be <code>false</code> when configuring access to individual
     * sub-resources. By default, the value is <code>true</code>. See <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomain-configure-advanced-options"
     * target="_blank">Advanced options </a> for more information. </p>
     */
    inline UpdateDomainConfigRequest& WithAdvancedOptions(Aws::Map<Aws::String, Aws::String>&& value) { SetAdvancedOptions(std::move(value)); return *this;}

    /**
     * <p>Modifies the advanced option to allow references to indices in an HTTP
     * request body. Must be <code>false</code> when configuring access to individual
     * sub-resources. By default, the value is <code>true</code>. See <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomain-configure-advanced-options"
     * target="_blank">Advanced options </a> for more information. </p>
     */
    inline UpdateDomainConfigRequest& AddAdvancedOptions(const Aws::String& key, const Aws::String& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(key, value); return *this; }

    /**
     * <p>Modifies the advanced option to allow references to indices in an HTTP
     * request body. Must be <code>false</code> when configuring access to individual
     * sub-resources. By default, the value is <code>true</code>. See <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomain-configure-advanced-options"
     * target="_blank">Advanced options </a> for more information. </p>
     */
    inline UpdateDomainConfigRequest& AddAdvancedOptions(Aws::String&& key, const Aws::String& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(std::move(key), value); return *this; }

    /**
     * <p>Modifies the advanced option to allow references to indices in an HTTP
     * request body. Must be <code>false</code> when configuring access to individual
     * sub-resources. By default, the value is <code>true</code>. See <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomain-configure-advanced-options"
     * target="_blank">Advanced options </a> for more information. </p>
     */
    inline UpdateDomainConfigRequest& AddAdvancedOptions(const Aws::String& key, Aws::String&& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Modifies the advanced option to allow references to indices in an HTTP
     * request body. Must be <code>false</code> when configuring access to individual
     * sub-resources. By default, the value is <code>true</code>. See <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomain-configure-advanced-options"
     * target="_blank">Advanced options </a> for more information. </p>
     */
    inline UpdateDomainConfigRequest& AddAdvancedOptions(Aws::String&& key, Aws::String&& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Modifies the advanced option to allow references to indices in an HTTP
     * request body. Must be <code>false</code> when configuring access to individual
     * sub-resources. By default, the value is <code>true</code>. See <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomain-configure-advanced-options"
     * target="_blank">Advanced options </a> for more information. </p>
     */
    inline UpdateDomainConfigRequest& AddAdvancedOptions(const char* key, Aws::String&& value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Modifies the advanced option to allow references to indices in an HTTP
     * request body. Must be <code>false</code> when configuring access to individual
     * sub-resources. By default, the value is <code>true</code>. See <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomain-configure-advanced-options"
     * target="_blank">Advanced options </a> for more information. </p>
     */
    inline UpdateDomainConfigRequest& AddAdvancedOptions(Aws::String&& key, const char* value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(std::move(key), value); return *this; }

    /**
     * <p>Modifies the advanced option to allow references to indices in an HTTP
     * request body. Must be <code>false</code> when configuring access to individual
     * sub-resources. By default, the value is <code>true</code>. See <a
     * href="http://docs.aws.amazon.com/opensearch-service/latest/developerguide/createupdatedomains.html#createdomain-configure-advanced-options"
     * target="_blank">Advanced options </a> for more information. </p>
     */
    inline UpdateDomainConfigRequest& AddAdvancedOptions(const char* key, const char* value) { m_advancedOptionsHasBeenSet = true; m_advancedOptions.emplace(key, value); return *this; }


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
    inline UpdateDomainConfigRequest& WithAccessPolicies(const Aws::String& value) { SetAccessPolicies(value); return *this;}

    /**
     * <p>IAM access policy as a JSON-formatted string.</p>
     */
    inline UpdateDomainConfigRequest& WithAccessPolicies(Aws::String&& value) { SetAccessPolicies(std::move(value)); return *this;}

    /**
     * <p>IAM access policy as a JSON-formatted string.</p>
     */
    inline UpdateDomainConfigRequest& WithAccessPolicies(const char* value) { SetAccessPolicies(value); return *this;}


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
    inline UpdateDomainConfigRequest& WithLogPublishingOptions(const Aws::Map<LogType, LogPublishingOption>& value) { SetLogPublishingOptions(value); return *this;}

    /**
     * <p>Map of <code>LogType</code> and <code>LogPublishingOption</code>, each
     * containing options to publish a given type of OpenSearch log. </p>
     */
    inline UpdateDomainConfigRequest& WithLogPublishingOptions(Aws::Map<LogType, LogPublishingOption>&& value) { SetLogPublishingOptions(std::move(value)); return *this;}

    /**
     * <p>Map of <code>LogType</code> and <code>LogPublishingOption</code>, each
     * containing options to publish a given type of OpenSearch log. </p>
     */
    inline UpdateDomainConfigRequest& AddLogPublishingOptions(const LogType& key, const LogPublishingOption& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions.emplace(key, value); return *this; }

    /**
     * <p>Map of <code>LogType</code> and <code>LogPublishingOption</code>, each
     * containing options to publish a given type of OpenSearch log. </p>
     */
    inline UpdateDomainConfigRequest& AddLogPublishingOptions(LogType&& key, const LogPublishingOption& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions.emplace(std::move(key), value); return *this; }

    /**
     * <p>Map of <code>LogType</code> and <code>LogPublishingOption</code>, each
     * containing options to publish a given type of OpenSearch log. </p>
     */
    inline UpdateDomainConfigRequest& AddLogPublishingOptions(const LogType& key, LogPublishingOption&& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Map of <code>LogType</code> and <code>LogPublishingOption</code>, each
     * containing options to publish a given type of OpenSearch log. </p>
     */
    inline UpdateDomainConfigRequest& AddLogPublishingOptions(LogType&& key, LogPublishingOption&& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions.emplace(std::move(key), std::move(value)); return *this; }


    /**
     * <p>Specifies encryption of data at rest options.</p>
     */
    inline const EncryptionAtRestOptions& GetEncryptionAtRestOptions() const{ return m_encryptionAtRestOptions; }

    /**
     * <p>Specifies encryption of data at rest options.</p>
     */
    inline bool EncryptionAtRestOptionsHasBeenSet() const { return m_encryptionAtRestOptionsHasBeenSet; }

    /**
     * <p>Specifies encryption of data at rest options.</p>
     */
    inline void SetEncryptionAtRestOptions(const EncryptionAtRestOptions& value) { m_encryptionAtRestOptionsHasBeenSet = true; m_encryptionAtRestOptions = value; }

    /**
     * <p>Specifies encryption of data at rest options.</p>
     */
    inline void SetEncryptionAtRestOptions(EncryptionAtRestOptions&& value) { m_encryptionAtRestOptionsHasBeenSet = true; m_encryptionAtRestOptions = std::move(value); }

    /**
     * <p>Specifies encryption of data at rest options.</p>
     */
    inline UpdateDomainConfigRequest& WithEncryptionAtRestOptions(const EncryptionAtRestOptions& value) { SetEncryptionAtRestOptions(value); return *this;}

    /**
     * <p>Specifies encryption of data at rest options.</p>
     */
    inline UpdateDomainConfigRequest& WithEncryptionAtRestOptions(EncryptionAtRestOptions&& value) { SetEncryptionAtRestOptions(std::move(value)); return *this;}


    /**
     * <p>Options to specify configuration that will be applied to the domain
     * endpoint.</p>
     */
    inline const DomainEndpointOptions& GetDomainEndpointOptions() const{ return m_domainEndpointOptions; }

    /**
     * <p>Options to specify configuration that will be applied to the domain
     * endpoint.</p>
     */
    inline bool DomainEndpointOptionsHasBeenSet() const { return m_domainEndpointOptionsHasBeenSet; }

    /**
     * <p>Options to specify configuration that will be applied to the domain
     * endpoint.</p>
     */
    inline void SetDomainEndpointOptions(const DomainEndpointOptions& value) { m_domainEndpointOptionsHasBeenSet = true; m_domainEndpointOptions = value; }

    /**
     * <p>Options to specify configuration that will be applied to the domain
     * endpoint.</p>
     */
    inline void SetDomainEndpointOptions(DomainEndpointOptions&& value) { m_domainEndpointOptionsHasBeenSet = true; m_domainEndpointOptions = std::move(value); }

    /**
     * <p>Options to specify configuration that will be applied to the domain
     * endpoint.</p>
     */
    inline UpdateDomainConfigRequest& WithDomainEndpointOptions(const DomainEndpointOptions& value) { SetDomainEndpointOptions(value); return *this;}

    /**
     * <p>Options to specify configuration that will be applied to the domain
     * endpoint.</p>
     */
    inline UpdateDomainConfigRequest& WithDomainEndpointOptions(DomainEndpointOptions&& value) { SetDomainEndpointOptions(std::move(value)); return *this;}


    /**
     * <p>Specifies node-to-node encryption options.</p>
     */
    inline const NodeToNodeEncryptionOptions& GetNodeToNodeEncryptionOptions() const{ return m_nodeToNodeEncryptionOptions; }

    /**
     * <p>Specifies node-to-node encryption options.</p>
     */
    inline bool NodeToNodeEncryptionOptionsHasBeenSet() const { return m_nodeToNodeEncryptionOptionsHasBeenSet; }

    /**
     * <p>Specifies node-to-node encryption options.</p>
     */
    inline void SetNodeToNodeEncryptionOptions(const NodeToNodeEncryptionOptions& value) { m_nodeToNodeEncryptionOptionsHasBeenSet = true; m_nodeToNodeEncryptionOptions = value; }

    /**
     * <p>Specifies node-to-node encryption options.</p>
     */
    inline void SetNodeToNodeEncryptionOptions(NodeToNodeEncryptionOptions&& value) { m_nodeToNodeEncryptionOptionsHasBeenSet = true; m_nodeToNodeEncryptionOptions = std::move(value); }

    /**
     * <p>Specifies node-to-node encryption options.</p>
     */
    inline UpdateDomainConfigRequest& WithNodeToNodeEncryptionOptions(const NodeToNodeEncryptionOptions& value) { SetNodeToNodeEncryptionOptions(value); return *this;}

    /**
     * <p>Specifies node-to-node encryption options.</p>
     */
    inline UpdateDomainConfigRequest& WithNodeToNodeEncryptionOptions(NodeToNodeEncryptionOptions&& value) { SetNodeToNodeEncryptionOptions(std::move(value)); return *this;}


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
    inline UpdateDomainConfigRequest& WithAdvancedSecurityOptions(const AdvancedSecurityOptionsInput& value) { SetAdvancedSecurityOptions(value); return *this;}

    /**
     * <p>Specifies advanced security options.</p>
     */
    inline UpdateDomainConfigRequest& WithAdvancedSecurityOptions(AdvancedSecurityOptionsInput&& value) { SetAdvancedSecurityOptions(std::move(value)); return *this;}


    /**
     * <p>Specifies Auto-Tune options.</p>
     */
    inline const AutoTuneOptions& GetAutoTuneOptions() const{ return m_autoTuneOptions; }

    /**
     * <p>Specifies Auto-Tune options.</p>
     */
    inline bool AutoTuneOptionsHasBeenSet() const { return m_autoTuneOptionsHasBeenSet; }

    /**
     * <p>Specifies Auto-Tune options.</p>
     */
    inline void SetAutoTuneOptions(const AutoTuneOptions& value) { m_autoTuneOptionsHasBeenSet = true; m_autoTuneOptions = value; }

    /**
     * <p>Specifies Auto-Tune options.</p>
     */
    inline void SetAutoTuneOptions(AutoTuneOptions&& value) { m_autoTuneOptionsHasBeenSet = true; m_autoTuneOptions = std::move(value); }

    /**
     * <p>Specifies Auto-Tune options.</p>
     */
    inline UpdateDomainConfigRequest& WithAutoTuneOptions(const AutoTuneOptions& value) { SetAutoTuneOptions(value); return *this;}

    /**
     * <p>Specifies Auto-Tune options.</p>
     */
    inline UpdateDomainConfigRequest& WithAutoTuneOptions(AutoTuneOptions&& value) { SetAutoTuneOptions(std::move(value)); return *this;}


    /**
     * <p>This flag, when set to True, specifies whether the <code>UpdateDomain</code>
     * request should return the results of validation checks (DryRunResults) without
     * actually applying the change.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>This flag, when set to True, specifies whether the <code>UpdateDomain</code>
     * request should return the results of validation checks (DryRunResults) without
     * actually applying the change.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>This flag, when set to True, specifies whether the <code>UpdateDomain</code>
     * request should return the results of validation checks (DryRunResults) without
     * actually applying the change.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>This flag, when set to True, specifies whether the <code>UpdateDomain</code>
     * request should return the results of validation checks (DryRunResults) without
     * actually applying the change.</p>
     */
    inline UpdateDomainConfigRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    ClusterConfig m_clusterConfig;
    bool m_clusterConfigHasBeenSet = false;

    EBSOptions m_eBSOptions;
    bool m_eBSOptionsHasBeenSet = false;

    SnapshotOptions m_snapshotOptions;
    bool m_snapshotOptionsHasBeenSet = false;

    VPCOptions m_vPCOptions;
    bool m_vPCOptionsHasBeenSet = false;

    CognitoOptions m_cognitoOptions;
    bool m_cognitoOptionsHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_advancedOptions;
    bool m_advancedOptionsHasBeenSet = false;

    Aws::String m_accessPolicies;
    bool m_accessPoliciesHasBeenSet = false;

    Aws::Map<LogType, LogPublishingOption> m_logPublishingOptions;
    bool m_logPublishingOptionsHasBeenSet = false;

    EncryptionAtRestOptions m_encryptionAtRestOptions;
    bool m_encryptionAtRestOptionsHasBeenSet = false;

    DomainEndpointOptions m_domainEndpointOptions;
    bool m_domainEndpointOptionsHasBeenSet = false;

    NodeToNodeEncryptionOptions m_nodeToNodeEncryptionOptions;
    bool m_nodeToNodeEncryptionOptionsHasBeenSet = false;

    AdvancedSecurityOptionsInput m_advancedSecurityOptions;
    bool m_advancedSecurityOptionsHasBeenSet = false;

    AutoTuneOptions m_autoTuneOptions;
    bool m_autoTuneOptionsHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
