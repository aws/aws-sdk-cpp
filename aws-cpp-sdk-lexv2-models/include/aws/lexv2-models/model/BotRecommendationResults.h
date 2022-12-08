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
    AWS_LEXMODELSV2_API BotRecommendationResults();
    AWS_LEXMODELSV2_API BotRecommendationResults(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API BotRecommendationResults& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The presigned URL link of the recommended bot definition.</p>
     */
    inline const Aws::String& GetBotLocaleExportUrl() const{ return m_botLocaleExportUrl; }

    /**
     * <p>The presigned URL link of the recommended bot definition.</p>
     */
    inline bool BotLocaleExportUrlHasBeenSet() const { return m_botLocaleExportUrlHasBeenSet; }

    /**
     * <p>The presigned URL link of the recommended bot definition.</p>
     */
    inline void SetBotLocaleExportUrl(const Aws::String& value) { m_botLocaleExportUrlHasBeenSet = true; m_botLocaleExportUrl = value; }

    /**
     * <p>The presigned URL link of the recommended bot definition.</p>
     */
    inline void SetBotLocaleExportUrl(Aws::String&& value) { m_botLocaleExportUrlHasBeenSet = true; m_botLocaleExportUrl = std::move(value); }

    /**
     * <p>The presigned URL link of the recommended bot definition.</p>
     */
    inline void SetBotLocaleExportUrl(const char* value) { m_botLocaleExportUrlHasBeenSet = true; m_botLocaleExportUrl.assign(value); }

    /**
     * <p>The presigned URL link of the recommended bot definition.</p>
     */
    inline BotRecommendationResults& WithBotLocaleExportUrl(const Aws::String& value) { SetBotLocaleExportUrl(value); return *this;}

    /**
     * <p>The presigned URL link of the recommended bot definition.</p>
     */
    inline BotRecommendationResults& WithBotLocaleExportUrl(Aws::String&& value) { SetBotLocaleExportUrl(std::move(value)); return *this;}

    /**
     * <p>The presigned URL link of the recommended bot definition.</p>
     */
    inline BotRecommendationResults& WithBotLocaleExportUrl(const char* value) { SetBotLocaleExportUrl(value); return *this;}


    /**
     * <p>The presigned url link of the associated transcript.</p>
     */
    inline const Aws::String& GetAssociatedTranscriptsUrl() const{ return m_associatedTranscriptsUrl; }

    /**
     * <p>The presigned url link of the associated transcript.</p>
     */
    inline bool AssociatedTranscriptsUrlHasBeenSet() const { return m_associatedTranscriptsUrlHasBeenSet; }

    /**
     * <p>The presigned url link of the associated transcript.</p>
     */
    inline void SetAssociatedTranscriptsUrl(const Aws::String& value) { m_associatedTranscriptsUrlHasBeenSet = true; m_associatedTranscriptsUrl = value; }

    /**
     * <p>The presigned url link of the associated transcript.</p>
     */
    inline void SetAssociatedTranscriptsUrl(Aws::String&& value) { m_associatedTranscriptsUrlHasBeenSet = true; m_associatedTranscriptsUrl = std::move(value); }

    /**
     * <p>The presigned url link of the associated transcript.</p>
     */
    inline void SetAssociatedTranscriptsUrl(const char* value) { m_associatedTranscriptsUrlHasBeenSet = true; m_associatedTranscriptsUrl.assign(value); }

    /**
     * <p>The presigned url link of the associated transcript.</p>
     */
    inline BotRecommendationResults& WithAssociatedTranscriptsUrl(const Aws::String& value) { SetAssociatedTranscriptsUrl(value); return *this;}

    /**
     * <p>The presigned url link of the associated transcript.</p>
     */
    inline BotRecommendationResults& WithAssociatedTranscriptsUrl(Aws::String&& value) { SetAssociatedTranscriptsUrl(std::move(value)); return *this;}

    /**
     * <p>The presigned url link of the associated transcript.</p>
     */
    inline BotRecommendationResults& WithAssociatedTranscriptsUrl(const char* value) { SetAssociatedTranscriptsUrl(value); return *this;}


    /**
     * <p>The statistical summary of the bot recommendation results.</p>
     */
    inline const BotRecommendationResultStatistics& GetStatistics() const{ return m_statistics; }

    /**
     * <p>The statistical summary of the bot recommendation results.</p>
     */
    inline bool StatisticsHasBeenSet() const { return m_statisticsHasBeenSet; }

    /**
     * <p>The statistical summary of the bot recommendation results.</p>
     */
    inline void SetStatistics(const BotRecommendationResultStatistics& value) { m_statisticsHasBeenSet = true; m_statistics = value; }

    /**
     * <p>The statistical summary of the bot recommendation results.</p>
     */
    inline void SetStatistics(BotRecommendationResultStatistics&& value) { m_statisticsHasBeenSet = true; m_statistics = std::move(value); }

    /**
     * <p>The statistical summary of the bot recommendation results.</p>
     */
    inline BotRecommendationResults& WithStatistics(const BotRecommendationResultStatistics& value) { SetStatistics(value); return *this;}

    /**
     * <p>The statistical summary of the bot recommendation results.</p>
     */
    inline BotRecommendationResults& WithStatistics(BotRecommendationResultStatistics&& value) { SetStatistics(std::move(value)); return *this;}

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
