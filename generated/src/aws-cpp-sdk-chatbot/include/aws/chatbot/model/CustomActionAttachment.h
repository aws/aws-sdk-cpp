/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chatbot/Chatbot_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/chatbot/model/CustomActionAttachmentCriteria.h>
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
namespace chatbot
{
namespace Model
{

  /**
   * <p>Defines when a custom action button should be attached to a
   * notification.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chatbot-2017-10-11/CustomActionAttachment">AWS
   * API Reference</a></p>
   */
  class CustomActionAttachment
  {
  public:
    AWS_CHATBOT_API CustomActionAttachment();
    AWS_CHATBOT_API CustomActionAttachment(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHATBOT_API CustomActionAttachment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHATBOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of notification that the custom action should be attached to.</p>
     */
    inline const Aws::String& GetNotificationType() const{ return m_notificationType; }
    inline bool NotificationTypeHasBeenSet() const { return m_notificationTypeHasBeenSet; }
    inline void SetNotificationType(const Aws::String& value) { m_notificationTypeHasBeenSet = true; m_notificationType = value; }
    inline void SetNotificationType(Aws::String&& value) { m_notificationTypeHasBeenSet = true; m_notificationType = std::move(value); }
    inline void SetNotificationType(const char* value) { m_notificationTypeHasBeenSet = true; m_notificationType.assign(value); }
    inline CustomActionAttachment& WithNotificationType(const Aws::String& value) { SetNotificationType(value); return *this;}
    inline CustomActionAttachment& WithNotificationType(Aws::String&& value) { SetNotificationType(std::move(value)); return *this;}
    inline CustomActionAttachment& WithNotificationType(const char* value) { SetNotificationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The text of the button that appears on the notification.</p>
     */
    inline const Aws::String& GetButtonText() const{ return m_buttonText; }
    inline bool ButtonTextHasBeenSet() const { return m_buttonTextHasBeenSet; }
    inline void SetButtonText(const Aws::String& value) { m_buttonTextHasBeenSet = true; m_buttonText = value; }
    inline void SetButtonText(Aws::String&& value) { m_buttonTextHasBeenSet = true; m_buttonText = std::move(value); }
    inline void SetButtonText(const char* value) { m_buttonTextHasBeenSet = true; m_buttonText.assign(value); }
    inline CustomActionAttachment& WithButtonText(const Aws::String& value) { SetButtonText(value); return *this;}
    inline CustomActionAttachment& WithButtonText(Aws::String&& value) { SetButtonText(std::move(value)); return *this;}
    inline CustomActionAttachment& WithButtonText(const char* value) { SetButtonText(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The criteria for when a button should be shown based on values in the
     * notification.</p>
     */
    inline const Aws::Vector<CustomActionAttachmentCriteria>& GetCriteria() const{ return m_criteria; }
    inline bool CriteriaHasBeenSet() const { return m_criteriaHasBeenSet; }
    inline void SetCriteria(const Aws::Vector<CustomActionAttachmentCriteria>& value) { m_criteriaHasBeenSet = true; m_criteria = value; }
    inline void SetCriteria(Aws::Vector<CustomActionAttachmentCriteria>&& value) { m_criteriaHasBeenSet = true; m_criteria = std::move(value); }
    inline CustomActionAttachment& WithCriteria(const Aws::Vector<CustomActionAttachmentCriteria>& value) { SetCriteria(value); return *this;}
    inline CustomActionAttachment& WithCriteria(Aws::Vector<CustomActionAttachmentCriteria>&& value) { SetCriteria(std::move(value)); return *this;}
    inline CustomActionAttachment& AddCriteria(const CustomActionAttachmentCriteria& value) { m_criteriaHasBeenSet = true; m_criteria.push_back(value); return *this; }
    inline CustomActionAttachment& AddCriteria(CustomActionAttachmentCriteria&& value) { m_criteriaHasBeenSet = true; m_criteria.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The variables to extract from the notification.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetVariables() const{ return m_variables; }
    inline bool VariablesHasBeenSet() const { return m_variablesHasBeenSet; }
    inline void SetVariables(const Aws::Map<Aws::String, Aws::String>& value) { m_variablesHasBeenSet = true; m_variables = value; }
    inline void SetVariables(Aws::Map<Aws::String, Aws::String>&& value) { m_variablesHasBeenSet = true; m_variables = std::move(value); }
    inline CustomActionAttachment& WithVariables(const Aws::Map<Aws::String, Aws::String>& value) { SetVariables(value); return *this;}
    inline CustomActionAttachment& WithVariables(Aws::Map<Aws::String, Aws::String>&& value) { SetVariables(std::move(value)); return *this;}
    inline CustomActionAttachment& AddVariables(const Aws::String& key, const Aws::String& value) { m_variablesHasBeenSet = true; m_variables.emplace(key, value); return *this; }
    inline CustomActionAttachment& AddVariables(Aws::String&& key, const Aws::String& value) { m_variablesHasBeenSet = true; m_variables.emplace(std::move(key), value); return *this; }
    inline CustomActionAttachment& AddVariables(const Aws::String& key, Aws::String&& value) { m_variablesHasBeenSet = true; m_variables.emplace(key, std::move(value)); return *this; }
    inline CustomActionAttachment& AddVariables(Aws::String&& key, Aws::String&& value) { m_variablesHasBeenSet = true; m_variables.emplace(std::move(key), std::move(value)); return *this; }
    inline CustomActionAttachment& AddVariables(const char* key, Aws::String&& value) { m_variablesHasBeenSet = true; m_variables.emplace(key, std::move(value)); return *this; }
    inline CustomActionAttachment& AddVariables(Aws::String&& key, const char* value) { m_variablesHasBeenSet = true; m_variables.emplace(std::move(key), value); return *this; }
    inline CustomActionAttachment& AddVariables(const char* key, const char* value) { m_variablesHasBeenSet = true; m_variables.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_notificationType;
    bool m_notificationTypeHasBeenSet = false;

    Aws::String m_buttonText;
    bool m_buttonTextHasBeenSet = false;

    Aws::Vector<CustomActionAttachmentCriteria> m_criteria;
    bool m_criteriaHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_variables;
    bool m_variablesHasBeenSet = false;
  };

} // namespace Model
} // namespace chatbot
} // namespace Aws
