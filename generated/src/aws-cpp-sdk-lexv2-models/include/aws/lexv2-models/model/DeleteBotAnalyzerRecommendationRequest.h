/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/LexModelsV2Request.h>
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>

#include <utility>

namespace Aws {
namespace LexModelsV2 {
namespace Model {

/**
 */
class DeleteBotAnalyzerRecommendationRequest : public LexModelsV2Request {
 public:
  AWS_LEXMODELSV2_API DeleteBotAnalyzerRecommendationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DeleteBotAnalyzerRecommendation"; }

  AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The unique identifier of the bot.</p>
   */
  inline const Aws::String& GetBotId() const { return m_botId; }
  inline bool BotIdHasBeenSet() const { return m_botIdHasBeenSet; }
  template <typename BotIdT = Aws::String>
  void SetBotId(BotIdT&& value) {
    m_botIdHasBeenSet = true;
    m_botId = std::forward<BotIdT>(value);
  }
  template <typename BotIdT = Aws::String>
  DeleteBotAnalyzerRecommendationRequest& WithBotId(BotIdT&& value) {
    SetBotId(std::forward<BotIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unique identifier of the analysis request whose recommendations should be
   * deleted.</p>
   */
  inline const Aws::String& GetBotAnalyzerRequestId() const { return m_botAnalyzerRequestId; }
  inline bool BotAnalyzerRequestIdHasBeenSet() const { return m_botAnalyzerRequestIdHasBeenSet; }
  template <typename BotAnalyzerRequestIdT = Aws::String>
  void SetBotAnalyzerRequestId(BotAnalyzerRequestIdT&& value) {
    m_botAnalyzerRequestIdHasBeenSet = true;
    m_botAnalyzerRequestId = std::forward<BotAnalyzerRequestIdT>(value);
  }
  template <typename BotAnalyzerRequestIdT = Aws::String>
  DeleteBotAnalyzerRecommendationRequest& WithBotAnalyzerRequestId(BotAnalyzerRequestIdT&& value) {
    SetBotAnalyzerRequestId(std::forward<BotAnalyzerRequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_botId;

  Aws::String m_botAnalyzerRequestId;
  bool m_botIdHasBeenSet = false;
  bool m_botAnalyzerRequestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace LexModelsV2
}  // namespace Aws
