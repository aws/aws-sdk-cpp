/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lex-models/model/ChannelType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/lex-models/model/ChannelStatus.h>
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
namespace LexModelBuildingService
{
namespace Model
{

  /**
   * <p>Represents an association between an Amazon Lex bot and an external messaging
   * platform.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/BotChannelAssociation">AWS
   * API Reference</a></p>
   */
  class AWS_LEXMODELBUILDINGSERVICE_API BotChannelAssociation
  {
  public:
    BotChannelAssociation();
    BotChannelAssociation(Aws::Utils::Json::JsonView jsonValue);
    BotChannelAssociation& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the association between the bot and the channel. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the association between the bot and the channel. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the association between the bot and the channel. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the association between the bot and the channel. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the association between the bot and the channel. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the association between the bot and the channel. </p>
     */
    inline BotChannelAssociation& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the association between the bot and the channel. </p>
     */
    inline BotChannelAssociation& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the association between the bot and the channel. </p>
     */
    inline BotChannelAssociation& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A text description of the association you are creating. </p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A text description of the association you are creating. </p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A text description of the association you are creating. </p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A text description of the association you are creating. </p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A text description of the association you are creating. </p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A text description of the association you are creating. </p>
     */
    inline BotChannelAssociation& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A text description of the association you are creating. </p>
     */
    inline BotChannelAssociation& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A text description of the association you are creating. </p>
     */
    inline BotChannelAssociation& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>An alias pointing to the specific version of the Amazon Lex bot to which this
     * association is being made. </p>
     */
    inline const Aws::String& GetBotAlias() const{ return m_botAlias; }

    /**
     * <p>An alias pointing to the specific version of the Amazon Lex bot to which this
     * association is being made. </p>
     */
    inline bool BotAliasHasBeenSet() const { return m_botAliasHasBeenSet; }

    /**
     * <p>An alias pointing to the specific version of the Amazon Lex bot to which this
     * association is being made. </p>
     */
    inline void SetBotAlias(const Aws::String& value) { m_botAliasHasBeenSet = true; m_botAlias = value; }

    /**
     * <p>An alias pointing to the specific version of the Amazon Lex bot to which this
     * association is being made. </p>
     */
    inline void SetBotAlias(Aws::String&& value) { m_botAliasHasBeenSet = true; m_botAlias = std::move(value); }

    /**
     * <p>An alias pointing to the specific version of the Amazon Lex bot to which this
     * association is being made. </p>
     */
    inline void SetBotAlias(const char* value) { m_botAliasHasBeenSet = true; m_botAlias.assign(value); }

    /**
     * <p>An alias pointing to the specific version of the Amazon Lex bot to which this
     * association is being made. </p>
     */
    inline BotChannelAssociation& WithBotAlias(const Aws::String& value) { SetBotAlias(value); return *this;}

    /**
     * <p>An alias pointing to the specific version of the Amazon Lex bot to which this
     * association is being made. </p>
     */
    inline BotChannelAssociation& WithBotAlias(Aws::String&& value) { SetBotAlias(std::move(value)); return *this;}

    /**
     * <p>An alias pointing to the specific version of the Amazon Lex bot to which this
     * association is being made. </p>
     */
    inline BotChannelAssociation& WithBotAlias(const char* value) { SetBotAlias(value); return *this;}


    /**
     * <p>The name of the Amazon Lex bot to which this association is being made. </p>
     * <note> <p>Currently, Amazon Lex supports associations with Facebook and Slack,
     * and Twilio.</p> </note>
     */
    inline const Aws::String& GetBotName() const{ return m_botName; }

    /**
     * <p>The name of the Amazon Lex bot to which this association is being made. </p>
     * <note> <p>Currently, Amazon Lex supports associations with Facebook and Slack,
     * and Twilio.</p> </note>
     */
    inline bool BotNameHasBeenSet() const { return m_botNameHasBeenSet; }

    /**
     * <p>The name of the Amazon Lex bot to which this association is being made. </p>
     * <note> <p>Currently, Amazon Lex supports associations with Facebook and Slack,
     * and Twilio.</p> </note>
     */
    inline void SetBotName(const Aws::String& value) { m_botNameHasBeenSet = true; m_botName = value; }

    /**
     * <p>The name of the Amazon Lex bot to which this association is being made. </p>
     * <note> <p>Currently, Amazon Lex supports associations with Facebook and Slack,
     * and Twilio.</p> </note>
     */
    inline void SetBotName(Aws::String&& value) { m_botNameHasBeenSet = true; m_botName = std::move(value); }

    /**
     * <p>The name of the Amazon Lex bot to which this association is being made. </p>
     * <note> <p>Currently, Amazon Lex supports associations with Facebook and Slack,
     * and Twilio.</p> </note>
     */
    inline void SetBotName(const char* value) { m_botNameHasBeenSet = true; m_botName.assign(value); }

    /**
     * <p>The name of the Amazon Lex bot to which this association is being made. </p>
     * <note> <p>Currently, Amazon Lex supports associations with Facebook and Slack,
     * and Twilio.</p> </note>
     */
    inline BotChannelAssociation& WithBotName(const Aws::String& value) { SetBotName(value); return *this;}

