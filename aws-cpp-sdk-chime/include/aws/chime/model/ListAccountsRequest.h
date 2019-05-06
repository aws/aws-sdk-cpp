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
  class AWS_CHIME_API ListAccountsRequest : public ChimeRequest
  {
  public:
    ListAccountsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAccounts"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>Amazon Chime account name prefix with which to filter results.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>Amazon Chime account name prefix with which to filter results.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>Amazon Chime account name prefix with which to filter results.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>Amazon Chime account name prefix with which to filter results.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>Amazon Chime account name prefix with which to filter results.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>Amazon Chime account name prefix with which to filter results.</p>
     */
    inline ListAccountsRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>Amazon Chime account name prefix with which to filter results.</p>
     */
    inline ListAccountsRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>Amazon Chime account name prefix with which to filter results.</p>
     */
    inline ListAccountsRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>User email address with which to filter results.</p>
     */
    inline const Aws::String& GetUserEmail() const{ return m_userEmail; }

    /**
     * <p>User email address with which to filter results.</p>
     */
    inline bool UserEmailHasBeenSet() const { return m_userEmailHasBeenSet; }

    /**
     * <p>User email address with which to filter results.</p>
     */
    inline void SetUserEmail(const Aws::String& value) { m_userEmailHasBeenSet = true; m_userEmail = value; }

    /**
     * <p>User email address with which to filter results.</p>
     */
    inline void SetUserEmail(Aws::String&& value) { m_userEmailHasBeenSet = true; m_userEmail = std::move(value); }

    /**
     * <p>User email address with which to filter results.</p>
     */
    inline void SetUserEmail(const char* value) { m_userEmailHasBeenSet = true; m_userEmail.assign(value); }

    /**
     * <p>User email address with which to filter results.</p>
     */
    inline ListAccountsRequest& WithUserEmail(const Aws::String& value) { SetUserEmail(value); return *this;}

    /**
     * <p>User email address with which to filter results.</p>
     */
    inline ListAccountsRequest& WithUserEmail(Aws::String&& value) { SetUserEmail(std::move(value)); return *this;}

    /**
     * <p>User email address with which to filter results.</p>
     */
    inline ListAccountsRequest& WithUserEmail(const char* value) { SetUserEmail(value); return *this;}


    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline ListAccountsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline ListAccountsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token to use to retrieve the next page of results.</p>
     */
    inline ListAccountsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of results to return in a single call. Defaults to
     * 100.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return in a single call. Defaults to
     * 100.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return in a single call. Defaults to
     * 100.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return in a single call. Defaults to
     * 100.</p>
     */
    inline ListAccountsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_userEmail;
    bool m_userEmailHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;
  };

} // namespace Model
} // namespace Chime
} // namespace Aws
