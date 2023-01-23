/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/BotRecommendationStatus.h>
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
  class StopBotRecommendationResult
  {
  public:
    AWS_LEXMODELSV2_API StopBotRecommendationResult();
    AWS_LEXMODELSV2_API StopBotRecommendationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API StopBotRecommendationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier of the bot containing the bot recommendation that is
     * being stopped.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The unique identifier of the bot containing the bot recommendation that is
     * being stopped.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botId = value; }

    /**
     * <p>The unique identifier of the bot containing the bot recommendation that is
     * being stopped.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botId = std::move(value); }

    /**
     * <p>The unique identifier of the bot containing the bot recommendation that is
     * being stopped.</p>
     */
    inline void SetBotId(const char* value) { m_botId.assign(value); }

    /**
     * <p>The unique identifier of the bot containing the bot recommendation that is
     * being stopped.</p>
     */
    inline StopBotRecommendationResult& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The unique identifier of the bot containing the bot recommendation that is
     * being stopped.</p>
     */
    inline StopBotRecommendationResult& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the bot containing the bot recommendation that is
     * being stopped.</p>
     */
    inline StopBotRecommendationResult& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>The version of the bot containing the recommendation that is being
     * stopped.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }

    /**
     * <p>The version of the bot containing the recommendation that is being
     * stopped.</p>
     */
    inline void SetBotVersion(const Aws::String& value) { m_botVersion = value; }

    /**
     * <p>The version of the bot containing the recommendation that is being
     * stopped.</p>
     */
    inline void SetBotVersion(Aws::String&& value) { m_botVersion = std::move(value); }

    /**
     * <p>The version of the bot containing the recommendation that is being
     * stopped.</p>
     */
    inline void SetBotVersion(const char* value) { m_botVersion.assign(value); }

    /**
     * <p>The version of the bot containing the recommendation that is being
     * stopped.</p>
     */
    inline StopBotRecommendationResult& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}

    /**
     * <p>The version of the bot containing the recommendation that is being
     * stopped.</p>
     */
    inline StopBotRecommendationResult& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the bot containing the recommendation that is being
     * stopped.</p>
     */
    inline StopBotRecommendationResult& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}


    /**
     * <p>The identifier of the language and locale of the bot response to stop. The
     * string must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a> </p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }

    /**
     * <p>The identifier of the language and locale of the bot response to stop. The
     * string must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a> </p>
     */
    inline void SetLocaleId(const Aws::String& value) { m_localeId = value; }

    /**
     * <p>The identifier of the language and locale of the bot response to stop. The
     * string must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a> </p>
     */
    inline void SetLocaleId(Aws::String&& value) { m_localeId = std::move(value); }

    /**
     * <p>The identifier of the language and locale of the bot response to stop. The
     * string must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a> </p>
     */
    inline void SetLocaleId(const char* value) { m_localeId.assign(value); }

    /**
     * <p>The identifier of the language and locale of the bot response to stop. The
     * string must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a> </p>
     */
    inline StopBotRecommendationResult& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}

    /**
     * <p>The identifier of the language and locale of the bot response to stop. The
     * string must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a> </p>
     */
    inline StopBotRecommendationResult& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the language and locale of the bot response to stop. The
     * string must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a> </p>
     */
    inline StopBotRecommendationResult& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}


    /**
     * <p>The status of the bot recommendation. If the status is Failed, then the
     * reasons for the failure are listed in the failureReasons field.</p>
     */
    inline const BotRecommendationStatus& GetBotRecommendationStatus() const{ return m_botRecommendationStatus; }

    /**
     * <p>The status of the bot recommendation. If the status is Failed, then the
     * reasons for the failure are listed in the failureReasons field.</p>
     */
    inline void SetBotRecommendationStatus(const BotRecommendationStatus& value) { m_botRecommendationStatus = value; }

    /**
     * <p>The status of the bot recommendation. If the status is Failed, then the
     * reasons for the failure are listed in the failureReasons field.</p>
     */
    inline void SetBotRecommendationStatus(BotRecommendationStatus&& value) { m_botRecommendationStatus = std::move(value); }

    /**
     * <p>The status of the bot recommendation. If the status is Failed, then the
     * reasons for the failure are listed in the failureReasons field.</p>
     */
    inline StopBotRecommendationResult& WithBotRecommendationStatus(const BotRecommendationStatus& value) { SetBotRecommendationStatus(value); return *this;}

    /**
     * <p>The status of the bot recommendation. If the status is Failed, then the
     * reasons for the failure are listed in the failureReasons field.</p>
     */
    inline StopBotRecommendationResult& WithBotRecommendationStatus(BotRecommendationStatus&& value) { SetBotRecommendationStatus(std::move(value)); return *this;}


    /**
     * <p>The unique identifier of the bot recommendation that is being stopped.</p>
     */
    inline const Aws::String& GetBotRecommendationId() const{ return m_botRecommendationId; }

    /**
     * <p>The unique identifier of the bot recommendation that is being stopped.</p>
     */
    inline void SetBotRecommendationId(const Aws::String& value) { m_botRecommendationId = value; }

    /**
     * <p>The unique identifier of the bot recommendation that is being stopped.</p>
     */
    inline void SetBotRecommendationId(Aws::String&& value) { m_botRecommendationId = std::move(value); }

    /**
     * <p>The unique identifier of the bot recommendation that is being stopped.</p>
     */
    inline void SetBotRecommendationId(const char* value) { m_botRecommendationId.assign(value); }

    /**
     * <p>The unique identifier of the bot recommendation that is being stopped.</p>
     */
    inline StopBotRecommendationResult& WithBotRecommendationId(const Aws::String& value) { SetBotRecommendationId(value); return *this;}

    /**
     * <p>The unique identifier of the bot recommendation that is being stopped.</p>
     */
    inline StopBotRecommendationResult& WithBotRecommendationId(Aws::String&& value) { SetBotRecommendationId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the bot recommendation that is being stopped.</p>
     */
    inline StopBotRecommendationResult& WithBotRecommendationId(const char* value) { SetBotRecommendationId(value); return *this;}

  private:

    Aws::String m_botId;

    Aws::String m_botVersion;

    Aws::String m_localeId;

    BotRecommendationStatus m_botRecommendationStatus;

    Aws::String m_botRecommendationId;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
