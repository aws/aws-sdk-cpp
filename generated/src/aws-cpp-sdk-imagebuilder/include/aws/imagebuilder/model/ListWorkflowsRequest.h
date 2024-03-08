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
  class ListWorkflowsRequest : public ImagebuilderRequest
  {
  public:
    AWS_IMAGEBUILDER_API ListWorkflowsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListWorkflows"; }

    AWS_IMAGEBUILDER_API Aws::String SerializePayload() const override;


    /**
     * <p>Used to get a list of workflow build version filtered by the identity of the
     * creator.</p>
     */
    inline const Ownership& GetOwner() const{ return m_owner; }

    /**
     * <p>Used to get a list of workflow build version filtered by the identity of the
     * creator.</p>
     */
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }

    /**
     * <p>Used to get a list of workflow build version filtered by the identity of the
     * creator.</p>
     */
    inline void SetOwner(const Ownership& value) { m_ownerHasBeenSet = true; m_owner = value; }

    /**
     * <p>Used to get a list of workflow build version filtered by the identity of the
     * creator.</p>
     */
    inline void SetOwner(Ownership&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }

    /**
     * <p>Used to get a list of workflow build version filtered by the identity of the
     * creator.</p>
     */
    inline ListWorkflowsRequest& WithOwner(const Ownership& value) { SetOwner(value); return *this;}

    /**
     * <p>Used to get a list of workflow build version filtered by the identity of the
     * creator.</p>
     */
    inline ListWorkflowsRequest& WithOwner(Ownership&& value) { SetOwner(std::move(value)); return *this;}


    /**
     * <p>Used to streamline search results.</p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>Used to streamline search results.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>Used to streamline search results.</p>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>Used to streamline search results.</p>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>Used to streamline search results.</p>
     */
    inline ListWorkflowsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>Used to streamline search results.</p>
     */
    inline ListWorkflowsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>Used to streamline search results.</p>
     */
    inline ListWorkflowsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>Used to streamline search results.</p>
     */
    inline ListWorkflowsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>Specify all or part of the workflow name to streamline results.</p>
     */
    inline bool GetByName() const{ return m_byName; }

    /**
     * <p>Specify all or part of the workflow name to streamline results.</p>
     */
    inline bool ByNameHasBeenSet() const { return m_byNameHasBeenSet; }

    /**
     * <p>Specify all or part of the workflow name to streamline results.</p>
     */
    inline void SetByName(bool value) { m_byNameHasBeenSet = true; m_byName = value; }

    /**
     * <p>Specify all or part of the workflow name to streamline results.</p>
     */
    inline ListWorkflowsRequest& WithByName(bool value) { SetByName(value); return *this;}


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
    inline ListWorkflowsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>A token to specify where to start paginating. This is the nextToken from a
     * previously truncated response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token to specify where to start paginating. This is the nextToken from a
     * previously truncated response.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token to specify where to start paginating. This is the nextToken from a
     * previously truncated response.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token to specify where to start paginating. This is the nextToken from a
     * previously truncated response.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token to specify where to start paginating. This is the nextToken from a
     * previously truncated response.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token to specify where to start paginating. This is the nextToken from a
     * previously truncated response.</p>
     */
    inline ListWorkflowsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token to specify where to start paginating. This is the nextToken from a
     * previously truncated response.</p>
     */
    inline ListWorkflowsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token to specify where to start paginating. This is the nextToken from a
     * previously truncated response.</p>
     */
    inline ListWorkflowsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Ownership m_owner;
    bool m_ownerHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    bool m_byName;
    bool m_byNameHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
