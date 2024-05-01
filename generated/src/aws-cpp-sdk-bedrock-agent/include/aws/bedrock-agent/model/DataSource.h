/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/bedrock-agent/model/DataDeletionPolicy.h>
#include <aws/bedrock-agent/model/DataSourceConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agent/model/ServerSideEncryptionConfiguration.h>
#include <aws/bedrock-agent/model/DataSourceStatus.h>
#include <aws/bedrock-agent/model/VectorIngestionConfiguration.h>
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
    AWS_BEDROCKAGENT_API DataSource();
    AWS_BEDROCKAGENT_API DataSource(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API DataSource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The time at which the data source was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }

    /**
     * <p>The time at which the data source was created.</p>
     */
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }

    /**
     * <p>The time at which the data source was created.</p>
     */
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }

    /**
     * <p>The time at which the data source was created.</p>
     */
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }

    /**
     * <p>The time at which the data source was created.</p>
     */
    inline DataSource& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}

    /**
     * <p>The time at which the data source was created.</p>
     */
    inline DataSource& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}


    /**
     * <p>The data deletion policy for a data source.</p>
     */
    inline const DataDeletionPolicy& GetDataDeletionPolicy() const{ return m_dataDeletionPolicy; }

    /**
     * <p>The data deletion policy for a data source.</p>
     */
    inline bool DataDeletionPolicyHasBeenSet() const { return m_dataDeletionPolicyHasBeenSet; }

    /**
     * <p>The data deletion policy for a data source.</p>
     */
    inline void SetDataDeletionPolicy(const DataDeletionPolicy& value) { m_dataDeletionPolicyHasBeenSet = true; m_dataDeletionPolicy = value; }

    /**
     * <p>The data deletion policy for a data source.</p>
     */
    inline void SetDataDeletionPolicy(DataDeletionPolicy&& value) { m_dataDeletionPolicyHasBeenSet = true; m_dataDeletionPolicy = std::move(value); }

    /**
     * <p>The data deletion policy for a data source.</p>
     */
    inline DataSource& WithDataDeletionPolicy(const DataDeletionPolicy& value) { SetDataDeletionPolicy(value); return *this;}

    /**
     * <p>The data deletion policy for a data source.</p>
     */
    inline DataSource& WithDataDeletionPolicy(DataDeletionPolicy&& value) { SetDataDeletionPolicy(std::move(value)); return *this;}


    /**
     * <p>Contains details about how the data source is stored.</p>
     */
    inline const DataSourceConfiguration& GetDataSourceConfiguration() const{ return m_dataSourceConfiguration; }

    /**
     * <p>Contains details about how the data source is stored.</p>
     */
    inline bool DataSourceConfigurationHasBeenSet() const { return m_dataSourceConfigurationHasBeenSet; }

    /**
     * <p>Contains details about how the data source is stored.</p>
     */
    inline void SetDataSourceConfiguration(const DataSourceConfiguration& value) { m_dataSourceConfigurationHasBeenSet = true; m_dataSourceConfiguration = value; }

    /**
     * <p>Contains details about how the data source is stored.</p>
     */
    inline void SetDataSourceConfiguration(DataSourceConfiguration&& value) { m_dataSourceConfigurationHasBeenSet = true; m_dataSourceConfiguration = std::move(value); }

    /**
     * <p>Contains details about how the data source is stored.</p>
     */
    inline DataSource& WithDataSourceConfiguration(const DataSourceConfiguration& value) { SetDataSourceConfiguration(value); return *this;}

    /**
     * <p>Contains details about how the data source is stored.</p>
     */
    inline DataSource& WithDataSourceConfiguration(DataSourceConfiguration&& value) { SetDataSourceConfiguration(std::move(value)); return *this;}


    /**
     * <p>The unique identifier of the data source.</p>
     */
    inline const Aws::String& GetDataSourceId() const{ return m_dataSourceId; }

    /**
     * <p>The unique identifier of the data source.</p>
     */
    inline bool DataSourceIdHasBeenSet() const { return m_dataSourceIdHasBeenSet; }

    /**
     * <p>The unique identifier of the data source.</p>
     */
    inline void SetDataSourceId(const Aws::String& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = value; }

    /**
     * <p>The unique identifier of the data source.</p>
     */
    inline void SetDataSourceId(Aws::String&& value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId = std::move(value); }

    /**
     * <p>The unique identifier of the data source.</p>
     */
    inline void SetDataSourceId(const char* value) { m_dataSourceIdHasBeenSet = true; m_dataSourceId.assign(value); }

    /**
     * <p>The unique identifier of the data source.</p>
     */
    inline DataSource& WithDataSourceId(const Aws::String& value) { SetDataSourceId(value); return *this;}

    /**
     * <p>The unique identifier of the data source.</p>
     */
    inline DataSource& WithDataSourceId(Aws::String&& value) { SetDataSourceId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the data source.</p>
     */
    inline DataSource& WithDataSourceId(const char* value) { SetDataSourceId(value); return *this;}


    /**
     * <p>The description of the data source.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the data source.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the data source.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the data source.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the data source.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the data source.</p>
     */
    inline DataSource& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the data source.</p>
     */
    inline DataSource& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the data source.</p>
     */
    inline DataSource& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The detailed reasons on the failure to delete a data source.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFailureReasons() const{ return m_failureReasons; }

    /**
     * <p>The detailed reasons on the failure to delete a data source.</p>
     */
    inline bool FailureReasonsHasBeenSet() const { return m_failureReasonsHasBeenSet; }

    /**
     * <p>The detailed reasons on the failure to delete a data source.</p>
     */
    inline void SetFailureReasons(const Aws::Vector<Aws::String>& value) { m_failureReasonsHasBeenSet = true; m_failureReasons = value; }

    /**
     * <p>The detailed reasons on the failure to delete a data source.</p>
     */
    inline void SetFailureReasons(Aws::Vector<Aws::String>&& value) { m_failureReasonsHasBeenSet = true; m_failureReasons = std::move(value); }

    /**
     * <p>The detailed reasons on the failure to delete a data source.</p>
     */
    inline DataSource& WithFailureReasons(const Aws::Vector<Aws::String>& value) { SetFailureReasons(value); return *this;}

    /**
     * <p>The detailed reasons on the failure to delete a data source.</p>
     */
    inline DataSource& WithFailureReasons(Aws::Vector<Aws::String>&& value) { SetFailureReasons(std::move(value)); return *this;}

    /**
     * <p>The detailed reasons on the failure to delete a data source.</p>
     */
    inline DataSource& AddFailureReasons(const Aws::String& value) { m_failureReasonsHasBeenSet = true; m_failureReasons.push_back(value); return *this; }

    /**
     * <p>The detailed reasons on the failure to delete a data source.</p>
     */
    inline DataSource& AddFailureReasons(Aws::String&& value) { m_failureReasonsHasBeenSet = true; m_failureReasons.push_back(std::move(value)); return *this; }

    /**
     * <p>The detailed reasons on the failure to delete a data source.</p>
     */
    inline DataSource& AddFailureReasons(const char* value) { m_failureReasonsHasBeenSet = true; m_failureReasons.push_back(value); return *this; }


    /**
     * <p>The unique identifier of the knowledge base to which the data source
     * belongs.</p>
     */
    inline const Aws::String& GetKnowledgeBaseId() const{ return m_knowledgeBaseId; }

    /**
     * <p>The unique identifier of the knowledge base to which the data source
     * belongs.</p>
     */
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }

    /**
     * <p>The unique identifier of the knowledge base to which the data source
     * belongs.</p>
     */
    inline void SetKnowledgeBaseId(const Aws::String& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = value; }

    /**
     * <p>The unique identifier of the knowledge base to which the data source
     * belongs.</p>
     */
    inline void SetKnowledgeBaseId(Aws::String&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::move(value); }

    /**
     * <p>The unique identifier of the knowledge base to which the data source
     * belongs.</p>
     */
    inline void SetKnowledgeBaseId(const char* value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId.assign(value); }

    /**
     * <p>The unique identifier of the knowledge base to which the data source
     * belongs.</p>
     */
    inline DataSource& WithKnowledgeBaseId(const Aws::String& value) { SetKnowledgeBaseId(value); return *this;}

    /**
     * <p>The unique identifier of the knowledge base to which the data source
     * belongs.</p>
     */
    inline DataSource& WithKnowledgeBaseId(Aws::String&& value) { SetKnowledgeBaseId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the knowledge base to which the data source
     * belongs.</p>
     */
    inline DataSource& WithKnowledgeBaseId(const char* value) { SetKnowledgeBaseId(value); return *this;}


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
    inline DataSource& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the data source.</p>
     */
    inline DataSource& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the data source.</p>
     */
    inline DataSource& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>Contains details about the configuration of the server-side encryption.</p>
     */
    inline const ServerSideEncryptionConfiguration& GetServerSideEncryptionConfiguration() const{ return m_serverSideEncryptionConfiguration; }

    /**
     * <p>Contains details about the configuration of the server-side encryption.</p>
     */
    inline bool ServerSideEncryptionConfigurationHasBeenSet() const { return m_serverSideEncryptionConfigurationHasBeenSet; }

    /**
     * <p>Contains details about the configuration of the server-side encryption.</p>
     */
    inline void SetServerSideEncryptionConfiguration(const ServerSideEncryptionConfiguration& value) { m_serverSideEncryptionConfigurationHasBeenSet = true; m_serverSideEncryptionConfiguration = value; }

    /**
     * <p>Contains details about the configuration of the server-side encryption.</p>
     */
    inline void SetServerSideEncryptionConfiguration(ServerSideEncryptionConfiguration&& value) { m_serverSideEncryptionConfigurationHasBeenSet = true; m_serverSideEncryptionConfiguration = std::move(value); }

    /**
     * <p>Contains details about the configuration of the server-side encryption.</p>
     */
    inline DataSource& WithServerSideEncryptionConfiguration(const ServerSideEncryptionConfiguration& value) { SetServerSideEncryptionConfiguration(value); return *this;}

    /**
     * <p>Contains details about the configuration of the server-side encryption.</p>
     */
    inline DataSource& WithServerSideEncryptionConfiguration(ServerSideEncryptionConfiguration&& value) { SetServerSideEncryptionConfiguration(std::move(value)); return *this;}


    /**
     * <p>The status of the data source. The following statuses are possible:</p> <ul>
     * <li> <p>Available – The data source has been created and is ready for ingestion
     * into the knowledge base.</p> </li> <li> <p>Deleting – The data source is being
     * deleted.</p> </li> </ul>
     */
    inline const DataSourceStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the data source. The following statuses are possible:</p> <ul>
     * <li> <p>Available – The data source has been created and is ready for ingestion
     * into the knowledge base.</p> </li> <li> <p>Deleting – The data source is being
     * deleted.</p> </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the data source. The following statuses are possible:</p> <ul>
     * <li> <p>Available – The data source has been created and is ready for ingestion
     * into the knowledge base.</p> </li> <li> <p>Deleting – The data source is being
     * deleted.</p> </li> </ul>
     */
    inline void SetStatus(const DataSourceStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the data source. The following statuses are possible:</p> <ul>
     * <li> <p>Available – The data source has been created and is ready for ingestion
     * into the knowledge base.</p> </li> <li> <p>Deleting – The data source is being
     * deleted.</p> </li> </ul>
     */
    inline void SetStatus(DataSourceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the data source. The following statuses are possible:</p> <ul>
     * <li> <p>Available – The data source has been created and is ready for ingestion
     * into the knowledge base.</p> </li> <li> <p>Deleting – The data source is being
     * deleted.</p> </li> </ul>
     */
    inline DataSource& WithStatus(const DataSourceStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the data source. The following statuses are possible:</p> <ul>
     * <li> <p>Available – The data source has been created and is ready for ingestion
     * into the knowledge base.</p> </li> <li> <p>Deleting – The data source is being
     * deleted.</p> </li> </ul>
     */
    inline DataSource& WithStatus(DataSourceStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The time at which the data source was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The time at which the data source was last updated.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The time at which the data source was last updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The time at which the data source was last updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The time at which the data source was last updated.</p>
     */
    inline DataSource& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The time at which the data source was last updated.</p>
     */
    inline DataSource& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


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
    inline DataSource& WithVectorIngestionConfiguration(const VectorIngestionConfiguration& value) { SetVectorIngestionConfiguration(value); return *this;}

    /**
     * <p>Contains details about how to ingest the documents in the data source.</p>
     */
    inline DataSource& WithVectorIngestionConfiguration(VectorIngestionConfiguration&& value) { SetVectorIngestionConfiguration(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    DataDeletionPolicy m_dataDeletionPolicy;
    bool m_dataDeletionPolicyHasBeenSet = false;

    DataSourceConfiguration m_dataSourceConfiguration;
    bool m_dataSourceConfigurationHasBeenSet = false;

    Aws::String m_dataSourceId;
    bool m_dataSourceIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<Aws::String> m_failureReasons;
    bool m_failureReasonsHasBeenSet = false;

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ServerSideEncryptionConfiguration m_serverSideEncryptionConfiguration;
    bool m_serverSideEncryptionConfigurationHasBeenSet = false;

    DataSourceStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    VectorIngestionConfiguration m_vectorIngestionConfiguration;
    bool m_vectorIngestionConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
