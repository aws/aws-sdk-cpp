﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lex-models/LexModelBuildingService_EXPORTS.h>
#include <aws/lex-models/LexModelBuildingServiceRequest.h>
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
  class AWS_LEXMODELBUILDINGSERVICE_API GetBotAliasesRequest : public LexModelBuildingServiceRequest
  {
  public:
    GetBotAliasesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetBotAliases"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The name of the bot.</p>
     */
    inline const Aws::String& GetBotName() const{ return m_botName; }

    /**
     * <p>The name of the bot.</p>
     */
    inline bool BotNameHasBeenSet() const { return m_botNameHasBeenSet; }

    /**
     * <p>The name of the bot.</p>
     */
    inline void SetBotName(const Aws::String& value) { m_botNameHasBeenSet = true; m_botName = value; }

    /**
     * <p>The name of the bot.</p>
     */
    inline void SetBotName(Aws::String&& value) { m_botNameHasBeenSet = true; m_botName = std::move(value); }

    /**
     * <p>The name of the bot.</p>
     */
    inline void SetBotName(const char* value) { m_botNameHasBeenSet = true; m_botName.assign(value); }

    /**
     * <p>The name of the bot.</p>
     */
    inline GetBotAliasesRequest& WithBotName(const Aws::String& value) { SetBotName(value); return *this;}

    /**
     * <p>The name of the bot.</p>
     */
    inline GetBotAliasesRequest& WithBotName(Aws::String&& value) { SetBotName(std::move(value)); return *this;}

    /**
     * <p>The name of the bot.</p>
     */
    inline GetBotAliasesRequest& WithBotName(const char* value) { SetBotName(value); return *this;}


    /**
     * <p>A pagination token for fetching the next page of aliases. If the response to
     * this call is truncated, Amazon Lex returns a pagination token in the response.
     * To fetch the next page of aliases, specify the pagination token in the next
     * request. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A pagination token for fetching the next page of aliases. If the response to
     * this call is truncated, Amazon Lex returns a pagination token in the response.
     * To fetch the next page of aliases, specify the pagination token in the next
     * request. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A pagination token for fetching the next page of aliases. If the response to
     * this call is truncated, Amazon Lex returns a pagination token in the response.
     * To fetch the next page of aliases, specify the pagination token in the next
     * request. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A pagination token for fetching the next page of aliases. If the response to
     * this call is truncated, Amazon Lex returns a pagination token in the response.
     * To fetch the next page of aliases, specify the pagination token in the next
     * request. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A pagination token for fetching the next page of aliases. If the response to
     * this call is truncated, Amazon Lex returns a pagination token in the response.
     * To fetch the next page of aliases, specify the pagination token in the next
     * request. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A pagination token for fetching the next page of aliases. If the response to
     * this call is truncated, Amazon Lex returns a pagination token in the response.
     * To fetch the next page of aliases, specify the pagination token in the next
     * request. </p>
     */
    inline GetBotAliasesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token for fetching the next page of aliases. If the response to
     * this call is truncated, Amazon Lex returns a pagination token in the response.
     * To fetch the next page of aliases, specify the pagination token in the next
     * request. </p>
     */
    inline GetBotAliasesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token for fetching the next page of aliases. If the response to
     * this call is truncated, Amazon Lex returns a pagination token in the response.
     * To fetch the next page of aliases, specify the pagination token in the next
     * request. </p>
     */
    inline GetBotAliasesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of aliases to return in the response. The default is 50. .
     * </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of aliases to return in the response. The default is 50. .
     * </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of aliases to return in the response. The default is 50. .
     * </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of aliases to return in the response. The default is 50. .
     * </p>
     */
    inline GetBotAliasesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Substring to match in bot alias names. An alias will be returned if any part
     * of its name matches the substring. For example, "xyz" matches both "xyzabc" and
     * "abcxyz."</p>
     */
    inline const Aws::String& GetNameContains() const{ return m_nameContains; }

    /**
     * <p>Substring to match in bot alias names. An alias will be returned if any part
     * of its name matches the substring. For example, "xyz" matches both "xyzabc" and
     * "abcxyz."</p>
     */
    inline bool NameContainsHasBeenSet() const { return m_nameContainsHasBeenSet; }

    /**
     * <p>Substring to match in bot alias names. An alias will be returned if any part
     * of its name matches the substring. For example, "xyz" matches both "xyzabc" and
     * "abcxyz."</p>
     */
    inline void SetNameContains(const Aws::String& value) { m_nameContainsHasBeenSet = true; m_nameContains = value; }

    /**
     * <p>Substring to match in bot alias names. An alias will be returned if any part
     * of its name matches the substring. For example, "xyz" matches both "xyzabc" and
     * "abcxyz."</p>
     */
    inline void SetNameContains(Aws::String&& value) { m_nameContainsHasBeenSet = true; m_nameContains = std::move(value); }

    /**
     * <p>Substring to match in bot alias names. An alias will be returned if any part
     * of its name matches the substring. For example, "xyz" matches both "xyzabc" and
     * "abcxyz."</p>
     */
    inline void SetNameContains(const char* value) { m_nameContainsHasBeenSet = true; m_nameContains.assign(value); }

    /**
     * <p>Substring to match in bot alias names. An alias will be returned if any part
     * of its name matches the substring. For example, "xyz" matches both "xyzabc" and
     * "abcxyz."</p>
     */
    inline GetBotAliasesRequest& WithNameContains(const Aws::String& value) { SetNameContains(value); return *this;}

    /**
     * <p>Substring to match in bot alias names. An alias will be returned if any part
     * of its name matches the substring. For example, "xyz" matches both "xyzabc" and
     * "abcxyz."</p>
     */
    inline GetBotAliasesRequest& WithNameContains(Aws::String&& value) { SetNameContains(std::move(value)); return *this;}

    /**
     * <p>Substring to match in bot alias names. An alias will be returned if any part
     * of its name matches the substring. For example, "xyz" matches both "xyzabc" and
     * "abcxyz."</p>
     */
    inline GetBotAliasesRequest& WithNameContains(const char* value) { SetNameContains(value); return *this;}

  private:

    Aws::String m_botName;
    bool m_botNameHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nameContains;
    bool m_nameContainsHasBeenSet;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
