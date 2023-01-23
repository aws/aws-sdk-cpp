/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lexv2-models/LexModelsV2_EXPORTS.h>
#include <aws/lexv2-models/LexModelsV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lexv2-models/model/BuiltInSlotTypeSortBy.h>
#include <utility>

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

  /**
   */
  class ListBuiltInSlotTypesRequest : public LexModelsV2Request
  {
  public:
    AWS_LEXMODELSV2_API ListBuiltInSlotTypesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListBuiltInSlotTypes"; }

    AWS_LEXMODELSV2_API Aws::String SerializePayload() const override;


    /**
     * <p>The identifier of the language and locale of the slot types to list. The
     * string must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline const Aws::String& GetLocaleId() const{ return m_localeId; }

    /**
     * <p>The identifier of the language and locale of the slot types to list. The
     * string must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline bool LocaleIdHasBeenSet() const { return m_localeIdHasBeenSet; }

    /**
     * <p>The identifier of the language and locale of the slot types to list. The
     * string must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline void SetLocaleId(const Aws::String& value) { m_localeIdHasBeenSet = true; m_localeId = value; }

    /**
     * <p>The identifier of the language and locale of the slot types to list. The
     * string must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline void SetLocaleId(Aws::String&& value) { m_localeIdHasBeenSet = true; m_localeId = std::move(value); }

    /**
     * <p>The identifier of the language and locale of the slot types to list. The
     * string must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline void SetLocaleId(const char* value) { m_localeIdHasBeenSet = true; m_localeId.assign(value); }

    /**
     * <p>The identifier of the language and locale of the slot types to list. The
     * string must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline ListBuiltInSlotTypesRequest& WithLocaleId(const Aws::String& value) { SetLocaleId(value); return *this;}

    /**
     * <p>The identifier of the language and locale of the slot types to list. The
     * string must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline ListBuiltInSlotTypesRequest& WithLocaleId(Aws::String&& value) { SetLocaleId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the language and locale of the slot types to list. The
     * string must match one of the supported locales. For more information, see <a
     * href="https://docs.aws.amazon.com/lexv2/latest/dg/how-languages.html">Supported
     * languages</a>.</p>
     */
    inline ListBuiltInSlotTypesRequest& WithLocaleId(const char* value) { SetLocaleId(value); return *this;}


    /**
     * <p>Determines the sort order for the response from the
     * <code>ListBuiltInSlotTypes</code> operation. You can choose to sort by the slot
     * type signature in either ascending or descending order.</p>
     */
    inline const BuiltInSlotTypeSortBy& GetSortBy() const{ return m_sortBy; }

    /**
     * <p>Determines the sort order for the response from the
     * <code>ListBuiltInSlotTypes</code> operation. You can choose to sort by the slot
     * type signature in either ascending or descending order.</p>
     */
    inline bool SortByHasBeenSet() const { return m_sortByHasBeenSet; }

    /**
     * <p>Determines the sort order for the response from the
     * <code>ListBuiltInSlotTypes</code> operation. You can choose to sort by the slot
     * type signature in either ascending or descending order.</p>
     */
    inline void SetSortBy(const BuiltInSlotTypeSortBy& value) { m_sortByHasBeenSet = true; m_sortBy = value; }

    /**
     * <p>Determines the sort order for the response from the
     * <code>ListBuiltInSlotTypes</code> operation. You can choose to sort by the slot
     * type signature in either ascending or descending order.</p>
     */
    inline void SetSortBy(BuiltInSlotTypeSortBy&& value) { m_sortByHasBeenSet = true; m_sortBy = std::move(value); }

    /**
     * <p>Determines the sort order for the response from the
     * <code>ListBuiltInSlotTypes</code> operation. You can choose to sort by the slot
     * type signature in either ascending or descending order.</p>
     */
    inline ListBuiltInSlotTypesRequest& WithSortBy(const BuiltInSlotTypeSortBy& value) { SetSortBy(value); return *this;}

    /**
     * <p>Determines the sort order for the response from the
     * <code>ListBuiltInSlotTypes</code> operation. You can choose to sort by the slot
     * type signature in either ascending or descending order.</p>
     */
    inline ListBuiltInSlotTypesRequest& WithSortBy(BuiltInSlotTypeSortBy&& value) { SetSortBy(std::move(value)); return *this;}


    /**
     * <p>The maximum number of built-in slot types to return in each page of results.
     * If there are fewer results than the max page size, only the actual number of
     * results are returned.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of built-in slot types to return in each page of results.
     * If there are fewer results than the max page size, only the actual number of
     * results are returned.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of built-in slot types to return in each page of results.
     * If there are fewer results than the max page size, only the actual number of
     * results are returned.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of built-in slot types to return in each page of results.
     * If there are fewer results than the max page size, only the actual number of
     * results are returned.</p>
     */
    inline ListBuiltInSlotTypesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>If the response from the <code>ListBuiltInSlotTypes</code> operation contains
     * more results than specified in the <code>maxResults</code> parameter, a token is
     * returned in the response. Use that token in the <code>nextToken</code> parameter
     * to return the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the response from the <code>ListBuiltInSlotTypes</code> operation contains
     * more results than specified in the <code>maxResults</code> parameter, a token is
     * returned in the response. Use that token in the <code>nextToken</code> parameter
     * to return the next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If the response from the <code>ListBuiltInSlotTypes</code> operation contains
     * more results than specified in the <code>maxResults</code> parameter, a token is
     * returned in the response. Use that token in the <code>nextToken</code> parameter
     * to return the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If the response from the <code>ListBuiltInSlotTypes</code> operation contains
     * more results than specified in the <code>maxResults</code> parameter, a token is
     * returned in the response. Use that token in the <code>nextToken</code> parameter
     * to return the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If the response from the <code>ListBuiltInSlotTypes</code> operation contains
     * more results than specified in the <code>maxResults</code> parameter, a token is
     * returned in the response. Use that token in the <code>nextToken</code> parameter
     * to return the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If the response from the <code>ListBuiltInSlotTypes</code> operation contains
     * more results than specified in the <code>maxResults</code> parameter, a token is
     * returned in the response. Use that token in the <code>nextToken</code> parameter
     * to return the next page of results.</p>
     */
    inline ListBuiltInSlotTypesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the response from the <code>ListBuiltInSlotTypes</code> operation contains
     * more results than specified in the <code>maxResults</code> parameter, a token is
     * returned in the response. Use that token in the <code>nextToken</code> parameter
     * to return the next page of results.</p>
     */
    inline ListBuiltInSlotTypesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the response from the <code>ListBuiltInSlotTypes</code> operation contains
     * more results than specified in the <code>maxResults</code> parameter, a token is
     * returned in the response. Use that token in the <code>nextToken</code> parameter
     * to return the next page of results.</p>
     */
    inline ListBuiltInSlotTypesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_localeId;
    bool m_localeIdHasBeenSet = false;

    BuiltInSlotTypeSortBy m_sortBy;
    bool m_sortByHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
