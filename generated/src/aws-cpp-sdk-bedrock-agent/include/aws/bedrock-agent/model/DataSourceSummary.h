/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/DataSourceStatus.h>
#include <aws/core/utils/DateTime.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/DataSourceSummary">AWS
   * API Reference</a></p>
   */
  class DataSourceSummary
  {
  public:
    AWS_BEDROCKAGENT_API DataSourceSummary();
    AWS_BEDROCKAGENT_API DataSourceSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API DataSourceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline DataSourceSummary& WithDataSourceId(const Aws::String& value) { SetDataSourceId(value); return *this;}

    /**
     * <p>The unique identifier of the data source.</p>
     */
    inline DataSourceSummary& WithDataSourceId(Aws::String&& value) { SetDataSourceId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the data source.</p>
     */
    inline DataSourceSummary& WithDataSourceId(const char* value) { SetDataSourceId(value); return *this;}


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
    inline DataSourceSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the data source.</p>
     */
    inline DataSourceSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the data source.</p>
     */
    inline DataSourceSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


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
    inline DataSourceSummary& WithKnowledgeBaseId(const Aws::String& value) { SetKnowledgeBaseId(value); return *this;}

    /**
     * <p>The unique identifier of the knowledge base to which the data source
     * belongs.</p>
     */
    inline DataSourceSummary& WithKnowledgeBaseId(Aws::String&& value) { SetKnowledgeBaseId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the knowledge base to which the data source
     * belongs.</p>
     */
    inline DataSourceSummary& WithKnowledgeBaseId(const char* value) { SetKnowledgeBaseId(value); return *this;}


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
    inline DataSourceSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the data source.</p>
     */
    inline DataSourceSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the data source.</p>
     */
    inline DataSourceSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The status of the data source.</p>
     */
    inline const DataSourceStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the data source.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the data source.</p>
     */
    inline void SetStatus(const DataSourceStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the data source.</p>
     */
    inline void SetStatus(DataSourceStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the data source.</p>
     */
    inline DataSourceSummary& WithStatus(const DataSourceStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the data source.</p>
     */
    inline DataSourceSummary& WithStatus(DataSourceStatus&& value) { SetStatus(std::move(value)); return *this;}


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
    inline DataSourceSummary& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The time at which the data source was last updated.</p>
     */
    inline DataSourceSummary& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}

  private:

    Aws::String m_dataSourceId;
    bool m_dataSourceIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    DataSourceStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
