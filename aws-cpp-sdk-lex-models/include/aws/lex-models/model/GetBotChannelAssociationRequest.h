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
#include <aws/lex-models/LexModelBuildingServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace LexModelBuildingService
{
namespace Model
{

  /**
   */
  class AWS_LEXMODELBUILDINGSERVICE_API GetBotChannelAssociationRequest : public LexModelBuildingServiceRequest
  {
  public:
    GetBotChannelAssociationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetBotChannelAssociation"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The name of the association between the bot and the channel. The name is case
     * sensitive. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the association between the bot and the channel. The name is case
     * sensitive. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the association between the bot and the channel. The name is case
     * sensitive. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the association between the bot and the channel. The name is case
     * sensitive. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the association between the bot and the channel. The name is case
     * sensitive. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the association between the bot and the channel. The name is case
     * sensitive. </p>
     */
    inline GetBotChannelAssociationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the association between the bot and the channel. The name is case
     * sensitive. </p>
     */
    inline GetBotChannelAssociationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the association between the bot and the channel. The name is case
     * sensitive. </p>
     */
    inline GetBotChannelAssociationRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The name of the Amazon Lex bot.</p>
     */
    inline const Aws::String& GetBotName() const{ return m_botName; }

    /**
     * <p>The name of the Amazon Lex bot.</p>
     */
    inline bool BotNameHasBeenSet() const { return m_botNameHasBeenSet; }

    /**
     * <p>The name of the Amazon Lex bot.</p>
     */
    inline void SetBotName(const Aws::String& value) { m_botNameHasBeenSet = true; m_botName = value; }

    /**
     * <p>The name of the Amazon Lex bot.</p>
     */
    inline void SetBotName(Aws::String&& value) { m_botNameHasBeenSet = true; m_botName = std::move(value); }

    /**
     * <p>The name of the Amazon Lex bot.</p>
     */
    inline void SetBotName(const char* value) { m_botNameHasBeenSet = true; m_botName.assign(value); }

    /**
     * <p>The name of the Amazon Lex bot.</p>
     */
    inline GetBotChannelAssociationRequest& WithBotName(const Aws::String& value) { SetBotName(value); return *this;}

    /**
     * <p>The name of the Amazon Lex bot.</p>
     */
    inline GetBotChannelAssociationRequest& WithBotName(Aws::String&& value) { SetBotName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon Lex bot.</p>
     */
    inline GetBotChannelAssociationRequest& WithBotName(const char* value) { SetBotName(value); return *this;}


    /**
     * <p>An alias pointing to the specific version of the Amazon Lex bot to which this
     * association is being made.</p>
     */
    inline const Aws::String& GetBotAlias() const{ return m_botAlias; }

    /**
     * <p>An alias pointing to the specific version of the Amazon Lex bot to which this
     * association is being made.</p>
     */
    inline bool BotAliasHasBeenSet() const { return m_botAliasHasBeenSet; }

    /**
     * <p>An alias pointing to the specific version of the Amazon Lex bot to which this
     * association is being made.</p>
     */
    inline void SetBotAlias(const Aws::String& value) { m_botAliasHasBeenSet = true; m_botAlias = value; }

    /**
     * <p>An alias pointing to the specific version of the Amazon Lex bot to which this
     * association is being made.</p>
     */
    inline void SetBotAlias(Aws::String&& value) { m_botAliasHasBeenSet = true; m_botAlias = std::move(value); }

    /**
     * <p>An alias pointing to the specific version of the Amazon Lex bot to which this
     * association is being made.</p>
     */
    inline void SetBotAlias(const char* value) { m_botAliasHasBeenSet = true; m_botAlias.assign(value); }

    /**
     * <p>An alias pointing to the specific version of the Amazon Lex bot to which this
     * association is being made.</p>
     */
    inline GetBotChannelAssociationRequest& WithBotAlias(const Aws::String& value) { SetBotAlias(value); return *this;}

    /**
     * <p>An alias pointing to the specific version of the Amazon Lex bot to which this
     * association is being made.</p>
     */
    inline GetBotChannelAssociationRequest& WithBotAlias(Aws::String&& value) { SetBotAlias(std::move(value)); return *this;}

    /**
     * <p>An alias pointing to the specific version of the Amazon Lex bot to which this
     * association is being made.</p>
     */
    inline GetBotChannelAssociationRequest& WithBotAlias(const char* value) { SetBotAlias(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_botName;
    bool m_botNameHasBeenSet;

    Aws::String m_botAlias;
    bool m_botAliasHasBeenSet;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
