/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/lex-models/LexModelBuildingServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lex-models/model/StatusType.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace LexModelBuildingService
{
namespace Model
{

  /**
   */
  class GetUtterancesViewRequest : public LexModelBuildingServiceRequest
  {
  public:
    AWS_LEXMODELBUILDINGSERVICE_API GetUtterancesViewRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetUtterancesView"; }

    AWS_LEXMODELBUILDINGSERVICE_API Aws::String SerializePayload() const override;

    AWS_LEXMODELBUILDINGSERVICE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The name of the bot for which utterance information should be returned.</p>
     */
    inline const Aws::String& GetBotName() const { return m_botName; }
    inline bool BotNameHasBeenSet() const { return m_botNameHasBeenSet; }
    template<typename BotNameT = Aws::String>
    void SetBotName(BotNameT&& value) { m_botNameHasBeenSet = true; m_botName = std::forward<BotNameT>(value); }
    template<typename BotNameT = Aws::String>
    GetUtterancesViewRequest& WithBotName(BotNameT&& value) { SetBotName(std::forward<BotNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of bot versions for which utterance information should be returned.
     * The limit is 5 versions per request.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBotVersions() const { return m_botVersions; }
    inline bool BotVersionsHasBeenSet() const { return m_botVersionsHasBeenSet; }
    template<typename BotVersionsT = Aws::Vector<Aws::String>>
    void SetBotVersions(BotVersionsT&& value) { m_botVersionsHasBeenSet = true; m_botVersions = std::forward<BotVersionsT>(value); }
    template<typename BotVersionsT = Aws::Vector<Aws::String>>
    GetUtterancesViewRequest& WithBotVersions(BotVersionsT&& value) { SetBotVersions(std::forward<BotVersionsT>(value)); return *this;}
    template<typename BotVersionsT = Aws::String>
    GetUtterancesViewRequest& AddBotVersions(BotVersionsT&& value) { m_botVersionsHasBeenSet = true; m_botVersions.emplace_back(std::forward<BotVersionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>To return utterances that were recognized and handled, use
     * <code>Detected</code>. To return utterances that were not recognized, use
     * <code>Missed</code>.</p>
     */
    inline StatusType GetStatusType() const { return m_statusType; }
    inline bool StatusTypeHasBeenSet() const { return m_statusTypeHasBeenSet; }
    inline void SetStatusType(StatusType value) { m_statusTypeHasBeenSet = true; m_statusType = value; }
    inline GetUtterancesViewRequest& WithStatusType(StatusType value) { SetStatusType(value); return *this;}
    ///@}
  private:

    Aws::String m_botName;
    bool m_botNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_botVersions;
    bool m_botVersionsHasBeenSet = false;

    StatusType m_statusType{StatusType::NOT_SET};
    bool m_statusTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
