﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/LexModelsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace LexModelsV2
{
namespace Model
{

  /**
   */
  class DeleteBotRequest : public LexModelsV2Request
  {
  public:
    AWS_LEXMODELSV2_API DeleteBotRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteBot"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;

    AWS_LEXMODELSV2_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The identifier of the bot to delete. </p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }
    inline void SetBotId(const Aws::String& value) { m_botIdHasBeenSet = true; m_botId = value; }
    inline void SetBotId(Aws::String&& value) { m_botIdHasBeenSet = true; m_botId = std::move(value); }
    inline void SetBotId(const char* value) { m_botIdHasBeenSet = true; m_botId.assign(value); }
    inline DeleteBotRequest& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}
    inline DeleteBotRequest& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}
    inline DeleteBotRequest& WithBotId(const char* value) { SetBotId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>By default, Amazon Lex checks if any other resource, such as an alias or bot
     * network, is using the bot version before it is deleted and throws a
     * <code>ResourceInUseException</code> exception if the bot is being used by
     * another resource. Set this parameter to <code>true</code> to skip this check and
     * remove the bot even if it is being used by another resource.</p>
     */
    inline bool GetSkipResourceInUseCheck() const{ return m_skipResourceInUseCheck; }
    inline bool SkipResourceInUseCheckHasBeenSet() const { return m_skipResourceInUseCheckHasBeenSet; }
    inline void SetSkipResourceInUseCheck(bool value) { m_skipResourceInUseCheckHasBeenSet = true; m_skipResourceInUseCheck = value; }
    inline DeleteBotRequest& WithSkipResourceInUseCheck(bool value) { SetSkipResourceInUseCheck(value); return *this;}
    ///@}
  private:

    Aws::String m_botId;
    bool m_botIdHasBeenSet = false;

    bool m_skipResourceInUseCheck;
    bool m_skipResourceInUseCheckHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
