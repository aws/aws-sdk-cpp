/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/BotRecommendationResultStatistics.h>
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
namespace LexModelsV2
{
namespace Model
{

  /**
   * <p>The object representing the URL of the bot definition, the URL of the
   * associated transcript, and a statistical summary of the bot recommendation
   * results.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/BotRecommendationResults">AWS
   * API Reference</a></p>
   */
  class BotRecommendationResults
  {
  public:
    AWS_LEXMODELSV2_API BotRecommendationResults() = default;
    AWS_LEXMODELSV2_API BotRecommendationResults(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API BotRecommendationResults& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The presigned URL link of the recommended bot definition.</p>
     */
    inline const Aws::String& GetBotLocaleExportUrl() const { return m_botLocaleExportUrl; }
    inline bool BotLocaleExportUrlHasBeenSet() const { return m_botLocaleExportUrlHasBeenSet; }
    template<typename BotLocaleExportUrlT = Aws::String>
    void SetBotLocaleExportUrl(BotLocaleExportUrlT&& value) { m_botLocaleExportUrlHasBeenSet = true; m_botLocaleExportUrl = std::forward<BotLocaleExportUrlT>(value); }
    template<typename BotLocaleExportUrlT = Aws::String>
    BotRecommendationResults& WithBotLocaleExportUrl(BotLocaleExportUrlT&& value) { SetBotLocaleExportUrl(std::forward<BotLocaleExportUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The presigned url link of the associated transcript.</p>
     */
    inline const Aws::String& GetAssociatedTranscriptsUrl() const { return m_associatedTranscriptsUrl; }
    inline bool AssociatedTranscriptsUrlHasBeenSet() const { return m_associatedTranscriptsUrlHasBeenSet; }
    template<typename AssociatedTranscriptsUrlT = Aws::String>
    void SetAssociatedTranscriptsUrl(AssociatedTranscriptsUrlT&& value) { m_associatedTranscriptsUrlHasBeenSet = true; m_associatedTranscriptsUrl = std::forward<AssociatedTranscriptsUrlT>(value); }
    template<typename AssociatedTranscriptsUrlT = Aws::String>
    BotRecommendationResults& WithAssociatedTranscriptsUrl(AssociatedTranscriptsUrlT&& value) { SetAssociatedTranscriptsUrl(std::forward<AssociatedTranscriptsUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The statistical summary of the bot recommendation results.</p>
     */
    inline const BotRecommendationResultStatistics& GetStatistics() const { return m_statistics; }
    inline bool StatisticsHasBeenSet() const { return m_statisticsHasBeenSet; }
    template<typename StatisticsT = BotRecommendationResultStatistics>
    void SetStatistics(StatisticsT&& value) { m_statisticsHasBeenSet = true; m_statistics = std::forward<StatisticsT>(value); }
    template<typename StatisticsT = BotRecommendationResultStatistics>
    BotRecommendationResults& WithStatistics(StatisticsT&& value) { SetStatistics(std::forward<StatisticsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_botLocaleExportUrl;
    bool m_botLocaleExportUrlHasBeenSet = false;

    Aws::String m_associatedTranscriptsUrl;
    bool m_associatedTranscriptsUrlHasBeenSet = false;

    BotRecommendationResultStatistics m_statistics;
    bool m_statisticsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
