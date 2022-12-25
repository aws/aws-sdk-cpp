/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/imagebuilder/ImagebuilderRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/imagebuilder/model/Filter.h>
#include <utility>

namespace Aws
{
namespace imagebuilder
{
namespace Model
{

  /**
   */
  class ListImagePipelinesRequest : public ImagebuilderRequest
  {
  public:
    AWS_IMAGEBUILDER_API ListImagePipelinesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListImagePipelines"; }

    AWS_IMAGEBUILDER_API Aws::String SerializePayload() const override;


    /**
     * <p>Use the following filters to streamline results:</p> <ul> <li> <p>
     * <code>description</code> </p> </li> <li> <p>
     * <code>distributionConfigurationArn</code> </p> </li> <li> <p>
     * <code>imageRecipeArn</code> </p> </li> <li> <p>
     * <code>infrastructureConfigurationArn</code> </p> </li> <li> <p>
     * <code>name</code> </p> </li> <li> <p> <code>status</code> </p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>Use the following filters to streamline results:</p> <ul> <li> <p>
     * <code>description</code> </p> </li> <li> <p>
     * <code>distributionConfigurationArn</code> </p> </li> <li> <p>
     * <code>imageRecipeArn</code> </p> </li> <li> <p>
     * <code>infrastructureConfigurationArn</code> </p> </li> <li> <p>
     * <code>name</code> </p> </li> <li> <p> <code>status</code> </p> </li> </ul>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>Use the following filters to streamline results:</p> <ul> <li> <p>
     * <code>description</code> </p> </li> <li> <p>
     * <code>distributionConfigurationArn</code> </p> </li> <li> <p>
     * <code>imageRecipeArn</code> </p> </li> <li> <p>
     * <code>infrastructureConfigurationArn</code> </p> </li> <li> <p>
     * <code>name</code> </p> </li> <li> <p> <code>status</code> </p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>Use the following filters to streamline results:</p> <ul> <li> <p>
     * <code>description</code> </p> </li> <li> <p>
     * <code>distributionConfigurationArn</code> </p> </li> <li> <p>
     * <code>imageRecipeArn</code> </p> </li> <li> <p>
     * <code>infrastructureConfigurationArn</code> </p> </li> <li> <p>
     * <code>name</code> </p> </li> <li> <p> <code>status</code> </p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>Use the following filters to streamline results:</p> <ul> <li> <p>
     * <code>description</code> </p> </li> <li> <p>
     * <code>distributionConfigurationArn</code> </p> </li> <li> <p>
     * <code>imageRecipeArn</code> </p> </li> <li> <p>
     * <code>infrastructureConfigurationArn</code> </p> </li> <li> <p>
     * <code>name</code> </p> </li> <li> <p> <code>status</code> </p> </li> </ul>
     */
    inline ListImagePipelinesRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>Use the following filters to streamline results:</p> <ul> <li> <p>
     * <code>description</code> </p> </li> <li> <p>
     * <code>distributionConfigurationArn</code> </p> </li> <li> <p>
     * <code>imageRecipeArn</code> </p> </li> <li> <p>
     * <code>infrastructureConfigurationArn</code> </p> </li> <li> <p>
     * <code>name</code> </p> </li> <li> <p> <code>status</code> </p> </li> </ul>
     */
    inline ListImagePipelinesRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>Use the following filters to streamline results:</p> <ul> <li> <p>
     * <code>description</code> </p> </li> <li> <p>
     * <code>distributionConfigurationArn</code> </p> </li> <li> <p>
     * <code>imageRecipeArn</code> </p> </li> <li> <p>
     * <code>infrastructureConfigurationArn</code> </p> </li> <li> <p>
     * <code>name</code> </p> </li> <li> <p> <code>status</code> </p> </li> </ul>
     */
    inline ListImagePipelinesRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>Use the following filters to streamline results:</p> <ul> <li> <p>
     * <code>description</code> </p> </li> <li> <p>
     * <code>distributionConfigurationArn</code> </p> </li> <li> <p>
     * <code>imageRecipeArn</code> </p> </li> <li> <p>
     * <code>infrastructureConfigurationArn</code> </p> </li> <li> <p>
     * <code>name</code> </p> </li> <li> <p> <code>status</code> </p> </li> </ul>
     */
    inline ListImagePipelinesRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum items to return in a request.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum items to return in a request.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum items to return in a request.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum items to return in a request.</p>
     */
    inline ListImagePipelinesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>A token to specify where to start paginating. This is the NextToken from a
     * previously truncated response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token to specify where to start paginating. This is the NextToken from a
     * previously truncated response.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token to specify where to start paginating. This is the NextToken from a
     * previously truncated response.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token to specify where to start paginating. This is the NextToken from a
     * previously truncated response.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token to specify where to start paginating. This is the NextToken from a
     * previously truncated response.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token to specify where to start paginating. This is the NextToken from a
     * previously truncated response.</p>
     */
    inline ListImagePipelinesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token to specify where to start paginating. This is the NextToken from a
     * previously truncated response.</p>
     */
    inline ListImagePipelinesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token to specify where to start paginating. This is the NextToken from a
     * previously truncated response.</p>
     */
    inline ListImagePipelinesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
