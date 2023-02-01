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
namespace LexModelsV2
{
namespace Model
{

  /**
   */
  class DescribeIntentRequest : public LexModelsV2Request
  {
  public:
    AWS_LEXMODELSV2_API DescribeIntentRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeIntent"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;


    /**
     * <p>The identifier of the intent to describe.</p>
     */
    inline const Aws::String& GetIntentId() const{ return m_intentId; }

    /**
     * <p>The identifier of the intent to describe.</p>
     */
    inline bool IntentIdHasBeenSet() const { return m_intentIdHasBeenSet; }

    /**
     * <p>The identifier of the intent to describe.</p>
     */
    inline void SetIntentId(const Aws::String& value) { m_intentIdHasBeenSet = true; m_intentId = value; }

    /**
     * <p>The identifier of the intent to describe.</p>
     */
    inline void SetIntentId(Aws::String&& value) { m_intentIdHasBeenSet = true; m_intentId = std::move(value); }

    /**
     * <p>The identifier of the intent to describe.</p>
     */
    inline void SetIntentId(const char* value) { m_intentIdHasBeenSet = true; m_intentId.assign(value); }

    /**
     * <p>The identifier of the intent to describe.</p>
     */
    inline DescribeIntentRequest& WithIntentId(const Aws::String& value) { SetIntentId(value); return *this;}

    /**
     * <p>The identifier of the intent to describe.</p>
     */
    inline DescribeIntentRequest& WithIntentId(Aws::String&& value) { SetIntentId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the intent to describe.</p>
     */
    inline DescribeIntentRequest& WithIntentId(const char* value) { SetIntentId(value); return *this;}


    /**
     * <p>The identifier of the bot associated with the intent.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The identifier of the bot associated with the intent.</p>
     */
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }

    /**
     * <p>The identifier of the bot associated with the intent.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botIdHasBeenSet = true; m_botId = value; }

    /**
     * <p>The identifier of the bot associated with the intent.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botIdHasBeenSet = true; m_botId = std::move(value); }

    /**
     * <p>The identifier of the bot associated with the intent.</p>
     */
    inline void SetBotId(const char* value) { m_botIdHasBeenSet = true; m_botId.assign(value); }

    /**
     * <p>The identifier of the bot associated with the intent.</p>
     */
    inline DescribeIntentRequest& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The identifier of the bot associated with the intent.</p>
     */
    inline DescribeIntentRequest& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the bot associated with the intent.</p>
     */
    inline DescribeIntentRequest& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>The version of the bot associated with the intent.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }

    /**
     * <p>The version of the bot associated with the intent.</p>
     */
    inline bool BotVersionHasBeenSet() const { return m_botVersionHasBeenSet; }

    /**
     * <p>The version of the bot associated with the intent.</p>
     */
    inline void SetBotVersion(const Aws::String& value) { m_botVersionHasBeenSet = true; m_botVersion = value; }

    /**
     * <p>The version of the bot associated with the intent.</p>
     */
    inline void SetBotVersion(Aws::String&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::move(value); }

    /**
     * <p>The version of the bot associated with the intent.</p>
     */
    inline void SetBotVersion(const char* value) { m_botVersionHasBeenSet = true; m_botVersion.assign(value); }

    /**
     * <p>The version of the bot associated with the intent.</p>
     */
    inline DescribeIntentRequest& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}

    /**
     * <p>The version of the bot associated with the intent.</p>
     */
    inline DescribeIntentRequest& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the bot associated with the intent.</p>
     */
    inline DescribeIntentRequest& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}


    /**
     * <p>The identifier of the language and locale of the intent to describe. The
     * string must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }

    /**
     * <p>The identifier of the language and locale of the intent to describe. The
     * string must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline bool LocaleIdHasBeenSet() const { return m_localeIdHasBeenSet; }

    /**
     * <p>The identifier of the language and locale of the intent to describe. The
     * string must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline void SetLocaleId(const Aws::String& value) { m_localeIdHasBeenSet = true; m_localeId = value; }

    /**
     * <p>The identifier of the language and locale of the intent to describe. The
     * string must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline void SetLocaleId(Aws::String&& value) { m_localeIdHasBeenSet = true; m_localeId = std::move(value); }

    /**
     * <p>The identifier of the language and locale of the intent to describe. The
     * string must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline void SetLocaleId(const char* value) { m_localeIdHasBeenSet = true; m_localeId.assign(value); }

    /**
     * <p>The identifier of the language and locale of the intent to describe. The
     * string must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline DescribeIntentRequest& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}

    /**
     * <p>The identifier of the language and locale of the intent to describe. The
     * string must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline DescribeIntentRequest& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the language and locale of the intent to describe. The
     * string must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline DescribeIntentRequest& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}

  private:

    Aws::String m_intentId;
    bool m_intentIdHasBeenSet = false;

    Aws::String m_botId;
    bool m_botIdHasBeenSet = false;

    Aws::String m_botVersion;
    bool m_botVersionHasBeenSet = false;

    Aws::String m_localeId;
    bool m_localeIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
