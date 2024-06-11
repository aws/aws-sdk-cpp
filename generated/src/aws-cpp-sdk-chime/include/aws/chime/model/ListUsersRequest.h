/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/ChimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/chime/model/UserType.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Chime
{
namespace Model
{

  /**
   */
  class ListUsersRequest : public ChimeRequest
  {
  public:
    AWS_CHIME_API ListUsersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListUsers"; }

    AWS_CHIME_API Aws::String SerializePayload() const override;

    AWS_CHIME_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The Amazon Chime account ID.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }
    inline ListUsersRequest& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}
    inline ListUsersRequest& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}
    inline ListUsersRequest& WithAccountId(const char* value) { SetAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Optional. The user email address used to filter results. Maximum 1.</p>
     */
    inline const Aws::String& GetUserEmail() const{ return m_userEmail; }
    inline bool UserEmailHasBeenSet() const { return m_userEmailHasBeenSet; }
    inline void SetUserEmail(const Aws::String& value) { m_userEmailHasBeenSet = true; m_userEmail = value; }
    inline void SetUserEmail(Aws::String&& value) { m_userEmailHasBeenSet = true; m_userEmail = std::move(value); }
    inline void SetUserEmail(const char* value) { m_userEmailHasBeenSet = true; m_userEmail.assign(value); }
    inline ListUsersRequest& WithUserEmail(const Aws::String& value) { SetUserEmail(value); return *this;}
    inline ListUsersRequest& WithUserEmail(Aws::String&& value) { SetUserEmail(std::move(value)); return *this;}
    inline ListUsersRequest& WithUserEmail(const char* value) { SetUserEmail(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The user type.</p>
     */
    inline const UserType& GetUserType() const{ return m_userType; }
    inline bool UserTypeHasBeenSet() const { return m_userTypeHasBeenSet; }
    inline void SetUserType(const UserType& value) { m_userTypeHasBeenSet = true; m_userType = value; }
    inline void SetUserType(UserType&& value) { m_userTypeHasBeenSet = true; m_userType = std::move(value); }
    inline ListUsersRequest& WithUserType(const UserType& value) { SetUserType(value); return *this;}
    inline ListUsersRequest& WithUserType(UserType&& value) { SetUserType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return in a single call. Defaults to
     * 100.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListUsersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListUsersRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListUsersRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListUsersRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_userEmail;
    bool m_userEmailHasBeenSet = false;

    UserType m_userType;
    bool m_userTypeHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
