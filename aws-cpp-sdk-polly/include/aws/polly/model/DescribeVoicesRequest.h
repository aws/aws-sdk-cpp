/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/
#pragma once
#include <aws/polly/Polly_EXPORTS.h>
#include <aws/polly/PollyRequest.h>
#include <aws/polly/model/LanguageCode.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


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
    inline void SetLanguageCode(const LanguageCode& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

    /**
     * <p> The language identification tag (ISO 639 code for the language name-ISO 3166
     * country code) for filtering the list of voices returned. If you don't specify
     * this optional parameter, all available voices are returned. </p>
     */
    inline void SetLanguageCode(LanguageCode&& value) { m_languageCodeHasBeenSet = true; m_languageCode = value; }

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
    inline DescribeVoicesRequest& WithLanguageCode(LanguageCode&& value) { SetLanguageCode(value); return *this;}

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
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>An opaque pagination token returned from the previous
     * <code>DescribeVoices</code> operation. If present, this indicates where to
     * continue the listing.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

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
    inline DescribeVoicesRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>An opaque pagination token returned from the previous
     * <code>DescribeVoices</code> operation. If present, this indicates where to
     * continue the listing.</p>
     */
    inline DescribeVoicesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    LanguageCode m_languageCode;
    bool m_languageCodeHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace Polly
} // namespace Aws
