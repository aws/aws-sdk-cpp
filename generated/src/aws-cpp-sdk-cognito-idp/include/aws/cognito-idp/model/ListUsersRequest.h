/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class ListUsersRequest : public CognitoIdentityProviderRequest
  {
  public:
    AWS_COGNITOIDENTITYPROVIDER_API ListUsersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListUsers"; }

    AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

    AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The user pool ID for the user pool on which the search should be
     * performed.</p>
     */
    inline const Aws::String& GetUserPoolId() const{ return m_userPoolId; }
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }
    inline void SetUserPoolId(const Aws::String& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = value; }
    inline void SetUserPoolId(Aws::String&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::move(value); }
    inline void SetUserPoolId(const char* value) { m_userPoolIdHasBeenSet = true; m_userPoolId.assign(value); }
    inline ListUsersRequest& WithUserPoolId(const Aws::String& value) { SetUserPoolId(value); return *this;}
    inline ListUsersRequest& WithUserPoolId(Aws::String&& value) { SetUserPoolId(std::move(value)); return *this;}
    inline ListUsersRequest& WithUserPoolId(const char* value) { SetUserPoolId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A JSON array of user attribute names, for example <code>given_name</code>,
     * that you want Amazon Cognito to include in the response for each user. When you
     * don't provide an <code>AttributesToGet</code> parameter, Amazon Cognito returns
     * all attributes for each user.</p> <p>Use <code>AttributesToGet</code> with
     * required attributes in your user pool, or in conjunction with
     * <code>Filter</code>. Amazon Cognito returns an error if not all users in the
     * results have set a value for the attribute you request. Attributes that you
     * can't filter on, including custom attributes, must have a value set in every
     * user profile before an <code>AttributesToGet</code> parameter returns
     * results.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAttributesToGet() const{ return m_attributesToGet; }
    inline bool AttributesToGetHasBeenSet() const { return m_attributesToGetHasBeenSet; }
    inline void SetAttributesToGet(const Aws::Vector<Aws::String>& value) { m_attributesToGetHasBeenSet = true; m_attributesToGet = value; }
    inline void SetAttributesToGet(Aws::Vector<Aws::String>&& value) { m_attributesToGetHasBeenSet = true; m_attributesToGet = std::move(value); }
    inline ListUsersRequest& WithAttributesToGet(const Aws::Vector<Aws::String>& value) { SetAttributesToGet(value); return *this;}
    inline ListUsersRequest& WithAttributesToGet(Aws::Vector<Aws::String>&& value) { SetAttributesToGet(std::move(value)); return *this;}
    inline ListUsersRequest& AddAttributesToGet(const Aws::String& value) { m_attributesToGetHasBeenSet = true; m_attributesToGet.push_back(value); return *this; }
    inline ListUsersRequest& AddAttributesToGet(Aws::String&& value) { m_attributesToGetHasBeenSet = true; m_attributesToGet.push_back(std::move(value)); return *this; }
    inline ListUsersRequest& AddAttributesToGet(const char* value) { m_attributesToGetHasBeenSet = true; m_attributesToGet.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Maximum number of users to be returned.</p>
     */
    inline int GetLimit() const{ return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline ListUsersRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This API operation returns a limited number of results. The pagination token
     * is an identifier that you can present in an additional API request with the same
     * parameters. When you include the pagination token, Amazon Cognito returns the
     * next set of items after the current list. Subsequent requests return a new
     * pagination token. By use of this token, you can paginate through the full list
     * of items.</p>
     */
    inline const Aws::String& GetPaginationToken() const{ return m_paginationToken; }
    inline bool PaginationTokenHasBeenSet() const { return m_paginationTokenHasBeenSet; }
    inline void SetPaginationToken(const Aws::String& value) { m_paginationTokenHasBeenSet = true; m_paginationToken = value; }
    inline void SetPaginationToken(Aws::String&& value) { m_paginationTokenHasBeenSet = true; m_paginationToken = std::move(value); }
    inline void SetPaginationToken(const char* value) { m_paginationTokenHasBeenSet = true; m_paginationToken.assign(value); }
    inline ListUsersRequest& WithPaginationToken(const Aws::String& value) { SetPaginationToken(value); return *this;}
    inline ListUsersRequest& WithPaginationToken(Aws::String&& value) { SetPaginationToken(std::move(value)); return *this;}
    inline ListUsersRequest& WithPaginationToken(const char* value) { SetPaginationToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter string of the form "<i>AttributeName</i> <i>Filter-Type</i>
     * "<i>AttributeValue</i>"". Quotation marks within the filter string must be
     * escaped using the backslash (<code>\</code>) character. For example,
     * <code>"family_name = \"Reddy\""</code>.</p> <ul> <li> <p> <i>AttributeName</i>:
     * The name of the attribute to search for. You can only search for one attribute
     * at a time.</p> </li> <li> <p> <i>Filter-Type</i>: For an exact match, use
     * <code>=</code>, for example, "<code>given_name = \"Jon\"</code>". For a prefix
     * ("starts with") match, use <code>^=</code>, for example, "<code>given_name ^=
     * \"Jon\"</code>". </p> </li> <li> <p> <i>AttributeValue</i>: The attribute value
     * that must be matched for each user.</p> </li> </ul> <p>If the filter string is
     * empty, <code>ListUsers</code> returns all users in the user pool.</p> <p>You can
     * only search for the following standard attributes:</p> <ul> <li> <p>
     * <code>username</code> (case-sensitive)</p> </li> <li> <p> <code>email</code>
     * </p> </li> <li> <p> <code>phone_number</code> </p> </li> <li> <p>
     * <code>name</code> </p> </li> <li> <p> <code>given_name</code> </p> </li> <li>
     * <p> <code>family_name</code> </p> </li> <li> <p> <code>preferred_username</code>
     * </p> </li> <li> <p> <code>cognito:user_status</code> (called <b>Status</b> in
     * the Console) (case-insensitive)</p> </li> <li> <p> <code>status (called
     * <b>Enabled</b> in the Console) (case-sensitive)</code> </p> </li> <li> <p>
     * <code>sub</code> </p> </li> </ul> <p>Custom attributes aren't searchable.</p>
     *  <p>You can also list users with a client-side filter. The server-side
     * filter matches no more than one attribute. For an advanced search, use a
     * client-side filter with the <code>--query</code> parameter of the
     * <code>list-users</code> action in the CLI. When you use a client-side filter,
     * ListUsers returns a paginated list of zero or more users. You can receive
     * multiple pages in a row with zero results. Repeat the query with each pagination
     * token that is returned until you receive a null pagination token value, and then
     * review the combined result. </p> <p>For more information about server-side and
     * client-side filtering, see <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-usage-filter.html">FilteringCLI
     * output</a> in the <a
     * href="https://docs.aws.amazon.com/cli/latest/userguide/cli-usage-filter.html">Command
     * Line Interface User Guide</a>. </p>  <p>For more information, see <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/how-to-manage-user-accounts.html#cognito-user-pools-searching-for-users-using-listusers-api">Searching
     * for Users Using the ListUsers API</a> and <a
     * href="https://docs.aws.amazon.com/cognito/latest/developerguide/how-to-manage-user-accounts.html#cognito-user-pools-searching-for-users-listusers-api-examples">Examples
     * of Using the ListUsers API</a> in the <i>Amazon Cognito Developer Guide</i>.</p>
     */
    inline const Aws::String& GetFilter() const{ return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    inline void SetFilter(const Aws::String& value) { m_filterHasBeenSet = true; m_filter = value; }
    inline void SetFilter(Aws::String&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }
    inline void SetFilter(const char* value) { m_filterHasBeenSet = true; m_filter.assign(value); }
    inline ListUsersRequest& WithFilter(const Aws::String& value) { SetFilter(value); return *this;}
    inline ListUsersRequest& WithFilter(Aws::String&& value) { SetFilter(std::move(value)); return *this;}
    inline ListUsersRequest& WithFilter(const char* value) { SetFilter(value); return *this;}
    ///@}
  private:

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_attributesToGet;
    bool m_attributesToGetHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;

    Aws::String m_paginationToken;
    bool m_paginationTokenHasBeenSet = false;

    Aws::String m_filter;
    bool m_filterHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
