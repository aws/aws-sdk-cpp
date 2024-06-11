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
  class DescribeSlotTypeRequest : public LexModelsV2Request
  {
  public:
    AWS_LEXMODELSV2_API DescribeSlotTypeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeSlotType"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the slot type.</p>
     */
    inline const Aws::String& GetSlotTypeId() const{ return m_slotTypeId; }
    inline bool SlotTypeIdHasBeenSet() const { return m_slotTypeIdHasBeenSet; }
    inline void SetSlotTypeId(const Aws::String& value) { m_slotTypeIdHasBeenSet = true; m_slotTypeId = value; }
    inline void SetSlotTypeId(Aws::String&& value) { m_slotTypeIdHasBeenSet = true; m_slotTypeId = std::move(value); }
    inline void SetSlotTypeId(const char* value) { m_slotTypeIdHasBeenSet = true; m_slotTypeId.assign(value); }
    inline DescribeSlotTypeRequest& WithSlotTypeId(const Aws::String& value) { SetSlotTypeId(value); return *this;}
    inline DescribeSlotTypeRequest& WithSlotTypeId(Aws::String&& value) { SetSlotTypeId(std::move(value)); return *this;}
    inline DescribeSlotTypeRequest& WithSlotTypeId(const char* value) { SetSlotTypeId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the bot associated with the slot type.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }
    inline void SetBotId(const Aws::String& value) { m_botIdHasBeenSet = true; m_botId = value; }
    inline void SetBotId(Aws::String&& value) { m_botIdHasBeenSet = true; m_botId = std::move(value); }
    inline void SetBotId(const char* value) { m_botIdHasBeenSet = true; m_botId.assign(value); }
    inline DescribeSlotTypeRequest& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}
    inline DescribeSlotTypeRequest& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}
    inline DescribeSlotTypeRequest& WithBotId(const char* value) { SetBotId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the bot associated with the slot type.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }
    inline bool BotVersionHasBeenSet() const { return m_botVersionHasBeenSet; }
    inline void SetBotVersion(const Aws::String& value) { m_botVersionHasBeenSet = true; m_botVersion = value; }
    inline void SetBotVersion(Aws::String&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::move(value); }
    inline void SetBotVersion(const char* value) { m_botVersionHasBeenSet = true; m_botVersion.assign(value); }
    inline DescribeSlotTypeRequest& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}
    inline DescribeSlotTypeRequest& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}
    inline DescribeSlotTypeRequest& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the language and locale of the slot type to describe. The
     * string must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }
    inline bool LocaleIdHasBeenSet() const { return m_localeIdHasBeenSet; }
    inline void SetLocaleId(const Aws::String& value) { m_localeIdHasBeenSet = true; m_localeId = value; }
    inline void SetLocaleId(Aws::String&& value) { m_localeIdHasBeenSet = true; m_localeId = std::move(value); }
    inline void SetLocaleId(const char* value) { m_localeIdHasBeenSet = true; m_localeId.assign(value); }
    inline DescribeSlotTypeRequest& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}
    inline DescribeSlotTypeRequest& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}
    inline DescribeSlotTypeRequest& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}
    ///@}
  private:

    Aws::String m_slotTypeId;
    bool m_slotTypeIdHasBeenSet = false;

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
