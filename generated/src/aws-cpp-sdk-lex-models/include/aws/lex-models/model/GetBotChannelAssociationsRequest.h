/**
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
  class GetBotChannelAssociationsRequest : public LexModelBuildingServiceRequest
  {
  public:
    AWS_LEXMODELBUILDINGSERVICE_API GetBotChannelAssociationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetBotChannelAssociations"; }

    AWS_LEXMODELBUILDINGSERVICE_API Aws::String SerializePayload() const override;

    AWS_LEXMODELBUILDINGSERVICE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The name of the Amazon Lex bot in the association.</p>
     */
    inline const Aws::String& GetBotName() const{ return m_botName; }
    inline bool BotNameHasBeenSet() const { return m_botNameHasBeenSet; }
    inline void SetBotName(const Aws::String& value) { m_botNameHasBeenSet = true; m_botName = value; }
    inline void SetBotName(Aws::String&& value) { m_botNameHasBeenSet = true; m_botName = std::move(value); }
    inline void SetBotName(const char* value) { m_botNameHasBeenSet = true; m_botName.assign(value); }
    inline GetBotChannelAssociationsRequest& WithBotName(const Aws::String& value) { SetBotName(value); return *this;}
    inline GetBotChannelAssociationsRequest& WithBotName(Aws::String&& value) { SetBotName(std::move(value)); return *this;}
    inline GetBotChannelAssociationsRequest& WithBotName(const char* value) { SetBotName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An alias pointing to the specific version of the Amazon Lex bot to which this
     * association is being made.</p>
     */
    inline const Aws::String& GetBotAlias() const{ return m_botAlias; }
    inline bool BotAliasHasBeenSet() const { return m_botAliasHasBeenSet; }
    inline void SetBotAlias(const Aws::String& value) { m_botAliasHasBeenSet = true; m_botAlias = value; }
    inline void SetBotAlias(Aws::String&& value) { m_botAliasHasBeenSet = true; m_botAlias = std::move(value); }
    inline void SetBotAlias(const char* value) { m_botAliasHasBeenSet = true; m_botAlias.assign(value); }
    inline GetBotChannelAssociationsRequest& WithBotAlias(const Aws::String& value) { SetBotAlias(value); return *this;}
    inline GetBotChannelAssociationsRequest& WithBotAlias(Aws::String&& value) { SetBotAlias(std::move(value)); return *this;}
    inline GetBotChannelAssociationsRequest& WithBotAlias(const char* value) { SetBotAlias(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A pagination token for fetching the next page of associations. If the
     * response to this call is truncated, Amazon Lex returns a pagination token in the
     * response. To fetch the next page of associations, specify the pagination token
     * in the next request. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline GetBotChannelAssociationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline GetBotChannelAssociationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline GetBotChannelAssociationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of associations to return in the response. The default is
     * 50. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetBotChannelAssociationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Substring to match in channel association names. An association will be
     * returned if any part of its name matches the substring. For example, "xyz"
     * matches both "xyzabc" and "abcxyz." To return all bot channel associations, use
     * a hyphen ("-") as the <code>nameContains</code> parameter.</p>
     */
    inline const Aws::String& GetNameContains() const{ return m_nameContains; }
    inline bool NameContainsHasBeenSet() const { return m_nameContainsHasBeenSet; }
    inline void SetNameContains(const Aws::String& value) { m_nameContainsHasBeenSet = true; m_nameContains = value; }
    inline void SetNameContains(Aws::String&& value) { m_nameContainsHasBeenSet = true; m_nameContains = std::move(value); }
    inline void SetNameContains(const char* value) { m_nameContainsHasBeenSet = true; m_nameContains.assign(value); }
    inline GetBotChannelAssociationsRequest& WithNameContains(const Aws::String& value) { SetNameContains(value); return *this;}
    inline GetBotChannelAssociationsRequest& WithNameContains(Aws::String&& value) { SetNameContains(std::move(value)); return *this;}
    inline GetBotChannelAssociationsRequest& WithNameContains(const char* value) { SetNameContains(value); return *this;}
    ///@}
  private:

    Aws::String m_botName;
    bool m_botNameHasBeenSet = false;

    Aws::String m_botAlias;
    bool m_botAliasHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nameContains;
    bool m_nameContainsHasBeenSet = false;
  };

} // namespace Model
} // namespace LexModelBuildingService
} // namespace Aws
