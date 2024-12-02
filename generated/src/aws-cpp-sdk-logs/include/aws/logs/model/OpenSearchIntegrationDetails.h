/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/logs/CloudWatchLogs_EXPORTS.h>
#include <aws/logs/model/OpenSearchDataSource.h>
#include <aws/logs/model/OpenSearchApplication.h>
#include <aws/logs/model/OpenSearchCollection.h>
#include <aws/logs/model/OpenSearchWorkspace.h>
#include <aws/logs/model/OpenSearchEncryptionPolicy.h>
#include <aws/logs/model/OpenSearchNetworkPolicy.h>
#include <aws/logs/model/OpenSearchDataAccessPolicy.h>
#include <aws/logs/model/OpenSearchLifecyclePolicy.h>
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
namespace CloudWatchLogs
{
namespace Model
{

  /**
   * <p>This structure contains complete information about one CloudWatch Logs
   * integration. This structure is returned by a <a
   * href="https://docs.aws.amazon.com/AmazonCloudWatchLogs/latest/APIReference/API_GetIntegration.html">GetIntegration</a>
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/logs-2014-03-28/OpenSearchIntegrationDetails">AWS
   * API Reference</a></p>
   */
  class OpenSearchIntegrationDetails
  {
  public:
    AWS_CLOUDWATCHLOGS_API OpenSearchIntegrationDetails();
    AWS_CLOUDWATCHLOGS_API OpenSearchIntegrationDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API OpenSearchIntegrationDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHLOGS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>This structure contains information about the OpenSearch Service data source
     * used for this integration. This data source was created as part of the
     * integration setup. An OpenSearch Service data source defines the source and
     * destination for OpenSearch Service queries. It includes the role required to
     * execute queries and write to collections.</p> <p>For more information about
     * OpenSearch Service data sources , see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/direct-query-s3-creating.html">Creating
     * OpenSearch Service data source integrations with Amazon S3.</a> </p>
     */
    inline const OpenSearchDataSource& GetDataSource() const{ return m_dataSource; }
    inline bool DataSourceHasBeenSet() const { return m_dataSourceHasBeenSet; }
    inline void SetDataSource(const OpenSearchDataSource& value) { m_dataSourceHasBeenSet = true; m_dataSource = value; }
    inline void SetDataSource(OpenSearchDataSource&& value) { m_dataSourceHasBeenSet = true; m_dataSource = std::move(value); }
    inline OpenSearchIntegrationDetails& WithDataSource(const OpenSearchDataSource& value) { SetDataSource(value); return *this;}
    inline OpenSearchIntegrationDetails& WithDataSource(OpenSearchDataSource&& value) { SetDataSource(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This structure contains information about the OpenSearch Service application
     * used for this integration. An OpenSearch Service application is the web
     * application that was created by the integration with CloudWatch Logs. It hosts
     * the vended logs dashboards.</p>
     */
    inline const OpenSearchApplication& GetApplication() const{ return m_application; }
    inline bool ApplicationHasBeenSet() const { return m_applicationHasBeenSet; }
    inline void SetApplication(const OpenSearchApplication& value) { m_applicationHasBeenSet = true; m_application = value; }
    inline void SetApplication(OpenSearchApplication&& value) { m_applicationHasBeenSet = true; m_application = std::move(value); }
    inline OpenSearchIntegrationDetails& WithApplication(const OpenSearchApplication& value) { SetApplication(value); return *this;}
    inline OpenSearchIntegrationDetails& WithApplication(OpenSearchApplication&& value) { SetApplication(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This structure contains information about the OpenSearch Service collection
     * used for this integration. This collection was created as part of the
     * integration setup. An OpenSearch Service collection is a logical grouping of one
     * or more indexes that represent an analytics workload. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/serverless-collections.html">Creating
     * and managing OpenSearch Service Serverless collections</a>.</p>
     */
    inline const OpenSearchCollection& GetCollection() const{ return m_collection; }
    inline bool CollectionHasBeenSet() const { return m_collectionHasBeenSet; }
    inline void SetCollection(const OpenSearchCollection& value) { m_collectionHasBeenSet = true; m_collection = value; }
    inline void SetCollection(OpenSearchCollection&& value) { m_collectionHasBeenSet = true; m_collection = std::move(value); }
    inline OpenSearchIntegrationDetails& WithCollection(const OpenSearchCollection& value) { SetCollection(value); return *this;}
    inline OpenSearchIntegrationDetails& WithCollection(OpenSearchCollection&& value) { SetCollection(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This structure contains information about the OpenSearch Service workspace
     * used for this integration. An OpenSearch Service workspace is the collection of
     * dashboards along with other OpenSearch Service tools. This workspace was created
     * automatically as part of the integration setup. For more information, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/application.html">Centralized
     * OpenSearch user interface (Dashboards) with OpenSearch Service</a>.</p>
     */
    inline const OpenSearchWorkspace& GetWorkspace() const{ return m_workspace; }
    inline bool WorkspaceHasBeenSet() const { return m_workspaceHasBeenSet; }
    inline void SetWorkspace(const OpenSearchWorkspace& value) { m_workspaceHasBeenSet = true; m_workspace = value; }
    inline void SetWorkspace(OpenSearchWorkspace&& value) { m_workspaceHasBeenSet = true; m_workspace = std::move(value); }
    inline OpenSearchIntegrationDetails& WithWorkspace(const OpenSearchWorkspace& value) { SetWorkspace(value); return *this;}
    inline OpenSearchIntegrationDetails& WithWorkspace(OpenSearchWorkspace&& value) { SetWorkspace(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This structure contains information about the OpenSearch Service encryption
     * policy used for this integration. The encryption policy was created
     * automatically when you created the integration. For more information, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/serverless-encryption.html#serverless-encryption-policies">Encryption
     * policies</a> in the OpenSearch Service Developer Guide. </p>
     */
    inline const OpenSearchEncryptionPolicy& GetEncryptionPolicy() const{ return m_encryptionPolicy; }
    inline bool EncryptionPolicyHasBeenSet() const { return m_encryptionPolicyHasBeenSet; }
    inline void SetEncryptionPolicy(const OpenSearchEncryptionPolicy& value) { m_encryptionPolicyHasBeenSet = true; m_encryptionPolicy = value; }
    inline void SetEncryptionPolicy(OpenSearchEncryptionPolicy&& value) { m_encryptionPolicyHasBeenSet = true; m_encryptionPolicy = std::move(value); }
    inline OpenSearchIntegrationDetails& WithEncryptionPolicy(const OpenSearchEncryptionPolicy& value) { SetEncryptionPolicy(value); return *this;}
    inline OpenSearchIntegrationDetails& WithEncryptionPolicy(OpenSearchEncryptionPolicy&& value) { SetEncryptionPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This structure contains information about the OpenSearch Service network
     * policy used for this integration. The network policy assigns network access
     * settings to collections. For more information, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/serverless-network.html#serverless-network-policies">Network
     * policies</a> in the OpenSearch Service Developer Guide.</p>
     */
    inline const OpenSearchNetworkPolicy& GetNetworkPolicy() const{ return m_networkPolicy; }
    inline bool NetworkPolicyHasBeenSet() const { return m_networkPolicyHasBeenSet; }
    inline void SetNetworkPolicy(const OpenSearchNetworkPolicy& value) { m_networkPolicyHasBeenSet = true; m_networkPolicy = value; }
    inline void SetNetworkPolicy(OpenSearchNetworkPolicy&& value) { m_networkPolicyHasBeenSet = true; m_networkPolicy = std::move(value); }
    inline OpenSearchIntegrationDetails& WithNetworkPolicy(const OpenSearchNetworkPolicy& value) { SetNetworkPolicy(value); return *this;}
    inline OpenSearchIntegrationDetails& WithNetworkPolicy(OpenSearchNetworkPolicy&& value) { SetNetworkPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This structure contains information about the OpenSearch Service data access
     * policy used for this integration. The access policy defines the access controls
     * for the collection. This data access policy was automatically created as part of
     * the integration setup. For more information about OpenSearch Service data access
     * policies, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/serverless-data-access.html">Data
     * access control for Amazon OpenSearch Serverless</a> in the OpenSearch Service
     * Developer Guide.</p>
     */
    inline const OpenSearchDataAccessPolicy& GetAccessPolicy() const{ return m_accessPolicy; }
    inline bool AccessPolicyHasBeenSet() const { return m_accessPolicyHasBeenSet; }
    inline void SetAccessPolicy(const OpenSearchDataAccessPolicy& value) { m_accessPolicyHasBeenSet = true; m_accessPolicy = value; }
    inline void SetAccessPolicy(OpenSearchDataAccessPolicy&& value) { m_accessPolicyHasBeenSet = true; m_accessPolicy = std::move(value); }
    inline OpenSearchIntegrationDetails& WithAccessPolicy(const OpenSearchDataAccessPolicy& value) { SetAccessPolicy(value); return *this;}
    inline OpenSearchIntegrationDetails& WithAccessPolicy(OpenSearchDataAccessPolicy&& value) { SetAccessPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This structure contains information about the OpenSearch Service data
     * lifecycle policy used for this integration. The lifecycle policy determines the
     * lifespan of the data in the collection. It was automatically created as part of
     * the integration setup.</p> <p>For more information, see <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/developerguide/serverless-lifecycle.html">Using
     * data lifecycle policies with OpenSearch Service Serverless</a> in the OpenSearch
     * Service Developer Guide.</p>
     */
    inline const OpenSearchLifecyclePolicy& GetLifecyclePolicy() const{ return m_lifecyclePolicy; }
    inline bool LifecyclePolicyHasBeenSet() const { return m_lifecyclePolicyHasBeenSet; }
    inline void SetLifecyclePolicy(const OpenSearchLifecyclePolicy& value) { m_lifecyclePolicyHasBeenSet = true; m_lifecyclePolicy = value; }
    inline void SetLifecyclePolicy(OpenSearchLifecyclePolicy&& value) { m_lifecyclePolicyHasBeenSet = true; m_lifecyclePolicy = std::move(value); }
    inline OpenSearchIntegrationDetails& WithLifecyclePolicy(const OpenSearchLifecyclePolicy& value) { SetLifecyclePolicy(value); return *this;}
    inline OpenSearchIntegrationDetails& WithLifecyclePolicy(OpenSearchLifecyclePolicy&& value) { SetLifecyclePolicy(std::move(value)); return *this;}
    ///@}
  private:

    OpenSearchDataSource m_dataSource;
    bool m_dataSourceHasBeenSet = false;

    OpenSearchApplication m_application;
    bool m_applicationHasBeenSet = false;

    OpenSearchCollection m_collection;
    bool m_collectionHasBeenSet = false;

    OpenSearchWorkspace m_workspace;
    bool m_workspaceHasBeenSet = false;

    OpenSearchEncryptionPolicy m_encryptionPolicy;
    bool m_encryptionPolicyHasBeenSet = false;

    OpenSearchNetworkPolicy m_networkPolicy;
    bool m_networkPolicyHasBeenSet = false;

    OpenSearchDataAccessPolicy m_accessPolicy;
    bool m_accessPolicyHasBeenSet = false;

    OpenSearchLifecyclePolicy m_lifecyclePolicy;
    bool m_lifecyclePolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchLogs
} // namespace Aws