    /**
     * <p>The name of the Amazon Lex bot to which this association is being made. </p>
     * <note> <p>Currently, Amazon Lex supports associations with Facebook and Slack,
     * and Twilio.</p> </note>
     */
    inline BotChannelAssociation& WithBotName(Aws::String&& value) { SetBotName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon Lex bot to which this association is being made. </p>
     * <note> <p>Currently, Amazon Lex supports associations with Facebook and Slack,
     * and Twilio.</p> </note>
     */
    inline BotChannelAssociation& WithBotName(const char* value) { SetBotName(value); return *this;}


    /**
     * <p>The date that the association between the Amazon Lex bot and the channel was
     * created. </p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }

    /**
     * <p>The date that the association between the Amazon Lex bot and the channel was
     * created. </p>
     */
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }

    /**
     * <p>The date that the association between the Amazon Lex bot and the channel was
     * created. </p>
     */
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDateHasBeenSet = true; m_createdDate = value; }

    /**
     * <p>The date that the association between the Amazon Lex bot and the channel was
     * created. </p>
     */
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::move(value); }

    /**
     * <p>The date that the association between the Amazon Lex bot and the channel was
     * created. </p>
     */
    inline BotChannelAssociation& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}

    /**
     * <p>The date that the association between the Amazon Lex bot and the channel was
     * created. </p>
     */
    inline BotChannelAssociation& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}


    /**
     * <p>Specifies the type of association by indicating the type of channel being
     * established between the Amazon Lex bot and the external messaging platform.</p>
     */
    inline const ChannelType& GetType() const{ return m_type; }

    /**
     * <p>Specifies the type of association by indicating the type of channel being
     * established between the Amazon Lex bot and the external messaging platform.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Specifies the type of association by indicating the type of channel being
     * established between the Amazon Lex bot and the external messaging platform.</p>
     */
    inline void SetType(const ChannelType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Specifies the type of association by indicating the type of channel being
     * established between the Amazon Lex bot and the external messaging platform.</p>
     */
    inline void SetType(ChannelType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Specifies the type of association by indicating the type of channel being
     * established between the Amazon Lex bot and the external messaging platform.</p>
     */
    inline BotChannelAssociation& WithType(const ChannelType& value) { SetType(value); return *this;}

    /**
     * <p>Specifies the type of association by indicating the type of channel being
     * established between the Amazon Lex bot and the external messaging platform.</p>
     */
    inline BotChannelAssociation& WithType(ChannelType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>Provides information necessary to communicate with the messaging platform.
     * </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetBotConfiguration() const{ return m_botConfiguration; }

    /**
     * <p>Provides information necessary to communicate with the messaging platform.
     * </p>
     */
    inline bool BotConfigurationHasBeenSet() const { return m_botConfigurationHasBeenSet; }

    /**
     * <p>Provides information necessary to communicate with the messaging platform.
     * </p>
     */
    inline void SetBotConfiguration(const Aws::Map<Aws::String, Aws::String>& value) { m_botConfigurationHasBeenSet = true; m_botConfiguration = value; }

    /**
     * <p>Provides information necessary to communicate with the messaging platform.
     * </p>
     */
    inline void SetBotConfiguration(Aws::Map<Aws::String, Aws::String>&& value) { m_botConfigurationHasBeenSet = true; m_botConfiguration = std::move(value); }

    /**
     * <p>Provides information necessary to communicate with the messaging platform.
     * </p>
     */
    inline BotChannelAssociation& WithBotConfiguration(const Aws::Map<Aws::String, Aws::String>& value) { SetBotConfiguration(value); return *this;}

    /**
     * <p>Provides information necessary to communicate with the messaging platform.
     * </p>
     */
    inline BotChannelAssociation& WithBotConfiguration(Aws::Map<Aws::String, Aws::String>&& value) { SetBotConfiguration(std::move(value)); return *this;}

    /**
     * <p>Provides information necessary to communicate with the messaging platform.
     * </p>
     */
    inline BotChannelAssociation& AddBotConfiguration(const Aws::String& key, const Aws::String& value) { m_botConfigurationHasBeenSet = true; m_botConfiguration.emplace(key, value); return *this; }

    /**
     * <p>Provides information necessary to communicate with the messaging platform.
     * </p>
     */
    inline BotChannelAssociation& AddBotConfiguration(Aws::String&& key, const Aws::String& value) { m_botConfigurationHasBeenSet = true; m_botConfiguration.emplace(std::move(key), value); return *this; }

    /**
     * <p>Provides information necessary to communicate with the messaging platform.
     * </p>
     */
    inline BotChannelAssociation& AddBotConfiguration(const Aws::String& key, Aws::String&& value) { m_botConfigurationHasBeenSet = true; m_botConfiguration.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Provides information necessary to communicate with the messaging platform.
     * </p>
     */
    inline BotChannelAssociation& AddBotConfiguration(Aws::String&& key, Aws::String&& value) { m_botConfigurationHasBeenSet = true; m_botConfiguration.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Provides information necessary to communicate with the messaging platform.
     * </p>
     */
    inline BotChannelAssociation& AddBotConfiguration(const char* key, Aws::String&& value) { m_botConfigurationHasBeenSet = true; m_botConfiguration.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Provides information necessary to communicate with the messaging platform.
     * </p>
     */
    inline BotChannelAssociation& AddBotConfiguration(Aws::String&& key, const char* value) { m_botConfigurationHasBeenSet = true; m_botConfiguration.emplace(std::move(key), value); return *this; }

    /**
     * <p>Provides information necessary to communicate with the messaging platform.
     * </p>
     */
    inline BotChannelAssociation& AddBotConfiguration(const char* key, const char* value) { m_botConfigurationHasBeenSet = true; m_botConfiguration.emplace(key, value); return *this; }


    /**
     * <p>The status of the bot channel. </p> <ul> <li> <p> <code>CREATED</code> - The
     * channel has been created and is ready for use.</p> </li> <li> <p>
     * <code>IN_PROGRESS</code> - Channel creation is in progress.</p> </li> <li> <p>
     * <code>FAILED</code> - There was an error creating the channel. For information
     * about the reason for the failure, see the <code>failureReason</code> field.</p>
     * </li> </ul>
     */
    inline const ChannelStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the bot channel. </p> <ul> <li> <p> <code>CREATED</code> - The
     * channel has been created and is ready for use.</p> </li> <li> <p>
     * <code>IN_PROGRESS</code> - Channel creation is in progress.</p> </li> <li> <p>
     * <code>FAILED</code> - There was an error creating the channel. For information
     * about the reason for the failure, see the <code>failureReason</code> field.</p>
     * </li> </ul>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the bot channel. </p> <ul> <li> <p> <code>CREATED</code> - The
     * channel has been created and is ready for use.</p> </li> <li> <p>
     * <code>IN_PROGRESS</code> - Channel creation is in progress.</p> </li> <li> <p>
     * <code>FAILED</code> - There was an error creating the channel. For information
     * about the reason for the failure, see the <code>failureReason</code> field.</p>
     * </li> </ul>
     */
    inline void SetStatus(const ChannelStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the bot channel. </p> <ul> <li> <p> <code>CREATED</code> - The
     * channel has been created and is ready for use.</p> </li> <li> <p>
     * <code>IN_PROGRESS</code> - Channel creation is in progress.</p> </li> <li> <p>
     * <code>FAILED</code> - There was an error creating the channel. For information
     * about the reason for the failure, see the <code>failureReason</code> field.</p>
     * </li> </ul>
     */
    inline void SetStatus(ChannelStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the bot channel. </p> <ul> <li> <p> <code>CREATED</code> - The
     * channel has been created and is ready for use.</p> </li> <li> <p>
     * <code>IN_PROGRESS</code> - Channel creation is in progress.</p> </li> <li> <p>
     * <code>FAILED</code> - There was an error creating the channel. For information
     * about the reason for the failure, see the <code>failureReason</code> field.</p>
     * </li> </ul>
     */
    inline BotChannelAssociation& WithStatus(const ChannelStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the bot channel. </p> <ul> <li> <p> <code>CREATED</code> - The
     * channel has been created and is ready for use.</p> </li> <li> <p>
     * <code>IN_PROGRESS</code> - Channel creation is in progress.</p> </li> <li> <p>
     * <code>FAILED</code> - There was an error creating the channel. For information
     * about the reason for the failure, see the <code>failureReason</code> field.</p>
     * </li> </ul>
     */
    inline BotChannelAssociation& WithStatus(ChannelStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>If <code>status</code> is <code>FAILED</code>, Amazon Lex provides the reason
     * that it failed to create the association.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>If <code>status</code> is <code>FAILED</code>, Amazon Lex provides the reason
     * that it failed to create the association.</p>
     */
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }

    /**
     * <p>If <code>status</code> is <code>FAILED</code>, Amazon Lex provides the reason
     * that it failed to create the association.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }

    /**
     * <p>If <code>status</code> is <code>FAILED</code>, Amazon Lex provides the reason
     * that it failed to create the association.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }

    /**
     * <p>If <code>status</code> is <code>FAILED</code>, Amazon Lex provides the reason
     * that it failed to create the association.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }

    /**
     * <p>If <code>status</code> is <code>FAILED</code>, Amazon Lex provides the reason
     * that it failed to create the association.</p>
     */
    inline BotChannelAssociation& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>If <code>status</code> is <code>FAILED</code>, Amazon Lex provides the reason
     * that it failed to create the association.</p>
     */
    inline BotChannelAssociation& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>If <code>status</code> is <code>FAILED</code>, Amazon Lex provides the reason
     * that it failed to create the association.</p>
     */
    inline BotChannelAssociation& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;

    Aws::String m_botAlias;
    bool m_botAliasHasBeenSet;

    Aws::String m_botName;
    bool m_botNameHasBeenSet;

    Aws::Utils::DateTime m_createdDate;
    bool m_createdDateHasBeenSet;

    ChannelType m_type;
    bool m_typeHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_botConfiguration;
    bool m_botConfigurationHasBeenSet;

    ChannelStatus m_status;
    bool m_statusHasBeenSet;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
