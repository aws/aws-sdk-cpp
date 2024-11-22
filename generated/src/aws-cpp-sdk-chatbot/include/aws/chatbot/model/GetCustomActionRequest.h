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
  class GetCustomActionRequest : public ChatbotRequest
  {
  public:
    AWS_CHATBOT_API GetCustomActionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetCustomAction"; }

    AWS_CHATBOT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Returns the fully defined Amazon Resource Name (ARN) of the custom
     * action.</p>
     */
    inline const Aws::String& GetCustomActionArn() const{ return m_customActionArn; }
    inline bool CustomActionArnHasBeenSet() const { return m_customActionArnHasBeenSet; }
    inline void SetCustomActionArn(const Aws::String& value) { m_customActionArnHasBeenSet = true; m_customActionArn = value; }
    inline void SetCustomActionArn(Aws::String&& value) { m_customActionArnHasBeenSet = true; m_customActionArn = std::move(value); }
    inline void SetCustomActionArn(const char* value) { m_customActionArnHasBeenSet = true; m_customActionArn.assign(value); }
    inline GetCustomActionRequest& WithCustomActionArn(const Aws::String& value) { SetCustomActionArn(value); return *this;}
    inline GetCustomActionRequest& WithCustomActionArn(Aws::String&& value) { SetCustomActionArn(std::move(value)); return *this;}
    inline GetCustomActionRequest& WithCustomActionArn(const char* value) { SetCustomActionArn(value); return *this;}
    ///@}
  private:

    Aws::String m_customActionArn;
    bool m_customActionArnHasBeenSet = false;
  };

} // namespace Model
} // namespace chatbot
} // namespace Aws
