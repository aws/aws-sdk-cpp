/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chatbot/Chatbot_EXPORTS.h>
#include <aws/chatbot/ChatbotRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace chatbot
{
namespace Model
{

  /**
   */
  class ListMicrosoftTeamsUserIdentitiesRequest : public ChatbotRequest
  {
  public:
    AWS_CHATBOT_API ListMicrosoftTeamsUserIdentitiesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListMicrosoftTeamsUserIdentities"; }

    AWS_CHATBOT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the MicrosoftTeamsChannelConfiguration
     * associated with the user identities to list.</p>
     */
    inline const Aws::String& GetChatConfigurationArn() const { return m_chatConfigurationArn; }
    inline bool ChatConfigurationArnHasBeenSet() const { return m_chatConfigurationArnHasBeenSet; }
    template<typename ChatConfigurationArnT = Aws::String>
    void SetChatConfigurationArn(ChatConfigurationArnT&& value) { m_chatConfigurationArnHasBeenSet = true; m_chatConfigurationArn = std::forward<ChatConfigurationArnT>(value); }
    template<typename ChatConfigurationArnT = Aws::String>
    ListMicrosoftTeamsUserIdentitiesRequest& WithChatConfigurationArn(ChatConfigurationArnT&& value) { SetChatConfigurationArn(std::forward<ChatConfigurationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional token returned from a prior request. Use this token for
     * pagination of results from this action. If this parameter is specified, the
     * response includes only results beyond the token, up to the value specified by
     * MaxResults. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListMicrosoftTeamsUserIdentitiesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to include in the response. If more results
     * exist than the specified MaxResults value, a token is included in the response
     * so that the remaining results can be retrieved. </p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListMicrosoftTeamsUserIdentitiesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_chatConfigurationArn;
    bool m_chatConfigurationArnHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace chatbot
} // namespace Aws
