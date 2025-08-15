/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/bedrock-agent/BedrockAgentRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/DataSourceConfiguration.h>
#include <aws/bedrock-agent/model/DataDeletionPolicy.h>
#include <aws/bedrock-agent/model/ServerSideEncryptionConfiguration.h>
#include <aws/bedrock-agent/model/VectorIngestionConfiguration.h>
#include <utility>

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

  /**
   */
  class UpdateDataSourceRequest : public BedrockAgentRequest
  {
  public:
    AWS_BEDROCKAGENT_API UpdateDataSourceRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateDataSource"; }

    AWS_BEDROCKAGENT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique identifier of the knowledge base for the data source.</p>
     */
    inline const Aws::String& GetKnowledgeBaseId() const { return m_knowledgeBaseId; }
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }
    template<typename KnowledgeBaseIdT = Aws::String>
    void SetKnowledgeBaseId(KnowledgeBaseIdT&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::forward<KnowledgeBaseIdT>(value); }
    template<typename KnowledgeBaseIdT = Aws::String>
    UpdateDataSourceRequest& WithKnowledgeBaseId(KnowledgeBaseIdT&& value) { SetKnowledgeBaseId(std::forward<KnowledgeBaseIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the data source.</p>
     */
    inline const Aws::String& GetDataSourceId() const { return m_dataSourceId; }
    inline bool DataSourceIdHasBeenSet() const { return m_dataSourceIdHasBeenSet; }
    template<typename DataSourceIdT = Aws::String>
    void SetDataSourceId(DataSourceIdT&& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = std::forward<DataSourceIdT>(value); }
    template<typename DataSourceIdT = Aws::String>
    UpdateDataSourceRequest& WithDataSourceId(DataSourceIdT&& value) { SetDataSourceId(std::forward<DataSourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a new name for the data source.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    UpdateDataSourceRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a new description for the data source.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateDataSourceRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connection configuration for the data source that you want to update.</p>
     */
    inline const DataSourceConfiguration& GetDataSourceConfiguration() const { return m_dataSourceConfiguration; }
    inline bool DataSourceConfigurationHasBeenSet() const { return m_dataSourceConfigurationHasBeenSet; }
    template<typename DataSourceConfigurationT = DataSourceConfiguration>
    void SetDataSourceConfiguration(DataSourceConfigurationT&& value) { m_dataSourceConfigurationHasBeenSet = true; m_dataSourceConfiguration = std::forward<DataSourceConfigurationT>(value); }
    template<typename DataSourceConfigurationT = DataSourceConfiguration>
    UpdateDataSourceRequest& WithDataSourceConfiguration(DataSourceConfigurationT&& value) { SetDataSourceConfiguration(std::forward<DataSourceConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data deletion policy for the data source that you want to update.</p>
     */
    inline DataDeletionPolicy GetDataDeletionPolicy() const { return m_dataDeletionPolicy; }
    inline bool DataDeletionPolicyHasBeenSet() const { return m_dataDeletionPolicyHasBeenSet; }
    inline void SetDataDeletionPolicy(DataDeletionPolicy value) { m_dataDeletionPolicyHasBeenSet = true; m_dataDeletionPolicy = value; }
    inline UpdateDataSourceRequest& WithDataDeletionPolicy(DataDeletionPolicy value) { SetDataDeletionPolicy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about server-side encryption of the data source.</p>
     */
    inline const ServerSideEncryptionConfiguration& GetServerSideEncryptionConfiguration() const { return m_serverSideEncryptionConfiguration; }
    inline bool ServerSideEncryptionConfigurationHasBeenSet() const { return m_serverSideEncryptionConfigurationHasBeenSet; }
    template<typename ServerSideEncryptionConfigurationT = ServerSideEncryptionConfiguration>
    void SetServerSideEncryptionConfiguration(ServerSideEncryptionConfigurationT&& value) { m_serverSideEncryptionConfigurationHasBeenSet = true; m_serverSideEncryptionConfiguration = std::forward<ServerSideEncryptionConfigurationT>(value); }
    template<typename ServerSideEncryptionConfigurationT = ServerSideEncryptionConfiguration>
    UpdateDataSourceRequest& WithServerSideEncryptionConfiguration(ServerSideEncryptionConfigurationT&& value) { SetServerSideEncryptionConfiguration(std::forward<ServerSideEncryptionConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about how to ingest the documents in the data source.</p>
     */
    inline const VectorIngestionConfiguration& GetVectorIngestionConfiguration() const { return m_vectorIngestionConfiguration; }
    inline bool VectorIngestionConfigurationHasBeenSet() const { return m_vectorIngestionConfigurationHasBeenSet; }
    template<typename VectorIngestionConfigurationT = VectorIngestionConfiguration>
    void SetVectorIngestionConfiguration(VectorIngestionConfigurationT&& value) { m_vectorIngestionConfigurationHasBeenSet = true; m_vectorIngestionConfiguration = std::forward<VectorIngestionConfigurationT>(value); }
    template<typename VectorIngestionConfigurationT = VectorIngestionConfiguration>
    UpdateDataSourceRequest& WithVectorIngestionConfiguration(VectorIngestionConfigurationT&& value) { SetVectorIngestionConfiguration(std::forward<VectorIngestionConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;

    Aws::String m_dataSourceId;
    bool m_dataSourceIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    DataSourceConfiguration m_dataSourceConfiguration;
    bool m_dataSourceConfigurationHasBeenSet = false;

    DataDeletionPolicy m_dataDeletionPolicy{DataDeletionPolicy::NOT_SET};
    bool m_dataDeletionPolicyHasBeenSet = false;

    ServerSideEncryptionConfiguration m_serverSideEncryptionConfiguration;
    bool m_serverSideEncryptionConfigurationHasBeenSet = false;

    VectorIngestionConfiguration m_vectorIngestionConfiguration;
    bool m_vectorIngestionConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
