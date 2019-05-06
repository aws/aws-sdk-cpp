/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
  class AWS_LEXMODELBUILDINGSERVICE_API GetBotChannelAssociationsRequest : public LexModelBuildingServiceRequest
  {
  public:
    GetBotChannelAssociationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetBotChannelAssociations"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The name of the Amazon Lex bot in the association.</p>
     */
    inline const Aws::String& GetBotName() const{ return m_botName; }

    /**
     * <p>The name of the Amazon Lex bot in the association.</p>
     */
    inline bool BotNameHasBeenSet() const { return m_botNameHasBeenSet; }

    /**
     * <p>The name of the Amazon Lex bot in the association.</p>
     */
    inline void SetBotName(const Aws::String& value) { m_botNameHasBeenSet = true; m_botName = value; }

    /**
     * <p>The name of the Amazon Lex bot in the association.</p>
     */
    inline void SetBotName(Aws::String&& value) { m_botNameHasBeenSet = true; m_botName = std::move(value); }

    /**
     * <p>The name of the Amazon Lex bot in the association.</p>
     */
    inline void SetBotName(const char* value) { m_botNameHasBeenSet = true; m_botName.assign(value); }

    /**
     * <p>The name of the Amazon Lex bot in the association.</p>
     */
    inline GetBotChannelAssociationsRequest& WithBotName(const Aws::String& value) { SetBotName(value); return *this;}

    /**
     * <p>The name of the Amazon Lex bot in the association.</p>
     */
    inline GetBotChannelAssociationsRequest& WithBotName(Aws::String&& value) { SetBotName(std::move(value)); return *this;}

    /**
     * <p>The name of the Amazon Lex bot in the association.</p>
     */
    inline GetBotChannelAssociationsRequest& WithBotName(const char* value) { SetBotName(value); return *this;}


    /**
     * <p>An alias pointing to the specific version of the Amazon Lex bot to which this
     * association is being made.</p>
     */
    inline const Aws::String& GetBotAlias() const{ return m_botAlias; }

    /**
     * <p>An alias pointing to the specific version of the Amazon Lex bot to which this
     * association is being made.</p>
     */
    inline bool BotAliasHasBeenSet() const { return m_botAliasHasBeenSet; }

    /**
     * <p>An alias pointing to the specific version of the Amazon Lex bot to which this
     * association is being made.</p>
     */
    inline void SetBotAlias(const Aws::String& value) { m_botAliasHasBeenSet = true; m_botAlias = value; }

    /**
     * <p>An alias pointing to the specific version of the Amazon Lex bot to which this
     * association is being made.</p>
     */
    inline void SetBotAlias(Aws::String&& value) { m_botAliasHasBeenSet = true; m_botAlias = std::move(value); }

    /**
     * <p>An alias pointing to the specific version of the Amazon Lex bot to which this
     * association is being made.</p>
     */
    inline void SetBotAlias(const char* value) { m_botAliasHasBeenSet = true; m_botAlias.assign(value); }

    /**
     * <p>An alias pointing to the specific version of the Amazon Lex bot to which this
     * association is being made.</p>
     */
    inline GetBotChannelAssociationsRequest& WithBotAlias(const Aws::String& value) { SetBotAlias(value); return *this;}

    /**
     * <p>An alias pointing to the specific version of the Amazon Lex bot to which this
     * association is being made.</p>
     */
    inline GetBotChannelAssociationsRequest& WithBotAlias(Aws::String&& value) { SetBotAlias(std::move(value)); return *this;}

    /**
     * <p>An alias pointing to the specific version of the Amazon Lex bot to which this
     * association is being made.</p>
     */
    inline GetBotChannelAssociationsRequest& WithBotAlias(const char* value) { SetBotAlias(value); return *this;}


    /**
     * <p>A pagination token for fetching the next page of associations. If the
     * response to this call is truncated, Amazon Lex returns a pagination token in the
     * response. To fetch the next page of associations, specify the pagination token
     * in the next request. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A pagination token for fetching the next page of associations. If the
     * response to this call is truncated, Amazon Lex returns a pagination token in the
     * response. To fetch the next page of associations, specify the pagination token
     * in the next request. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A pagination token for fetching the next page of associations. If the
     * response to this call is truncated, Amazon Lex returns a pagination token in the
     * response. To fetch the next page of associations, specify the pagination token
     * in the next request. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A pagination token for fetching the next page of associations. If the
     * response to this call is truncated, Amazon Lex returns a pagination token in the
     * response. To fetch the next page of associations, specify the pagination token
     * in the next request. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A pagination token for fetching the next page of associations. If the
     * response to this call is truncated, Amazon Lex returns a pagination token in the
     * response. To fetch the next page of associations, specify the pagination token
     * in the next request. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A pagination token for fetching the next page of associations. If the
     * response to this call is truncated, Amazon Lex returns a pagination token in the
     * response. To fetch the next page of associations, specify the pagination token
     * in the next request. </p>
     */
    inline GetBotChannelAssociationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A pagination token for fetching the next page of associations. If the
     * response to this call is truncated, Amazon Lex returns a pagination token in the
     * response. To fetch the next page of associations, specify the pagination token
     * in the next request. </p>
     */
    inline GetBotChannelAssociationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A pagination token for fetching the next page of associations. If the
     * response to this call is truncated, Amazon Lex returns a pagination token in the
     * response. To fetch the next page of associations, specify the pagination token
     * in the next request. </p>
     */
    inline GetBotChannelAssociationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of associations to return in the response. The default is
     * 50. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of associations to return in the response. The default is
     * 50. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of associations to return in the response. The default is
     * 50. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of associations to return in the response. The default is
     * 50. </p>
     */
    inline GetBotChannelAssociationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Substring to match in channel association names. An association will be
     * returned if any part of its name matches the substring. For example, "xyz"
     * matches both "xyzabc" and "abcxyz." To return all bot channel associations, use
     * a hyphen ("-") as the <code>nameContains</code> parameter.</p>
     */
    inline const Aws::String& GetNameContains() const{ return m_nameContains; }

    /**
     * <p>Substring to match in channel association names. An association will be
     * returned if any part of its name matches the substring. For example, "xyz"
     * matches both "xyzabc" and "abcxyz." To return all bot channel associations, use
     * a hyphen ("-") as the <code>nameContains</code> parameter.</p>
     */
    inline bool NameContainsHasBeenSet() const { return m_nameContainsHasBeenSet; }

    /**
     * <p>Substring to match in channel association names. An association will be
     * returned if any part of its name matches the substring. For example, "xyz"
     * matches both "xyzabc" and "abcxyz." To return all bot channel associations, use
     * a hyphen ("-") as the <code>nameContains</code> parameter.</p>
     */
    inline void SetNameContains(const Aws::String& value) { m_nameContainsHasBeenSet = true; m_nameContains = value; }

    /**
     * <p>Substring to match in channel association names. An association will be
     * returned if any part of its name matches the substring. For example, "xyz"
     * matches both "xyzabc" and "abcxyz." To return all bot channel associations, use
     * a hyphen ("-") as the <code>nameContains</code> parameter.</p>
     */
    inline void SetNameContains(Aws::String&& value) { m_nameContainsHasBeenSet = true; m_nameContains = std::move(value); }

    /**
     * <p>Substring to match in channel association names. An association will be
     * returned if any part of its name matches the substring. For example, "xyz"
     * matches both "xyzabc" and "abcxyz." To return all bot channel associations, use
     * a hyphen ("-") as the <code>nameContains</code> parameter.</p>
     */
    inline void SetNameContains(const char* value) { m_nameContainsHasBeenSet = true; m_nameContains.assign(value); }

    /**
     * <p>Substring to match in channel association names. An association will be
     * returned if any part of its name matches the substring. For example, "xyz"
     * matches both "xyzabc" and "abcxyz." To return all bot channel associations, use
     * a hyphen ("-") as the <code>nameContains</code> parameter.</p>
     */
    inline GetBotChannelAssociationsRequest& WithNameContains(const Aws::String& value) { SetNameContains(value); return *this;}

    /**
     * <p>Substring to match in channel association names. An association will be
     * returned if any part of its name matches the substring. For example, "xyz"
     * matches both "xyzabc" and "abcxyz." To return all bot channel associations, use
     * a hyphen ("-") as the <code>nameContains</code> parameter.</p>
     */
    inline GetBotChannelAssociationsRequest& WithNameContains(Aws::String&& value) { SetNameContains(std::move(value)); return *this;}

    /**
     * <p>Substring to match in channel association names. An association will be
     * returned if any part of its name matches the substring. For example, "xyz"
     * matches both "xyzabc" and "abcxyz." To return all bot channel associations, use
     * a hyphen ("-") as the <code>nameContains</code> parameter.</p>
     */
    inline GetBotChannelAssociationsRequest& WithNameContains(const char* value) { SetNameContains(value); return *this;}

  private:

    Aws::String m_botName;
    bool m_botNameHasBeenSet;

    Aws::String m_botAlias;
    bool m_botAliasHasBeenSet;

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
