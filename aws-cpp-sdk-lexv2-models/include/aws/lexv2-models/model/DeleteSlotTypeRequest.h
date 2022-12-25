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
  class DeleteSlotTypeRequest : public LexModelsV2Request
  {
  public:
    AWS_LEXMODELSV2_API DeleteSlotTypeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteSlotType"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;

    AWS_LEXMODELSV2_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The identifier of the slot type to delete.</p>
     */
    inline const Aws::String& GetSlotTypeId() const{ return m_slotTypeId; }

    /**
     * <p>The identifier of the slot type to delete.</p>
     */
    inline bool SlotTypeIdHasBeenSet() const { return m_slotTypeIdHasBeenSet; }

    /**
     * <p>The identifier of the slot type to delete.</p>
     */
    inline void SetSlotTypeId(const Aws::String& value) { m_slotTypeIdHasBeenSet = true; m_slotTypeId = value; }

    /**
     * <p>The identifier of the slot type to delete.</p>
     */
    inline void SetSlotTypeId(Aws::String&& value) { m_slotTypeIdHasBeenSet = true; m_slotTypeId = std::move(value); }

    /**
     * <p>The identifier of the slot type to delete.</p>
     */
    inline void SetSlotTypeId(const char* value) { m_slotTypeIdHasBeenSet = true; m_slotTypeId.assign(value); }

    /**
     * <p>The identifier of the slot type to delete.</p>
     */
    inline DeleteSlotTypeRequest& WithSlotTypeId(const Aws::String& value) { SetSlotTypeId(value); return *this;}

    /**
     * <p>The identifier of the slot type to delete.</p>
     */
    inline DeleteSlotTypeRequest& WithSlotTypeId(Aws::String&& value) { SetSlotTypeId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the slot type to delete.</p>
     */
    inline DeleteSlotTypeRequest& WithSlotTypeId(const char* value) { SetSlotTypeId(value); return *this;}


    /**
     * <p>The identifier of the bot associated with the slot type.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The identifier of the bot associated with the slot type.</p>
     */
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }

    /**
     * <p>The identifier of the bot associated with the slot type.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botIdHasBeenSet = true; m_botId = value; }

    /**
     * <p>The identifier of the bot associated with the slot type.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botIdHasBeenSet = true; m_botId = std::move(value); }

    /**
     * <p>The identifier of the bot associated with the slot type.</p>
     */
    inline void SetBotId(const char* value) { m_botIdHasBeenSet = true; m_botId.assign(value); }

    /**
     * <p>The identifier of the bot associated with the slot type.</p>
     */
    inline DeleteSlotTypeRequest& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The identifier of the bot associated with the slot type.</p>
     */
    inline DeleteSlotTypeRequest& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the bot associated with the slot type.</p>
     */
    inline DeleteSlotTypeRequest& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>The version of the bot associated with the slot type.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }

    /**
     * <p>The version of the bot associated with the slot type.</p>
     */
    inline bool BotVersionHasBeenSet() const { return m_botVersionHasBeenSet; }

    /**
     * <p>The version of the bot associated with the slot type.</p>
     */
    inline void SetBotVersion(const Aws::String& value) { m_botVersionHasBeenSet = true; m_botVersion = value; }

    /**
     * <p>The version of the bot associated with the slot type.</p>
     */
    inline void SetBotVersion(Aws::String&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::move(value); }

    /**
     * <p>The version of the bot associated with the slot type.</p>
     */
    inline void SetBotVersion(const char* value) { m_botVersionHasBeenSet = true; m_botVersion.assign(value); }

    /**
     * <p>The version of the bot associated with the slot type.</p>
     */
    inline DeleteSlotTypeRequest& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}

    /**
     * <p>The version of the bot associated with the slot type.</p>
     */
    inline DeleteSlotTypeRequest& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the bot associated with the slot type.</p>
     */
    inline DeleteSlotTypeRequest& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}


    /**
     * <p>The identifier of the language and locale that the slot type will be deleted
     * from. The string must match one of the supported locales. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }

    /**
     * <p>The identifier of the language and locale that the slot type will be deleted
     * from. The string must match one of the supported locales. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline bool LocaleIdHasBeenSet() const { return m_localeIdHasBeenSet; }

    /**
     * <p>The identifier of the language and locale that the slot type will be deleted
     * from. The string must match one of the supported locales. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline void SetLocaleId(const Aws::String& value) { m_localeIdHasBeenSet = true; m_localeId = value; }

    /**
     * <p>The identifier of the language and locale that the slot type will be deleted
     * from. The string must match one of the supported locales. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline void SetLocaleId(Aws::String&& value) { m_localeIdHasBeenSet = true; m_localeId = std::move(value); }

    /**
     * <p>The identifier of the language and locale that the slot type will be deleted
     * from. The string must match one of the supported locales. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline void SetLocaleId(const char* value) { m_localeIdHasBeenSet = true; m_localeId.assign(value); }

    /**
     * <p>The identifier of the language and locale that the slot type will be deleted
     * from. The string must match one of the supported locales. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline DeleteSlotTypeRequest& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}

    /**
     * <p>The identifier of the language and locale that the slot type will be deleted
     * from. The string must match one of the supported locales. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline DeleteSlotTypeRequest& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the language and locale that the slot type will be deleted
     * from. The string must match one of the supported locales. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline DeleteSlotTypeRequest& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}


    /**
     * <p>By default, the <code>DeleteSlotType</code> operations throws a
     * <code>ResourceInUseException</code> exception if you try to delete a slot type
     * used by a slot. Set the <code>skipResourceInUseCheck</code> parameter to
     * <code>true</code> to skip this check and remove the slot type even if a slot
     * uses it.</p>
     */
    inline bool GetSkipResourceInUseCheck() const{ return m_skipResourceInUseCheck; }

    /**
     * <p>By default, the <code>DeleteSlotType</code> operations throws a
     * <code>ResourceInUseException</code> exception if you try to delete a slot type
     * used by a slot. Set the <code>skipResourceInUseCheck</code> parameter to
     * <code>true</code> to skip this check and remove the slot type even if a slot
     * uses it.</p>
     */
    inline bool SkipResourceInUseCheckHasBeenSet() const { return m_skipResourceInUseCheckHasBeenSet; }

    /**
     * <p>By default, the <code>DeleteSlotType</code> operations throws a
     * <code>ResourceInUseException</code> exception if you try to delete a slot type
     * used by a slot. Set the <code>skipResourceInUseCheck</code> parameter to
     * <code>true</code> to skip this check and remove the slot type even if a slot
     * uses it.</p>
     */
    inline void SetSkipResourceInUseCheck(bool value) { m_skipResourceInUseCheckHasBeenSet = true; m_skipResourceInUseCheck = value; }

    /**
     * <p>By default, the <code>DeleteSlotType</code> operations throws a
     * <code>ResourceInUseException</code> exception if you try to delete a slot type
     * used by a slot. Set the <code>skipResourceInUseCheck</code> parameter to
     * <code>true</code> to skip this check and remove the slot type even if a slot
     * uses it.</p>
     */
    inline DeleteSlotTypeRequest& WithSkipResourceInUseCheck(bool value) { SetSkipResourceInUseCheck(value); return *this;}

  private:

    Aws::String m_slotTypeId;
    bool m_slotTypeIdHasBeenSet = false;

    Aws::String m_botId;
    bool m_botIdHasBeenSet = false;

    Aws::String m_botVersion;
    bool m_botVersionHasBeenSet = false;

    Aws::String m_localeId;
    bool m_localeIdHasBeenSet = false;

    bool m_skipResourceInUseCheck;
    bool m_skipResourceInUseCheckHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
