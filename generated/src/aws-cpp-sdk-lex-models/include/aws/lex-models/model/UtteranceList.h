/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lex-models/model/UtteranceData.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace LexModelBuildingService
{
namespace Model
{

  /**
   * <p>Provides a list of utterances that have been made to a specific version of
   * your bot. The list contains a maximum of 100 utterances.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lex-models-2017-04-19/UtteranceList">AWS
   * API Reference</a></p>
   */
  class UtteranceList
  {
  public:
    AWS_LEXMODELBUILDINGSERVICE_API UtteranceList() = default;
    AWS_LEXMODELBUILDINGSERVICE_API UtteranceList(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELBUILDINGSERVICE_API UtteranceList& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELBUILDINGSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The version of the bot that processed the list.</p>
     */
    inline const Aws::String& GetBotVersion() const { return m_botVersion; }
    inline bool BotVersionHasBeenSet() const { return m_botVersionHasBeenSet; }
    template<typename BotVersionT = Aws::String>
    void SetBotVersion(BotVersionT&& value) { m_botVersionHasBeenSet = true; m_botVersion = std::forward<BotVersionT>(value); }
    template<typename BotVersionT = Aws::String>
    UtteranceList& WithBotVersion(BotVersionT&& value) { SetBotVersion(std::forward<BotVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more <a>UtteranceData</a> objects that contain information about the
     * utterances that have been made to a bot. The maximum number of object is
     * 100.</p>
     */
    inline const Aws::Vector<UtteranceData>& GetUtterances() const { return m_utterances; }
    inline bool UtterancesHasBeenSet() const { return m_utterancesHasBeenSet; }
    template<typename UtterancesT = Aws::Vector<UtteranceData>>
    void SetUtterances(UtterancesT&& value) { m_utterancesHasBeenSet = true; m_utterances = std::forward<UtterancesT>(value); }
    template<typename UtterancesT = Aws::Vector<UtteranceData>>
    UtteranceList& WithUtterances(UtterancesT&& value) { SetUtterances(std::forward<UtterancesT>(value)); return *this;}
    template<typename UtterancesT = UtteranceData>
    UtteranceList& AddUtterances(UtterancesT&& value) { m_utterancesHasBeenSet = true; m_utterances.emplace_back(std::forward<UtterancesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_botVersion;
    bool m_botVersionHasBeenSet = false;

    Aws::Vector<UtteranceData> m_utterances;
    bool m_utterancesHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
