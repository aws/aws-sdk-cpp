/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelines_EXPORTS.h>
#include <aws/chime-sdk-media-pipelines/ChimeSDKMediaPipelinesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace ChimeSDKMediaPipelines
{
namespace Model
{

  /**
   */
  class ListMediaPipelinesRequest : public ChimeSDKMediaPipelinesRequest
  {
  public:
    AWS_CHIMESDKMEDIAPIPELINES_API ListMediaPipelinesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListMediaPipelines"; }

    AWS_CHIMESDKMEDIAPIPELINES_API Aws::String SerializePayload() const override;

    AWS_CHIMESDKMEDIAPIPELINES_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The token used to retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token used to retrieve the next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token used to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token used to retrieve the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token used to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token used to retrieve the next page of results.</p>
     */
    inline ListMediaPipelinesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token used to retrieve the next page of results.</p>
     */
    inline ListMediaPipelinesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token used to retrieve the next page of results.</p>
     */
    inline ListMediaPipelinesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return in a single call. Valid Range: 1 -
     * 99.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return in a single call. Valid Range: 1 -
     * 99.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return in a single call. Valid Range: 1 -
     * 99.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return in a single call. Valid Range: 1 -
     * 99.</p>
     */
    inline ListMediaPipelinesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace ChimeSDKMediaPipelines
} // namespace Aws
