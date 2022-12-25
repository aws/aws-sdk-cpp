/**
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
  class DeleteBotVersionRequest : public LexModelsV2Request
  {
  public:
    AWS_LEXMODELSV2_API DeleteBotVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteBotVersion"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;

    AWS_LEXMODELSV2_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The identifier of the bot that contains the version.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The identifier of the bot that contains the version.</p>
     */
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }

    /**
     * <p>The identifier of the bot that contains the version.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botIdHasBeenSet = true; m_botId = value; }

    /**
     * <p>The identifier of the bot that contains the version.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botIdHasBeenSet = true; m_botId = std::move(value); }

    /**
     * <p>The identifier of the bot that contains the version.</p>
     */
    inline void SetBotId(const char* value) { m_botIdHasBeenSet = true; m_botId.assign(value); }

    /**
     * <p>The identifier of the bot that contains the version.</p>
     */
    inline DeleteBotVersionRequest& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The identifier of the bot that contains the version.</p>
     */
    inline DeleteBotVersionRequest& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the bot that contains the version.</p>
     */
    inline DeleteBotVersionRequest& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>The version of the bot to delete.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }

    /**
     * <p>The version of the bot to delete.</p>
     */
    inline bool BotVersionHasBeenSet() const { return m_botVersionHasBeenSet; }

    /**
     * <p>The version of the bot to delete.</p>
     */
    inline void SetBotVersion(const Aws::String& value) { m_botVersionHasBeenSet = true; m_botVersion = value; }

    /**
     * <p>The version of the bot to delete.</p>
     */
    inline void SetBotVersion(Aws::String&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::move(value); }

    /**
     * <p>The version of the bot to delete.</p>
     */
    inline void SetBotVersion(const char* value) { m_botVersionHasBeenSet = true; m_botVersion.assign(value); }

    /**
     * <p>The version of the bot to delete.</p>
     */
    inline DeleteBotVersionRequest& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}

    /**
     * <p>The version of the bot to delete.</p>
     */
    inline DeleteBotVersionRequest& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the bot to delete.</p>
     */
    inline DeleteBotVersionRequest& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}


    /**
     * <p>By default, the <code>DeleteBotVersion</code> operations throws a
     * <code>ResourceInUseException</code> exception if you try to delete a bot version
     * that has an alias pointing at it. Set the <code>skipResourceInUseCheck</code>
     * parameter to <code>true</code> to skip this check and remove the version even if
     * an alias points to it.</p>
     */
    inline bool GetSkipResourceInUseCheck() const{ return m_skipResourceInUseCheck; }

    /**
     * <p>By default, the <code>DeleteBotVersion</code> operations throws a
     * <code>ResourceInUseException</code> exception if you try to delete a bot version
     * that has an alias pointing at it. Set the <code>skipResourceInUseCheck</code>
     * parameter to <code>true</code> to skip this check and remove the version even if
     * an alias points to it.</p>
     */
    inline bool SkipResourceInUseCheckHasBeenSet() const { return m_skipResourceInUseCheckHasBeenSet; }

    /**
     * <p>By default, the <code>DeleteBotVersion</code> operations throws a
     * <code>ResourceInUseException</code> exception if you try to delete a bot version
     * that has an alias pointing at it. Set the <code>skipResourceInUseCheck</code>
     * parameter to <code>true</code> to skip this check and remove the version even if
     * an alias points to it.</p>
     */
    inline void SetSkipResourceInUseCheck(bool value) { m_skipResourceInUseCheckHasBeenSet = true; m_skipResourceInUseCheck = value; }

    /**
     * <p>By default, the <code>DeleteBotVersion</code> operations throws a
     * <code>ResourceInUseException</code> exception if you try to delete a bot version
     * that has an alias pointing at it. Set the <code>skipResourceInUseCheck</code>
     * parameter to <code>true</code> to skip this check and remove the version even if
     * an alias points to it.</p>
     */
    inline DeleteBotVersionRequest& WithSkipResourceInUseCheck(bool value) { SetSkipResourceInUseCheck(value); return *this;}

  private:

    Aws::String m_botId;
    bool m_botIdHasBeenSet = false;

    Aws::String m_botVersion;
    bool m_botVersionHasBeenSet = false;

    bool m_skipResourceInUseCheck;
    bool m_skipResourceInUseCheckHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
