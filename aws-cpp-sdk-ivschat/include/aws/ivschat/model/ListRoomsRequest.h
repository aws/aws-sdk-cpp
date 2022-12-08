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
    AWS_IVSCHAT_API ListRoomsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListRooms"; }

    AWS_IVSCHAT_API Aws::String SerializePayload() const override;


    /**
     * <p>Logging-configuration identifier.</p>
     */
    inline const Aws::String& GetLoggingConfigurationIdentifier() const{ return m_loggingConfigurationIdentifier; }

    /**
     * <p>Logging-configuration identifier.</p>
     */
    inline bool LoggingConfigurationIdentifierHasBeenSet() const { return m_loggingConfigurationIdentifierHasBeenSet; }

    /**
     * <p>Logging-configuration identifier.</p>
     */
    inline void SetLoggingConfigurationIdentifier(const Aws::String& value) { m_loggingConfigurationIdentifierHasBeenSet = true; m_loggingConfigurationIdentifier = value; }

    /**
     * <p>Logging-configuration identifier.</p>
     */
    inline void SetLoggingConfigurationIdentifier(Aws::String&& value) { m_loggingConfigurationIdentifierHasBeenSet = true; m_loggingConfigurationIdentifier = std::move(value); }

    /**
     * <p>Logging-configuration identifier.</p>
     */
    inline void SetLoggingConfigurationIdentifier(const char* value) { m_loggingConfigurationIdentifierHasBeenSet = true; m_loggingConfigurationIdentifier.assign(value); }

    /**
     * <p>Logging-configuration identifier.</p>
     */
    inline ListRoomsRequest& WithLoggingConfigurationIdentifier(const Aws::String& value) { SetLoggingConfigurationIdentifier(value); return *this;}

    /**
     * <p>Logging-configuration identifier.</p>
     */
    inline ListRoomsRequest& WithLoggingConfigurationIdentifier(Aws::String&& value) { SetLoggingConfigurationIdentifier(std::move(value)); return *this;}

    /**
     * <p>Logging-configuration identifier.</p>
     */
    inline ListRoomsRequest& WithLoggingConfigurationIdentifier(const char* value) { SetLoggingConfigurationIdentifier(value); return *this;}


    /**
     * <p>Maximum number of rooms to return. Default: 50.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Maximum number of rooms to return. Default: 50.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Maximum number of rooms to return. Default: 50.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Maximum number of rooms to return. Default: 50.</p>
     */
    inline ListRoomsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Filters the list to match the specified message review handler URI.</p>
     */
    inline const Aws::String& GetMessageReviewHandlerUri() const{ return m_messageReviewHandlerUri; }

    /**
     * <p>Filters the list to match the specified message review handler URI.</p>
     */
    inline bool MessageReviewHandlerUriHasBeenSet() const { return m_messageReviewHandlerUriHasBeenSet; }

    /**
     * <p>Filters the list to match the specified message review handler URI.</p>
     */
    inline void SetMessageReviewHandlerUri(const Aws::String& value) { m_messageReviewHandlerUriHasBeenSet = true; m_messageReviewHandlerUri = value; }

    /**
     * <p>Filters the list to match the specified message review handler URI.</p>
     */
    inline void SetMessageReviewHandlerUri(Aws::String&& value) { m_messageReviewHandlerUriHasBeenSet = true; m_messageReviewHandlerUri = std::move(value); }

    /**
     * <p>Filters the list to match the specified message review handler URI.</p>
     */
    inline void SetMessageReviewHandlerUri(const char* value) { m_messageReviewHandlerUriHasBeenSet = true; m_messageReviewHandlerUri.assign(value); }

    /**
     * <p>Filters the list to match the specified message review handler URI.</p>
     */
    inline ListRoomsRequest& WithMessageReviewHandlerUri(const Aws::String& value) { SetMessageReviewHandlerUri(value); return *this;}

    /**
     * <p>Filters the list to match the specified message review handler URI.</p>
     */
    inline ListRoomsRequest& WithMessageReviewHandlerUri(Aws::String&& value) { SetMessageReviewHandlerUri(std::move(value)); return *this;}

    /**
     * <p>Filters the list to match the specified message review handler URI.</p>
     */
    inline ListRoomsRequest& WithMessageReviewHandlerUri(const char* value) { SetMessageReviewHandlerUri(value); return *this;}


    /**
     * <p>Filters the list to match the specified room name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Filters the list to match the specified room name.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Filters the list to match the specified room name.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Filters the list to match the specified room name.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Filters the list to match the specified room name.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Filters the list to match the specified room name.</p>
     */
    inline ListRoomsRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Filters the list to match the specified room name.</p>
     */
    inline ListRoomsRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Filters the list to match the specified room name.</p>
     */
    inline ListRoomsRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The first room to retrieve. This is used for pagination; see the
     * <code>nextToken</code> response field.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The first room to retrieve. This is used for pagination; see the
     * <code>nextToken</code> response field.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The first room to retrieve. This is used for pagination; see the
     * <code>nextToken</code> response field.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The first room to retrieve. This is used for pagination; see the
     * <code>nextToken</code> response field.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The first room to retrieve. This is used for pagination; see the
     * <code>nextToken</code> response field.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The first room to retrieve. This is used for pagination; see the
     * <code>nextToken</code> response field.</p>
     */
    inline ListRoomsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The first room to retrieve. This is used for pagination; see the
     * <code>nextToken</code> response field.</p>
     */
    inline ListRoomsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The first room to retrieve. This is used for pagination; see the
     * <code>nextToken</code> response field.</p>
     */
    inline ListRoomsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_loggingConfigurationIdentifier;
    bool m_loggingConfigurationIdentifierHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_messageReviewHandlerUri;
    bool m_messageReviewHandlerUriHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ivschat
} // namespace Aws
