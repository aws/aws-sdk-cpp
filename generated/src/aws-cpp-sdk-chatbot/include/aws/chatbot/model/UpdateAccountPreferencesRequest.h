/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chatbot/Chatbot_EXPORTS.h>
#include <aws/chatbot/ChatbotRequest.h>

namespace Aws
{
namespace chatbot
{
namespace Model
{

  /**
   */
  class UpdateAccountPreferencesRequest : public ChatbotRequest
  {
  public:
    AWS_CHATBOT_API UpdateAccountPreferencesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAccountPreferences"; }

    AWS_CHATBOT_API Aws::String SerializePayload() const override;


    /**
     * Enables use of a user role requirement in your chat configuration.
     */
    inline bool GetUserAuthorizationRequired() const{ return m_userAuthorizationRequired; }

    /**
     * Enables use of a user role requirement in your chat configuration.
     */
    inline bool UserAuthorizationRequiredHasBeenSet() const { return m_userAuthorizationRequiredHasBeenSet; }

    /**
     * Enables use of a user role requirement in your chat configuration.
     */
    inline void SetUserAuthorizationRequired(bool value) { m_userAuthorizationRequiredHasBeenSet = true; m_userAuthorizationRequired = value; }

    /**
     * Enables use of a user role requirement in your chat configuration.
     */
    inline UpdateAccountPreferencesRequest& WithUserAuthorizationRequired(bool value) { SetUserAuthorizationRequired(value); return *this;}


    /**
     * Turns on training data collection. This helps improve the AWS Chatbot experience
     * by allowing AWS Chatbot to store and use your customer information, such as AWS
     * Chatbot configurations, notifications, user inputs, AWS Chatbot generated
     * responses, and interaction data. This data helps us to continuously improve and
     * develop Artificial Intelligence (AI) technologies. Your data is not shared with
     * any third parties and is protected using sophisticated controls to prevent
     * unauthorized access and misuse. AWS Chatbot does not store or use interactions
     * in chat channels with Amazon Q for training AWS Chatbot’s AI technologies.
     */
    inline bool GetTrainingDataCollectionEnabled() const{ return m_trainingDataCollectionEnabled; }

    /**
     * Turns on training data collection. This helps improve the AWS Chatbot experience
     * by allowing AWS Chatbot to store and use your customer information, such as AWS
     * Chatbot configurations, notifications, user inputs, AWS Chatbot generated
     * responses, and interaction data. This data helps us to continuously improve and
     * develop Artificial Intelligence (AI) technologies. Your data is not shared with
     * any third parties and is protected using sophisticated controls to prevent
     * unauthorized access and misuse. AWS Chatbot does not store or use interactions
     * in chat channels with Amazon Q for training AWS Chatbot’s AI technologies.
     */
    inline bool TrainingDataCollectionEnabledHasBeenSet() const { return m_trainingDataCollectionEnabledHasBeenSet; }

    /**
     * Turns on training data collection. This helps improve the AWS Chatbot experience
     * by allowing AWS Chatbot to store and use your customer information, such as AWS
     * Chatbot configurations, notifications, user inputs, AWS Chatbot generated
     * responses, and interaction data. This data helps us to continuously improve and
     * develop Artificial Intelligence (AI) technologies. Your data is not shared with
     * any third parties and is protected using sophisticated controls to prevent
     * unauthorized access and misuse. AWS Chatbot does not store or use interactions
     * in chat channels with Amazon Q for training AWS Chatbot’s AI technologies.
     */
    inline void SetTrainingDataCollectionEnabled(bool value) { m_trainingDataCollectionEnabledHasBeenSet = true; m_trainingDataCollectionEnabled = value; }

    /**
     * Turns on training data collection. This helps improve the AWS Chatbot experience
     * by allowing AWS Chatbot to store and use your customer information, such as AWS
     * Chatbot configurations, notifications, user inputs, AWS Chatbot generated
     * responses, and interaction data. This data helps us to continuously improve and
     * develop Artificial Intelligence (AI) technologies. Your data is not shared with
     * any third parties and is protected using sophisticated controls to prevent
     * unauthorized access and misuse. AWS Chatbot does not store or use interactions
     * in chat channels with Amazon Q for training AWS Chatbot’s AI technologies.
     */
    inline UpdateAccountPreferencesRequest& WithTrainingDataCollectionEnabled(bool value) { SetTrainingDataCollectionEnabled(value); return *this;}

  private:

    bool m_userAuthorizationRequired;
    bool m_userAuthorizationRequiredHasBeenSet = false;

    bool m_trainingDataCollectionEnabled;
    bool m_trainingDataCollectionEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace chatbot
} // namespace Aws
