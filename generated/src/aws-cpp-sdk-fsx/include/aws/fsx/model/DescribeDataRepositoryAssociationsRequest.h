/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/FSxRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/fsx/model/Filter.h>
#include <utility>

namespace Aws
{
namespace FSx
{
namespace Model
{

  /**
   */
  class DescribeDataRepositoryAssociationsRequest : public FSxRequest
  {
  public:
    AWS_FSX_API DescribeDataRepositoryAssociationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeDataRepositoryAssociations"; }

    AWS_FSX_API Aws::String SerializePayload() const override;

    AWS_FSX_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>IDs of the data repository associations whose descriptions you want to
     * retrieve (String).</p>
     */
    inline const Aws::Vector<Aws::String>& GetAssociationIds() const{ return m_associationIds; }

    /**
     * <p>IDs of the data repository associations whose descriptions you want to
     * retrieve (String).</p>
     */
    inline bool AssociationIdsHasBeenSet() const { return m_associationIdsHasBeenSet; }

    /**
     * <p>IDs of the data repository associations whose descriptions you want to
     * retrieve (String).</p>
     */
    inline void SetAssociationIds(const Aws::Vector<Aws::String>& value) { m_associationIdsHasBeenSet = true; m_associationIds = value; }

    /**
     * <p>IDs of the data repository associations whose descriptions you want to
     * retrieve (String).</p>
     */
    inline void SetAssociationIds(Aws::Vector<Aws::String>&& value) { m_associationIdsHasBeenSet = true; m_associationIds = std::move(value); }

    /**
     * <p>IDs of the data repository associations whose descriptions you want to
     * retrieve (String).</p>
     */
    inline DescribeDataRepositoryAssociationsRequest& WithAssociationIds(const Aws::Vector<Aws::String>& value) { SetAssociationIds(value); return *this;}

    /**
     * <p>IDs of the data repository associations whose descriptions you want to
     * retrieve (String).</p>
     */
    inline DescribeDataRepositoryAssociationsRequest& WithAssociationIds(Aws::Vector<Aws::String>&& value) { SetAssociationIds(std::move(value)); return *this;}

    /**
     * <p>IDs of the data repository associations whose descriptions you want to
     * retrieve (String).</p>
     */
    inline DescribeDataRepositoryAssociationsRequest& AddAssociationIds(const Aws::String& value) { m_associationIdsHasBeenSet = true; m_associationIds.push_back(value); return *this; }

    /**
     * <p>IDs of the data repository associations whose descriptions you want to
     * retrieve (String).</p>
     */
    inline DescribeDataRepositoryAssociationsRequest& AddAssociationIds(Aws::String&& value) { m_associationIdsHasBeenSet = true; m_associationIds.push_back(std::move(value)); return *this; }

    /**
     * <p>IDs of the data repository associations whose descriptions you want to
     * retrieve (String).</p>
     */
    inline DescribeDataRepositoryAssociationsRequest& AddAssociationIds(const char* value) { m_associationIdsHasBeenSet = true; m_associationIds.push_back(value); return *this; }


    
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    
    inline DescribeDataRepositoryAssociationsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    
    inline DescribeDataRepositoryAssociationsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    
    inline DescribeDataRepositoryAssociationsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    
    inline DescribeDataRepositoryAssociationsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of resources to return in the response. This value must be
     * an integer greater than zero.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of resources to return in the response. This value must be
     * an integer greater than zero.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of resources to return in the response. This value must be
     * an integer greater than zero.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of resources to return in the response. This value must be
     * an integer greater than zero.</p>
     */
    inline DescribeDataRepositoryAssociationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    
    inline DescribeDataRepositoryAssociationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline DescribeDataRepositoryAssociationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline DescribeDataRepositoryAssociationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_associationIds;
    bool m_associationIdsHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
