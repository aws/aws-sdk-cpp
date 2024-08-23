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


    ///@{
    /**
     * <p>A unique, case-sensitive identifier to ensure that the API request completes
     * no more than one time. If this token matches a previous request, Amazon Bedrock
     * ignores the request, but does not return an error. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Run_Instance_Idempotency.html">Ensuring
     * idempotency</a>.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateDataSourceRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateDataSourceRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateDataSourceRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data deletion policy for the data source.</p> <p>You can set the data
     * deletion policy to:</p> <ul> <li> <p>DELETE: Deletes all data from your data
     * source that’s converted into vector embeddings upon deletion of a knowledge base
     * or data source resource. Note that the <b>vector store itself is not
     * deleted</b>, only the data. This flag is ignored if an Amazon Web Services
     * account is deleted.</p> </li> <li> <p>RETAIN: Retains all data from your data
     * source that’s converted into vector embeddings upon deletion of a knowledge base
     * or data source resource. Note that the <b>vector store itself is not deleted</b>
     * if you delete a knowledge base or data source resource.</p> </li> </ul>
     */
    inline const DataDeletionPolicy& GetDataDeletionPolicy() const{ return m_dataDeletionPolicy; }
    inline bool DataDeletionPolicyHasBeenSet() const { return m_dataDeletionPolicyHasBeenSet; }
    inline void SetDataDeletionPolicy(const DataDeletionPolicy& value) { m_dataDeletionPolicyHasBeenSet = true; m_dataDeletionPolicy = value; }
    inline void SetDataDeletionPolicy(DataDeletionPolicy&& value) { m_dataDeletionPolicyHasBeenSet = true; m_dataDeletionPolicy = std::move(value); }
    inline CreateDataSourceRequest& WithDataDeletionPolicy(const DataDeletionPolicy& value) { SetDataDeletionPolicy(value); return *this;}
    inline CreateDataSourceRequest& WithDataDeletionPolicy(DataDeletionPolicy&& value) { SetDataDeletionPolicy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connection configuration for the data source.</p>
     */
    inline const DataSourceConfiguration& GetDataSourceConfiguration() const{ return m_dataSourceConfiguration; }
    inline bool DataSourceConfigurationHasBeenSet() const { return m_dataSourceConfigurationHasBeenSet; }
    inline void SetDataSourceConfiguration(const DataSourceConfiguration& value) { m_dataSourceConfigurationHasBeenSet = true; m_dataSourceConfiguration = value; }
    inline void SetDataSourceConfiguration(DataSourceConfiguration&& value) { m_dataSourceConfigurationHasBeenSet = true; m_dataSourceConfiguration = std::move(value); }
    inline CreateDataSourceRequest& WithDataSourceConfiguration(const DataSourceConfiguration& value) { SetDataSourceConfiguration(value); return *this;}
    inline CreateDataSourceRequest& WithDataSourceConfiguration(DataSourceConfiguration&& value) { SetDataSourceConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the data source.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }
    inline CreateDataSourceRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline CreateDataSourceRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline CreateDataSourceRequest& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the knowledge base to which to add the data
     * source.</p>
     */
    inline const Aws::String& GetKnowledgeBaseId() const{ return m_knowledgeBaseId; }
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }
    inline void SetKnowledgeBaseId(const Aws::String& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = value; }
    inline void SetKnowledgeBaseId(Aws::String&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::move(value); }
    inline void SetKnowledgeBaseId(const char* value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId.assign(value); }
    inline CreateDataSourceRequest& WithKnowledgeBaseId(const Aws::String& value) { SetKnowledgeBaseId(value); return *this;}
    inline CreateDataSourceRequest& WithKnowledgeBaseId(Aws::String&& value) { SetKnowledgeBaseId(std::move(value)); return *this;}
    inline CreateDataSourceRequest& WithKnowledgeBaseId(const char* value) { SetKnowledgeBaseId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the data source.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline CreateDataSourceRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline CreateDataSourceRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline CreateDataSourceRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about the server-side encryption for the data source.</p>
     */
    inline const ServerSideEncryptionConfiguration& GetServerSideEncryptionConfiguration() const{ return m_serverSideEncryptionConfiguration; }
    inline bool ServerSideEncryptionConfigurationHasBeenSet() const { return m_serverSideEncryptionConfigurationHasBeenSet; }
    inline void SetServerSideEncryptionConfiguration(const ServerSideEncryptionConfiguration& value) { m_serverSideEncryptionConfigurationHasBeenSet = true; m_serverSideEncryptionConfiguration = value; }
    inline void SetServerSideEncryptionConfiguration(ServerSideEncryptionConfiguration&& value) { m_serverSideEncryptionConfigurationHasBeenSet = true; m_serverSideEncryptionConfiguration = std::move(value); }
    inline CreateDataSourceRequest& WithServerSideEncryptionConfiguration(const ServerSideEncryptionConfiguration& value) { SetServerSideEncryptionConfiguration(value); return *this;}
    inline CreateDataSourceRequest& WithServerSideEncryptionConfiguration(ServerSideEncryptionConfiguration&& value) { SetServerSideEncryptionConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about how to ingest the documents in the data source.</p>
     */
    inline const VectorIngestionConfiguration& GetVectorIngestionConfiguration() const{ return m_vectorIngestionConfiguration; }
    inline bool VectorIngestionConfigurationHasBeenSet() const { return m_vectorIngestionConfigurationHasBeenSet; }
    inline void SetVectorIngestionConfiguration(const VectorIngestionConfiguration& value) { m_vectorIngestionConfigurationHasBeenSet = true; m_vectorIngestionConfiguration = value; }
    inline void SetVectorIngestionConfiguration(VectorIngestionConfiguration&& value) { m_vectorIngestionConfigurationHasBeenSet = true; m_vectorIngestionConfiguration = std::move(value); }
    inline CreateDataSourceRequest& WithVectorIngestionConfiguration(const VectorIngestionConfiguration& value) { SetVectorIngestionConfiguration(value); return *this;}
    inline CreateDataSourceRequest& WithVectorIngestionConfiguration(VectorIngestionConfiguration&& value) { SetVectorIngestionConfiguration(std::move(value)); return *this;}
    ///@}
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
