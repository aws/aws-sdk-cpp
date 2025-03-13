/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/lexv2-models/model/BotStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/lexv2-models/model/BotVersionLocaleDetails.h>
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
namespace LexModelsV2
{
namespace Model
{
  class CreateBotVersionResult
  {
  public:
    AWS_LEXMODELSV2_API CreateBotVersionResult() = default;
    AWS_LEXMODELSV2_API CreateBotVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API CreateBotVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The bot identifier specified in the request.</p>
     */
    inline const Aws::String& GetBotId() const { return m_botId; }
    template<typename BotIdT = Aws::String>
    void SetBotId(BotIdT&& value) { m_botIdHasBeenSet = true; m_botId = std::forward<BotIdT>(value); }
    template<typename BotIdT = Aws::String>
    CreateBotVersionResult& WithBotId(BotIdT&& value) { SetBotId(std::forward<BotIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the version specified in the request.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateBotVersionResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version number assigned to the version.</p>
     */
    inline const Aws::String& GetBotVersion() const { return m_botVersion; }
    template<typename BotVersionT = Aws::String>
    void SetBotVersion(BotVersionT&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::forward<BotVersionT>(value); }
    template<typename BotVersionT = Aws::String>
    CreateBotVersionResult& WithBotVersion(BotVersionT&& value) { SetBotVersion(std::forward<BotVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source versions used for each locale in the new version.</p>
     */
    inline const Aws::Map<Aws::String, BotVersionLocaleDetails>& GetBotVersionLocaleSpecification() const { return m_botVersionLocaleSpecification; }
    template<typename BotVersionLocaleSpecificationT = Aws::Map<Aws::String, BotVersionLocaleDetails>>
    void SetBotVersionLocaleSpecification(BotVersionLocaleSpecificationT&& value) { m_botVersionLocaleSpecificationHasBeenSet = true; m_botVersionLocaleSpecification = std::forward<BotVersionLocaleSpecificationT>(value); }
    template<typename BotVersionLocaleSpecificationT = Aws::Map<Aws::String, BotVersionLocaleDetails>>
    CreateBotVersionResult& WithBotVersionLocaleSpecification(BotVersionLocaleSpecificationT&& value) { SetBotVersionLocaleSpecification(std::forward<BotVersionLocaleSpecificationT>(value)); return *this;}
    template<typename BotVersionLocaleSpecificationKeyT = Aws::String, typename BotVersionLocaleSpecificationValueT = BotVersionLocaleDetails>
    CreateBotVersionResult& AddBotVersionLocaleSpecification(BotVersionLocaleSpecificationKeyT&& key, BotVersionLocaleSpecificationValueT&& value) {
      m_botVersionLocaleSpecificationHasBeenSet = true; m_botVersionLocaleSpecification.emplace(std::forward<BotVersionLocaleSpecificationKeyT>(key), std::forward<BotVersionLocaleSpecificationValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>When you send a request to create or update a bot, Amazon Lex sets the status
     * response element to <code>Creating</code>. After Amazon Lex builds the bot, it
     * sets status to <code>Available</code>. If Amazon Lex can't build the bot, it
     * sets status to <code>Failed</code>.</p>
     */
    inline BotStatus GetBotStatus() const { return m_botStatus; }
    inline void SetBotStatus(BotStatus value) { m_botStatusHasBeenSet = true; m_botStatus = value; }
    inline CreateBotVersionResult& WithBotStatus(BotStatus value) { SetBotStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp of the date and time that the version was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const { return m_creationDateTime; }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    void SetCreationDateTime(CreationDateTimeT&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::forward<CreationDateTimeT>(value); }
    template<typename CreationDateTimeT = Aws::Utils::DateTime>
    CreateBotVersionResult& WithCreationDateTime(CreationDateTimeT&& value) { SetCreationDateTime(std::forward<CreationDateTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateBotVersionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_botId;
    bool m_botIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_botVersion;
    bool m_botVersionHasBeenSet = false;

    Aws::Map<Aws::String, BotVersionLocaleDetails> m_botVersionLocaleSpecification;
    bool m_botVersionLocaleSpecificationHasBeenSet = false;

    BotStatus m_botStatus{BotStatus::NOT_SET};
    bool m_botStatusHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime{};
    bool m_creationDateTimeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
