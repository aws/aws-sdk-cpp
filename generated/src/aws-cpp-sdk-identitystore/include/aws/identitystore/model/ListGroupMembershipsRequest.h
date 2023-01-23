/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/identitystore/IdentityStore_EXPORTS.h>
#include <aws/identitystore/IdentityStoreRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace IdentityStore
{
namespace Model
{

  /**
   */
  class ListGroupMembershipsRequest : public IdentityStoreRequest
  {
  public:
    AWS_IDENTITYSTORE_API ListGroupMembershipsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListGroupMemberships"; }

    AWS_IDENTITYSTORE_API Aws::String SerializePayload() const override;

    AWS_IDENTITYSTORE_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The globally unique identifier for the identity store.</p>
     */
    inline const Aws::String& GetIdentityStoreId() const{ return m_identityStoreId; }

    /**
     * <p>The globally unique identifier for the identity store.</p>
     */
    inline bool IdentityStoreIdHasBeenSet() const { return m_identityStoreIdHasBeenSet; }

    /**
     * <p>The globally unique identifier for the identity store.</p>
     */
    inline void SetIdentityStoreId(const Aws::String& value) { m_identityStoreIdHasBeenSet = true; m_identityStoreId = value; }

    /**
     * <p>The globally unique identifier for the identity store.</p>
     */
    inline void SetIdentityStoreId(Aws::String&& value) { m_identityStoreIdHasBeenSet = true; m_identityStoreId = std::move(value); }

    /**
     * <p>The globally unique identifier for the identity store.</p>
     */
    inline void SetIdentityStoreId(const char* value) { m_identityStoreIdHasBeenSet = true; m_identityStoreId.assign(value); }

    /**
     * <p>The globally unique identifier for the identity store.</p>
     */
    inline ListGroupMembershipsRequest& WithIdentityStoreId(const Aws::String& value) { SetIdentityStoreId(value); return *this;}

    /**
     * <p>The globally unique identifier for the identity store.</p>
     */
    inline ListGroupMembershipsRequest& WithIdentityStoreId(Aws::String&& value) { SetIdentityStoreId(std::move(value)); return *this;}

    /**
     * <p>The globally unique identifier for the identity store.</p>
     */
    inline ListGroupMembershipsRequest& WithIdentityStoreId(const char* value) { SetIdentityStoreId(value); return *this;}


    /**
     * <p>The identifier for a group in the identity store.</p>
     */
    inline const Aws::String& GetGroupId() const{ return m_groupId; }

    /**
     * <p>The identifier for a group in the identity store.</p>
     */
    inline bool GroupIdHasBeenSet() const { return m_groupIdHasBeenSet; }

    /**
     * <p>The identifier for a group in the identity store.</p>
     */
    inline void SetGroupId(const Aws::String& value) { m_groupIdHasBeenSet = true; m_groupId = value; }

    /**
     * <p>The identifier for a group in the identity store.</p>
     */
    inline void SetGroupId(Aws::String&& value) { m_groupIdHasBeenSet = true; m_groupId = std::move(value); }

    /**
     * <p>The identifier for a group in the identity store.</p>
     */
    inline void SetGroupId(const char* value) { m_groupIdHasBeenSet = true; m_groupId.assign(value); }

    /**
     * <p>The identifier for a group in the identity store.</p>
     */
    inline ListGroupMembershipsRequest& WithGroupId(const Aws::String& value) { SetGroupId(value); return *this;}

    /**
     * <p>The identifier for a group in the identity store.</p>
     */
    inline ListGroupMembershipsRequest& WithGroupId(Aws::String&& value) { SetGroupId(std::move(value)); return *this;}

    /**
     * <p>The identifier for a group in the identity store.</p>
     */
    inline ListGroupMembershipsRequest& WithGroupId(const char* value) { SetGroupId(value); return *this;}


    /**
     * <p>The maximum number of results to be returned per request. This parameter is
     * used in all <code>List</code> requests to specify how many results to return in
     * one page.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to be returned per request. This parameter is
     * used in all <code>List</code> requests to specify how many results to return in
     * one page.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to be returned per request. This parameter is
     * used in all <code>List</code> requests to specify how many results to return in
     * one page.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to be returned per request. This parameter is
     * used in all <code>List</code> requests to specify how many results to return in
     * one page.</p>
     */
    inline ListGroupMembershipsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The pagination token used for the <code>ListUsers</code>,
     * <code>ListGroups</code> and <code>ListGroupMemberships</code> API operations.
     * This value is generated by the identity store service. It is returned in the API
     * response if the total results are more than the size of one page. This token is
     * also returned when it is used in the API request to search for the next
     * page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token used for the <code>ListUsers</code>,
     * <code>ListGroups</code> and <code>ListGroupMemberships</code> API operations.
     * This value is generated by the identity store service. It is returned in the API
     * response if the total results are more than the size of one page. This token is
     * also returned when it is used in the API request to search for the next
     * page.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The pagination token used for the <code>ListUsers</code>,
     * <code>ListGroups</code> and <code>ListGroupMemberships</code> API operations.
     * This value is generated by the identity store service. It is returned in the API
     * response if the total results are more than the size of one page. This token is
     * also returned when it is used in the API request to search for the next
     * page.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The pagination token used for the <code>ListUsers</code>,
     * <code>ListGroups</code> and <code>ListGroupMemberships</code> API operations.
     * This value is generated by the identity store service. It is returned in the API
     * response if the total results are more than the size of one page. This token is
     * also returned when it is used in the API request to search for the next
     * page.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The pagination token used for the <code>ListUsers</code>,
     * <code>ListGroups</code> and <code>ListGroupMemberships</code> API operations.
     * This value is generated by the identity store service. It is returned in the API
     * response if the total results are more than the size of one page. This token is
     * also returned when it is used in the API request to search for the next
     * page.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The pagination token used for the <code>ListUsers</code>,
     * <code>ListGroups</code> and <code>ListGroupMemberships</code> API operations.
     * This value is generated by the identity store service. It is returned in the API
     * response if the total results are more than the size of one page. This token is
     * also returned when it is used in the API request to search for the next
     * page.</p>
     */
    inline ListGroupMembershipsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token used for the <code>ListUsers</code>,
     * <code>ListGroups</code> and <code>ListGroupMemberships</code> API operations.
     * This value is generated by the identity store service. It is returned in the API
     * response if the total results are more than the size of one page. This token is
     * also returned when it is used in the API request to search for the next
     * page.</p>
     */
    inline ListGroupMembershipsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token used for the <code>ListUsers</code>,
     * <code>ListGroups</code> and <code>ListGroupMemberships</code> API operations.
     * This value is generated by the identity store service. It is returned in the API
     * response if the total results are more than the size of one page. This token is
     * also returned when it is used in the API request to search for the next
     * page.</p>
     */
    inline ListGroupMembershipsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_identityStoreId;
    bool m_identityStoreIdHasBeenSet = false;

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace IdentityStore
} // namespace Aws
