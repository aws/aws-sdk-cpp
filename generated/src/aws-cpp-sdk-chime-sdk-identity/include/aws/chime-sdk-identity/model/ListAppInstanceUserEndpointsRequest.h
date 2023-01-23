/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-identity/ChimeSDKIdentity_EXPORTS.h>
#include <aws/chime-sdk-identity/ChimeSDKIdentityRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace ChimeSDKIdentity
{
namespace Model
{

  /**
   */
  class ListAppInstanceUserEndpointsRequest : public ChimeSDKIdentityRequest
  {
  public:
    AWS_CHIMESDKIDENTITY_API ListAppInstanceUserEndpointsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAppInstanceUserEndpoints"; }

    AWS_CHIMESDKIDENTITY_API Aws::String SerializePayload() const override;

    AWS_CHIMESDKIDENTITY_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The ARN of the <code>AppInstanceUser</code>.</p>
     */
    inline const Aws::String& GetAppInstanceUserArn() const{ return m_appInstanceUserArn; }

    /**
     * <p>The ARN of the <code>AppInstanceUser</code>.</p>
     */
    inline bool AppInstanceUserArnHasBeenSet() const { return m_appInstanceUserArnHasBeenSet; }

    /**
     * <p>The ARN of the <code>AppInstanceUser</code>.</p>
     */
    inline void SetAppInstanceUserArn(const Aws::String& value) { m_appInstanceUserArnHasBeenSet = true; m_appInstanceUserArn = value; }

    /**
     * <p>The ARN of the <code>AppInstanceUser</code>.</p>
     */
    inline void SetAppInstanceUserArn(Aws::String&& value) { m_appInstanceUserArnHasBeenSet = true; m_appInstanceUserArn = std::move(value); }

    /**
     * <p>The ARN of the <code>AppInstanceUser</code>.</p>
     */
    inline void SetAppInstanceUserArn(const char* value) { m_appInstanceUserArnHasBeenSet = true; m_appInstanceUserArn.assign(value); }

    /**
     * <p>The ARN of the <code>AppInstanceUser</code>.</p>
     */
    inline ListAppInstanceUserEndpointsRequest& WithAppInstanceUserArn(const Aws::String& value) { SetAppInstanceUserArn(value); return *this;}

    /**
     * <p>The ARN of the <code>AppInstanceUser</code>.</p>
     */
    inline ListAppInstanceUserEndpointsRequest& WithAppInstanceUserArn(Aws::String&& value) { SetAppInstanceUserArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the <code>AppInstanceUser</code>.</p>
     */
    inline ListAppInstanceUserEndpointsRequest& WithAppInstanceUserArn(const char* value) { SetAppInstanceUserArn(value); return *this;}


    /**
     * <p>The maximum number of endpoints that you want to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of endpoints that you want to return.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of endpoints that you want to return.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of endpoints that you want to return.</p>
     */
    inline ListAppInstanceUserEndpointsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token passed by previous API calls until all requested endpoints are
     * returned.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token passed by previous API calls until all requested endpoints are
     * returned.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token passed by previous API calls until all requested endpoints are
     * returned.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token passed by previous API calls until all requested endpoints are
     * returned.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token passed by previous API calls until all requested endpoints are
     * returned.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token passed by previous API calls until all requested endpoints are
     * returned.</p>
     */
    inline ListAppInstanceUserEndpointsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token passed by previous API calls until all requested endpoints are
     * returned.</p>
     */
    inline ListAppInstanceUserEndpointsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token passed by previous API calls until all requested endpoints are
     * returned.</p>
     */
    inline ListAppInstanceUserEndpointsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_appInstanceUserArn;
    bool m_appInstanceUserArnHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKIdentity
} // namespace Aws
