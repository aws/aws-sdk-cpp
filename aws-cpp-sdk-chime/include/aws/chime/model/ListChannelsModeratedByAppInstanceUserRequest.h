/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/ChimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Chime
{
namespace Model
{

  /**
   */
  class AWS_CHIME_API ListChannelsModeratedByAppInstanceUserRequest : public ChimeRequest
  {
  public:
    ListChannelsModeratedByAppInstanceUserRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListChannelsModeratedByAppInstanceUser"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The ARN of the user in the moderated channel.</p>
     */
    inline const Aws::String& GetAppInstanceUserArn() const{ return m_appInstanceUserArn; }

    /**
     * <p>The ARN of the user in the moderated channel.</p>
     */
    inline bool AppInstanceUserArnHasBeenSet() const { return m_appInstanceUserArnHasBeenSet; }

    /**
     * <p>The ARN of the user in the moderated channel.</p>
     */
    inline void SetAppInstanceUserArn(const Aws::String& value) { m_appInstanceUserArnHasBeenSet = true; m_appInstanceUserArn = value; }

    /**
     * <p>The ARN of the user in the moderated channel.</p>
     */
    inline void SetAppInstanceUserArn(Aws::String&& value) { m_appInstanceUserArnHasBeenSet = true; m_appInstanceUserArn = std::move(value); }

    /**
     * <p>The ARN of the user in the moderated channel.</p>
     */
    inline void SetAppInstanceUserArn(const char* value) { m_appInstanceUserArnHasBeenSet = true; m_appInstanceUserArn.assign(value); }

    /**
     * <p>The ARN of the user in the moderated channel.</p>
     */
    inline ListChannelsModeratedByAppInstanceUserRequest& WithAppInstanceUserArn(const Aws::String& value) { SetAppInstanceUserArn(value); return *this;}

    /**
     * <p>The ARN of the user in the moderated channel.</p>
     */
    inline ListChannelsModeratedByAppInstanceUserRequest& WithAppInstanceUserArn(Aws::String&& value) { SetAppInstanceUserArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the user in the moderated channel.</p>
     */
    inline ListChannelsModeratedByAppInstanceUserRequest& WithAppInstanceUserArn(const char* value) { SetAppInstanceUserArn(value); return *this;}


    /**
     * <p>The maximum number of channels in the request.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of channels in the request.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of channels in the request.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of channels in the request.</p>
     */
    inline ListChannelsModeratedByAppInstanceUserRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token returned from previous API requests until the number of channels
     * moderated by the user is reached.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token returned from previous API requests until the number of channels
     * moderated by the user is reached.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token returned from previous API requests until the number of channels
     * moderated by the user is reached.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token returned from previous API requests until the number of channels
     * moderated by the user is reached.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token returned from previous API requests until the number of channels
     * moderated by the user is reached.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token returned from previous API requests until the number of channels
     * moderated by the user is reached.</p>
     */
    inline ListChannelsModeratedByAppInstanceUserRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token returned from previous API requests until the number of channels
     * moderated by the user is reached.</p>
     */
    inline ListChannelsModeratedByAppInstanceUserRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token returned from previous API requests until the number of channels
     * moderated by the user is reached.</p>
     */
    inline ListChannelsModeratedByAppInstanceUserRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_appInstanceUserArn;
    bool m_appInstanceUserArnHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
