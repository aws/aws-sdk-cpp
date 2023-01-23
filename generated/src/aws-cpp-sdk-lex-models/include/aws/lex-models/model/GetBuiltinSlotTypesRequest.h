/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/lex-models/LexModelBuildingServiceRequest.h>
#include <aws/lex-models/model/Locale.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GetBuiltinSlotTypesRequest : public LexModelBuildingServiceRequest
  {
  public:
    AWS_LEXMODELBUILDINGSERVICE_API GetBuiltinSlotTypesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetBuiltinSlotTypes"; }

    AWS_LEXMODELBUILDINGSERVICE_API Aws::String SerializePayload() const override;

    AWS_LEXMODELBUILDINGSERVICE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>A list of locales that the slot type supports.</p>
     */
    inline const Locale& GetLocale() const{ return m_locale; }

    /**
     * <p>A list of locales that the slot type supports.</p>
     */
    inline bool LocaleHasBeenSet() const { return m_localeHasBeenSet; }

    /**
     * <p>A list of locales that the slot type supports.</p>
     */
    inline void SetLocale(const Locale& value) { m_localeHasBeenSet = true; m_locale = value; }

    /**
     * <p>A list of locales that the slot type supports.</p>
     */
    inline void SetLocale(Locale&& value) { m_localeHasBeenSet = true; m_locale = std::move(value); }

    /**
     * <p>A list of locales that the slot type supports.</p>
     */
    inline GetBuiltinSlotTypesRequest& WithLocale(const Locale& value) { SetLocale(value); return *this;}

    /**
     * <p>A list of locales that the slot type supports.</p>
     */
    inline GetBuiltinSlotTypesRequest& WithLocale(Locale&& value) { SetLocale(std::move(value)); return *this;}


    /**
     * <p>Substring to match in built-in slot type signatures. A slot type will be
     * returned if any part of its signature matches the substring. For example, "xyz"
     * matches both "xyzabc" and "abcxyz."</p>
     */
    inline const Aws::String& GetSignatureContains() const{ return m_signatureContains; }

    /**
     * <p>Substring to match in built-in slot type signatures. A slot type will be
     * returned if any part of its signature matches the substring. For example, "xyz"
     * matches both "xyzabc" and "abcxyz."</p>
     */
    inline bool SignatureContainsHasBeenSet() const { return m_signatureContainsHasBeenSet; }

    /**
     * <p>Substring to match in built-in slot type signatures. A slot type will be
     * returned if any part of its signature matches the substring. For example, "xyz"
     * matches both "xyzabc" and "abcxyz."</p>
     */
    inline void SetSignatureContains(const Aws::String& value) { m_signatureContainsHasBeenSet = true; m_signatureContains = value; }

    /**
     * <p>Substring to match in built-in slot type signatures. A slot type will be
     * returned if any part of its signature matches the substring. For example, "xyz"
     * matches both "xyzabc" and "abcxyz."</p>
     */
    inline void SetSignatureContains(Aws::String&& value) { m_signatureContainsHasBeenSet = true; m_signatureContains = std::move(value); }

    /**
     * <p>Substring to match in built-in slot type signatures. A slot type will be
     * returned if any part of its signature matches the substring. For example, "xyz"
     * matches both "xyzabc" and "abcxyz."</p>
     */
    inline void SetSignatureContains(const char* value) { m_signatureContainsHasBeenSet = true; m_signatureContains.assign(value); }

    /**
     * <p>Substring to match in built-in slot type signatures. A slot type will be
     * returned if any part of its signature matches the substring. For example, "xyz"
     * matches both "xyzabc" and "abcxyz."</p>
     */
    inline GetBuiltinSlotTypesRequest& WithSignatureContains(const Aws::String& value) { SetSignatureContains(value); return *this;}

    /**
     * <p>Substring to match in built-in slot type signatures. A slot type will be
     * returned if any part of its signature matches the substring. For example, "xyz"
     * matches both "xyzabc" and "abcxyz."</p>
     */
    inline GetBuiltinSlotTypesRequest& WithSignatureContains(Aws::String&& value) { SetSignatureContains(std::move(value)); return *this;}

    /**
     * <p>Substring to match in built-in slot type signatures. A slot type will be
     * returned if any part of its signature matches the substring. For example, "xyz"
     * matches both "xyzabc" and "abcxyz."</p>
     */
    inline GetBuiltinSlotTypesRequest& WithSignatureContains(const char* value) { SetSignatureContains(value); return *this;}


    /**
     * <p>A pagination token that fetches the next page of slot types. If the response
     * to this API call is truncated, Amazon Lex returns a pagination token in the
     * response. To fetch the next page of slot types, specify the pagination token in
     * the next request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A pagination token that fetches the next page of slot types. If the response
     * to this API call is truncated, Amazon Lex returns a pagination token in the
     * response. To fetch the next page of slot types, specify the pagination token in
     * the next request.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A pagination token that fetches the next page of slot types. If the response
     * to this API call is truncated, Amazon Lex returns a pagination token in the
     * response. To fetch the next page of slot types, specify the pagination token in
     * the next request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A pagination token that fetches the next page of slot types. If the response
     * to this API call is truncated, Amazon Lex returns a pagination token in the
     * response. To fetch the next page of slot types, specify the pagination token in
     * the next request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A pagination token that fetches the next page of slot types. If the response
     * to this API call is truncated, Amazon Lex returns a pagination token in the
     * response. To fetch the next page of slot types, specify the pagination token in
     * the next request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A pagination token that fetches the next page of slot types. If the response
     * to this API call is truncated, Amazon Lex returns a pagination token in the
     * response. To fetch the next page of slot types, specify the pagination token in
     * the next request.</p>
     */
    inline GetBuiltinSlotTypesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token that fetches the next page of slot types. If the response
     * to this API call is truncated, Amazon Lex returns a pagination token in the
     * response. To fetch the next page of slot types, specify the pagination token in
     * the next request.</p>
     */
    inline GetBuiltinSlotTypesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token that fetches the next page of slot types. If the response
     * to this API call is truncated, Amazon Lex returns a pagination token in the
     * response. To fetch the next page of slot types, specify the pagination token in
     * the next request.</p>
     */
    inline GetBuiltinSlotTypesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of slot types to return in the response. The default is
     * 10.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of slot types to return in the response. The default is
     * 10.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of slot types to return in the response. The default is
     * 10.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of slot types to return in the response. The default is
     * 10.</p>
     */
    inline GetBuiltinSlotTypesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Locale m_locale;
    bool m_localeHasBeenSet = false;

    Aws::String m_signatureContains;
    bool m_signatureContainsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
