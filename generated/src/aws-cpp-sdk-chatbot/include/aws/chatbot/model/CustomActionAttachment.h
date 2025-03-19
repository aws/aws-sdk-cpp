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
    AWS_CHATBOT_API CustomActionAttachment() = default;
    AWS_CHATBOT_API CustomActionAttachment(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHATBOT_API CustomActionAttachment& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHATBOT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of notification that the custom action should be attached to.</p>
     */
    inline const Aws::String& GetNotificationType() const { return m_notificationType; }
    inline bool NotificationTypeHasBeenSet() const { return m_notificationTypeHasBeenSet; }
    template<typename NotificationTypeT = Aws::String>
    void SetNotificationType(NotificationTypeT&& value) { m_notificationTypeHasBeenSet = true; m_notificationType = std::forward<NotificationTypeT>(value); }
    template<typename NotificationTypeT = Aws::String>
    CustomActionAttachment& WithNotificationType(NotificationTypeT&& value) { SetNotificationType(std::forward<NotificationTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The text of the button that appears on the notification.</p>
     */
    inline const Aws::String& GetButtonText() const { return m_buttonText; }
    inline bool ButtonTextHasBeenSet() const { return m_buttonTextHasBeenSet; }
    template<typename ButtonTextT = Aws::String>
    void SetButtonText(ButtonTextT&& value) { m_buttonTextHasBeenSet = true; m_buttonText = std::forward<ButtonTextT>(value); }
    template<typename ButtonTextT = Aws::String>
    CustomActionAttachment& WithButtonText(ButtonTextT&& value) { SetButtonText(std::forward<ButtonTextT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The criteria for when a button should be shown based on values in the
     * notification.</p>
     */
    inline const Aws::Vector<CustomActionAttachmentCriteria>& GetCriteria() const { return m_criteria; }
    inline bool CriteriaHasBeenSet() const { return m_criteriaHasBeenSet; }
    template<typename CriteriaT = Aws::Vector<CustomActionAttachmentCriteria>>
    void SetCriteria(CriteriaT&& value) { m_criteriaHasBeenSet = true; m_criteria = std::forward<CriteriaT>(value); }
    template<typename CriteriaT = Aws::Vector<CustomActionAttachmentCriteria>>
    CustomActionAttachment& WithCriteria(CriteriaT&& value) { SetCriteria(std::forward<CriteriaT>(value)); return *this;}
    template<typename CriteriaT = CustomActionAttachmentCriteria>
    CustomActionAttachment& AddCriteria(CriteriaT&& value) { m_criteriaHasBeenSet = true; m_criteria.emplace_back(std::forward<CriteriaT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The variables to extract from the notification.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetVariables() const { return m_variables; }
    inline bool VariablesHasBeenSet() const { return m_variablesHasBeenSet; }
    template<typename VariablesT = Aws::Map<Aws::String, Aws::String>>
    void SetVariables(VariablesT&& value) { m_variablesHasBeenSet = true; m_variables = std::forward<VariablesT>(value); }
    template<typename VariablesT = Aws::Map<Aws::String, Aws::String>>
    CustomActionAttachment& WithVariables(VariablesT&& value) { SetVariables(std::forward<VariablesT>(value)); return *this;}
    template<typename VariablesKeyT = Aws::String, typename VariablesValueT = Aws::String>
    CustomActionAttachment& AddVariables(VariablesKeyT&& key, VariablesValueT&& value) {
      m_variablesHasBeenSet = true; m_variables.emplace(std::forward<VariablesKeyT>(key), std::forward<VariablesValueT>(value)); return *this;
    }
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
