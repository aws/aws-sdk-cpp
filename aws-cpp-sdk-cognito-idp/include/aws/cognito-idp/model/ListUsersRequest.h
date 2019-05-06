/*
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
#include <aws/cognito-idp/CognitoIdentityProvider_EXPORTS.h>
#include <aws/cognito-idp/CognitoIdentityProviderRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace CognitoIdentityProvider
{
namespace Model
{

  /**
   * <p>Represents the request to list users.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cognito-idp-2016-04-18/ListUsersRequest">AWS
   * API Reference</a></p>
   */
  class AWS_COGNITOIDENTITYPROVIDER_API ListUsersRequest : public CognitoIdentityProviderRequest
  {
  public:
    ListUsersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListUsers"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The user pool ID for the user pool on which the search should be
     * performed.</p>
     */
    inline const Aws::String& GetUserPoolId() const{ return m_userPoolId; }

    /**
     * <p>The user pool ID for the user pool on which the search should be
     * performed.</p>
     */
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }

    /**
     * <p>The user pool ID for the user pool on which the search should be
     * performed.</p>
     */
    inline void SetUserPoolId(const Aws::String& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = value; }

    /**
     * <p>The user pool ID for the user pool on which the search should be
     * performed.</p>
     */
    inline void SetUserPoolId(Aws::String&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::move(value); }

    /**
     * <p>The user pool ID for the user pool on which the search should be
     * performed.</p>
     */
    inline void SetUserPoolId(const char* value) { m_userPoolIdHasBeenSet = true; m_userPoolId.assign(value); }

    /**
     * <p>The user pool ID for the user pool on which the search should be
     * performed.</p>
     */
    inline ListUsersRequest& WithUserPoolId(const Aws::String& value) { SetUserPoolId(value); return *this;}

    /**
     * <p>The user pool ID for the user pool on which the search should be
     * performed.</p>
     */
    inline ListUsersRequest& WithUserPoolId(Aws::String&& value) { SetUserPoolId(std::move(value)); return *this;}

    /**
     * <p>The user pool ID for the user pool on which the search should be
     * performed.</p>
     */
    inline ListUsersRequest& WithUserPoolId(const char* value) { SetUserPoolId(value); return *this;}


    /**
     * <p>An array of strings, where each string is the name of a user attribute to be
     * returned for each user in the search results. If the array is null, all
     * attributes are returned.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAttributesToGet() const{ return m_attributesToGet; }

    /**
     * <p>An array of strings, where each string is the name of a user attribute to be
     * returned for each user in the search results. If the array is null, all
     * attributes are returned.</p>
     */
    inline bool AttributesToGetHasBeenSet() const { return m_attributesToGetHasBeenSet; }

    /**
     * <p>An array of strings, where each string is the name of a user attribute to be
     * returned for each user in the search results. If the array is null, all
     * attributes are returned.</p>
     */
    inline void SetAttributesToGet(const Aws::Vector<Aws::String>& value) { m_attributesToGetHasBeenSet = true; m_attributesToGet = value; }

    /**
     * <p>An array of strings, where each string is the name of a user attribute to be
     * returned for each user in the search results. If the array is null, all
     * attributes are returned.</p>
     */
    inline void SetAttributesToGet(Aws::Vector<Aws::String>&& value) { m_attributesToGetHasBeenSet = true; m_attributesToGet = std::move(value); }

    /**
     * <p>An array of strings, where each string is the name of a user attribute to be
     * returned for each user in the search results. If the array is null, all
     * attributes are returned.</p>
     */
    inline ListUsersRequest& WithAttributesToGet(const Aws::Vector<Aws::String>& value) { SetAttributesToGet(value); return *this;}

    /**
     * <p>An array of strings, where each string is the name of a user attribute to be
     * returned for each user in the search results. If the array is null, all
     * attributes are returned.</p>
     */
    inline ListUsersRequest& WithAttributesToGet(Aws::Vector<Aws::String>&& value) { SetAttributesToGet(std::move(value)); return *this;}

    /**
     * <p>An array of strings, where each string is the name of a user attribute to be
     * returned for each user in the search results. If the array is null, all
     * attributes are returned.</p>
     */
    inline ListUsersRequest& AddAttributesToGet(const Aws::String& value) { m_attributesToGetHasBeenSet = true; m_attributesToGet.push_back(value); return *this; }

    /**
     * <p>An array of strings, where each string is the name of a user attribute to be
     * returned for each user in the search results. If the array is null, all
     * attributes are returned.</p>
     */
    inline ListUsersRequest& AddAttributesToGet(Aws::String&& value) { m_attributesToGetHasBeenSet = true; m_attributesToGet.push_back(std::move(value)); return *this; }

    /**
     * <p>An array of strings, where each string is the name of a user attribute to be
     * returned for each user in the search results. If the array is null, all
     * attributes are returned.</p>
     */
    inline ListUsersRequest& AddAttributesToGet(const char* value) { m_attributesToGetHasBeenSet = true; m_attributesToGet.push_back(value); return *this; }


    /**
     * <p>Maximum number of users to be returned.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>Maximum number of users to be returned.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>Maximum number of users to be returned.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>Maximum number of users to be returned.</p>
     */
    inline ListUsersRequest& WithLimit(int value) { SetLimit(value); return *this;}


    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline const Aws::String& GetPaginationToken() const{ return m_paginationToken; }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline bool PaginationTokenHasBeenSet() const { return m_paginationTokenHasBeenSet; }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline void SetPaginationToken(const Aws::String& value) { m_paginationTokenHasBeenSet = true; m_paginationToken = value; }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline void SetPaginationToken(Aws::String&& value) { m_paginationTokenHasBeenSet = true; m_paginationToken = std::move(value); }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline void SetPaginationToken(const char* value) { m_paginationTokenHasBeenSet = true; m_paginationToken.assign(value); }

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline ListUsersRequest& WithPaginationToken(const Aws::String& value) { SetPaginationToken(value); return *this;}

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline ListUsersRequest& WithPaginationToken(Aws::String&& value) { SetPaginationToken(std::move(value)); return *this;}

    /**
     * <p>An identifier that was returned from the previous call to this operation,
     * which can be used to return the next set of items in the list.</p>
     */
    inline ListUsersRequest& WithPaginationToken(const char* value) { SetPaginationToken(value); return *this;}


    /**
     * <p>A filter string of the form "<i>AttributeName</i> <i>Filter-Type</i>
     * "<i>AttributeValue</i>"". Quotation marks within the filter string must be
     * escaped using the backslash (\) character. For example,
     * "<code>family_name</code> = \"Reddy\"".</p> <ul> <li> <p> <i>AttributeName</i>:
     * The name of the attribute to search for. You can only search for one attribute
     * at a time.</p> </li> <li> <p> <i>Filter-Type</i>: For an exact match, use =, for
     * example, "<code>given_name</code> = \"Jon\"". For a prefix ("starts with")
     * match, use ^=, for example, "<code>given_name</code> ^= \"Jon\"". </p> </li>
     * <li> <p> <i>AttributeValue</i>: The attribute value that must be matched for
     * each user.</p> </li> </ul> <p>If the filter string is empty,
     * <code>ListUsers</code> returns all users in the user pool.</p> <p>You can only
     * search for the following standard attributes:</p> <ul> <li> <p>
     * <code>username</code> (case-sensitive)</p> </li> <li> <p> <code>email</code>
     * </p> </li> <li> <p> <code>phone_number</code> </p> </li> <li> <p>
     * <code>name</code> </p> </li> <li> <p> <code>given_name</code> </p> </li> <li>
     * <p> <code>family_name</code> </p> </li> <li> <p> <code>preferred_username</code>
     * </p> </li> <li> <p> <code>cognito:user_status</code> (called <b>Status</b> in
     * the Console) (case-insensitive)</p> </li> <li> <p> <code>status (called
     * <b>Enabled</b> in the Console) (case-sensitive)</code> </p> </li> <li> <p>
     * <code>sub</code> </p> </li> </ul> <p>Custom attributes are not searchable.</p>
     * <p>For more information, see <a
     * href="http://docs.aws.amazon.com/cognito/latest/developerguide/how-to-manage-user-accounts.html#cognito-user-pools-searching-for-users-using-listusers-api">Searching
     * for Users Using the ListUsers API</a> and <a
     * href="http://docs.aws.amazon.com/cognito/latest/developerguide/how-to-manage-user-accounts.html#cognito-user-pools-searching-for-users-listusers-api-examples">Examples
     * of Using the ListUsers API</a> in the <i>Amazon Cognito Developer Guide</i>.</p>
     */
    inline const Aws::String& GetFilter() const{ return m_filter; }

    /**
     * <p>A filter string of the form "<i>AttributeName</i> <i>Filter-Type</i>
     * "<i>AttributeValue</i>"". Quotation marks within the filter string must be
     * escaped using the backslash (\) character. For example,
     * "<code>family_name</code> = \"Reddy\"".</p> <ul> <li> <p> <i>AttributeName</i>:
     * The name of the attribute to search for. You can only search for one attribute
     * at a time.</p> </li> <li> <p> <i>Filter-Type</i>: For an exact match, use =, for
     * example, "<code>given_name</code> = \"Jon\"". For a prefix ("starts with")
     * match, use ^=, for example, "<code>given_name</code> ^= \"Jon\"". </p> </li>
     * <li> <p> <i>AttributeValue</i>: The attribute value that must be matched for
     * each user.</p> </li> </ul> <p>If the filter string is empty,
     * <code>ListUsers</code> returns all users in the user pool.</p> <p>You can only
     * search for the following standard attributes:</p> <ul> <li> <p>
     * <code>username</code> (case-sensitive)</p> </li> <li> <p> <code>email</code>
     * </p> </li> <li> <p> <code>phone_number</code> </p> </li> <li> <p>
     * <code>name</code> </p> </li> <li> <p> <code>given_name</code> </p> </li> <li>
     * <p> <code>family_name</code> </p> </li> <li> <p> <code>preferred_username</code>
     * </p> </li> <li> <p> <code>cognito:user_status</code> (called <b>Status</b> in
     * the Console) (case-insensitive)</p> </li> <li> <p> <code>status (called
     * <b>Enabled</b> in the Console) (case-sensitive)</code> </p> </li> <li> <p>
     * <code>sub</code> </p> </li> </ul> <p>Custom attributes are not searchable.</p>
     * <p>For more information, see <a
     * href="http://docs.aws.amazon.com/cognito/latest/developerguide/how-to-manage-user-accounts.html#cognito-user-pools-searching-for-users-using-listusers-api">Searching
     * for Users Using the ListUsers API</a> and <a
     * href="http://docs.aws.amazon.com/cognito/latest/developerguide/how-to-manage-user-accounts.html#cognito-user-pools-searching-for-users-listusers-api-examples">Examples
     * of Using the ListUsers API</a> in the <i>Amazon Cognito Developer Guide</i>.</p>
     */
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }

    /**
     * <p>A filter string of the form "<i>AttributeName</i> <i>Filter-Type</i>
     * "<i>AttributeValue</i>"". Quotation marks within the filter string must be
     * escaped using the backslash (\) character. For example,
     * "<code>family_name</code> = \"Reddy\"".</p> <ul> <li> <p> <i>AttributeName</i>:
     * The name of the attribute to search for. You can only search for one attribute
     * at a time.</p> </li> <li> <p> <i>Filter-Type</i>: For an exact match, use =, for
     * example, "<code>given_name</code> = \"Jon\"". For a prefix ("starts with")
     * match, use ^=, for example, "<code>given_name</code> ^= \"Jon\"". </p> </li>
     * <li> <p> <i>AttributeValue</i>: The attribute value that must be matched for
     * each user.</p> </li> </ul> <p>If the filter string is empty,
     * <code>ListUsers</code> returns all users in the user pool.</p> <p>You can only
     * search for the following standard attributes:</p> <ul> <li> <p>
     * <code>username</code> (case-sensitive)</p> </li> <li> <p> <code>email</code>
     * </p> </li> <li> <p> <code>phone_number</code> </p> </li> <li> <p>
     * <code>name</code> </p> </li> <li> <p> <code>given_name</code> </p> </li> <li>
     * <p> <code>family_name</code> </p> </li> <li> <p> <code>preferred_username</code>
     * </p> </li> <li> <p> <code>cognito:user_status</code> (called <b>Status</b> in
     * the Console) (case-insensitive)</p> </li> <li> <p> <code>status (called
     * <b>Enabled</b> in the Console) (case-sensitive)</code> </p> </li> <li> <p>
     * <code>sub</code> </p> </li> </ul> <p>Custom attributes are not searchable.</p>
     * <p>For more information, see <a
     * href="http://docs.aws.amazon.com/cognito/latest/developerguide/how-to-manage-user-accounts.html#cognito-user-pools-searching-for-users-using-listusers-api">Searching
     * for Users Using the ListUsers API</a> and <a
     * href="http://docs.aws.amazon.com/cognito/latest/developerguide/how-to-manage-user-accounts.html#cognito-user-pools-searching-for-users-listusers-api-examples">Examples
     * of Using the ListUsers API</a> in the <i>Amazon Cognito Developer Guide</i>.</p>
     */
    inline void SetFilter(const Aws::String& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p>A filter string of the form "<i>AttributeName</i> <i>Filter-Type</i>
     * "<i>AttributeValue</i>"". Quotation marks within the filter string must be
     * escaped using the backslash (\) character. For example,
     * "<code>family_name</code> = \"Reddy\"".</p> <ul> <li> <p> <i>AttributeName</i>:
     * The name of the attribute to search for. You can only search for one attribute
     * at a time.</p> </li> <li> <p> <i>Filter-Type</i>: For an exact match, use =, for
     * example, "<code>given_name</code> = \"Jon\"". For a prefix ("starts with")
     * match, use ^=, for example, "<code>given_name</code> ^= \"Jon\"". </p> </li>
     * <li> <p> <i>AttributeValue</i>: The attribute value that must be matched for
     * each user.</p> </li> </ul> <p>If the filter string is empty,
     * <code>ListUsers</code> returns all users in the user pool.</p> <p>You can only
     * search for the following standard attributes:</p> <ul> <li> <p>
     * <code>username</code> (case-sensitive)</p> </li> <li> <p> <code>email</code>
     * </p> </li> <li> <p> <code>phone_number</code> </p> </li> <li> <p>
     * <code>name</code> </p> </li> <li> <p> <code>given_name</code> </p> </li> <li>
     * <p> <code>family_name</code> </p> </li> <li> <p> <code>preferred_username</code>
     * </p> </li> <li> <p> <code>cognito:user_status</code> (called <b>Status</b> in
     * the Console) (case-insensitive)</p> </li> <li> <p> <code>status (called
     * <b>Enabled</b> in the Console) (case-sensitive)</code> </p> </li> <li> <p>
     * <code>sub</code> </p> </li> </ul> <p>Custom attributes are not searchable.</p>
     * <p>For more information, see <a
     * href="http://docs.aws.amazon.com/cognito/latest/developerguide/how-to-manage-user-accounts.html#cognito-user-pools-searching-for-users-using-listusers-api">Searching
     * for Users Using the ListUsers API</a> and <a
     * href="http://docs.aws.amazon.com/cognito/latest/developerguide/how-to-manage-user-accounts.html#cognito-user-pools-searching-for-users-listusers-api-examples">Examples
     * of Using the ListUsers API</a> in the <i>Amazon Cognito Developer Guide</i>.</p>
     */
    inline void SetFilter(Aws::String&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

    /**
     * <p>A filter string of the form "<i>AttributeName</i> <i>Filter-Type</i>
     * "<i>AttributeValue</i>"". Quotation marks within the filter string must be
     * escaped using the backslash (\) character. For example,
     * "<code>family_name</code> = \"Reddy\"".</p> <ul> <li> <p> <i>AttributeName</i>:
     * The name of the attribute to search for. You can only search for one attribute
     * at a time.</p> </li> <li> <p> <i>Filter-Type</i>: For an exact match, use =, for
     * example, "<code>given_name</code> = \"Jon\"". For a prefix ("starts with")
     * match, use ^=, for example, "<code>given_name</code> ^= \"Jon\"". </p> </li>
     * <li> <p> <i>AttributeValue</i>: The attribute value that must be matched for
     * each user.</p> </li> </ul> <p>If the filter string is empty,
     * <code>ListUsers</code> returns all users in the user pool.</p> <p>You can only
     * search for the following standard attributes:</p> <ul> <li> <p>
     * <code>username</code> (case-sensitive)</p> </li> <li> <p> <code>email</code>
     * </p> </li> <li> <p> <code>phone_number</code> </p> </li> <li> <p>
     * <code>name</code> </p> </li> <li> <p> <code>given_name</code> </p> </li> <li>
     * <p> <code>family_name</code> </p> </li> <li> <p> <code>preferred_username</code>
     * </p> </li> <li> <p> <code>cognito:user_status</code> (called <b>Status</b> in
     * the Console) (case-insensitive)</p> </li> <li> <p> <code>status (called
     * <b>Enabled</b> in the Console) (case-sensitive)</code> </p> </li> <li> <p>
     * <code>sub</code> </p> </li> </ul> <p>Custom attributes are not searchable.</p>
     * <p>For more information, see <a
     * href="http://docs.aws.amazon.com/cognito/latest/developerguide/how-to-manage-user-accounts.html#cognito-user-pools-searching-for-users-using-listusers-api">Searching
     * for Users Using the ListUsers API</a> and <a
     * href="http://docs.aws.amazon.com/cognito/latest/developerguide/how-to-manage-user-accounts.html#cognito-user-pools-searching-for-users-listusers-api-examples">Examples
     * of Using the ListUsers API</a> in the <i>Amazon Cognito Developer Guide</i>.</p>
     */
    inline void SetFilter(const char* value) { m_filterHasBeenSet = true; m_filter.assign(value); }

    /**
     * <p>A filter string of the form "<i>AttributeName</i> <i>Filter-Type</i>
     * "<i>AttributeValue</i>"". Quotation marks within the filter string must be
     * escaped using the backslash (\) character. For example,
     * "<code>family_name</code> = \"Reddy\"".</p> <ul> <li> <p> <i>AttributeName</i>:
     * The name of the attribute to search for. You can only search for one attribute
     * at a time.</p> </li> <li> <p> <i>Filter-Type</i>: For an exact match, use =, for
     * example, "<code>given_name</code> = \"Jon\"". For a prefix ("starts with")
     * match, use ^=, for example, "<code>given_name</code> ^= \"Jon\"". </p> </li>
     * <li> <p> <i>AttributeValue</i>: The attribute value that must be matched for
     * each user.</p> </li> </ul> <p>If the filter string is empty,
     * <code>ListUsers</code> returns all users in the user pool.</p> <p>You can only
     * search for the following standard attributes:</p> <ul> <li> <p>
     * <code>username</code> (case-sensitive)</p> </li> <li> <p> <code>email</code>
     * </p> </li> <li> <p> <code>phone_number</code> </p> </li> <li> <p>
     * <code>name</code> </p> </li> <li> <p> <code>given_name</code> </p> </li> <li>
     * <p> <code>family_name</code> </p> </li> <li> <p> <code>preferred_username</code>
     * </p> </li> <li> <p> <code>cognito:user_status</code> (called <b>Status</b> in
     * the Console) (case-insensitive)</p> </li> <li> <p> <code>status (called
     * <b>Enabled</b> in the Console) (case-sensitive)</code> </p> </li> <li> <p>
     * <code>sub</code> </p> </li> </ul> <p>Custom attributes are not searchable.</p>
     * <p>For more information, see <a
     * href="http://docs.aws.amazon.com/cognito/latest/developerguide/how-to-manage-user-accounts.html#cognito-user-pools-searching-for-users-using-listusers-api">Searching
     * for Users Using the ListUsers API</a> and <a
     * href="http://docs.aws.amazon.com/cognito/latest/developerguide/how-to-manage-user-accounts.html#cognito-user-pools-searching-for-users-listusers-api-examples">Examples
     * of Using the ListUsers API</a> in the <i>Amazon Cognito Developer Guide</i>.</p>
     */
    inline ListUsersRequest& WithFilter(const Aws::String& value) { SetFilter(value); return *this;}

    /**
     * <p>A filter string of the form "<i>AttributeName</i> <i>Filter-Type</i>
     * "<i>AttributeValue</i>"". Quotation marks within the filter string must be
     * escaped using the backslash (\) character. For example,
     * "<code>family_name</code> = \"Reddy\"".</p> <ul> <li> <p> <i>AttributeName</i>:
     * The name of the attribute to search for. You can only search for one attribute
     * at a time.</p> </li> <li> <p> <i>Filter-Type</i>: For an exact match, use =, for
     * example, "<code>given_name</code> = \"Jon\"". For a prefix ("starts with")
     * match, use ^=, for example, "<code>given_name</code> ^= \"Jon\"". </p> </li>
     * <li> <p> <i>AttributeValue</i>: The attribute value that must be matched for
     * each user.</p> </li> </ul> <p>If the filter string is empty,
     * <code>ListUsers</code> returns all users in the user pool.</p> <p>You can only
     * search for the following standard attributes:</p> <ul> <li> <p>
     * <code>username</code> (case-sensitive)</p> </li> <li> <p> <code>email</code>
     * </p> </li> <li> <p> <code>phone_number</code> </p> </li> <li> <p>
     * <code>name</code> </p> </li> <li> <p> <code>given_name</code> </p> </li> <li>
     * <p> <code>family_name</code> </p> </li> <li> <p> <code>preferred_username</code>
     * </p> </li> <li> <p> <code>cognito:user_status</code> (called <b>Status</b> in
     * the Console) (case-insensitive)</p> </li> <li> <p> <code>status (called
     * <b>Enabled</b> in the Console) (case-sensitive)</code> </p> </li> <li> <p>
     * <code>sub</code> </p> </li> </ul> <p>Custom attributes are not searchable.</p>
     * <p>For more information, see <a
     * href="http://docs.aws.amazon.com/cognito/latest/developerguide/how-to-manage-user-accounts.html#cognito-user-pools-searching-for-users-using-listusers-api">Searching
     * for Users Using the ListUsers API</a> and <a
     * href="http://docs.aws.amazon.com/cognito/latest/developerguide/how-to-manage-user-accounts.html#cognito-user-pools-searching-for-users-listusers-api-examples">Examples
     * of Using the ListUsers API</a> in the <i>Amazon Cognito Developer Guide</i>.</p>
     */
    inline ListUsersRequest& WithFilter(Aws::String&& value) { SetFilter(std::move(value)); return *this;}

    /**
     * <p>A filter string of the form "<i>AttributeName</i> <i>Filter-Type</i>
     * "<i>AttributeValue</i>"". Quotation marks within the filter string must be
     * escaped using the backslash (\) character. For example,
     * "<code>family_name</code> = \"Reddy\"".</p> <ul> <li> <p> <i>AttributeName</i>:
     * The name of the attribute to search for. You can only search for one attribute
     * at a time.</p> </li> <li> <p> <i>Filter-Type</i>: For an exact match, use =, for
     * example, "<code>given_name</code> = \"Jon\"". For a prefix ("starts with")
     * match, use ^=, for example, "<code>given_name</code> ^= \"Jon\"". </p> </li>
     * <li> <p> <i>AttributeValue</i>: The attribute value that must be matched for
     * each user.</p> </li> </ul> <p>If the filter string is empty,
     * <code>ListUsers</code> returns all users in the user pool.</p> <p>You can only
     * search for the following standard attributes:</p> <ul> <li> <p>
     * <code>username</code> (case-sensitive)</p> </li> <li> <p> <code>email</code>
     * </p> </li> <li> <p> <code>phone_number</code> </p> </li> <li> <p>
     * <code>name</code> </p> </li> <li> <p> <code>given_name</code> </p> </li> <li>
     * <p> <code>family_name</code> </p> </li> <li> <p> <code>preferred_username</code>
     * </p> </li> <li> <p> <code>cognito:user_status</code> (called <b>Status</b> in
     * the Console) (case-insensitive)</p> </li> <li> <p> <code>status (called
     * <b>Enabled</b> in the Console) (case-sensitive)</code> </p> </li> <li> <p>
     * <code>sub</code> </p> </li> </ul> <p>Custom attributes are not searchable.</p>
     * <p>For more information, see <a
     * href="http://docs.aws.amazon.com/cognito/latest/developerguide/how-to-manage-user-accounts.html#cognito-user-pools-searching-for-users-using-listusers-api">Searching
     * for Users Using the ListUsers API</a> and <a
     * href="http://docs.aws.amazon.com/cognito/latest/developerguide/how-to-manage-user-accounts.html#cognito-user-pools-searching-for-users-listusers-api-examples">Examples
     * of Using the ListUsers API</a> in the <i>Amazon Cognito Developer Guide</i>.</p>
     */
    inline ListUsersRequest& WithFilter(const char* value) { SetFilter(value); return *this;}

  private:

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet;

    Aws::Vector<Aws::String> m_attributesToGet;
    bool m_attributesToGetHasBeenSet;

    int m_limit;
    bool m_limitHasBeenSet;

    Aws::String m_paginationToken;
    bool m_paginationTokenHasBeenSet;

    Aws::String m_filter;
    bool m_filterHasBeenSet;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
