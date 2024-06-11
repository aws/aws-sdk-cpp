/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/model/BotRecommendationStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>A summary of the bot recommendation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/models.lex.v2-2020-08-07/BotRecommendationSummary">AWS
   * API Reference</a></p>
   */
  class BotRecommendationSummary
  {
  public:
    AWS_LEXMODELSV2_API BotRecommendationSummary();
    AWS_LEXMODELSV2_API BotRecommendationSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API BotRecommendationSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_LEXMODELSV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status of the bot recommendation.</p> <p>If the status is Failed, then
     * the reasons for the failure are listed in the failureReasons field. </p>
     */
    inline const BotRecommendationStatus& GetBotRecommendationStatus() const{ return m_botRecommendationStatus; }
    inline bool BotRecommendationStatusHasBeenSet() const { return m_botRecommendationStatusHasBeenSet; }
    inline void SetBotRecommendationStatus(const BotRecommendationStatus& value) { m_botRecommendationStatusHasBeenSet = true; m_botRecommendationStatus = value; }
    inline void SetBotRecommendationStatus(BotRecommendationStatus&& value) { m_botRecommendationStatusHasBeenSet = true; m_botRecommendationStatus = std::move(value); }
    inline BotRecommendationSummary& WithBotRecommendationStatus(const BotRecommendationStatus& value) { SetBotRecommendationStatus(value); return *this;}
    inline BotRecommendationSummary& WithBotRecommendationStatus(BotRecommendationStatus&& value) { SetBotRecommendationStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the bot recommendation to be updated.</p>
     */
    inline const Aws::String& GetBotRecommendationId() const{ return m_botRecommendationId; }
    inline bool BotRecommendationIdHasBeenSet() const { return m_botRecommendationIdHasBeenSet; }
    inline void SetBotRecommendationId(const Aws::String& value) { m_botRecommendationIdHasBeenSet = true; m_botRecommendationId = value; }
    inline void SetBotRecommendationId(Aws::String&& value) { m_botRecommendationIdHasBeenSet = true; m_botRecommendationId = std::move(value); }
    inline void SetBotRecommendationId(const char* value) { m_botRecommendationIdHasBeenSet = true; m_botRecommendationId.assign(value); }
    inline BotRecommendationSummary& WithBotRecommendationId(const Aws::String& value) { SetBotRecommendationId(value); return *this;}
    inline BotRecommendationSummary& WithBotRecommendationId(Aws::String&& value) { SetBotRecommendationId(std::move(value)); return *this;}
    inline BotRecommendationSummary& WithBotRecommendationId(const char* value) { SetBotRecommendationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp of the date and time that the bot recommendation was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationDateTime() const{ return m_creationDateTime; }
    inline bool CreationDateTimeHasBeenSet() const { return m_creationDateTimeHasBeenSet; }
    inline void SetCreationDateTime(const Aws::Utils::DateTime& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = value; }
    inline void SetCreationDateTime(Aws::Utils::DateTime&& value) { m_creationDateTimeHasBeenSet = true; m_creationDateTime = std::move(value); }
    inline BotRecommendationSummary& WithCreationDateTime(const Aws::Utils::DateTime& value) { SetCreationDateTime(value); return *this;}
    inline BotRecommendationSummary& WithCreationDateTime(Aws::Utils::DateTime&& value) { SetCreationDateTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp of the date and time that the bot recommendation was last
     * updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdatedDateTime() const{ return m_lastUpdatedDateTime; }
    inline bool LastUpdatedDateTimeHasBeenSet() const { return m_lastUpdatedDateTimeHasBeenSet; }
    inline void SetLastUpdatedDateTime(const Aws::Utils::DateTime& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = value; }
    inline void SetLastUpdatedDateTime(Aws::Utils::DateTime&& value) { m_lastUpdatedDateTimeHasBeenSet = true; m_lastUpdatedDateTime = std::move(value); }
    inline BotRecommendationSummary& WithLastUpdatedDateTime(const Aws::Utils::DateTime& value) { SetLastUpdatedDateTime(value); return *this;}
    inline BotRecommendationSummary& WithLastUpdatedDateTime(Aws::Utils::DateTime&& value) { SetLastUpdatedDateTime(std::move(value)); return *this;}
    ///@}
  private:

    BotRecommendationStatus m_botRecommendationStatus;
    bool m_botRecommendationStatusHasBeenSet = false;

    Aws::String m_botRecommendationId;
    bool m_botRecommendationIdHasBeenSet = false;

    Aws::Utils::DateTime m_creationDateTime;
    bool m_creationDateTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdatedDateTime;
    bool m_lastUpdatedDateTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
