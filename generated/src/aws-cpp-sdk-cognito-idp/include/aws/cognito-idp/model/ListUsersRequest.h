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
    AWS_COGNITOIDENTITYPROVIDER_API ListUsersRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListUsers"; }

    AWS_COGNITOIDENTITYPROVIDER_API Aws::String SerializePayload() const override;

    AWS_COGNITOIDENTITYPROVIDER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The ID of the user pool where you want to display or search for users.</p>
     */
    inline const Aws::String& GetUserPoolId() const { return m_userPoolId; }
    inline bool UserPoolIdHasBeenSet() const { return m_userPoolIdHasBeenSet; }
    template<typename UserPoolIdT = Aws::String>
    void SetUserPoolId(UserPoolIdT&& value) { m_userPoolIdHasBeenSet = true; m_userPoolId = std::forward<UserPoolIdT>(value); }
    template<typename UserPoolIdT = Aws::String>
    ListUsersRequest& WithUserPoolId(UserPoolIdT&& value) { SetUserPoolId(std::forward<UserPoolIdT>(value)); return *this;}
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
    inline const Aws::Vector<Aws::String>& GetAttributesToGet() const { return m_attributesToGet; }
    inline bool AttributesToGetHasBeenSet() const { return m_attributesToGetHasBeenSet; }
    template<typename AttributesToGetT = Aws::Vector<Aws::String>>
    void SetAttributesToGet(AttributesToGetT&& value) { m_attributesToGetHasBeenSet = true; m_attributesToGet = std::forward<AttributesToGetT>(value); }
    template<typename AttributesToGetT = Aws::Vector<Aws::String>>
    ListUsersRequest& WithAttributesToGet(AttributesToGetT&& value) { SetAttributesToGet(std::forward<AttributesToGetT>(value)); return *this;}
    template<typename AttributesToGetT = Aws::String>
    ListUsersRequest& AddAttributesToGet(AttributesToGetT&& value) { m_attributesToGetHasBeenSet = true; m_attributesToGet.emplace_back(std::forward<AttributesToGetT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of users that you want Amazon Cognito to return in the
     * response.</p>
     */
    inline int GetLimit() const { return m_limit; }
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
    inline const Aws::String& GetPaginationToken() const { return m_paginationToken; }
    inline bool PaginationTokenHasBeenSet() const { return m_paginationTokenHasBeenSet; }
    template<typename PaginationTokenT = Aws::String>
    void SetPaginationToken(PaginationTokenT&& value) { m_paginationTokenHasBeenSet = true; m_paginationToken = std::forward<PaginationTokenT>(value); }
    template<typename PaginationTokenT = Aws::String>
    ListUsersRequest& WithPaginationToken(PaginationTokenT&& value) { SetPaginationToken(std::forward<PaginationTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A filter string of the form <code>"AttributeName Filter-Type
     * "AttributeValue"</code>. Quotation marks within the filter string must be
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
    inline const Aws::String& GetFilter() const { return m_filter; }
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }
    template<typename FilterT = Aws::String>
    void SetFilter(FilterT&& value) { m_filterHasBeenSet = true; m_filter = std::forward<FilterT>(value); }
    template<typename FilterT = Aws::String>
    ListUsersRequest& WithFilter(FilterT&& value) { SetFilter(std::forward<FilterT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_userPoolId;
    bool m_userPoolIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_attributesToGet;
    bool m_attributesToGetHasBeenSet = false;

    int m_limit{0};
    bool m_limitHasBeenSet = false;

    Aws::String m_paginationToken;
    bool m_paginationTokenHasBeenSet = false;

    Aws::String m_filter;
    bool m_filterHasBeenSet = false;
  };

} // namespace Model
} // namespace CognitoIdentityProvider
} // namespace Aws
