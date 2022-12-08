/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
#include <aws/snowball/SnowballRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Snowball
{
namespace Model
{

  /**
   */
  class ListCompatibleImagesRequest : public SnowballRequest
  {
  public:
    AWS_SNOWBALL_API ListCompatibleImagesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListCompatibleImages"; }

    AWS_SNOWBALL_API Aws::String SerializePayload() const override;

    AWS_SNOWBALL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The maximum number of results for the list of compatible images. Currently, a
     * Snowball Edge device can store 10 AMIs.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results for the list of compatible images. Currently, a
     * Snowball Edge device can store 10 AMIs.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results for the list of compatible images. Currently, a
     * Snowball Edge device can store 10 AMIs.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results for the list of compatible images. Currently, a
     * Snowball Edge device can store 10 AMIs.</p>
     */
    inline ListCompatibleImagesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>HTTP requests are stateless. To identify what object comes "next" in the list
     * of compatible images, you can specify a value for <code>NextToken</code> as the
     * starting point for your list of returned images.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>HTTP requests are stateless. To identify what object comes "next" in the list
     * of compatible images, you can specify a value for <code>NextToken</code> as the
     * starting point for your list of returned images.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>HTTP requests are stateless. To identify what object comes "next" in the list
     * of compatible images, you can specify a value for <code>NextToken</code> as the
     * starting point for your list of returned images.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>HTTP requests are stateless. To identify what object comes "next" in the list
     * of compatible images, you can specify a value for <code>NextToken</code> as the
     * starting point for your list of returned images.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>HTTP requests are stateless. To identify what object comes "next" in the list
     * of compatible images, you can specify a value for <code>NextToken</code> as the
     * starting point for your list of returned images.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>HTTP requests are stateless. To identify what object comes "next" in the list
     * of compatible images, you can specify a value for <code>NextToken</code> as the
     * starting point for your list of returned images.</p>
     */
    inline ListCompatibleImagesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>HTTP requests are stateless. To identify what object comes "next" in the list
     * of compatible images, you can specify a value for <code>NextToken</code> as the
     * starting point for your list of returned images.</p>
     */
    inline ListCompatibleImagesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>HTTP requests are stateless. To identify what object comes "next" in the list
     * of compatible images, you can specify a value for <code>NextToken</code> as the
     * starting point for your list of returned images.</p>
     */
    inline ListCompatibleImagesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
