/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chatbot/Chatbot_EXPORTS.h>

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
   * Preferences which apply for AWS Chatbot usage in the calling AWS
   * account.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/chatbot-2017-10-11/AccountPreferences">AWS
   * API Reference</a></p>
   */
  class AccountPreferences
  {
  public:
    AWS_CHATBOT_API AccountPreferences();
    AWS_CHATBOT_API AccountPreferences(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHATBOT_API AccountPreferences& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CHATBOT_API Aws::Utils::Json::JsonValue Jsonize() const;


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
    inline AccountPreferences& WithUserAuthorizationRequired(bool value) { SetUserAuthorizationRequired(value); return *this;}


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
    inline AccountPreferences& WithTrainingDataCollectionEnabled(bool value) { SetTrainingDataCollectionEnabled(value); return *this;}

  private:

    bool m_userAuthorizationRequired;
    bool m_userAuthorizationRequiredHasBeenSet = false;

    bool m_trainingDataCollectionEnabled;
    bool m_trainingDataCollectionEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace chatbot
} // namespace Aws
