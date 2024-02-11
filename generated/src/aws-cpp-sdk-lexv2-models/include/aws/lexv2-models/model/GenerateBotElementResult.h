/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/lexv2-models/model/SampleUtterance.h>
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
  class GenerateBotElementResult
  {
  public:
    AWS_LEXMODELSV2_API GenerateBotElementResult();
    AWS_LEXMODELSV2_API GenerateBotElementResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LEXMODELSV2_API GenerateBotElementResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique bot Id for the bot which received the response.</p>
     */
    inline const Aws::String& GetBotId() const{ return m_botId; }

    /**
     * <p>The unique bot Id for the bot which received the response.</p>
     */
    inline void SetBotId(const Aws::String& value) { m_botId = value; }

    /**
     * <p>The unique bot Id for the bot which received the response.</p>
     */
    inline void SetBotId(Aws::String&& value) { m_botId = std::move(value); }

    /**
     * <p>The unique bot Id for the bot which received the response.</p>
     */
    inline void SetBotId(const char* value) { m_botId.assign(value); }

    /**
     * <p>The unique bot Id for the bot which received the response.</p>
     */
    inline GenerateBotElementResult& WithBotId(const Aws::String& value) { SetBotId(value); return *this;}

    /**
     * <p>The unique bot Id for the bot which received the response.</p>
     */
    inline GenerateBotElementResult& WithBotId(Aws::String&& value) { SetBotId(std::move(value)); return *this;}

    /**
     * <p>The unique bot Id for the bot which received the response.</p>
     */
    inline GenerateBotElementResult& WithBotId(const char* value) { SetBotId(value); return *this;}


    /**
     * <p>The unique bot version for the bot which received the response.</p>
     */
    inline const Aws::String& GetBotVersion() const{ return m_botVersion; }

    /**
     * <p>The unique bot version for the bot which received the response.</p>
     */
    inline void SetBotVersion(const Aws::String& value) { m_botVersion = value; }

    /**
     * <p>The unique bot version for the bot which received the response.</p>
     */
    inline void SetBotVersion(Aws::String&& value) { m_botVersion = std::move(value); }

    /**
     * <p>The unique bot version for the bot which received the response.</p>
     */
    inline void SetBotVersion(const char* value) { m_botVersion.assign(value); }

    /**
     * <p>The unique bot version for the bot which received the response.</p>
     */
    inline GenerateBotElementResult& WithBotVersion(const Aws::String& value) { SetBotVersion(value); return *this;}

    /**
     * <p>The unique bot version for the bot which received the response.</p>
     */
    inline GenerateBotElementResult& WithBotVersion(Aws::String&& value) { SetBotVersion(std::move(value)); return *this;}

    /**
     * <p>The unique bot version for the bot which received the response.</p>
     */
    inline GenerateBotElementResult& WithBotVersion(const char* value) { SetBotVersion(value); return *this;}


    /**
     * <p>The unique locale Id for the bot which received the response.</p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }

    /**
     * <p>The unique locale Id for the bot which received the response.</p>
     */
    inline void SetLocaleId(const Aws::String& value) { m_localeId = value; }

    /**
     * <p>The unique locale Id for the bot which received the response.</p>
     */
    inline void SetLocaleId(Aws::String&& value) { m_localeId = std::move(value); }

    /**
     * <p>The unique locale Id for the bot which received the response.</p>
     */
    inline void SetLocaleId(const char* value) { m_localeId.assign(value); }

    /**
     * <p>The unique locale Id for the bot which received the response.</p>
     */
    inline GenerateBotElementResult& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}

    /**
     * <p>The unique locale Id for the bot which received the response.</p>
     */
    inline GenerateBotElementResult& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}

    /**
     * <p>The unique locale Id for the bot which received the response.</p>
     */
    inline GenerateBotElementResult& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}


    /**
     * <p>The unique intent Id for the bot which received the response.</p>
     */
    inline const Aws::String& GetIntentId() const{ return m_intentId; }

    /**
     * <p>The unique intent Id for the bot which received the response.</p>
     */
    inline void SetIntentId(const Aws::String& value) { m_intentId = value; }

    /**
     * <p>The unique intent Id for the bot which received the response.</p>
     */
    inline void SetIntentId(Aws::String&& value) { m_intentId = std::move(value); }

    /**
     * <p>The unique intent Id for the bot which received the response.</p>
     */
    inline void SetIntentId(const char* value) { m_intentId.assign(value); }

    /**
     * <p>The unique intent Id for the bot which received the response.</p>
     */
    inline GenerateBotElementResult& WithIntentId(const Aws::String& value) { SetIntentId(value); return *this;}

    /**
     * <p>The unique intent Id for the bot which received the response.</p>
     */
    inline GenerateBotElementResult& WithIntentId(Aws::String&& value) { SetIntentId(std::move(value)); return *this;}

    /**
     * <p>The unique intent Id for the bot which received the response.</p>
     */
    inline GenerateBotElementResult& WithIntentId(const char* value) { SetIntentId(value); return *this;}


    /**
     * <p>The sample utterances for the bot which received the response.</p>
     */
    inline const Aws::Vector<SampleUtterance>& GetSampleUtterances() const{ return m_sampleUtterances; }

    /**
     * <p>The sample utterances for the bot which received the response.</p>
     */
    inline void SetSampleUtterances(const Aws::Vector<SampleUtterance>& value) { m_sampleUtterances = value; }

    /**
     * <p>The sample utterances for the bot which received the response.</p>
     */
    inline void SetSampleUtterances(Aws::Vector<SampleUtterance>&& value) { m_sampleUtterances = std::move(value); }

    /**
     * <p>The sample utterances for the bot which received the response.</p>
     */
    inline GenerateBotElementResult& WithSampleUtterances(const Aws::Vector<SampleUtterance>& value) { SetSampleUtterances(value); return *this;}

    /**
     * <p>The sample utterances for the bot which received the response.</p>
     */
    inline GenerateBotElementResult& WithSampleUtterances(Aws::Vector<SampleUtterance>&& value) { SetSampleUtterances(std::move(value)); return *this;}

    /**
     * <p>The sample utterances for the bot which received the response.</p>
     */
    inline GenerateBotElementResult& AddSampleUtterances(const SampleUtterance& value) { m_sampleUtterances.push_back(value); return *this; }

    /**
     * <p>The sample utterances for the bot which received the response.</p>
     */
    inline GenerateBotElementResult& AddSampleUtterances(SampleUtterance&& value) { m_sampleUtterances.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GenerateBotElementResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GenerateBotElementResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GenerateBotElementResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_botId;

    Aws::String m_botVersion;

    Aws::String m_localeId;

    Aws::String m_intentId;

    Aws::Vector<SampleUtterance> m_sampleUtterances;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
