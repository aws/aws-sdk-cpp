﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/identitystore/IdentityStore_EXPORTS.h>
#include <aws/identitystore/IdentityStoreRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/identitystore/model/Filter.h>
#include <utility>

namespace Aws
{
namespace IdentityStore
{
namespace Model
{

  /**
   */
  class AWS_IDENTITYSTORE_API ListGroupsRequest : public IdentityStoreRequest
  {
  public:
    ListGroupsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListGroups"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The globally unique identifier for the identity store, such as
     * <code>d-1234567890</code>. In this example, <code>d-</code> is a fixed prefix,
     * and <code>1234567890</code> is a randomly generated string that contains number
     * and lower case letters. This value is generated at the time that a new identity
     * store is created.</p>
     */
    inline const Aws::String& GetIdentityStoreId() const{ return m_identityStoreId; }

    /**
     * <p>The globally unique identifier for the identity store, such as
     * <code>d-1234567890</code>. In this example, <code>d-</code> is a fixed prefix,
     * and <code>1234567890</code> is a randomly generated string that contains number
     * and lower case letters. This value is generated at the time that a new identity
     * store is created.</p>
     */
    inline bool IdentityStoreIdHasBeenSet() const { return m_identityStoreIdHasBeenSet; }

    /**
     * <p>The globally unique identifier for the identity store, such as
     * <code>d-1234567890</code>. In this example, <code>d-</code> is a fixed prefix,
     * and <code>1234567890</code> is a randomly generated string that contains number
     * and lower case letters. This value is generated at the time that a new identity
     * store is created.</p>
     */
    inline void SetIdentityStoreId(const Aws::String& value) { m_identityStoreIdHasBeenSet = true; m_identityStoreId = value; }

    /**
     * <p>The globally unique identifier for the identity store, such as
     * <code>d-1234567890</code>. In this example, <code>d-</code> is a fixed prefix,
     * and <code>1234567890</code> is a randomly generated string that contains number
     * and lower case letters. This value is generated at the time that a new identity
     * store is created.</p>
     */
    inline void SetIdentityStoreId(Aws::String&& value) { m_identityStoreIdHasBeenSet = true; m_identityStoreId = std::move(value); }

    /**
     * <p>The globally unique identifier for the identity store, such as
     * <code>d-1234567890</code>. In this example, <code>d-</code> is a fixed prefix,
     * and <code>1234567890</code> is a randomly generated string that contains number
     * and lower case letters. This value is generated at the time that a new identity
     * store is created.</p>
     */
    inline void SetIdentityStoreId(const char* value) { m_identityStoreIdHasBeenSet = true; m_identityStoreId.assign(value); }

    /**
     * <p>The globally unique identifier for the identity store, such as
     * <code>d-1234567890</code>. In this example, <code>d-</code> is a fixed prefix,
     * and <code>1234567890</code> is a randomly generated string that contains number
     * and lower case letters. This value is generated at the time that a new identity
     * store is created.</p>
     */
    inline ListGroupsRequest& WithIdentityStoreId(const Aws::String& value) { SetIdentityStoreId(value); return *this;}

    /**
     * <p>The globally unique identifier for the identity store, such as
     * <code>d-1234567890</code>. In this example, <code>d-</code> is a fixed prefix,
     * and <code>1234567890</code> is a randomly generated string that contains number
     * and lower case letters. This value is generated at the time that a new identity
     * store is created.</p>
     */
    inline ListGroupsRequest& WithIdentityStoreId(Aws::String&& value) { SetIdentityStoreId(std::move(value)); return *this;}

    /**
     * <p>The globally unique identifier for the identity store, such as
     * <code>d-1234567890</code>. In this example, <code>d-</code> is a fixed prefix,
     * and <code>1234567890</code> is a randomly generated string that contains number
     * and lower case letters. This value is generated at the time that a new identity
     * store is created.</p>
     */
    inline ListGroupsRequest& WithIdentityStoreId(const char* value) { SetIdentityStoreId(value); return *this;}


