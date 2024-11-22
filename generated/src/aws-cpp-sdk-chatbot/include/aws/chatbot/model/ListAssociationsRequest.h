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
  class ListAssociationsRequest : public ChatbotRequest
  {
  public:
    AWS_CHATBOT_API ListAssociationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAssociations"; }

    AWS_CHATBOT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The channel configuration to list associations for.</p>
     */
    inline const Aws::String& GetChatConfiguration() const{ return m_chatConfiguration; }
    inline bool ChatConfigurationHasBeenSet() const { return m_chatConfigurationHasBeenSet; }
    inline void SetChatConfiguration(const Aws::String& value) { m_chatConfigurationHasBeenSet = true; m_chatConfiguration = value; }
    inline void SetChatConfiguration(Aws::String&& value) { m_chatConfigurationHasBeenSet = true; m_chatConfiguration = std::move(value); }
    inline void SetChatConfiguration(const char* value) { m_chatConfigurationHasBeenSet = true; m_chatConfiguration.assign(value); }
    inline ListAssociationsRequest& WithChatConfiguration(const Aws::String& value) { SetChatConfiguration(value); return *this;}
    inline ListAssociationsRequest& WithChatConfiguration(Aws::String&& value) { SetChatConfiguration(std::move(value)); return *this;}
    inline ListAssociationsRequest& WithChatConfiguration(const char* value) { SetChatConfiguration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to include in the response. If more results
     * exist than the specified MaxResults value, a token is included in the response
     * so that the remaining results can be retrieved.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListAssociationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional token returned from a prior request. Use this token for
     * pagination of results from this action. If this parameter is specified, the
     * response includes only results beyond the token, up to the value specified by
     * MaxResults.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListAssociationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAssociationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAssociationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_chatConfiguration;
    bool m_chatConfigurationHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace chatbot
} // namespace Aws
