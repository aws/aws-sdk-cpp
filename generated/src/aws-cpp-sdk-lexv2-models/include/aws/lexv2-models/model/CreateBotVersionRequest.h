/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/LexModelsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/lexv2-models/model/BotVersionLocaleDetails.h>
#include <utility>

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

  /**
   */
  class CreateBotVersionRequest : public LexModelsV2Request
  {
  public:
    AWS_LEXMODELSV2_API CreateBotVersionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateBotVersion"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;


    /**
     * <p>The identifier of the bot to create the version for.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The identifier of the bot to create the version for.</p>
     */
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }

    /**
     * <p>The identifier of the bot to create the version for.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botIdHasBeenSet = true; m_botId = value; }

    /**
     * <p>The identifier of the bot to create the version for.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botIdHasBeenSet = true; m_botId = std::move(value); }

    /**
     * <p>The identifier of the bot to create the version for.</p>
     */
    inline void SetBotId(const char* value) { m_botIdHasBeenSet = true; m_botId.assign(value); }

    /**
     * <p>The identifier of the bot to create the version for.</p>
     */
    inline CreateBotVersionRequest& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The identifier of the bot to create the version for.</p>
     */
    inline CreateBotVersionRequest& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the bot to create the version for.</p>
     */
    inline CreateBotVersionRequest& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>A description of the version. Use the description to help identify the
     * version in lists.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the version. Use the description to help identify the
     * version in lists.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the version. Use the description to help identify the
     * version in lists.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the version. Use the description to help identify the
     * version in lists.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the version. Use the description to help identify the
     * version in lists.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the version. Use the description to help identify the
     * version in lists.</p>
     */
    inline CreateBotVersionRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the version. Use the description to help identify the
     * version in lists.</p>
     */
    inline CreateBotVersionRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the version. Use the description to help identify the
     * version in lists.</p>
     */
    inline CreateBotVersionRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>Specifies the locales that Amazon Lex adds to this version. You can choose
     * the <code>Draft</code> version or any other previously published version for
     * each locale. When you specify a source version, the locale data is copied from
     * the source version to the new version.</p>
     */
    inline const Aws::Map<Aws::String, BotVersionLocaleDetails>& GetBotVersionLocaleSpecification() const{ return m_botVersionLocaleSpecification; }

    /**
     * <p>Specifies the locales that Amazon Lex adds to this version. You can choose
     * the <code>Draft</code> version or any other previously published version for
     * each locale. When you specify a source version, the locale data is copied from
     * the source version to the new version.</p>
     */
    inline bool BotVersionLocaleSpecificationHasBeenSet() const { return m_botVersionLocaleSpecificationHasBeenSet; }

    /**
     * <p>Specifies the locales that Amazon Lex adds to this version. You can choose
     * the <code>Draft</code> version or any other previously published version for
     * each locale. When you specify a source version, the locale data is copied from
     * the source version to the new version.</p>
     */
    inline void SetBotVersionLocaleSpecification(const Aws::Map<Aws::String, BotVersionLocaleDetails>& value) { m_botVersionLocaleSpecificationHasBeenSet = true; m_botVersionLocaleSpecification = value; }

    /**
     * <p>Specifies the locales that Amazon Lex adds to this version. You can choose
     * the <code>Draft</code> version or any other previously published version for
     * each locale. When you specify a source version, the locale data is copied from
     * the source version to the new version.</p>
     */
    inline void SetBotVersionLocaleSpecification(Aws::Map<Aws::String, BotVersionLocaleDetails>&& value) { m_botVersionLocaleSpecificationHasBeenSet = true; m_botVersionLocaleSpecification = std::move(value); }

    /**
     * <p>Specifies the locales that Amazon Lex adds to this version. You can choose
     * the <code>Draft</code> version or any other previously published version for
     * each locale. When you specify a source version, the locale data is copied from
     * the source version to the new version.</p>
     */
    inline CreateBotVersionRequest& WithBotVersionLocaleSpecification(const Aws::Map<Aws::String, BotVersionLocaleDetails>& value) { SetBotVersionLocaleSpecification(value); return *this;}

    /**
     * <p>Specifies the locales that Amazon Lex adds to this version. You can choose
     * the <code>Draft</code> version or any other previously published version for
     * each locale. When you specify a source version, the locale data is copied from
     * the source version to the new version.</p>
     */
    inline CreateBotVersionRequest& WithBotVersionLocaleSpecification(Aws::Map<Aws::String, BotVersionLocaleDetails>&& value) { SetBotVersionLocaleSpecification(std::move(value)); return *this;}

    /**
     * <p>Specifies the locales that Amazon Lex adds to this version. You can choose
     * the <code>Draft</code> version or any other previously published version for
     * each locale. When you specify a source version, the locale data is copied from
     * the source version to the new version.</p>
     */
    inline CreateBotVersionRequest& AddBotVersionLocaleSpecification(const Aws::String& key, const BotVersionLocaleDetails& value) { m_botVersionLocaleSpecificationHasBeenSet = true; m_botVersionLocaleSpecification.emplace(key, value); return *this; }

    /**
     * <p>Specifies the locales that Amazon Lex adds to this version. You can choose
     * the <code>Draft</code> version or any other previously published version for
     * each locale. When you specify a source version, the locale data is copied from
     * the source version to the new version.</p>
     */
    inline CreateBotVersionRequest& AddBotVersionLocaleSpecification(Aws::String&& key, const BotVersionLocaleDetails& value) { m_botVersionLocaleSpecificationHasBeenSet = true; m_botVersionLocaleSpecification.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specifies the locales that Amazon Lex adds to this version. You can choose
     * the <code>Draft</code> version or any other previously published version for
     * each locale. When you specify a source version, the locale data is copied from
     * the source version to the new version.</p>
     */
    inline CreateBotVersionRequest& AddBotVersionLocaleSpecification(const Aws::String& key, BotVersionLocaleDetails&& value) { m_botVersionLocaleSpecificationHasBeenSet = true; m_botVersionLocaleSpecification.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specifies the locales that Amazon Lex adds to this version. You can choose
     * the <code>Draft</code> version or any other previously published version for
     * each locale. When you specify a source version, the locale data is copied from
     * the source version to the new version.</p>
     */
    inline CreateBotVersionRequest& AddBotVersionLocaleSpecification(Aws::String&& key, BotVersionLocaleDetails&& value) { m_botVersionLocaleSpecificationHasBeenSet = true; m_botVersionLocaleSpecification.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Specifies the locales that Amazon Lex adds to this version. You can choose
     * the <code>Draft</code> version or any other previously published version for
     * each locale. When you specify a source version, the locale data is copied from
     * the source version to the new version.</p>
     */
    inline CreateBotVersionRequest& AddBotVersionLocaleSpecification(const char* key, BotVersionLocaleDetails&& value) { m_botVersionLocaleSpecificationHasBeenSet = true; m_botVersionLocaleSpecification.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specifies the locales that Amazon Lex adds to this version. You can choose
     * the <code>Draft</code> version or any other previously published version for
     * each locale. When you specify a source version, the locale data is copied from
     * the source version to the new version.</p>
     */
    inline CreateBotVersionRequest& AddBotVersionLocaleSpecification(const char* key, const BotVersionLocaleDetails& value) { m_botVersionLocaleSpecificationHasBeenSet = true; m_botVersionLocaleSpecification.emplace(key, value); return *this; }

  private:

    Aws::String m_botId;
    bool m_botIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Map<Aws::String, BotVersionLocaleDetails> m_botVersionLocaleSpecification;
    bool m_botVersionLocaleSpecificationHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
