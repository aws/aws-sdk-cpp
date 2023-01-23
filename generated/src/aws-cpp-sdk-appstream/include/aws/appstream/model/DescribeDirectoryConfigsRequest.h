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
  class DescribeDirectoryConfigsRequest : public AppStreamRequest
  {
  public:
    AWS_APPSTREAM_API DescribeDirectoryConfigsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDirectoryConfigs"; }

    AWS_APPSTREAM_API Aws::String SerializePayload() const override;

    AWS_APPSTREAM_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The directory names.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDirectoryNames() const{ return m_directoryNames; }

    /**
     * <p>The directory names.</p>
     */
    inline bool DirectoryNamesHasBeenSet() const { return m_directoryNamesHasBeenSet; }

    /**
     * <p>The directory names.</p>
     */
    inline void SetDirectoryNames(const Aws::Vector<Aws::String>& value) { m_directoryNamesHasBeenSet = true; m_directoryNames = value; }

    /**
     * <p>The directory names.</p>
     */
    inline void SetDirectoryNames(Aws::Vector<Aws::String>&& value) { m_directoryNamesHasBeenSet = true; m_directoryNames = std::move(value); }

    /**
     * <p>The directory names.</p>
     */
    inline DescribeDirectoryConfigsRequest& WithDirectoryNames(const Aws::Vector<Aws::String>& value) { SetDirectoryNames(value); return *this;}

    /**
     * <p>The directory names.</p>
     */
    inline DescribeDirectoryConfigsRequest& WithDirectoryNames(Aws::Vector<Aws::String>&& value) { SetDirectoryNames(std::move(value)); return *this;}

    /**
     * <p>The directory names.</p>
     */
    inline DescribeDirectoryConfigsRequest& AddDirectoryNames(const Aws::String& value) { m_directoryNamesHasBeenSet = true; m_directoryNames.push_back(value); return *this; }

    /**
     * <p>The directory names.</p>
     */
    inline DescribeDirectoryConfigsRequest& AddDirectoryNames(Aws::String&& value) { m_directoryNamesHasBeenSet = true; m_directoryNames.push_back(std::move(value)); return *this; }

    /**
     * <p>The directory names.</p>
     */
    inline DescribeDirectoryConfigsRequest& AddDirectoryNames(const char* value) { m_directoryNamesHasBeenSet = true; m_directoryNames.push_back(value); return *this; }


    /**
     * <p>The maximum size of each page of results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum size of each page of results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum size of each page of results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum size of each page of results.</p>
     */
    inline DescribeDirectoryConfigsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline DescribeDirectoryConfigsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline DescribeDirectoryConfigsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token to use to retrieve the next page of results for this
     * operation. If this value is null, it retrieves the first page.</p>
     */
    inline DescribeDirectoryConfigsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_directoryNames;
    bool m_directoryNamesHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace AppStream
} // namespace Aws
