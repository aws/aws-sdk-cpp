﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_SNOWBALL_API ListCompatibleImagesRequest : public SnowballRequest
  {
  public:
    ListCompatibleImagesRequest();
    
    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListCompatibleImages"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The maximum number of results for the list of compatible images. Currently, a
     * Snowball Edge device can store 10 AMIs.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

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
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
