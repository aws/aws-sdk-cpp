/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivschat/Ivschat_EXPORTS.h>
#include <aws/ivschat/IvschatRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace ivschat
{
namespace Model
{

  /**
   */
  class ListRoomsRequest : public IvschatRequest
  {
  public:
    AWS_IVSCHAT_API ListRoomsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListRooms"; }

    AWS_IVSCHAT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Filters the list to match the specified room name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ListRoomsRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The first room to retrieve. This is used for pagination; see the
     * <code>nextToken</code> response field.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListRoomsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum number of rooms to return. Default: 50.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListRoomsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Filters the list to match the specified message review handler URI.</p>
     */
    inline const Aws::String& GetMessageReviewHandlerUri() const { return m_messageReviewHandlerUri; }
    inline bool MessageReviewHandlerUriHasBeenSet() const { return m_messageReviewHandlerUriHasBeenSet; }
    template<typename MessageReviewHandlerUriT = Aws::String>
    void SetMessageReviewHandlerUri(MessageReviewHandlerUriT&& value) { m_messageReviewHandlerUriHasBeenSet = true; m_messageReviewHandlerUri = std::forward<MessageReviewHandlerUriT>(value); }
    template<typename MessageReviewHandlerUriT = Aws::String>
    ListRoomsRequest& WithMessageReviewHandlerUri(MessageReviewHandlerUriT&& value) { SetMessageReviewHandlerUri(std::forward<MessageReviewHandlerUriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Logging-configuration identifier.</p>
     */
    inline const Aws::String& GetLoggingConfigurationIdentifier() const { return m_loggingConfigurationIdentifier; }
    inline bool LoggingConfigurationIdentifierHasBeenSet() const { return m_loggingConfigurationIdentifierHasBeenSet; }
    template<typename LoggingConfigurationIdentifierT = Aws::String>
    void SetLoggingConfigurationIdentifier(LoggingConfigurationIdentifierT&& value) { m_loggingConfigurationIdentifierHasBeenSet = true; m_loggingConfigurationIdentifier = std::forward<LoggingConfigurationIdentifierT>(value); }
    template<typename LoggingConfigurationIdentifierT = Aws::String>
    ListRoomsRequest& WithLoggingConfigurationIdentifier(LoggingConfigurationIdentifierT&& value) { SetLoggingConfigurationIdentifier(std::forward<LoggingConfigurationIdentifierT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_messageReviewHandlerUri;
    bool m_messageReviewHandlerUriHasBeenSet = false;

    Aws::String m_loggingConfigurationIdentifier;
    bool m_loggingConfigurationIdentifierHasBeenSet = false;
  };

} // namespace Model
} // namespace ivschat
} // namespace Aws
