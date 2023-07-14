/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/polly/Polly_EXPORTS.h>
#include <aws/polly/PollyRequest.h>
#include <aws/polly/model/Engine.h>
#include <aws/polly/model/LanguageCode.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Polly
{
namespace Model
{

  /**
   */
  class AWS_POLLY_API DescribeVoicesRequest : public PollyRequest
  {
  public:
    DescribeVoicesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeVoices"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>Specifies the engine (<code>standard</code> or <code>neural</code>) used by
     * Amazon Polly when processing input text for speech synthesis. </p>
     */
    inline const Engine& GetEngine() const{ return m_engine; }

    /**
     * <p>Specifies the engine (<code>standard</code> or <code>neural</code>) used by
     * Amazon Polly when processing input text for speech synthesis. </p>
     */
    inline bool EngineHasBeenSet() const { return m_engineHasBeenSet; }

    /**
     * <p>Specifies the engine (<code>standard</code> or <code>neural</code>) used by
     * Amazon Polly when processing input text for speech synthesis. </p>
     */
    inline void SetEngine(const Engine& value) { m_engineHasBeenSet = true; m_engine = value; }

    /**
     * <p>Specifies the engine (<code>standard</code> or <code>neural</code>) used by
     * Amazon Polly when processing input text for speech synthesis. </p>
     */
    inline void SetEngine(Engine&& value) { m_engineHasBeenSet = true; m_engine = std::move(value); }

    /**
     * <p>Specifies the engine (<code>standard</code> or <code>neural</code>) used by
     * Amazon Polly when processing input text for speech synthesis. </p>
     */
    inline DescribeVoicesRequest& WithEngine(const Engine& value) { SetEngine(value); return *this;}

    /**
     * <p>Specifies the engine (<code>standard</code> or <code>neural</code>) used by
     * Amazon Polly when processing input text for speech synthesis. </p>
     */
    inline DescribeVoicesRequest& WithEngine(Engine&& value) { SetEngine(std::move(value)); return *this;}


    /**
     * <p> The language identification tag (ISO 639 code for the language name-ISO 3166
     * country code) for filtering the list of voices returned. If you don't specify
     * this optional parameter, all available voices are returned. </p>
     */
    inline const LanguageCode& GetLanguageCode() const{ return m_languageCode; }

    /**
     * <p> The language identification tag (ISO 639 code for the language name-ISO 3166
     * country code) for filtering the list of voices returned. If you don't specify
     * this optional parameter, all available voices are returned. </p>
     */
    inline bool LanguageCodeHasBeenSet() const { return m_languageCodeHasBeenSet; }

    /**
     * <p> The language identification tag (ISO 639 code for the language name-ISO 3166
     * country code) for filtering the list of voices returned. If you don't specify
     * this optional parameter, all available voices are returned. </p>
     */
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p> The language identification tag (ISO 639 code for the language name-ISO 3166
     * country code) for filtering the list of voices returned. If you don't specify
     * this optional parameter, all available voices are returned. </p>
     */
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = std::move(value); }

    /**
     * <p> The language identification tag (ISO 639 code for the language name-ISO 3166
     * country code) for filtering the list of voices returned. If you don't specify
     * this optional parameter, all available voices are returned. </p>
     */
    inline DescribeVoicesRequest& WithLanguageCode(const LanguageCode& value) { SetLanguageCode(value); return *this;}

    /**
     * <p> The language identification tag (ISO 639 code for the language name-ISO 3166
     * country code) for filtering the list of voices returned. If you don't specify
     * this optional parameter, all available voices are returned. </p>
     */
    inline DescribeVoicesRequest& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(std::move(value)); return *this;}


    /**
     * <p>Boolean value indicating whether to return any bilingual voices that use the
     * specified language as an additional language. For instance, if you request all
     * languages that use US English (es-US), and there is an Italian voice that speaks
     * both Italian (it-IT) and US English, that voice will be included if you specify
     * <code>yes</code> but not if you specify <code>no</code>.</p>
     */
    inline bool GetIncludeAdditionalLanguageCodes() const{ return m_includeAdditionalLanguageCodes; }

    /**
     * <p>Boolean value indicating whether to return any bilingual voices that use the
     * specified language as an additional language. For instance, if you request all
     * languages that use US English (es-US), and there is an Italian voice that speaks
     * both Italian (it-IT) and US English, that voice will be included if you specify
     * <code>yes</code> but not if you specify <code>no</code>.</p>
     */
    inline bool IncludeAdditionalLanguageCodesHasBeenSet() const { return m_includeAdditionalLanguageCodesHasBeenSet; }

    /**
     * <p>Boolean value indicating whether to return any bilingual voices that use the
     * specified language as an additional language. For instance, if you request all
     * languages that use US English (es-US), and there is an Italian voice that speaks
     * both Italian (it-IT) and US English, that voice will be included if you specify
     * <code>yes</code> but not if you specify <code>no</code>.</p>
     */
    inline void SetIncludeAdditionalLanguageCodes(bool value) { m_includeAdditionalLanguageCodesHasBeenSet = true; m_includeAdditionalLanguageCodes = value; }

    /**
     * <p>Boolean value indicating whether to return any bilingual voices that use the
     * specified language as an additional language. For instance, if you request all
     * languages that use US English (es-US), and there is an Italian voice that speaks
     * both Italian (it-IT) and US English, that voice will be included if you specify
     * <code>yes</code> but not if you specify <code>no</code>.</p>
     */
    inline DescribeVoicesRequest& WithIncludeAdditionalLanguageCodes(bool value) { SetIncludeAdditionalLanguageCodes(value); return *this;}


    /**
     * <p>An opaque pagination token returned from the previous
     * <code>DescribeVoices</code> operation. If present, this indicates where to
     * continue the listing.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An opaque pagination token returned from the previous
     * <code>DescribeVoices</code> operation. If present, this indicates where to
     * continue the listing.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>An opaque pagination token returned from the previous
     * <code>DescribeVoices</code> operation. If present, this indicates where to
     * continue the listing.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>An opaque pagination token returned from the previous
     * <code>DescribeVoices</code> operation. If present, this indicates where to
     * continue the listing.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>An opaque pagination token returned from the previous
     * <code>DescribeVoices</code> operation. If present, this indicates where to
     * continue the listing.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>An opaque pagination token returned from the previous
     * <code>DescribeVoices</code> operation. If present, this indicates where to
     * continue the listing.</p>
     */
    inline DescribeVoicesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An opaque pagination token returned from the previous
     * <code>DescribeVoices</code> operation. If present, this indicates where to
     * continue the listing.</p>
     */
    inline DescribeVoicesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An opaque pagination token returned from the previous
     * <code>DescribeVoices</code> operation. If present, this indicates where to
     * continue the listing.</p>
     */
    inline DescribeVoicesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Engine m_engine;
    bool m_engineHasBeenSet;

    LanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet;

    bool m_includeAdditionalLanguageCodes;
    bool m_includeAdditionalLanguageCodesHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace Polly
} // namespace Aws
