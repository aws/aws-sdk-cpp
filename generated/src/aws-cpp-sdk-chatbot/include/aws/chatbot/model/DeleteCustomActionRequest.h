/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chatbot/Chatbot_EXPORTS.h>
#include <aws/chatbot/ChatbotRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace chatbot
{
namespace Model
{

  /**
   */
  class DeleteCustomActionRequest : public ChatbotRequest
  {
  public:
    AWS_CHATBOT_API DeleteCustomActionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteCustomAction"; }

    AWS_CHATBOT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The fully defined ARN of the custom action.</p>
     */
    inline const Aws::String& GetCustomActionArn() const { return m_customActionArn; }
    inline bool CustomActionArnHasBeenSet() const { return m_customActionArnHasBeenSet; }
    template<typename CustomActionArnT = Aws::String>
    void SetCustomActionArn(CustomActionArnT&& value) { m_customActionArnHasBeenSet = true; m_customActionArn = std::forward<CustomActionArnT>(value); }
    template<typename CustomActionArnT = Aws::String>
    DeleteCustomActionRequest& WithCustomActionArn(CustomActionArnT&& value) { SetCustomActionArn(std::forward<CustomActionArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_customActionArn;
    bool m_customActionArnHasBeenSet = false;
  };

} // namespace Model
} // namespace chatbot
} // namespace Aws
