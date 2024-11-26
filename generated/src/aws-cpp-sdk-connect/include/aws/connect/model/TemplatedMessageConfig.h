/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/connect/model/TemplateAttributes.h>
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
namespace Connect
{
namespace Model
{

  /**
   * <p>Information about template message configuration.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/TemplatedMessageConfig">AWS
   * API Reference</a></p>
   */
  class TemplatedMessageConfig
  {
  public:
    AWS_CONNECT_API TemplatedMessageConfig();
    AWS_CONNECT_API TemplatedMessageConfig(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API TemplatedMessageConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the knowledge base. Can be either the ID or the ARN. URLs
     * cannot contain the ARN.</p>
     */
    inline const Aws::String& GetKnowledgeBaseId() const{ return m_knowledgeBaseId; }
    inline bool KnowledgeBaseIdHasBeenSet() const { return m_knowledgeBaseIdHasBeenSet; }
    inline void SetKnowledgeBaseId(const Aws::String& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = value; }
    inline void SetKnowledgeBaseId(Aws::String&& value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId = std::move(value); }
    inline void SetKnowledgeBaseId(const char* value) { m_knowledgeBaseIdHasBeenSet = true; m_knowledgeBaseId.assign(value); }
    inline TemplatedMessageConfig& WithKnowledgeBaseId(const Aws::String& value) { SetKnowledgeBaseId(value); return *this;}
    inline TemplatedMessageConfig& WithKnowledgeBaseId(Aws::String&& value) { SetKnowledgeBaseId(std::move(value)); return *this;}
    inline TemplatedMessageConfig& WithKnowledgeBaseId(const char* value) { SetKnowledgeBaseId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the message template Id.</p>
     */
    inline const Aws::String& GetMessageTemplateId() const{ return m_messageTemplateId; }
    inline bool MessageTemplateIdHasBeenSet() const { return m_messageTemplateIdHasBeenSet; }
    inline void SetMessageTemplateId(const Aws::String& value) { m_messageTemplateIdHasBeenSet = true; m_messageTemplateId = value; }
    inline void SetMessageTemplateId(Aws::String&& value) { m_messageTemplateIdHasBeenSet = true; m_messageTemplateId = std::move(value); }
    inline void SetMessageTemplateId(const char* value) { m_messageTemplateIdHasBeenSet = true; m_messageTemplateId.assign(value); }
    inline TemplatedMessageConfig& WithMessageTemplateId(const Aws::String& value) { SetMessageTemplateId(value); return *this;}
    inline TemplatedMessageConfig& WithMessageTemplateId(Aws::String&& value) { SetMessageTemplateId(std::move(value)); return *this;}
    inline TemplatedMessageConfig& WithMessageTemplateId(const char* value) { SetMessageTemplateId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about template attributes, that is, CustomAttributes or
     * CustomerProfileAttributes.</p>
     */
    inline const TemplateAttributes& GetTemplateAttributes() const{ return m_templateAttributes; }
    inline bool TemplateAttributesHasBeenSet() const { return m_templateAttributesHasBeenSet; }
    inline void SetTemplateAttributes(const TemplateAttributes& value) { m_templateAttributesHasBeenSet = true; m_templateAttributes = value; }
    inline void SetTemplateAttributes(TemplateAttributes&& value) { m_templateAttributesHasBeenSet = true; m_templateAttributes = std::move(value); }
    inline TemplatedMessageConfig& WithTemplateAttributes(const TemplateAttributes& value) { SetTemplateAttributes(value); return *this;}
    inline TemplatedMessageConfig& WithTemplateAttributes(TemplateAttributes&& value) { SetTemplateAttributes(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_knowledgeBaseId;
    bool m_knowledgeBaseIdHasBeenSet = false;

    Aws::String m_messageTemplateId;
    bool m_messageTemplateIdHasBeenSet = false;

    TemplateAttributes m_templateAttributes;
    bool m_templateAttributesHasBeenSet = false;
  };

} // namespace Model
} // namespace Connect
} // namespace Aws