    /**
     * <p>The maximum number of results to be returned per request. This parameter is
     * used in the <code>ListUsers</code> and <code>ListGroups</code> request to
     * specify how many results to return in one page. The length limit is 50
     * characters.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to be returned per request. This parameter is
     * used in the <code>ListUsers</code> and <code>ListGroups</code> request to
     * specify how many results to return in one page. The length limit is 50
     * characters.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to be returned per request. This parameter is
     * used in the <code>ListUsers</code> and <code>ListGroups</code> request to
     * specify how many results to return in one page. The length limit is 50
     * characters.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to be returned per request. This parameter is
     * used in the <code>ListUsers</code> and <code>ListGroups</code> request to
     * specify how many results to return in one page. The length limit is 50
     * characters.</p>
     */
    inline ListGroupsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The pagination token used for the <code>ListUsers</code> and
     * <code>ListGroups</code> API operations. This value is generated by the identity
     * store service. It is returned in the API response if the total results are more
     * than the size of one page. This token is also returned when it is used in the
     * API request to search for the next page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token used for the <code>ListUsers</code> and
     * <code>ListGroups</code> API operations. This value is generated by the identity
     * store service. It is returned in the API response if the total results are more
     * than the size of one page. This token is also returned when it is used in the
     * API request to search for the next page.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The pagination token used for the <code>ListUsers</code> and
     * <code>ListGroups</code> API operations. This value is generated by the identity
     * store service. It is returned in the API response if the total results are more
     * than the size of one page. This token is also returned when it is used in the
     * API request to search for the next page.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The pagination token used for the <code>ListUsers</code> and
     * <code>ListGroups</code> API operations. This value is generated by the identity
     * store service. It is returned in the API response if the total results are more
     * than the size of one page. This token is also returned when it is used in the
     * API request to search for the next page.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The pagination token used for the <code>ListUsers</code> and
     * <code>ListGroups</code> API operations. This value is generated by the identity
     * store service. It is returned in the API response if the total results are more
     * than the size of one page. This token is also returned when it is used in the
     * API request to search for the next page.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The pagination token used for the <code>ListUsers</code> and
     * <code>ListGroups</code> API operations. This value is generated by the identity
     * store service. It is returned in the API response if the total results are more
     * than the size of one page. This token is also returned when it is used in the
     * API request to search for the next page.</p>
     */
    inline ListGroupsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token used for the <code>ListUsers</code> and
     * <code>ListGroups</code> API operations. This value is generated by the identity
     * store service. It is returned in the API response if the total results are more
     * than the size of one page. This token is also returned when it is used in the
     * API request to search for the next page.</p>
     */
    inline ListGroupsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token used for the <code>ListUsers</code> and
     * <code>ListGroups</code> API operations. This value is generated by the identity
     * store service. It is returned in the API response if the total results are more
     * than the size of one page. This token is also returned when it is used in the
     * API request to search for the next page.</p>
     */
    inline ListGroupsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A list of <code>Filter</code> objects, which is used in the
     * <code>ListUsers</code> and <code>ListGroups</code> request. </p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>A list of <code>Filter</code> objects, which is used in the
     * <code>ListUsers</code> and <code>ListGroups</code> request. </p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>A list of <code>Filter</code> objects, which is used in the
     * <code>ListUsers</code> and <code>ListGroups</code> request. </p>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>A list of <code>Filter</code> objects, which is used in the
     * <code>ListUsers</code> and <code>ListGroups</code> request. </p>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>A list of <code>Filter</code> objects, which is used in the
     * <code>ListUsers</code> and <code>ListGroups</code> request. </p>
     */
    inline ListGroupsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>A list of <code>Filter</code> objects, which is used in the
     * <code>ListUsers</code> and <code>ListGroups</code> request. </p>
     */
    inline ListGroupsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>A list of <code>Filter</code> objects, which is used in the
     * <code>ListUsers</code> and <code>ListGroups</code> request. </p>
     */
    inline ListGroupsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>A list of <code>Filter</code> objects, which is used in the
     * <code>ListUsers</code> and <code>ListGroups</code> request. </p>
     */
    inline ListGroupsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_identityStoreId;
    bool m_identityStoreIdHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet;
  };

} // namespace Model
} // namespace IdentityStore
} // namespace Aws
