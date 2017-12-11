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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace LexModelBuildingService
{
namespace Model
{
  class AWS_LEXMODELBUILDINGSERVICE_API GetBotChannelAssociationResult
  {
  public:
    GetBotChannelAssociationResult();
    GetBotChannelAssociationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetBotChannelAssociationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The name of the association between the bot and the channel.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the association between the bot and the channel.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The name of the association between the bot and the channel.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The name of the association between the bot and the channel.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The name of the association between the bot and the channel.</p>
     */
    inline GetBotChannelAssociationResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the association between the bot and the channel.</p>
     */
    inline GetBotChannelAssociationResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the association between the bot and the channel.</p>
     */
    inline GetBotChannelAssociationResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A description of the association between the bot and the channel.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the association between the bot and the channel.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_description = value; }

    /**
     * <p>A description of the association between the bot and the channel.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }

    /**
     * <p>A description of the association between the bot and the channel.</p>
     */
    inline void SetDescription(const char* value) { m_description.assign(value); }

    /**
     * <p>A description of the association between the bot and the channel.</p>
     */
    inline GetBotChannelAssociationResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the association between the bot and the channel.</p>
     */
    inline GetBotChannelAssociationResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the association between the bot and the channel.</p>
     */
    inline GetBotChannelAssociationResult& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>An alias pointing to the specific version of the Amazon Lex bot to which this
     * association is being made.</p>
     */
    inline const Aws::String& GetBotAlias() const{ return m_botAlias; }

    /**
     * <p>An alias pointing to the specific version of the Amazon Lex bot to which this
     * association is being made.</p>
     */
    inline void SetBotAlias(const Aws::String& value) { m_botAlias = value; }

    /**
     * <p>An alias pointing to the specific version of the Amazon Lex bot to which this
     * association is being made.</p>
     */
    inline void SetBotAlias(Aws::String&& value) { m_botAlias = std::move(value); }

    /**
     * <p>An alias pointing to the specific version of the Amazon Lex bot to which this
     * association is being made.</p>
     */
    inline void SetBotAlias(const char* value) { m_botAlias.assign(value); }

    /**
     * <p>An alias pointing to the specific version of the Amazon Lex bot to which this
     * association is being made.</p>
     */
    inline GetBotChannelAssociationResult& WithBotAlias(const Aws::String& value) { SetBotAlias(value); return *this;}

    /**
     * <p>An alias pointing to the specific version of the Amazon Lex bot to which this
     * association is being made.</p>
     */
    inline GetBotChannelAssociationResult& WithBotAlias(Aws::String&& value) { SetBotAlias(std::move(value)); return *this;}

    /**
     * <p>An alias pointing to the specific version of the Amazon Lex bot to which this
     * association is being made.</p>
     */
    inline GetBotChannelAssociationResult& WithBotAlias(const char* value) { SetBotAlias(value); return *this;}


    /**
     * <p>The name of the Amazon Lex bot.</p>
     */
    inline const Aws::String& GetBotName() const{ return m_botName; }

    /**
     * <p>The name of the Amazon Lex bot.</p>
     */
    inline void SetBotName(const Aws::String& value) { m_botName = value; }

    /**
     * <p>The name of the Amazon Lex bot.</p>
     */
    inline void SetBotName(Aws::String&& value) { m_botName = std::move(value); }

    /**
     * <p>The name of the Amazon Lex bot.</p>
     */
    inline void SetBotName(const char* value) { m_botName.assign(value); }

    /**
     * <p>The name of the Amazon Lex bot.</p>
     */
    inline GetBotChannelAssociationResult& WithBotName(const Aws::String& value) { SetBotName(value); return *this;}

    /**
     * <p>The name of the Amazon Lex bot.</p>
     */
    inline GetBotChannelAssociationResult& WithBotName(Aws::String&& value) { SetBotName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon Lex bot.</p>
     */
    inline GetBotChannelAssociationResult& WithBotName(const char* value) { SetBotName(value); return *this;}


    /**
     * <p>The date that the association between the bot and the channel was
     * created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const{ return m_createdDate; }

    /**
     * <p>The date that the association between the bot and the channel was
     * created.</p>
     */
    inline void SetCreatedDate(const Aws::Utils::DateTime& value) { m_createdDate = value; }

    /**
     * <p>The date that the association between the bot and the channel was
     * created.</p>
     */
    inline void SetCreatedDate(Aws::Utils::DateTime&& value) { m_createdDate = std::move(value); }

    /**
     * <p>The date that the association between the bot and the channel was
     * created.</p>
     */
    inline GetBotChannelAssociationResult& WithCreatedDate(const Aws::Utils::DateTime& value) { SetCreatedDate(value); return *this;}

    /**
     * <p>The date that the association between the bot and the channel was
     * created.</p>
     */
    inline GetBotChannelAssociationResult& WithCreatedDate(Aws::Utils::DateTime&& value) { SetCreatedDate(std::move(value)); return *this;}


    /**
     * <p>The type of the messaging platform.</p>
     */
    inline const ChannelType& GetType() const{ return m_type; }

    /**
     * <p>The type of the messaging platform.</p>
     */
    inline void SetType(const ChannelType& value) { m_type = value; }

    /**
     * <p>The type of the messaging platform.</p>
     */
    inline void SetType(ChannelType&& value) { m_type = std::move(value); }

    /**
     * <p>The type of the messaging platform.</p>
     */
    inline GetBotChannelAssociationResult& WithType(const ChannelType& value) { SetType(value); return *this;}

    /**
     * <p>The type of the messaging platform.</p>
     */
    inline GetBotChannelAssociationResult& WithType(ChannelType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>Provides information that the messaging platform needs to communicate with
     * the Amazon Lex bot.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetBotConfiguration() const{ return m_botConfiguration; }

    /**
     * <p>Provides information that the messaging platform needs to communicate with
     * the Amazon Lex bot.</p>
     */
    inline void SetBotConfiguration(const Aws::Map<Aws::String, Aws::String>& value) { m_botConfiguration = value; }

    /**
     * <p>Provides information that the messaging platform needs to communicate with
     * the Amazon Lex bot.</p>
     */
    inline void SetBotConfiguration(Aws::Map<Aws::String, Aws::String>&& value) { m_botConfiguration = std::move(value); }

    /**
     * <p>Provides information that the messaging platform needs to communicate with
     * the Amazon Lex bot.</p>
     */
    inline GetBotChannelAssociationResult& WithBotConfiguration(const Aws::Map<Aws::String, Aws::String>& value) { SetBotConfiguration(value); return *this;}

    /**
     * <p>Provides information that the messaging platform needs to communicate with
     * the Amazon Lex bot.</p>
     */
    inline GetBotChannelAssociationResult& WithBotConfiguration(Aws::Map<Aws::String, Aws::String>&& value) { SetBotConfiguration(std::move(value)); return *this;}

    /**
     * <p>Provides information that the messaging platform needs to communicate with
     * the Amazon Lex bot.</p>
     */
    inline GetBotChannelAssociationResult& AddBotConfiguration(const Aws::String& key, const Aws::String& value) { m_botConfiguration.emplace(key, value); return *this; }

    /**
     * <p>Provides information that the messaging platform needs to communicate with
     * the Amazon Lex bot.</p>
     */
    inline GetBotChannelAssociationResult& AddBotConfiguration(Aws::String&& key, const Aws::String& value) { m_botConfiguration.emplace(std::move(key), value); return *this; }

    /**
     * <p>Provides information that the messaging platform needs to communicate with
     * the Amazon Lex bot.</p>
     */
    inline GetBotChannelAssociationResult& AddBotConfiguration(const Aws::String& key, Aws::String&& value) { m_botConfiguration.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Provides information that the messaging platform needs to communicate with
     * the Amazon Lex bot.</p>
     */
    inline GetBotChannelAssociationResult& AddBotConfiguration(Aws::String&& key, Aws::String&& value) { m_botConfiguration.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Provides information that the messaging platform needs to communicate with
     * the Amazon Lex bot.</p>
     */
    inline GetBotChannelAssociationResult& AddBotConfiguration(const char* key, Aws::String&& value) { m_botConfiguration.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Provides information that the messaging platform needs to communicate with
     * the Amazon Lex bot.</p>
     */
    inline GetBotChannelAssociationResult& AddBotConfiguration(Aws::String&& key, const char* value) { m_botConfiguration.emplace(std::move(key), value); return *this; }

    /**
     * <p>Provides information that the messaging platform needs to communicate with
     * the Amazon Lex bot.</p>
     */
    inline GetBotChannelAssociationResult& AddBotConfiguration(const char* key, const char* value) { m_botConfiguration.emplace(key, value); return *this; }


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
    inline void SetStatus(const ChannelStatus& value) { m_status = value; }

    /**
     * <p>The status of the bot channel. </p> <ul> <li> <p> <code>CREATED</code> - The
     * channel has been created and is ready for use.</p> </li> <li> <p>
     * <code>IN_PROGRESS</code> - Channel creation is in progress.</p> </li> <li> <p>
     * <code>FAILED</code> - There was an error creating the channel. For information
     * about the reason for the failure, see the <code>failureReason</code> field.</p>
     * </li> </ul>
     */
    inline void SetStatus(ChannelStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The status of the bot channel. </p> <ul> <li> <p> <code>CREATED</code> - The
     * channel has been created and is ready for use.</p> </li> <li> <p>
     * <code>IN_PROGRESS</code> - Channel creation is in progress.</p> </li> <li> <p>
     * <code>FAILED</code> - There was an error creating the channel. For information
     * about the reason for the failure, see the <code>failureReason</code> field.</p>
     * </li> </ul>
     */
    inline GetBotChannelAssociationResult& WithStatus(const ChannelStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the bot channel. </p> <ul> <li> <p> <code>CREATED</code> - The
     * channel has been created and is ready for use.</p> </li> <li> <p>
     * <code>IN_PROGRESS</code> - Channel creation is in progress.</p> </li> <li> <p>
     * <code>FAILED</code> - There was an error creating the channel. For information
     * about the reason for the failure, see the <code>failureReason</code> field.</p>
     * </li> </ul>
     */
    inline GetBotChannelAssociationResult& WithStatus(ChannelStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>If <code>status</code> is <code>FAILED</code>, Amazon Lex provides the reason
     * that it failed to create the association.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>If <code>status</code> is <code>FAILED</code>, Amazon Lex provides the reason
     * that it failed to create the association.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReason = value; }

    /**
     * <p>If <code>status</code> is <code>FAILED</code>, Amazon Lex provides the reason
     * that it failed to create the association.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReason = std::move(value); }

    /**
     * <p>If <code>status</code> is <code>FAILED</code>, Amazon Lex provides the reason
     * that it failed to create the association.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReason.assign(value); }

    /**
     * <p>If <code>status</code> is <code>FAILED</code>, Amazon Lex provides the reason
     * that it failed to create the association.</p>
     */
    inline GetBotChannelAssociationResult& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>If <code>status</code> is <code>FAILED</code>, Amazon Lex provides the reason
     * that it failed to create the association.</p>
     */
    inline GetBotChannelAssociationResult& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>If <code>status</code> is <code>FAILED</code>, Amazon Lex provides the reason
     * that it failed to create the association.</p>
     */
    inline GetBotChannelAssociationResult& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}

  private:

    Aws::String m_name;

    Aws::String m_description;

    Aws::String m_botAlias;

    Aws::String m_botName;

    Aws::Utils::DateTime m_createdDate;

    ChannelType m_type;

    Aws::Map<Aws::String, Aws::String> m_botConfiguration;

    ChannelStatus m_status;

    Aws::String m_failureReason;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
