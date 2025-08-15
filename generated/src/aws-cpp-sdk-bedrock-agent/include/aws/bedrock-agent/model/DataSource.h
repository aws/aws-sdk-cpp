/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/DataSourceStatus.h>
#include <aws/bedrock-agent/model/DataSourceConfiguration.h>
#include <aws/bedrock-agent/model/ServerSideEncryptionConfiguration.h>
#include <aws/bedrock-agent/model/VectorIngestionConfiguration.h>
#include <aws/bedrock-agent/model/DataDeletionPolicy.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace BedrockAgent
{
namespace Model
{

  /**
   * <p>Contains details about a data source.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/DataSource">AWS
   * API Reference</a></p>
   */
  class DataSource
  {
  public:
    AWS_BEDROCKAGENT_API DataSource() = default;
    AWS_BEDROCKAGENT_API DataSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API DataSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the knowledge base to which the data source
     * belongs.</p>
     */
    inline const Aws::String& GetKnowledgeBaseId() const { return m_knowledgeBaseId; }
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }
    template<typename KnowledgeBaseIdT = Aws::String>
    void SetKnowledgeBaseId(KnowledgeBaseIdT&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::forward<KnowledgeBaseIdT>(value); }
    template<typename KnowledgeBaseIdT = Aws::String>
    DataSource& WithKnowledgeBaseId(KnowledgeBaseIdT&& value) { SetKnowledgeBaseId(std::forward<KnowledgeBaseIdT>(value)); return *this;}
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
    DataSource& WithDataSourceId(DataSourceIdT&& value) { SetDataSourceId(std::forward<DataSourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the data source.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DataSource& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the data source. The following statuses are possible:</p> <ul>
     * <li> <p>Available – The data source has been created and is ready for ingestion
     * into the knowledge base.</p> </li> <li> <p>Deleting – The data source is being
     * deleted.</p> </li> </ul>
     */
    inline DataSourceStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(DataSourceStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DataSource& WithStatus(DataSourceStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the data source.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DataSource& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The connection configuration for the data source.</p>
     */
    inline const DataSourceConfiguration& GetDataSourceConfiguration() const { return m_dataSourceConfiguration; }
    inline bool DataSourceConfigurationHasBeenSet() const { return m_dataSourceConfigurationHasBeenSet; }
    template<typename DataSourceConfigurationT = DataSourceConfiguration>
    void SetDataSourceConfiguration(DataSourceConfigurationT&& value) { m_dataSourceConfigurationHasBeenSet = true; m_dataSourceConfiguration = std::forward<DataSourceConfigurationT>(value); }
    template<typename DataSourceConfigurationT = DataSourceConfiguration>
    DataSource& WithDataSourceConfiguration(DataSourceConfigurationT&& value) { SetDataSourceConfiguration(std::forward<DataSourceConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains details about the configuration of the server-side encryption.</p>
     */
    inline const ServerSideEncryptionConfiguration& GetServerSideEncryptionConfiguration() const { return m_serverSideEncryptionConfiguration; }
    inline bool ServerSideEncryptionConfigurationHasBeenSet() const { return m_serverSideEncryptionConfigurationHasBeenSet; }
    template<typename ServerSideEncryptionConfigurationT = ServerSideEncryptionConfiguration>
    void SetServerSideEncryptionConfiguration(ServerSideEncryptionConfigurationT&& value) { m_serverSideEncryptionConfigurationHasBeenSet = true; m_serverSideEncryptionConfiguration = std::forward<ServerSideEncryptionConfigurationT>(value); }
    template<typename ServerSideEncryptionConfigurationT = ServerSideEncryptionConfiguration>
    DataSource& WithServerSideEncryptionConfiguration(ServerSideEncryptionConfigurationT&& value) { SetServerSideEncryptionConfiguration(std::forward<ServerSideEncryptionConfigurationT>(value)); return *this;}
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
    DataSource& WithVectorIngestionConfiguration(VectorIngestionConfigurationT&& value) { SetVectorIngestionConfiguration(std::forward<VectorIngestionConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The data deletion policy for the data source.</p>
     */
    inline DataDeletionPolicy GetDataDeletionPolicy() const { return m_dataDeletionPolicy; }
    inline bool DataDeletionPolicyHasBeenSet() const { return m_dataDeletionPolicyHasBeenSet; }
    inline void SetDataDeletionPolicy(DataDeletionPolicy value) { m_dataDeletionPolicyHasBeenSet = true; m_dataDeletionPolicy = value; }
    inline DataSource& WithDataDeletionPolicy(DataDeletionPolicy value) { SetDataDeletionPolicy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the data source was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    void SetCreatedAt(CreatedAtT&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::forward<CreatedAtT>(value); }
    template<typename CreatedAtT = Aws::Utils::DateTime>
    DataSource& WithCreatedAt(CreatedAtT&& value) { SetCreatedAt(std::forward<CreatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the data source was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    DataSource& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The detailed reasons on the failure to delete a data source.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFailureReasons() const { return m_failureReasons; }
    inline bool FailureReasonsHasBeenSet() const { return m_failureReasonsHasBeenSet; }
    template<typename FailureReasonsT = Aws::Vector<Aws::String>>
    void SetFailureReasons(FailureReasonsT&& value) { m_failureReasonsHasBeenSet = true; m_failureReasons = std::forward<FailureReasonsT>(value); }
    template<typename FailureReasonsT = Aws::Vector<Aws::String>>
    DataSource& WithFailureReasons(FailureReasonsT&& value) { SetFailureReasons(std::forward<FailureReasonsT>(value)); return *this;}
    template<typename FailureReasonsT = Aws::String>
    DataSource& AddFailureReasons(FailureReasonsT&& value) { m_failureReasonsHasBeenSet = true; m_failureReasons.emplace_back(std::forward<FailureReasonsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;

    Aws::String m_dataSourceId;
    bool m_dataSourceIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    DataSourceStatus m_status{DataSourceStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    DataSourceConfiguration m_dataSourceConfiguration;
    bool m_dataSourceConfigurationHasBeenSet = false;

    ServerSideEncryptionConfiguration m_serverSideEncryptionConfiguration;
    bool m_serverSideEncryptionConfigurationHasBeenSet = false;

    VectorIngestionConfiguration m_vectorIngestionConfiguration;
    bool m_vectorIngestionConfigurationHasBeenSet = false;

    DataDeletionPolicy m_dataDeletionPolicy{DataDeletionPolicy::NOT_SET};
    bool m_dataDeletionPolicyHasBeenSet = false;

    Aws::Utils::DateTime m_createdAt{};
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::Vector<Aws::String> m_failureReasons;
    bool m_failureReasonsHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
