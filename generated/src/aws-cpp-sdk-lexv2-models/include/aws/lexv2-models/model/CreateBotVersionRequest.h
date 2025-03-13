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
    AWS_LEXMODELSV2_API CreateBotVersionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateBotVersion"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the bot to create the version for.</p>
     */
    inline const Aws::String& GetBotId() const { return m_botId; }
    inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }
    template<typename BotIdT = Aws::String>
    void SetBotId(BotIdT&& value) { m_botIdHasBeenSet = true; m_botId = std::forward<BotIdT>(value); }
    template<typename BotIdT = Aws::String>
    CreateBotVersionRequest& WithBotId(BotIdT&& value) { SetBotId(std::forward<BotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the version. Use the description to help identify the
     * version in lists.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateBotVersionRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the locales that Amazon Lex adds to this version. You can choose
     * the <code>Draft</code> version or any other previously published version for
     * each locale. When you specify a source version, the locale data is copied from
     * the source version to the new version.</p>
     */
    inline const Aws::Map<Aws::String, BotVersionLocaleDetails>& GetBotVersionLocaleSpecification() const { return m_botVersionLocaleSpecification; }
    inline bool BotVersionLocaleSpecificationHasBeenSet() const { return m_botVersionLocaleSpecificationHasBeenSet; }
    template<typename BotVersionLocaleSpecificationT = Aws::Map<Aws::String, BotVersionLocaleDetails>>
    void SetBotVersionLocaleSpecification(BotVersionLocaleSpecificationT&& value) { m_botVersionLocaleSpecificationHasBeenSet = true; m_botVersionLocaleSpecification = std::forward<BotVersionLocaleSpecificationT>(value); }
    template<typename BotVersionLocaleSpecificationT = Aws::Map<Aws::String, BotVersionLocaleDetails>>
    CreateBotVersionRequest& WithBotVersionLocaleSpecification(BotVersionLocaleSpecificationT&& value) { SetBotVersionLocaleSpecification(std::forward<BotVersionLocaleSpecificationT>(value)); return *this;}
    template<typename BotVersionLocaleSpecificationKeyT = Aws::String, typename BotVersionLocaleSpecificationValueT = BotVersionLocaleDetails>
    CreateBotVersionRequest& AddBotVersionLocaleSpecification(BotVersionLocaleSpecificationKeyT&& key, BotVersionLocaleSpecificationValueT&& value) {
      m_botVersionLocaleSpecificationHasBeenSet = true; m_botVersionLocaleSpecification.emplace(std::forward<BotVersionLocaleSpecificationKeyT>(key), std::forward<BotVersionLocaleSpecificationValueT>(value)); return *this;
    }
    ///@}
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
