/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/imagebuilder/ImagebuilderRequest.h>
#include <aws/imagebuilder/model/Ownership.h>
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
  class ListContainerRecipesRequest : public ImagebuilderRequest
  {
  public:
    AWS_IMAGEBUILDER_API ListContainerRecipesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListContainerRecipes"; }

    AWS_IMAGEBUILDER_API Aws::String SerializePayload() const override;


    /**
     * <p>Returns container recipes belonging to the specified owner, that have been
     * shared with you. You can omit this field to return container recipes belonging
     * to your account.</p>
     */
    inline const Ownership& GetOwner() const{ return m_owner; }

    /**
     * <p>Returns container recipes belonging to the specified owner, that have been
     * shared with you. You can omit this field to return container recipes belonging
     * to your account.</p>
     */
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }

    /**
     * <p>Returns container recipes belonging to the specified owner, that have been
     * shared with you. You can omit this field to return container recipes belonging
     * to your account.</p>
     */
    inline void SetOwner(const Ownership& value) { m_ownerHasBeenSet = true; m_owner = value; }

    /**
     * <p>Returns container recipes belonging to the specified owner, that have been
     * shared with you. You can omit this field to return container recipes belonging
     * to your account.</p>
     */
    inline void SetOwner(Ownership&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }

    /**
     * <p>Returns container recipes belonging to the specified owner, that have been
     * shared with you. You can omit this field to return container recipes belonging
     * to your account.</p>
     */
    inline ListContainerRecipesRequest& WithOwner(const Ownership& value) { SetOwner(value); return *this;}

    /**
     * <p>Returns container recipes belonging to the specified owner, that have been
     * shared with you. You can omit this field to return container recipes belonging
     * to your account.</p>
     */
    inline ListContainerRecipesRequest& WithOwner(Ownership&& value) { SetOwner(std::move(value)); return *this;}


    /**
     * <p>Use the following filters to streamline results:</p> <ul> <li> <p>
     * <code>containerType</code> </p> </li> <li> <p> <code>name</code> </p> </li> <li>
     * <p> <code>parentImage</code> </p> </li> <li> <p> <code>platform</code> </p>
     * </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>Use the following filters to streamline results:</p> <ul> <li> <p>
     * <code>containerType</code> </p> </li> <li> <p> <code>name</code> </p> </li> <li>
     * <p> <code>parentImage</code> </p> </li> <li> <p> <code>platform</code> </p>
     * </li> </ul>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>Use the following filters to streamline results:</p> <ul> <li> <p>
     * <code>containerType</code> </p> </li> <li> <p> <code>name</code> </p> </li> <li>
     * <p> <code>parentImage</code> </p> </li> <li> <p> <code>platform</code> </p>
     * </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>Use the following filters to streamline results:</p> <ul> <li> <p>
     * <code>containerType</code> </p> </li> <li> <p> <code>name</code> </p> </li> <li>
     * <p> <code>parentImage</code> </p> </li> <li> <p> <code>platform</code> </p>
     * </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>Use the following filters to streamline results:</p> <ul> <li> <p>
     * <code>containerType</code> </p> </li> <li> <p> <code>name</code> </p> </li> <li>
     * <p> <code>parentImage</code> </p> </li> <li> <p> <code>platform</code> </p>
     * </li> </ul>
     */
    inline ListContainerRecipesRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>Use the following filters to streamline results:</p> <ul> <li> <p>
     * <code>containerType</code> </p> </li> <li> <p> <code>name</code> </p> </li> <li>
     * <p> <code>parentImage</code> </p> </li> <li> <p> <code>platform</code> </p>
     * </li> </ul>
     */
    inline ListContainerRecipesRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>Use the following filters to streamline results:</p> <ul> <li> <p>
     * <code>containerType</code> </p> </li> <li> <p> <code>name</code> </p> </li> <li>
     * <p> <code>parentImage</code> </p> </li> <li> <p> <code>platform</code> </p>
     * </li> </ul>
     */
    inline ListContainerRecipesRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>Use the following filters to streamline results:</p> <ul> <li> <p>
     * <code>containerType</code> </p> </li> <li> <p> <code>name</code> </p> </li> <li>
     * <p> <code>parentImage</code> </p> </li> <li> <p> <code>platform</code> </p>
     * </li> </ul>
     */
    inline ListContainerRecipesRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of results to return in the list.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return in the list.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return in the list.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return in the list.</p>
     */
    inline ListContainerRecipesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Provides a token for pagination, which determines where to begin the next set
     * of results when the current set reaches the maximum for one request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Provides a token for pagination, which determines where to begin the next set
     * of results when the current set reaches the maximum for one request.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Provides a token for pagination, which determines where to begin the next set
     * of results when the current set reaches the maximum for one request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Provides a token for pagination, which determines where to begin the next set
     * of results when the current set reaches the maximum for one request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Provides a token for pagination, which determines where to begin the next set
     * of results when the current set reaches the maximum for one request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Provides a token for pagination, which determines where to begin the next set
     * of results when the current set reaches the maximum for one request.</p>
     */
    inline ListContainerRecipesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Provides a token for pagination, which determines where to begin the next set
     * of results when the current set reaches the maximum for one request.</p>
     */
    inline ListContainerRecipesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Provides a token for pagination, which determines where to begin the next set
     * of results when the current set reaches the maximum for one request.</p>
     */
    inline ListContainerRecipesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Ownership m_owner;
    bool m_ownerHasBeenSet = false;

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
