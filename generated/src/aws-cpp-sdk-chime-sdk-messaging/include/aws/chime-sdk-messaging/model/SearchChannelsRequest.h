/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-messaging/ChimeSDKMessaging_EXPORTS.h>
#include <aws/chime-sdk-messaging/ChimeSDKMessagingRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/chime-sdk-messaging/model/SearchField.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace ChimeSDKMessaging
{
namespace Model
{

  /**
   */
  class SearchChannelsRequest : public ChimeSDKMessagingRequest
  {
  public:
    AWS_CHIMESDKMESSAGING_API SearchChannelsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SearchChannels"; }

    AWS_CHIMESDKMESSAGING_API Aws::String SerializePayload() const override;

    AWS_CHIMESDKMESSAGING_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;

    AWS_CHIMESDKMESSAGING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The <code>AppInstanceUserArn</code> of the user making the API call.</p>
     */
    inline const Aws::String& GetChimeBearer() const{ return m_chimeBearer; }

    /**
     * <p>The <code>AppInstanceUserArn</code> of the user making the API call.</p>
     */
    inline bool ChimeBearerHasBeenSet() const { return m_chimeBearerHasBeenSet; }

    /**
     * <p>The <code>AppInstanceUserArn</code> of the user making the API call.</p>
     */
    inline void SetChimeBearer(const Aws::String& value) { m_chimeBearerHasBeenSet = true; m_chimeBearer = value; }

    /**
     * <p>The <code>AppInstanceUserArn</code> of the user making the API call.</p>
     */
    inline void SetChimeBearer(Aws::String&& value) { m_chimeBearerHasBeenSet = true; m_chimeBearer = std::move(value); }

    /**
     * <p>The <code>AppInstanceUserArn</code> of the user making the API call.</p>
     */
    inline void SetChimeBearer(const char* value) { m_chimeBearerHasBeenSet = true; m_chimeBearer.assign(value); }

    /**
     * <p>The <code>AppInstanceUserArn</code> of the user making the API call.</p>
     */
    inline SearchChannelsRequest& WithChimeBearer(const Aws::String& value) { SetChimeBearer(value); return *this;}

    /**
     * <p>The <code>AppInstanceUserArn</code> of the user making the API call.</p>
     */
    inline SearchChannelsRequest& WithChimeBearer(Aws::String&& value) { SetChimeBearer(std::move(value)); return *this;}

    /**
     * <p>The <code>AppInstanceUserArn</code> of the user making the API call.</p>
     */
    inline SearchChannelsRequest& WithChimeBearer(const char* value) { SetChimeBearer(value); return *this;}


    /**
     * <p>A list of the <code>Field</code> objects in the channel being searched.</p>
     */
    inline const Aws::Vector<SearchField>& GetFields() const{ return m_fields; }

    /**
     * <p>A list of the <code>Field</code> objects in the channel being searched.</p>
     */
    inline bool FieldsHasBeenSet() const { return m_fieldsHasBeenSet; }

    /**
     * <p>A list of the <code>Field</code> objects in the channel being searched.</p>
     */
    inline void SetFields(const Aws::Vector<SearchField>& value) { m_fieldsHasBeenSet = true; m_fields = value; }

    /**
     * <p>A list of the <code>Field</code> objects in the channel being searched.</p>
     */
    inline void SetFields(Aws::Vector<SearchField>&& value) { m_fieldsHasBeenSet = true; m_fields = std::move(value); }

    /**
     * <p>A list of the <code>Field</code> objects in the channel being searched.</p>
     */
    inline SearchChannelsRequest& WithFields(const Aws::Vector<SearchField>& value) { SetFields(value); return *this;}

    /**
     * <p>A list of the <code>Field</code> objects in the channel being searched.</p>
     */
    inline SearchChannelsRequest& WithFields(Aws::Vector<SearchField>&& value) { SetFields(std::move(value)); return *this;}

    /**
     * <p>A list of the <code>Field</code> objects in the channel being searched.</p>
     */
    inline SearchChannelsRequest& AddFields(const SearchField& value) { m_fieldsHasBeenSet = true; m_fields.push_back(value); return *this; }

    /**
     * <p>A list of the <code>Field</code> objects in the channel being searched.</p>
     */
    inline SearchChannelsRequest& AddFields(SearchField&& value) { m_fieldsHasBeenSet = true; m_fields.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of channels that you want returned.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of channels that you want returned.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of channels that you want returned.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of channels that you want returned.</p>
     */
    inline SearchChannelsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token returned from previous API requests until the number of channels is
     * reached.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token returned from previous API requests until the number of channels is
     * reached.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token returned from previous API requests until the number of channels is
     * reached.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token returned from previous API requests until the number of channels is
     * reached.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token returned from previous API requests until the number of channels is
     * reached.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token returned from previous API requests until the number of channels is
     * reached.</p>
     */
    inline SearchChannelsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token returned from previous API requests until the number of channels is
     * reached.</p>
     */
    inline SearchChannelsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token returned from previous API requests until the number of channels is
     * reached.</p>
     */
    inline SearchChannelsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_chimeBearer;
    bool m_chimeBearerHasBeenSet = false;

    Aws::Vector<SearchField> m_fields;
    bool m_fieldsHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMessaging
} // namespace Aws
