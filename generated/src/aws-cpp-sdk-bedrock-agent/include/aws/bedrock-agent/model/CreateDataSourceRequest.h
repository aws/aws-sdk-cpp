/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/BedrockAgentRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/DataDeletionPolicy.h>
#include <aws/bedrock-agent/model/DataSourceConfiguration.h>
#include <aws/bedrock-agent/model/ServerSideEncryptionConfiguration.h>
#include <aws/bedrock-agent/model/VectorIngestionConfiguration.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

  /**
   */
  class CreateDataSourceRequest : public BedrockAgentRequest
  {
  public:
    AWS_BEDROCKAGENT_API CreateDataSourceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDataSource"; }

    AWS_BEDROCKAGENT_API Aws::String SerializePayload() const override;


    /**
     * <p>A unique, case-sensitive identifier to ensure that the API request completes
     * no more than one time. If this token matches a previous request, Amazon Bedrock
     * ignores the request, but does not return an error. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }

    /**
     * <p>A unique, case-sensitive identifier to ensure that the API request completes
     * no more than one time. If this token matches a previous request, Amazon Bedrock
     * ignores the request, but does not return an error. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }

    /**
     * <p>A unique, case-sensitive identifier to ensure that the API request completes
     * no more than one time. If this token matches a previous request, Amazon Bedrock
     * ignores the request, but does not return an error. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }

    /**
     * <p>A unique, case-sensitive identifier to ensure that the API request completes
     * no more than one time. If this token matches a previous request, Amazon Bedrock
     * ignores the request, but does not return an error. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }

    /**
     * <p>A unique, case-sensitive identifier to ensure that the API request completes
     * no more than one time. If this token matches a previous request, Amazon Bedrock
     * ignores the request, but does not return an error. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }

    /**
     * <p>A unique, case-sensitive identifier to ensure that the API request completes
     * no more than one time. If this token matches a previous request, Amazon Bedrock
     * ignores the request, but does not return an error. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline CreateDataSourceRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}

    /**
     * <p>A unique, case-sensitive identifier to ensure that the API request completes
     * no more than one time. If this token matches a previous request, Amazon Bedrock
     * ignores the request, but does not return an error. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline CreateDataSourceRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}

    /**
     * <p>A unique, case-sensitive identifier to ensure that the API request completes
     * no more than one time. If this token matches a previous request, Amazon Bedrock
     * ignores the request, but does not return an error. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline CreateDataSourceRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}


    /**
     * <p>The data deletion policy assigned to the data source.</p>
     */
    inline const DataDeletionPolicy& GetDataDeletionPolicy() const{ return m_dataDeletionPolicy; }

    /**
     * <p>The data deletion policy assigned to the data source.</p>
     */
    inline bool DataDeletionPolicyHasBeenSet() const { return m_dataDeletionPolicyHasBeenSet; }

    /**
     * <p>The data deletion policy assigned to the data source.</p>
     */
    inline void SetDataDeletionPolicy(const DataDeletionPolicy& value) { m_dataDeletionPolicyHasBeenSet = true; m_dataDeletionPolicy = value; }

    /**
     * <p>The data deletion policy assigned to the data source.</p>
     */
    inline void SetDataDeletionPolicy(DataDeletionPolicy&& value) { m_dataDeletionPolicyHasBeenSet = true; m_dataDeletionPolicy = std::move(value); }

    /**
     * <p>The data deletion policy assigned to the data source.</p>
     */
    inline CreateDataSourceRequest& WithDataDeletionPolicy(const DataDeletionPolicy& value) { SetDataDeletionPolicy(value); return *this;}

    /**
     * <p>The data deletion policy assigned to the data source.</p>
     */
    inline CreateDataSourceRequest& WithDataDeletionPolicy(DataDeletionPolicy&& value) { SetDataDeletionPolicy(std::move(value)); return *this;}


    /**
     * <p>Contains metadata about where the data source is stored.</p>
     */
    inline const DataSourceConfiguration& GetDataSourceConfiguration() const{ return m_dataSourceConfiguration; }

    /**
     * <p>Contains metadata about where the data source is stored.</p>
     */
    inline bool DataSourceConfigurationHasBeenSet() const { return m_dataSourceConfigurationHasBeenSet; }

    /**
     * <p>Contains metadata about where the data source is stored.</p>
     */
    inline void SetDataSourceConfiguration(const DataSourceConfiguration& value) { m_dataSourceConfigurationHasBeenSet = true; m_dataSourceConfiguration = value; }

    /**
     * <p>Contains metadata about where the data source is stored.</p>
     */
    inline void SetDataSourceConfiguration(DataSourceConfiguration&& value) { m_dataSourceConfigurationHasBeenSet = true; m_dataSourceConfiguration = std::move(value); }

    /**
     * <p>Contains metadata about where the data source is stored.</p>
     */
    inline CreateDataSourceRequest& WithDataSourceConfiguration(const DataSourceConfiguration& value) { SetDataSourceConfiguration(value); return *this;}

    /**
     * <p>Contains metadata about where the data source is stored.</p>
     */
    inline CreateDataSourceRequest& WithDataSourceConfiguration(DataSourceConfiguration&& value) { SetDataSourceConfiguration(std::move(value)); return *this;}


    /**
     * <p>A description of the data source.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the data source.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the data source.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the data source.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the data source.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the data source.</p>
     */
    inline CreateDataSourceRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the data source.</p>
     */
    inline CreateDataSourceRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the data source.</p>
     */
    inline CreateDataSourceRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The unique identifier of the knowledge base to which to add the data
     * source.</p>
     */
    inline const Aws::String& GetKnowledgeBaseId() const{ return m_knowledgeBaseId; }

    /**
     * <p>The unique identifier of the knowledge base to which to add the data
     * source.</p>
     */
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }

    /**
     * <p>The unique identifier of the knowledge base to which to add the data
     * source.</p>
     */
    inline void SetKnowledgeBaseId(const Aws::String& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = value; }

    /**
     * <p>The unique identifier of the knowledge base to which to add the data
     * source.</p>
     */
    inline void SetKnowledgeBaseId(Aws::String&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::move(value); }

    /**
     * <p>The unique identifier of the knowledge base to which to add the data
     * source.</p>
     */
    inline void SetKnowledgeBaseId(const char* value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId.assign(value); }

    /**
     * <p>The unique identifier of the knowledge base to which to add the data
     * source.</p>
     */
    inline CreateDataSourceRequest& WithKnowledgeBaseId(const Aws::String& value) { SetKnowledgeBaseId(value); return *this;}

    /**
     * <p>The unique identifier of the knowledge base to which to add the data
     * source.</p>
     */
    inline CreateDataSourceRequest& WithKnowledgeBaseId(Aws::String&& value) { SetKnowledgeBaseId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the knowledge base to which to add the data
     * source.</p>
     */
    inline CreateDataSourceRequest& WithKnowledgeBaseId(const char* value) { SetKnowledgeBaseId(value); return *this;}


    /**
     * <p>The name of the data source.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the data source.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the data source.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the data source.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the data source.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the data source.</p>
     */
    inline CreateDataSourceRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the data source.</p>
     */
    inline CreateDataSourceRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the data source.</p>
     */
    inline CreateDataSourceRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Contains details about the server-side encryption for the data source.</p>
     */
    inline const ServerSideEncryptionConfiguration& GetServerSideEncryptionConfiguration() const{ return m_serverSideEncryptionConfiguration; }

    /**
     * <p>Contains details about the server-side encryption for the data source.</p>
     */
    inline bool ServerSideEncryptionConfigurationHasBeenSet() const { return m_serverSideEncryptionConfigurationHasBeenSet; }

    /**
     * <p>Contains details about the server-side encryption for the data source.</p>
     */
    inline void SetServerSideEncryptionConfiguration(const ServerSideEncryptionConfiguration& value) { m_serverSideEncryptionConfigurationHasBeenSet = true; m_serverSideEncryptionConfiguration = value; }

    /**
     * <p>Contains details about the server-side encryption for the data source.</p>
     */
    inline void SetServerSideEncryptionConfiguration(ServerSideEncryptionConfiguration&& value) { m_serverSideEncryptionConfigurationHasBeenSet = true; m_serverSideEncryptionConfiguration = std::move(value); }

    /**
     * <p>Contains details about the server-side encryption for the data source.</p>
     */
    inline CreateDataSourceRequest& WithServerSideEncryptionConfiguration(const ServerSideEncryptionConfiguration& value) { SetServerSideEncryptionConfiguration(value); return *this;}

    /**
     * <p>Contains details about the server-side encryption for the data source.</p>
     */
    inline CreateDataSourceRequest& WithServerSideEncryptionConfiguration(ServerSideEncryptionConfiguration&& value) { SetServerSideEncryptionConfiguration(std::move(value)); return *this;}


    /**
     * <p>Contains details about how to ingest the documents in the data source.</p>
     */
    inline const VectorIngestionConfiguration& GetVectorIngestionConfiguration() const{ return m_vectorIngestionConfiguration; }

    /**
     * <p>Contains details about how to ingest the documents in the data source.</p>
     */
    inline bool VectorIngestionConfigurationHasBeenSet() const { return m_vectorIngestionConfigurationHasBeenSet; }

    /**
     * <p>Contains details about how to ingest the documents in the data source.</p>
     */
    inline void SetVectorIngestionConfiguration(const VectorIngestionConfiguration& value) { m_vectorIngestionConfigurationHasBeenSet = true; m_vectorIngestionConfiguration = value; }

    /**
     * <p>Contains details about how to ingest the documents in the data source.</p>
     */
    inline void SetVectorIngestionConfiguration(VectorIngestionConfiguration&& value) { m_vectorIngestionConfigurationHasBeenSet = true; m_vectorIngestionConfiguration = std::move(value); }

    /**
     * <p>Contains details about how to ingest the documents in the data source.</p>
     */
    inline CreateDataSourceRequest& WithVectorIngestionConfiguration(const VectorIngestionConfiguration& value) { SetVectorIngestionConfiguration(value); return *this;}

    /**
     * <p>Contains details about how to ingest the documents in the data source.</p>
     */
    inline CreateDataSourceRequest& WithVectorIngestionConfiguration(VectorIngestionConfiguration&& value) { SetVectorIngestionConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;

    DataDeletionPolicy m_dataDeletionPolicy;
    bool m_dataDeletionPolicyHasBeenSet = false;

    DataSourceConfiguration m_dataSourceConfiguration;
    bool m_dataSourceConfigurationHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ServerSideEncryptionConfiguration m_serverSideEncryptionConfiguration;
    bool m_serverSideEncryptionConfigurationHasBeenSet = false;

    VectorIngestionConfiguration m_vectorIngestionConfiguration;
    bool m_vectorIngestionConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
