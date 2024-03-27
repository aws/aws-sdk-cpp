/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agent/BedrockAgent_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agent/model/KnowledgeBaseStatus.h>
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
   * <p>Contains details about a knowledge base.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agent-2023-06-05/KnowledgeBaseSummary">AWS
   * API Reference</a></p>
   */
  class KnowledgeBaseSummary
  {
  public:
    AWS_BEDROCKAGENT_API KnowledgeBaseSummary();
    AWS_BEDROCKAGENT_API KnowledgeBaseSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API KnowledgeBaseSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The description of the knowledge base.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>The description of the knowledge base.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>The description of the knowledge base.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>The description of the knowledge base.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>The description of the knowledge base.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>The description of the knowledge base.</p>
     */
    inline KnowledgeBaseSummary& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>The description of the knowledge base.</p>
     */
    inline KnowledgeBaseSummary& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the knowledge base.</p>
     */
    inline KnowledgeBaseSummary& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The unique identifier of the knowledge base.</p>
     */
    inline const Aws::String& GetKnowledgeBaseId() const{ return m_knowledgeBaseId; }

    /**
     * <p>The unique identifier of the knowledge base.</p>
     */
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }

    /**
     * <p>The unique identifier of the knowledge base.</p>
     */
    inline void SetKnowledgeBaseId(const Aws::String& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = value; }

    /**
     * <p>The unique identifier of the knowledge base.</p>
     */
    inline void SetKnowledgeBaseId(Aws::String&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::move(value); }

    /**
     * <p>The unique identifier of the knowledge base.</p>
     */
    inline void SetKnowledgeBaseId(const char* value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId.assign(value); }

    /**
     * <p>The unique identifier of the knowledge base.</p>
     */
    inline KnowledgeBaseSummary& WithKnowledgeBaseId(const Aws::String& value) { SetKnowledgeBaseId(value); return *this;}

    /**
     * <p>The unique identifier of the knowledge base.</p>
     */
    inline KnowledgeBaseSummary& WithKnowledgeBaseId(Aws::String&& value) { SetKnowledgeBaseId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the knowledge base.</p>
     */
    inline KnowledgeBaseSummary& WithKnowledgeBaseId(const char* value) { SetKnowledgeBaseId(value); return *this;}


    /**
     * <p>The name of the knowledge base.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the knowledge base.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the knowledge base.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the knowledge base.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the knowledge base.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the knowledge base.</p>
     */
    inline KnowledgeBaseSummary& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the knowledge base.</p>
     */
    inline KnowledgeBaseSummary& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the knowledge base.</p>
     */
    inline KnowledgeBaseSummary& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The status of the knowledge base.</p>
     */
    inline const KnowledgeBaseStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the knowledge base.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the knowledge base.</p>
     */
    inline void SetStatus(const KnowledgeBaseStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the knowledge base.</p>
     */
    inline void SetStatus(KnowledgeBaseStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the knowledge base.</p>
     */
    inline KnowledgeBaseSummary& WithStatus(const KnowledgeBaseStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the knowledge base.</p>
     */
    inline KnowledgeBaseSummary& WithStatus(KnowledgeBaseStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The time at which the knowledge base was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    /**
     * <p>The time at which the knowledge base was last updated.</p>
     */
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    /**
     * <p>The time at which the knowledge base was last updated.</p>
     */
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    /**
     * <p>The time at which the knowledge base was last updated.</p>
     */
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    /**
     * <p>The time at which the knowledge base was last updated.</p>
     */
    inline KnowledgeBaseSummary& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    /**
     * <p>The time at which the knowledge base was last updated.</p>
     */
    inline KnowledgeBaseSummary& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}

  private:

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    KnowledgeBaseStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
