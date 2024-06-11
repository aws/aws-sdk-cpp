/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DeleteBotChannelAssociationRequest : public LexModelBuildingServiceRequest
  {
  public:
    AWS_LEXMODELBUILDINGSERVICE_API DeleteBotChannelAssociationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteBotChannelAssociation"; }

    AWS_LEXMODELBUILDINGSERVICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the association. The name is case sensitive. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline DeleteBotChannelAssociationRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DeleteBotChannelAssociationRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DeleteBotChannelAssociationRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon Lex bot.</p>
     */
    inline const Aws::String& GetBotName() const{ return m_botName; }
    inline bool BotNameHasBeenSet() const { return m_botNameHasBeenSet; }
    inline void SetBotName(const Aws::String& value) { m_botNameHasBeenSet = true; m_botName = value; }
    inline void SetBotName(Aws::String&& value) { m_botNameHasBeenSet = true; m_botName = std::move(value); }
    inline void SetBotName(const char* value) { m_botNameHasBeenSet = true; m_botName.assign(value); }
    inline DeleteBotChannelAssociationRequest& WithBotName(const Aws::String& value) { SetBotName(value); return *this;}
    inline DeleteBotChannelAssociationRequest& WithBotName(Aws::String&& value) { SetBotName(std::move(value)); return *this;}
    inline DeleteBotChannelAssociationRequest& WithBotName(const char* value) { SetBotName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An alias that points to the specific version of the Amazon Lex bot to which
     * this association is being made.</p>
     */
    inline const Aws::String& GetBotAlias() const{ return m_botAlias; }
    inline bool BotAliasHasBeenSet() const { return m_botAliasHasBeenSet; }
    inline void SetBotAlias(const Aws::String& value) { m_botAliasHasBeenSet = true; m_botAlias = value; }
    inline void SetBotAlias(Aws::String&& value) { m_botAliasHasBeenSet = true; m_botAlias = std::move(value); }
    inline void SetBotAlias(const char* value) { m_botAliasHasBeenSet = true; m_botAlias.assign(value); }
    inline DeleteBotChannelAssociationRequest& WithBotAlias(const Aws::String& value) { SetBotAlias(value); return *this;}
    inline DeleteBotChannelAssociationRequest& WithBotAlias(Aws::String&& value) { SetBotAlias(std::move(value)); return *this;}
    inline DeleteBotChannelAssociationRequest& WithBotAlias(const char* value) { SetBotAlias(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_botName;
    bool m_botNameHasBeenSet = false;

    Aws::String m_botAlias;
    bool m_botAliasHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
