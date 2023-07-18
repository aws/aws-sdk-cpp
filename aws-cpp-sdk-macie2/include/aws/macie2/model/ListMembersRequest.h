/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/Macie2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Macie2
{
namespace Model
{

  /**
   */
  class AWS_MACIE2_API ListMembersRequest : public Macie2Request
  {
  public:
    ListMembersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListMembers"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The maximum number of items to include in each page of a paginated
     * response.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of items to include in each page of a paginated
     * response.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of items to include in each page of a paginated
     * response.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of items to include in each page of a paginated
     * response.</p>
     */
    inline ListMembersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The nextToken string that specifies which page of results to return in a
     * paginated response.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The nextToken string that specifies which page of results to return in a
     * paginated response.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The nextToken string that specifies which page of results to return in a
     * paginated response.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The nextToken string that specifies which page of results to return in a
     * paginated response.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The nextToken string that specifies which page of results to return in a
     * paginated response.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The nextToken string that specifies which page of results to return in a
     * paginated response.</p>
     */
    inline ListMembersRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The nextToken string that specifies which page of results to return in a
     * paginated response.</p>
     */
    inline ListMembersRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The nextToken string that specifies which page of results to return in a
     * paginated response.</p>
     */
    inline ListMembersRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Specifies which accounts to include in the response, based on the status of
     * an account's relationship with the administrator account. By default, the
     * response includes only current member accounts. To include all accounts, set
     * this value to false.</p>
     */
    inline const Aws::String& GetOnlyAssociated() const{ return m_onlyAssociated; }

    /**
     * <p>Specifies which accounts to include in the response, based on the status of
     * an account's relationship with the administrator account. By default, the
     * response includes only current member accounts. To include all accounts, set
     * this value to false.</p>
     */
    inline bool OnlyAssociatedHasBeenSet() const { return m_onlyAssociatedHasBeenSet; }

    /**
     * <p>Specifies which accounts to include in the response, based on the status of
     * an account's relationship with the administrator account. By default, the
     * response includes only current member accounts. To include all accounts, set
     * this value to false.</p>
     */
    inline void SetOnlyAssociated(const Aws::String& value) { m_onlyAssociatedHasBeenSet = true; m_onlyAssociated = value; }

    /**
     * <p>Specifies which accounts to include in the response, based on the status of
     * an account's relationship with the administrator account. By default, the
     * response includes only current member accounts. To include all accounts, set
     * this value to false.</p>
     */
    inline void SetOnlyAssociated(Aws::String&& value) { m_onlyAssociatedHasBeenSet = true; m_onlyAssociated = std::move(value); }

    /**
     * <p>Specifies which accounts to include in the response, based on the status of
     * an account's relationship with the administrator account. By default, the
     * response includes only current member accounts. To include all accounts, set
     * this value to false.</p>
     */
    inline void SetOnlyAssociated(const char* value) { m_onlyAssociatedHasBeenSet = true; m_onlyAssociated.assign(value); }

    /**
     * <p>Specifies which accounts to include in the response, based on the status of
     * an account's relationship with the administrator account. By default, the
     * response includes only current member accounts. To include all accounts, set
     * this value to false.</p>
     */
    inline ListMembersRequest& WithOnlyAssociated(const Aws::String& value) { SetOnlyAssociated(value); return *this;}

    /**
     * <p>Specifies which accounts to include in the response, based on the status of
     * an account's relationship with the administrator account. By default, the
     * response includes only current member accounts. To include all accounts, set
     * this value to false.</p>
     */
    inline ListMembersRequest& WithOnlyAssociated(Aws::String&& value) { SetOnlyAssociated(std::move(value)); return *this;}

    /**
     * <p>Specifies which accounts to include in the response, based on the status of
     * an account's relationship with the administrator account. By default, the
     * response includes only current member accounts. To include all accounts, set
     * this value to false.</p>
     */
    inline ListMembersRequest& WithOnlyAssociated(const char* value) { SetOnlyAssociated(value); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    Aws::String m_onlyAssociated;
    bool m_onlyAssociatedHasBeenSet;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
