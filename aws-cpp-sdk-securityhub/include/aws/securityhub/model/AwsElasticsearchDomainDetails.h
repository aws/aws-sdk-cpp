/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/AwsElasticsearchDomainDomainEndpointOptions.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/securityhub/model/AwsElasticsearchDomainElasticsearchClusterConfigDetails.h>
#include <aws/securityhub/model/AwsElasticsearchDomainEncryptionAtRestOptions.h>
#include <aws/securityhub/model/AwsElasticsearchDomainLogPublishingOptions.h>
#include <aws/securityhub/model/AwsElasticsearchDomainNodeToNodeEncryptionOptions.h>
#include <aws/securityhub/model/AwsElasticsearchDomainServiceSoftwareOptions.h>
#include <aws/securityhub/model/AwsElasticsearchDomainVPCOptions.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Information about an Elasticsearch domain.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsElasticsearchDomainDetails">AWS
   * API Reference</a></p>
   */
  class AwsElasticsearchDomainDetails
  {
  public:
    AWS_SECURITYHUB_API AwsElasticsearchDomainDetails();
    AWS_SECURITYHUB_API AwsElasticsearchDomainDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsElasticsearchDomainDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>IAM policy document specifying the access policies for the new Elasticsearch
     * domain.</p>
     */
    inline const Aws::String& GetAccessPolicies() const{ return m_accessPolicies; }

    /**
     * <p>IAM policy document specifying the access policies for the new Elasticsearch
     * domain.</p>
     */
    inline bool AccessPoliciesHasBeenSet() const { return m_accessPoliciesHasBeenSet; }

    /**
     * <p>IAM policy document specifying the access policies for the new Elasticsearch
     * domain.</p>
     */
    inline void SetAccessPolicies(const Aws::String& value) { m_accessPoliciesHasBeenSet = true; m_accessPolicies = value; }

    /**
     * <p>IAM policy document specifying the access policies for the new Elasticsearch
     * domain.</p>
     */
    inline void SetAccessPolicies(Aws::String&& value) { m_accessPoliciesHasBeenSet = true; m_accessPolicies = std::move(value); }

    /**
     * <p>IAM policy document specifying the access policies for the new Elasticsearch
     * domain.</p>
     */
    inline void SetAccessPolicies(const char* value) { m_accessPoliciesHasBeenSet = true; m_accessPolicies.assign(value); }

    /**
     * <p>IAM policy document specifying the access policies for the new Elasticsearch
     * domain.</p>
     */
    inline AwsElasticsearchDomainDetails& WithAccessPolicies(const Aws::String& value) { SetAccessPolicies(value); return *this;}

    /**
     * <p>IAM policy document specifying the access policies for the new Elasticsearch
     * domain.</p>
     */
    inline AwsElasticsearchDomainDetails& WithAccessPolicies(Aws::String&& value) { SetAccessPolicies(std::move(value)); return *this;}

    /**
     * <p>IAM policy document specifying the access policies for the new Elasticsearch
     * domain.</p>
     */
    inline AwsElasticsearchDomainDetails& WithAccessPolicies(const char* value) { SetAccessPolicies(value); return *this;}


    /**
     * <p>Additional options for the domain endpoint.</p>
     */
    inline const AwsElasticsearchDomainDomainEndpointOptions& GetDomainEndpointOptions() const{ return m_domainEndpointOptions; }

    /**
     * <p>Additional options for the domain endpoint.</p>
     */
    inline bool DomainEndpointOptionsHasBeenSet() const { return m_domainEndpointOptionsHasBeenSet; }

    /**
     * <p>Additional options for the domain endpoint.</p>
     */
    inline void SetDomainEndpointOptions(const AwsElasticsearchDomainDomainEndpointOptions& value) { m_domainEndpointOptionsHasBeenSet = true; m_domainEndpointOptions = value; }

    /**
     * <p>Additional options for the domain endpoint.</p>
     */
    inline void SetDomainEndpointOptions(AwsElasticsearchDomainDomainEndpointOptions&& value) { m_domainEndpointOptionsHasBeenSet = true; m_domainEndpointOptions = std::move(value); }

    /**
     * <p>Additional options for the domain endpoint.</p>
     */
    inline AwsElasticsearchDomainDetails& WithDomainEndpointOptions(const AwsElasticsearchDomainDomainEndpointOptions& value) { SetDomainEndpointOptions(value); return *this;}

    /**
     * <p>Additional options for the domain endpoint.</p>
     */
    inline AwsElasticsearchDomainDetails& WithDomainEndpointOptions(AwsElasticsearchDomainDomainEndpointOptions&& value) { SetDomainEndpointOptions(std::move(value)); return *this;}


    /**
     * <p>Unique identifier for an Elasticsearch domain.</p>
     */
    inline const Aws::String& GetDomainId() const{ return m_domainId; }

    /**
     * <p>Unique identifier for an Elasticsearch domain.</p>
     */
    inline bool DomainIdHasBeenSet() const { return m_domainIdHasBeenSet; }

    /**
     * <p>Unique identifier for an Elasticsearch domain.</p>
     */
    inline void SetDomainId(const Aws::String& value) { m_domainIdHasBeenSet = true; m_domainId = value; }

    /**
     * <p>Unique identifier for an Elasticsearch domain.</p>
     */
    inline void SetDomainId(Aws::String&& value) { m_domainIdHasBeenSet = true; m_domainId = std::move(value); }

    /**
     * <p>Unique identifier for an Elasticsearch domain.</p>
     */
    inline void SetDomainId(const char* value) { m_domainIdHasBeenSet = true; m_domainId.assign(value); }

    /**
     * <p>Unique identifier for an Elasticsearch domain.</p>
     */
    inline AwsElasticsearchDomainDetails& WithDomainId(const Aws::String& value) { SetDomainId(value); return *this;}

    /**
     * <p>Unique identifier for an Elasticsearch domain.</p>
     */
    inline AwsElasticsearchDomainDetails& WithDomainId(Aws::String&& value) { SetDomainId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for an Elasticsearch domain.</p>
     */
    inline AwsElasticsearchDomainDetails& WithDomainId(const char* value) { SetDomainId(value); return *this;}


    /**
     * <p>Name of an Elasticsearch domain.</p> <p>Domain names are unique across all
     * domains owned by the same account within an Amazon Web Services Region.</p>
     * <p>Domain names must start with a lowercase letter and must be between 3 and 28
     * characters.</p> <p>Valid characters are a-z (lowercase only), 0-9, and –
     * (hyphen). </p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>Name of an Elasticsearch domain.</p> <p>Domain names are unique across all
     * domains owned by the same account within an Amazon Web Services Region.</p>
     * <p>Domain names must start with a lowercase letter and must be between 3 and 28
     * characters.</p> <p>Valid characters are a-z (lowercase only), 0-9, and –
     * (hyphen). </p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>Name of an Elasticsearch domain.</p> <p>Domain names are unique across all
     * domains owned by the same account within an Amazon Web Services Region.</p>
     * <p>Domain names must start with a lowercase letter and must be between 3 and 28
     * characters.</p> <p>Valid characters are a-z (lowercase only), 0-9, and –
     * (hyphen). </p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>Name of an Elasticsearch domain.</p> <p>Domain names are unique across all
     * domains owned by the same account within an Amazon Web Services Region.</p>
     * <p>Domain names must start with a lowercase letter and must be between 3 and 28
     * characters.</p> <p>Valid characters are a-z (lowercase only), 0-9, and –
     * (hyphen). </p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>Name of an Elasticsearch domain.</p> <p>Domain names are unique across all
     * domains owned by the same account within an Amazon Web Services Region.</p>
     * <p>Domain names must start with a lowercase letter and must be between 3 and 28
     * characters.</p> <p>Valid characters are a-z (lowercase only), 0-9, and –
     * (hyphen). </p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>Name of an Elasticsearch domain.</p> <p>Domain names are unique across all
     * domains owned by the same account within an Amazon Web Services Region.</p>
     * <p>Domain names must start with a lowercase letter and must be between 3 and 28
     * characters.</p> <p>Valid characters are a-z (lowercase only), 0-9, and –
     * (hyphen). </p>
     */
    inline AwsElasticsearchDomainDetails& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>Name of an Elasticsearch domain.</p> <p>Domain names are unique across all
     * domains owned by the same account within an Amazon Web Services Region.</p>
     * <p>Domain names must start with a lowercase letter and must be between 3 and 28
     * characters.</p> <p>Valid characters are a-z (lowercase only), 0-9, and –
     * (hyphen). </p>
     */
    inline AwsElasticsearchDomainDetails& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>Name of an Elasticsearch domain.</p> <p>Domain names are unique across all
     * domains owned by the same account within an Amazon Web Services Region.</p>
     * <p>Domain names must start with a lowercase letter and must be between 3 and 28
     * characters.</p> <p>Valid characters are a-z (lowercase only), 0-9, and –
     * (hyphen). </p>
     */
    inline AwsElasticsearchDomainDetails& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>Domain-specific endpoint used to submit index, search, and data upload
     * requests to an Elasticsearch domain.</p> <p>The endpoint is a service URL. </p>
     */
    inline const Aws::String& GetEndpoint() const{ return m_endpoint; }

    /**
     * <p>Domain-specific endpoint used to submit index, search, and data upload
     * requests to an Elasticsearch domain.</p> <p>The endpoint is a service URL. </p>
     */
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }

    /**
     * <p>Domain-specific endpoint used to submit index, search, and data upload
     * requests to an Elasticsearch domain.</p> <p>The endpoint is a service URL. </p>
     */
    inline void SetEndpoint(const Aws::String& value) { m_endpointHasBeenSet = true; m_endpoint = value; }

    /**
     * <p>Domain-specific endpoint used to submit index, search, and data upload
     * requests to an Elasticsearch domain.</p> <p>The endpoint is a service URL. </p>
     */
    inline void SetEndpoint(Aws::String&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }

    /**
     * <p>Domain-specific endpoint used to submit index, search, and data upload
     * requests to an Elasticsearch domain.</p> <p>The endpoint is a service URL. </p>
     */
    inline void SetEndpoint(const char* value) { m_endpointHasBeenSet = true; m_endpoint.assign(value); }

    /**
     * <p>Domain-specific endpoint used to submit index, search, and data upload
     * requests to an Elasticsearch domain.</p> <p>The endpoint is a service URL. </p>
     */
    inline AwsElasticsearchDomainDetails& WithEndpoint(const Aws::String& value) { SetEndpoint(value); return *this;}

    /**
     * <p>Domain-specific endpoint used to submit index, search, and data upload
     * requests to an Elasticsearch domain.</p> <p>The endpoint is a service URL. </p>
     */
    inline AwsElasticsearchDomainDetails& WithEndpoint(Aws::String&& value) { SetEndpoint(std::move(value)); return *this;}

    /**
     * <p>Domain-specific endpoint used to submit index, search, and data upload
     * requests to an Elasticsearch domain.</p> <p>The endpoint is a service URL. </p>
     */
    inline AwsElasticsearchDomainDetails& WithEndpoint(const char* value) { SetEndpoint(value); return *this;}


    /**
     * <p>The key-value pair that exists if the Elasticsearch domain uses VPC
     * endpoints.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEndpoints() const{ return m_endpoints; }

    /**
     * <p>The key-value pair that exists if the Elasticsearch domain uses VPC
     * endpoints.</p>
     */
    inline bool EndpointsHasBeenSet() const { return m_endpointsHasBeenSet; }

    /**
     * <p>The key-value pair that exists if the Elasticsearch domain uses VPC
     * endpoints.</p>
     */
    inline void SetEndpoints(const Aws::Map<Aws::String, Aws::String>& value) { m_endpointsHasBeenSet = true; m_endpoints = value; }

    /**
     * <p>The key-value pair that exists if the Elasticsearch domain uses VPC
     * endpoints.</p>
     */
    inline void SetEndpoints(Aws::Map<Aws::String, Aws::String>&& value) { m_endpointsHasBeenSet = true; m_endpoints = std::move(value); }

    /**
     * <p>The key-value pair that exists if the Elasticsearch domain uses VPC
     * endpoints.</p>
     */
    inline AwsElasticsearchDomainDetails& WithEndpoints(const Aws::Map<Aws::String, Aws::String>& value) { SetEndpoints(value); return *this;}

    /**
     * <p>The key-value pair that exists if the Elasticsearch domain uses VPC
     * endpoints.</p>
     */
    inline AwsElasticsearchDomainDetails& WithEndpoints(Aws::Map<Aws::String, Aws::String>&& value) { SetEndpoints(std::move(value)); return *this;}

    /**
     * <p>The key-value pair that exists if the Elasticsearch domain uses VPC
     * endpoints.</p>
     */
    inline AwsElasticsearchDomainDetails& AddEndpoints(const Aws::String& key, const Aws::String& value) { m_endpointsHasBeenSet = true; m_endpoints.emplace(key, value); return *this; }

    /**
     * <p>The key-value pair that exists if the Elasticsearch domain uses VPC
     * endpoints.</p>
     */
    inline AwsElasticsearchDomainDetails& AddEndpoints(Aws::String&& key, const Aws::String& value) { m_endpointsHasBeenSet = true; m_endpoints.emplace(std::move(key), value); return *this; }

    /**
     * <p>The key-value pair that exists if the Elasticsearch domain uses VPC
     * endpoints.</p>
     */
    inline AwsElasticsearchDomainDetails& AddEndpoints(const Aws::String& key, Aws::String&& value) { m_endpointsHasBeenSet = true; m_endpoints.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The key-value pair that exists if the Elasticsearch domain uses VPC
     * endpoints.</p>
     */
    inline AwsElasticsearchDomainDetails& AddEndpoints(Aws::String&& key, Aws::String&& value) { m_endpointsHasBeenSet = true; m_endpoints.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The key-value pair that exists if the Elasticsearch domain uses VPC
     * endpoints.</p>
     */
    inline AwsElasticsearchDomainDetails& AddEndpoints(const char* key, Aws::String&& value) { m_endpointsHasBeenSet = true; m_endpoints.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The key-value pair that exists if the Elasticsearch domain uses VPC
     * endpoints.</p>
     */
    inline AwsElasticsearchDomainDetails& AddEndpoints(Aws::String&& key, const char* value) { m_endpointsHasBeenSet = true; m_endpoints.emplace(std::move(key), value); return *this; }

    /**
     * <p>The key-value pair that exists if the Elasticsearch domain uses VPC
     * endpoints.</p>
     */
    inline AwsElasticsearchDomainDetails& AddEndpoints(const char* key, const char* value) { m_endpointsHasBeenSet = true; m_endpoints.emplace(key, value); return *this; }


    /**
     * <p>OpenSearch version.</p>
     */
    inline const Aws::String& GetElasticsearchVersion() const{ return m_elasticsearchVersion; }

    /**
     * <p>OpenSearch version.</p>
     */
    inline bool ElasticsearchVersionHasBeenSet() const { return m_elasticsearchVersionHasBeenSet; }

    /**
     * <p>OpenSearch version.</p>
     */
    inline void SetElasticsearchVersion(const Aws::String& value) { m_elasticsearchVersionHasBeenSet = true; m_elasticsearchVersion = value; }

    /**
     * <p>OpenSearch version.</p>
     */
    inline void SetElasticsearchVersion(Aws::String&& value) { m_elasticsearchVersionHasBeenSet = true; m_elasticsearchVersion = std::move(value); }

    /**
     * <p>OpenSearch version.</p>
     */
    inline void SetElasticsearchVersion(const char* value) { m_elasticsearchVersionHasBeenSet = true; m_elasticsearchVersion.assign(value); }

    /**
     * <p>OpenSearch version.</p>
     */
    inline AwsElasticsearchDomainDetails& WithElasticsearchVersion(const Aws::String& value) { SetElasticsearchVersion(value); return *this;}

    /**
     * <p>OpenSearch version.</p>
     */
    inline AwsElasticsearchDomainDetails& WithElasticsearchVersion(Aws::String&& value) { SetElasticsearchVersion(std::move(value)); return *this;}

    /**
     * <p>OpenSearch version.</p>
     */
    inline AwsElasticsearchDomainDetails& WithElasticsearchVersion(const char* value) { SetElasticsearchVersion(value); return *this;}


    /**
     * <p>Information about an OpenSearch cluster configuration.</p>
     */
    inline const AwsElasticsearchDomainElasticsearchClusterConfigDetails& GetElasticsearchClusterConfig() const{ return m_elasticsearchClusterConfig; }

    /**
     * <p>Information about an OpenSearch cluster configuration.</p>
     */
    inline bool ElasticsearchClusterConfigHasBeenSet() const { return m_elasticsearchClusterConfigHasBeenSet; }

    /**
     * <p>Information about an OpenSearch cluster configuration.</p>
     */
    inline void SetElasticsearchClusterConfig(const AwsElasticsearchDomainElasticsearchClusterConfigDetails& value) { m_elasticsearchClusterConfigHasBeenSet = true; m_elasticsearchClusterConfig = value; }

    /**
     * <p>Information about an OpenSearch cluster configuration.</p>
     */
    inline void SetElasticsearchClusterConfig(AwsElasticsearchDomainElasticsearchClusterConfigDetails&& value) { m_elasticsearchClusterConfigHasBeenSet = true; m_elasticsearchClusterConfig = std::move(value); }

    /**
     * <p>Information about an OpenSearch cluster configuration.</p>
     */
    inline AwsElasticsearchDomainDetails& WithElasticsearchClusterConfig(const AwsElasticsearchDomainElasticsearchClusterConfigDetails& value) { SetElasticsearchClusterConfig(value); return *this;}

    /**
     * <p>Information about an OpenSearch cluster configuration.</p>
     */
    inline AwsElasticsearchDomainDetails& WithElasticsearchClusterConfig(AwsElasticsearchDomainElasticsearchClusterConfigDetails&& value) { SetElasticsearchClusterConfig(std::move(value)); return *this;}


    /**
     * <p>Details about the configuration for encryption at rest.</p>
     */
    inline const AwsElasticsearchDomainEncryptionAtRestOptions& GetEncryptionAtRestOptions() const{ return m_encryptionAtRestOptions; }

    /**
     * <p>Details about the configuration for encryption at rest.</p>
     */
    inline bool EncryptionAtRestOptionsHasBeenSet() const { return m_encryptionAtRestOptionsHasBeenSet; }

    /**
     * <p>Details about the configuration for encryption at rest.</p>
     */
    inline void SetEncryptionAtRestOptions(const AwsElasticsearchDomainEncryptionAtRestOptions& value) { m_encryptionAtRestOptionsHasBeenSet = true; m_encryptionAtRestOptions = value; }

    /**
     * <p>Details about the configuration for encryption at rest.</p>
     */
    inline void SetEncryptionAtRestOptions(AwsElasticsearchDomainEncryptionAtRestOptions&& value) { m_encryptionAtRestOptionsHasBeenSet = true; m_encryptionAtRestOptions = std::move(value); }

    /**
     * <p>Details about the configuration for encryption at rest.</p>
     */
    inline AwsElasticsearchDomainDetails& WithEncryptionAtRestOptions(const AwsElasticsearchDomainEncryptionAtRestOptions& value) { SetEncryptionAtRestOptions(value); return *this;}

    /**
     * <p>Details about the configuration for encryption at rest.</p>
     */
    inline AwsElasticsearchDomainDetails& WithEncryptionAtRestOptions(AwsElasticsearchDomainEncryptionAtRestOptions&& value) { SetEncryptionAtRestOptions(std::move(value)); return *this;}


    /**
     * <p>Configures the CloudWatch Logs to publish for the Elasticsearch domain.</p>
     */
    inline const AwsElasticsearchDomainLogPublishingOptions& GetLogPublishingOptions() const{ return m_logPublishingOptions; }

    /**
     * <p>Configures the CloudWatch Logs to publish for the Elasticsearch domain.</p>
     */
    inline bool LogPublishingOptionsHasBeenSet() const { return m_logPublishingOptionsHasBeenSet; }

    /**
     * <p>Configures the CloudWatch Logs to publish for the Elasticsearch domain.</p>
     */
    inline void SetLogPublishingOptions(const AwsElasticsearchDomainLogPublishingOptions& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions = value; }

    /**
     * <p>Configures the CloudWatch Logs to publish for the Elasticsearch domain.</p>
     */
    inline void SetLogPublishingOptions(AwsElasticsearchDomainLogPublishingOptions&& value) { m_logPublishingOptionsHasBeenSet = true; m_logPublishingOptions = std::move(value); }

    /**
     * <p>Configures the CloudWatch Logs to publish for the Elasticsearch domain.</p>
     */
    inline AwsElasticsearchDomainDetails& WithLogPublishingOptions(const AwsElasticsearchDomainLogPublishingOptions& value) { SetLogPublishingOptions(value); return *this;}

    /**
     * <p>Configures the CloudWatch Logs to publish for the Elasticsearch domain.</p>
     */
    inline AwsElasticsearchDomainDetails& WithLogPublishingOptions(AwsElasticsearchDomainLogPublishingOptions&& value) { SetLogPublishingOptions(std::move(value)); return *this;}


    /**
     * <p>Details about the configuration for node-to-node encryption.</p>
     */
    inline const AwsElasticsearchDomainNodeToNodeEncryptionOptions& GetNodeToNodeEncryptionOptions() const{ return m_nodeToNodeEncryptionOptions; }

    /**
     * <p>Details about the configuration for node-to-node encryption.</p>
     */
    inline bool NodeToNodeEncryptionOptionsHasBeenSet() const { return m_nodeToNodeEncryptionOptionsHasBeenSet; }

    /**
     * <p>Details about the configuration for node-to-node encryption.</p>
     */
    inline void SetNodeToNodeEncryptionOptions(const AwsElasticsearchDomainNodeToNodeEncryptionOptions& value) { m_nodeToNodeEncryptionOptionsHasBeenSet = true; m_nodeToNodeEncryptionOptions = value; }

    /**
     * <p>Details about the configuration for node-to-node encryption.</p>
     */
    inline void SetNodeToNodeEncryptionOptions(AwsElasticsearchDomainNodeToNodeEncryptionOptions&& value) { m_nodeToNodeEncryptionOptionsHasBeenSet = true; m_nodeToNodeEncryptionOptions = std::move(value); }

    /**
     * <p>Details about the configuration for node-to-node encryption.</p>
     */
    inline AwsElasticsearchDomainDetails& WithNodeToNodeEncryptionOptions(const AwsElasticsearchDomainNodeToNodeEncryptionOptions& value) { SetNodeToNodeEncryptionOptions(value); return *this;}

    /**
     * <p>Details about the configuration for node-to-node encryption.</p>
     */
    inline AwsElasticsearchDomainDetails& WithNodeToNodeEncryptionOptions(AwsElasticsearchDomainNodeToNodeEncryptionOptions&& value) { SetNodeToNodeEncryptionOptions(std::move(value)); return *this;}


    /**
     * <p>Information about the status of a domain relative to the latest service
     * software.</p>
     */
    inline const AwsElasticsearchDomainServiceSoftwareOptions& GetServiceSoftwareOptions() const{ return m_serviceSoftwareOptions; }

    /**
     * <p>Information about the status of a domain relative to the latest service
     * software.</p>
     */
    inline bool ServiceSoftwareOptionsHasBeenSet() const { return m_serviceSoftwareOptionsHasBeenSet; }

    /**
     * <p>Information about the status of a domain relative to the latest service
     * software.</p>
     */
    inline void SetServiceSoftwareOptions(const AwsElasticsearchDomainServiceSoftwareOptions& value) { m_serviceSoftwareOptionsHasBeenSet = true; m_serviceSoftwareOptions = value; }

    /**
     * <p>Information about the status of a domain relative to the latest service
     * software.</p>
     */
    inline void SetServiceSoftwareOptions(AwsElasticsearchDomainServiceSoftwareOptions&& value) { m_serviceSoftwareOptionsHasBeenSet = true; m_serviceSoftwareOptions = std::move(value); }

    /**
     * <p>Information about the status of a domain relative to the latest service
     * software.</p>
     */
    inline AwsElasticsearchDomainDetails& WithServiceSoftwareOptions(const AwsElasticsearchDomainServiceSoftwareOptions& value) { SetServiceSoftwareOptions(value); return *this;}

    /**
     * <p>Information about the status of a domain relative to the latest service
     * software.</p>
     */
    inline AwsElasticsearchDomainDetails& WithServiceSoftwareOptions(AwsElasticsearchDomainServiceSoftwareOptions&& value) { SetServiceSoftwareOptions(std::move(value)); return *this;}


    /**
     * <p>Information that OpenSearch derives based on <code>VPCOptions</code> for the
     * domain.</p>
     */
    inline const AwsElasticsearchDomainVPCOptions& GetVPCOptions() const{ return m_vPCOptions; }

    /**
     * <p>Information that OpenSearch derives based on <code>VPCOptions</code> for the
     * domain.</p>
     */
    inline bool VPCOptionsHasBeenSet() const { return m_vPCOptionsHasBeenSet; }

    /**
     * <p>Information that OpenSearch derives based on <code>VPCOptions</code> for the
     * domain.</p>
     */
    inline void SetVPCOptions(const AwsElasticsearchDomainVPCOptions& value) { m_vPCOptionsHasBeenSet = true; m_vPCOptions = value; }

    /**
     * <p>Information that OpenSearch derives based on <code>VPCOptions</code> for the
     * domain.</p>
     */
    inline void SetVPCOptions(AwsElasticsearchDomainVPCOptions&& value) { m_vPCOptionsHasBeenSet = true; m_vPCOptions = std::move(value); }

    /**
     * <p>Information that OpenSearch derives based on <code>VPCOptions</code> for the
     * domain.</p>
     */
    inline AwsElasticsearchDomainDetails& WithVPCOptions(const AwsElasticsearchDomainVPCOptions& value) { SetVPCOptions(value); return *this;}

    /**
     * <p>Information that OpenSearch derives based on <code>VPCOptions</code> for the
     * domain.</p>
     */
    inline AwsElasticsearchDomainDetails& WithVPCOptions(AwsElasticsearchDomainVPCOptions&& value) { SetVPCOptions(std::move(value)); return *this;}

  private:

    Aws::String m_accessPolicies;
    bool m_accessPoliciesHasBeenSet = false;

    AwsElasticsearchDomainDomainEndpointOptions m_domainEndpointOptions;
    bool m_domainEndpointOptionsHasBeenSet = false;

    Aws::String m_domainId;
    bool m_domainIdHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_endpoints;
    bool m_endpointsHasBeenSet = false;

    Aws::String m_elasticsearchVersion;
    bool m_elasticsearchVersionHasBeenSet = false;

    AwsElasticsearchDomainElasticsearchClusterConfigDetails m_elasticsearchClusterConfig;
    bool m_elasticsearchClusterConfigHasBeenSet = false;

    AwsElasticsearchDomainEncryptionAtRestOptions m_encryptionAtRestOptions;
    bool m_encryptionAtRestOptionsHasBeenSet = false;

    AwsElasticsearchDomainLogPublishingOptions m_logPublishingOptions;
    bool m_logPublishingOptionsHasBeenSet = false;

    AwsElasticsearchDomainNodeToNodeEncryptionOptions m_nodeToNodeEncryptionOptions;
    bool m_nodeToNodeEncryptionOptionsHasBeenSet = false;

    AwsElasticsearchDomainServiceSoftwareOptions m_serviceSoftwareOptions;
    bool m_serviceSoftwareOptionsHasBeenSet = false;

    AwsElasticsearchDomainVPCOptions m_vPCOptions;
    bool m_vPCOptionsHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
