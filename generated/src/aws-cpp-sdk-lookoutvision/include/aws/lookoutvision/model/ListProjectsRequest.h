/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lookoutvision/LookoutforVision_EXPORTS.h>
#include <aws/lookoutvision/LookoutforVisionRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace LookoutforVision
{
namespace Model
{

  /**
   */
  class ListProjectsRequest : public LookoutforVisionRequest
  {
  public:
    AWS_LOOKOUTFORVISION_API ListProjectsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListProjects"; }

    AWS_LOOKOUTFORVISION_API Aws::String SerializePayload() const override;

    AWS_LOOKOUTFORVISION_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>If the previous response was incomplete (because there is more data to
     * retrieve), Amazon Lookout for Vision returns a pagination token in the response.
     * You can use this pagination token to retrieve the next set of projects.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the previous response was incomplete (because there is more data to
     * retrieve), Amazon Lookout for Vision returns a pagination token in the response.
     * You can use this pagination token to retrieve the next set of projects.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If the previous response was incomplete (because there is more data to
     * retrieve), Amazon Lookout for Vision returns a pagination token in the response.
     * You can use this pagination token to retrieve the next set of projects.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If the previous response was incomplete (because there is more data to
     * retrieve), Amazon Lookout for Vision returns a pagination token in the response.
     * You can use this pagination token to retrieve the next set of projects.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If the previous response was incomplete (because there is more data to
     * retrieve), Amazon Lookout for Vision returns a pagination token in the response.
     * You can use this pagination token to retrieve the next set of projects.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If the previous response was incomplete (because there is more data to
     * retrieve), Amazon Lookout for Vision returns a pagination token in the response.
     * You can use this pagination token to retrieve the next set of projects.</p>
     */
    inline ListProjectsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the previous response was incomplete (because there is more data to
     * retrieve), Amazon Lookout for Vision returns a pagination token in the response.
     * You can use this pagination token to retrieve the next set of projects.</p>
     */
    inline ListProjectsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the previous response was incomplete (because there is more data to
     * retrieve), Amazon Lookout for Vision returns a pagination token in the response.
     * You can use this pagination token to retrieve the next set of projects.</p>
     */
    inline ListProjectsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return per paginated call. The largest value
     * you can specify is 100. If you specify a value greater than 100, a
     * ValidationException error occurs. The default value is 100.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return per paginated call. The largest value
     * you can specify is 100. If you specify a value greater than 100, a
     * ValidationException error occurs. The default value is 100.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return per paginated call. The largest value
     * you can specify is 100. If you specify a value greater than 100, a
     * ValidationException error occurs. The default value is 100.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return per paginated call. The largest value
     * you can specify is 100. If you specify a value greater than 100, a
     * ValidationException error occurs. The default value is 100.</p>
     */
    inline ListProjectsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace LookoutforVision
} // namespace Aws
