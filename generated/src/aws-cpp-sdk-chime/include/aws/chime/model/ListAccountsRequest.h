/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/chime/Chime_EXPORTS.h>
#include <aws/chime/ChimeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class ListAccountsRequest : public ChimeRequest
  {
  public:
    AWS_CHIME_API ListAccountsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAccounts"; }

    AWS_CHIME_API Aws::String SerializePayload() const override;

    AWS_CHIME_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>Amazon Chime account name prefix with which to filter results.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline ListAccountsRequest& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline ListAccountsRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline ListAccountsRequest& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>User email address with which to filter results.</p>
     */
    inline const Aws::String& GetUserEmail() const{ return m_userEmail; }
    inline bool UserEmailHasBeenSet() const { return m_userEmailHasBeenSet; }
    inline void SetUserEmail(const Aws::String& value) { m_userEmailHasBeenSet = true; m_userEmail = value; }
    inline void SetUserEmail(Aws::String&& value) { m_userEmailHasBeenSet = true; m_userEmail = std::move(value); }
    inline void SetUserEmail(const char* value) { m_userEmailHasBeenSet = true; m_userEmail.assign(value); }
    inline ListAccountsRequest& WithUserEmail(const Aws::String& value) { SetUserEmail(value); return *this;}
    inline ListAccountsRequest& WithUserEmail(Aws::String&& value) { SetUserEmail(std::move(value)); return *this;}
    inline ListAccountsRequest& WithUserEmail(const char* value) { SetUserEmail(value); return *this;}
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
    inline ListAccountsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListAccountsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListAccountsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return in a single call. Defaults to
     * 100.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListAccountsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_userEmail;
    bool m_userEmailHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
