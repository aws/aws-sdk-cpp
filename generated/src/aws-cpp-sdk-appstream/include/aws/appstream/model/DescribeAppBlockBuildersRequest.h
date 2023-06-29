/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
#include <aws/appstream/AppStreamRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AppStream
{
namespace Model
{

  /**
   */
  class DescribeAppBlockBuildersRequest : public AppStreamRequest
  {
  public:
    AWS_APPSTREAM_API DescribeAppBlockBuildersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAppBlockBuilders"; }

    AWS_APPSTREAM_API Aws::String SerializePayload() const override;

    AWS_APPSTREAM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The names of the app block builders.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNames() const{ return m_names; }

    /**
     * <p>The names of the app block builders.</p>
     */
    inline bool NamesHasBeenSet() const { return m_namesHasBeenSet; }

    /**
     * <p>The names of the app block builders.</p>
     */
    inline void SetNames(const Aws::Vector<Aws::String>& value) { m_namesHasBeenSet = true; m_names = value; }

    /**
     * <p>The names of the app block builders.</p>
     */
    inline void SetNames(Aws::Vector<Aws::String>&& value) { m_namesHasBeenSet = true; m_names = std::move(value); }

    /**
     * <p>The names of the app block builders.</p>
     */
    inline DescribeAppBlockBuildersRequest& WithNames(const Aws::Vector<Aws::String>& value) { SetNames(value); return *this;}

    /**
     * <p>The names of the app block builders.</p>
     */
    inline DescribeAppBlockBuildersRequest& WithNames(Aws::Vector<Aws::String>&& value) { SetNames(std::move(value)); return *this;}

    /**
     * <p>The names of the app block builders.</p>
     */
    inline DescribeAppBlockBuildersRequest& AddNames(const Aws::String& value) { m_namesHasBeenSet = true; m_names.push_back(value); return *this; }

    /**
     * <p>The names of the app block builders.</p>
     */
    inline DescribeAppBlockBuildersRequest& AddNames(Aws::String&& value) { m_namesHasBeenSet = true; m_names.push_back(std::move(value)); return *this; }

    /**
     * <p>The names of the app block builders.</p>
     */
    inline DescribeAppBlockBuildersRequest& AddNames(const char* value) { m_namesHasBeenSet = true; m_names.push_back(value); return *this; }


    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline DescribeAppBlockBuildersRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline DescribeAppBlockBuildersRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token used to retrieve the next page of results for this
     * operation.</p>
     */
    inline DescribeAppBlockBuildersRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum size of each page of results. The maximum value is 25.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum size of each page of results. The maximum value is 25.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum size of each page of results. The maximum value is 25.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum size of each page of results. The maximum value is 25.</p>
     */
    inline DescribeAppBlockBuildersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_names;
    bool m_namesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
