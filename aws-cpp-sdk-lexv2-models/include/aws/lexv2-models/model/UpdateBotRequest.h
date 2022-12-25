/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/LexModelsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/DataPrivacy.h>
#include <utility>

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

  /**
   */
  class UpdateBotRequest : public LexModelsV2Request
  {
  public:
    AWS_LEXMODELSV2_API UpdateBotRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateBot"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;


    /**
     * <p>The unique identifier of the bot to update. This identifier is returned by
     * the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_CreateBot.html">CreateBot</a>
     * operation.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The unique identifier of the bot to update. This identifier is returned by
     * the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_CreateBot.html">CreateBot</a>
     * operation.</p>
     */
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }

    /**
     * <p>The unique identifier of the bot to update. This identifier is returned by
     * the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_CreateBot.html">CreateBot</a>
     * operation.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botIdHasBeenSet = true; m_botId = value; }

    /**
     * <p>The unique identifier of the bot to update. This identifier is returned by
     * the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_CreateBot.html">CreateBot</a>
     * operation.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botIdHasBeenSet = true; m_botId = std::move(value); }

    /**
     * <p>The unique identifier of the bot to update. This identifier is returned by
     * the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_CreateBot.html">CreateBot</a>
     * operation.</p>
     */
    inline void SetBotId(const char* value) { m_botIdHasBeenSet = true; m_botId.assign(value); }

    /**
     * <p>The unique identifier of the bot to update. This identifier is returned by
     * the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_CreateBot.html">CreateBot</a>
     * operation.</p>
     */
    inline UpdateBotRequest& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The unique identifier of the bot to update. This identifier is returned by
     * the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_CreateBot.html">CreateBot</a>
     * operation.</p>
     */
    inline UpdateBotRequest& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the bot to update. This identifier is returned by
     * the <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/API_CreateBot.html">CreateBot</a>
     * operation.</p>
     */
    inline UpdateBotRequest& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>The new name of the bot. The name must be unique in the account that creates
     * the bot.</p>
     */
    inline const Aws::String& GetBotName() const{ return m_botName; }

    /**
     * <p>The new name of the bot. The name must be unique in the account that creates
     * the bot.</p>
     */
    inline bool BotNameHasBeenSet() const { return m_botNameHasBeenSet; }

    /**
     * <p>The new name of the bot. The name must be unique in the account that creates
     * the bot.</p>
     */
    inline void SetBotName(const Aws::String& value) { m_botNameHasBeenSet = true; m_botName = value; }

    /**
     * <p>The new name of the bot. The name must be unique in the account that creates
     * the bot.</p>
     */
    inline void SetBotName(Aws::String&& value) { m_botNameHasBeenSet = true; m_botName = std::move(value); }

    /**
     * <p>The new name of the bot. The name must be unique in the account that creates
     * the bot.</p>
     */
    inline void SetBotName(const char* value) { m_botNameHasBeenSet = true; m_botName.assign(value); }

    /**
     * <p>The new name of the bot. The name must be unique in the account that creates
     * the bot.</p>
     */
    inline UpdateBotRequest& WithBotName(const Aws::String& value) { SetBotName(value); return *this;}

    /**
     * <p>The new name of the bot. The name must be unique in the account that creates
     * the bot.</p>
     */
    inline UpdateBotRequest& WithBotName(Aws::String&& value) { SetBotName(std::move(value)); return *this;}

    /**
     * <p>The new name of the bot. The name must be unique in the account that creates
     * the bot.</p>
     */
    inline UpdateBotRequest& WithBotName(const char* value) { SetBotName(value); return *this;}


    /**
     * <p>A description of the bot.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the bot.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the bot.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the bot.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the bot.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the bot.</p>
     */
    inline UpdateBotRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the bot.</p>
     */
    inline UpdateBotRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the bot.</p>
     */
    inline UpdateBotRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that has permissions to access
     * the bot.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that has permissions to access
     * the bot.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that has permissions to access
     * the bot.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that has permissions to access
     * the bot.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that has permissions to access
     * the bot.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that has permissions to access
     * the bot.</p>
     */
    inline UpdateBotRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that has permissions to access
     * the bot.</p>
     */
    inline UpdateBotRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of an IAM role that has permissions to access
     * the bot.</p>
     */
    inline UpdateBotRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>Provides information on additional privacy protections Amazon Lex should use
     * with the bot's data.</p>
     */
    inline const DataPrivacy& GetDataPrivacy() const{ return m_dataPrivacy; }

    /**
     * <p>Provides information on additional privacy protections Amazon Lex should use
     * with the bot's data.</p>
     */
    inline bool DataPrivacyHasBeenSet() const { return m_dataPrivacyHasBeenSet; }

    /**
     * <p>Provides information on additional privacy protections Amazon Lex should use
     * with the bot's data.</p>
     */
    inline void SetDataPrivacy(const DataPrivacy& value) { m_dataPrivacyHasBeenSet = true; m_dataPrivacy = value; }

    /**
     * <p>Provides information on additional privacy protections Amazon Lex should use
     * with the bot's data.</p>
     */
    inline void SetDataPrivacy(DataPrivacy&& value) { m_dataPrivacyHasBeenSet = true; m_dataPrivacy = std::move(value); }

    /**
     * <p>Provides information on additional privacy protections Amazon Lex should use
     * with the bot's data.</p>
     */
    inline UpdateBotRequest& WithDataPrivacy(const DataPrivacy& value) { SetDataPrivacy(value); return *this;}

    /**
     * <p>Provides information on additional privacy protections Amazon Lex should use
     * with the bot's data.</p>
     */
    inline UpdateBotRequest& WithDataPrivacy(DataPrivacy&& value) { SetDataPrivacy(std::move(value)); return *this;}


    /**
     * <p>The time, in seconds, that Amazon Lex should keep information about a user's
     * conversation with the bot.</p> <p>A user interaction remains active for the
     * amount of time specified. If no conversation occurs during this time, the
     * session expires and Amazon Lex deletes any data provided before the timeout.</p>
     * <p>You can specify between 60 (1 minute) and 86,400 (24 hours) seconds.</p>
     */
    inline int GetIdleSessionTTLInSeconds() const{ return m_idleSessionTTLInSeconds; }

    /**
     * <p>The time, in seconds, that Amazon Lex should keep information about a user's
     * conversation with the bot.</p> <p>A user interaction remains active for the
     * amount of time specified. If no conversation occurs during this time, the
     * session expires and Amazon Lex deletes any data provided before the timeout.</p>
     * <p>You can specify between 60 (1 minute) and 86,400 (24 hours) seconds.</p>
     */
    inline bool IdleSessionTTLInSecondsHasBeenSet() const { return m_idleSessionTTLInSecondsHasBeenSet; }

    /**
     * <p>The time, in seconds, that Amazon Lex should keep information about a user's
     * conversation with the bot.</p> <p>A user interaction remains active for the
     * amount of time specified. If no conversation occurs during this time, the
     * session expires and Amazon Lex deletes any data provided before the timeout.</p>
     * <p>You can specify between 60 (1 minute) and 86,400 (24 hours) seconds.</p>
     */
    inline void SetIdleSessionTTLInSeconds(int value) { m_idleSessionTTLInSecondsHasBeenSet = true; m_idleSessionTTLInSeconds = value; }

    /**
     * <p>The time, in seconds, that Amazon Lex should keep information about a user's
     * conversation with the bot.</p> <p>A user interaction remains active for the
     * amount of time specified. If no conversation occurs during this time, the
     * session expires and Amazon Lex deletes any data provided before the timeout.</p>
     * <p>You can specify between 60 (1 minute) and 86,400 (24 hours) seconds.</p>
     */
    inline UpdateBotRequest& WithIdleSessionTTLInSeconds(int value) { SetIdleSessionTTLInSeconds(value); return *this;}

  private:

    Aws::String m_botId;
    bool m_botIdHasBeenSet = false;

    Aws::String m_botName;
    bool m_botNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    DataPrivacy m_dataPrivacy;
    bool m_dataPrivacyHasBeenSet = false;

    int m_idleSessionTTLInSeconds;
    bool m_idleSessionTTLInSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
