/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/customer-profiles/CustomerProfiles_EXPORTS.h>
#include <aws/customer-profiles/CustomerProfilesRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/customer-profiles/model/MatchType.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace CustomerProfiles
{
namespace Model
{

  /**
   */
  class GetSimilarProfilesRequest : public CustomerProfilesRequest
  {
  public:
    AWS_CUSTOMERPROFILES_API GetSimilarProfilesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSimilarProfiles"; }

    AWS_CUSTOMERPROFILES_API Aws::String SerializePayload() const override;

    AWS_CUSTOMERPROFILES_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The pagination token from the previous <code>GetSimilarProfiles</code> API
     * call.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token from the previous <code>GetSimilarProfiles</code> API
     * call.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The pagination token from the previous <code>GetSimilarProfiles</code> API
     * call.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The pagination token from the previous <code>GetSimilarProfiles</code> API
     * call.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The pagination token from the previous <code>GetSimilarProfiles</code> API
     * call.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The pagination token from the previous <code>GetSimilarProfiles</code> API
     * call.</p>
     */
    inline GetSimilarProfilesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token from the previous <code>GetSimilarProfiles</code> API
     * call.</p>
     */
    inline GetSimilarProfilesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token from the previous <code>GetSimilarProfiles</code> API
     * call.</p>
     */
    inline GetSimilarProfilesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum number of objects returned per page.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of objects returned per page.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of objects returned per page.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of objects returned per page.</p>
     */
    inline GetSimilarProfilesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The unique name of the domain.</p>
     */
    inline const Aws::String& GetDomainName() const{ return m_domainName; }

    /**
     * <p>The unique name of the domain.</p>
     */
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }

    /**
     * <p>The unique name of the domain.</p>
     */
    inline void SetDomainName(const Aws::String& value) { m_domainNameHasBeenSet = true; m_domainName = value; }

    /**
     * <p>The unique name of the domain.</p>
     */
    inline void SetDomainName(Aws::String&& value) { m_domainNameHasBeenSet = true; m_domainName = std::move(value); }

    /**
     * <p>The unique name of the domain.</p>
     */
    inline void SetDomainName(const char* value) { m_domainNameHasBeenSet = true; m_domainName.assign(value); }

    /**
     * <p>The unique name of the domain.</p>
     */
    inline GetSimilarProfilesRequest& WithDomainName(const Aws::String& value) { SetDomainName(value); return *this;}

    /**
     * <p>The unique name of the domain.</p>
     */
    inline GetSimilarProfilesRequest& WithDomainName(Aws::String&& value) { SetDomainName(std::move(value)); return *this;}

    /**
     * <p>The unique name of the domain.</p>
     */
    inline GetSimilarProfilesRequest& WithDomainName(const char* value) { SetDomainName(value); return *this;}


    /**
     * <p>Specify the type of matching to get similar profiles for.</p>
     */
    inline const MatchType& GetMatchType() const{ return m_matchType; }

    /**
     * <p>Specify the type of matching to get similar profiles for.</p>
     */
    inline bool MatchTypeHasBeenSet() const { return m_matchTypeHasBeenSet; }

    /**
     * <p>Specify the type of matching to get similar profiles for.</p>
     */
    inline void SetMatchType(const MatchType& value) { m_matchTypeHasBeenSet = true; m_matchType = value; }

    /**
     * <p>Specify the type of matching to get similar profiles for.</p>
     */
    inline void SetMatchType(MatchType&& value) { m_matchTypeHasBeenSet = true; m_matchType = std::move(value); }

    /**
     * <p>Specify the type of matching to get similar profiles for.</p>
     */
    inline GetSimilarProfilesRequest& WithMatchType(const MatchType& value) { SetMatchType(value); return *this;}

    /**
     * <p>Specify the type of matching to get similar profiles for.</p>
     */
    inline GetSimilarProfilesRequest& WithMatchType(MatchType&& value) { SetMatchType(std::move(value)); return *this;}


    /**
     * <p>The string indicating the search key to be used.</p>
     */
    inline const Aws::String& GetSearchKey() const{ return m_searchKey; }

    /**
     * <p>The string indicating the search key to be used.</p>
     */
    inline bool SearchKeyHasBeenSet() const { return m_searchKeyHasBeenSet; }

    /**
     * <p>The string indicating the search key to be used.</p>
     */
    inline void SetSearchKey(const Aws::String& value) { m_searchKeyHasBeenSet = true; m_searchKey = value; }

    /**
     * <p>The string indicating the search key to be used.</p>
     */
    inline void SetSearchKey(Aws::String&& value) { m_searchKeyHasBeenSet = true; m_searchKey = std::move(value); }

    /**
     * <p>The string indicating the search key to be used.</p>
     */
    inline void SetSearchKey(const char* value) { m_searchKeyHasBeenSet = true; m_searchKey.assign(value); }

    /**
     * <p>The string indicating the search key to be used.</p>
     */
    inline GetSimilarProfilesRequest& WithSearchKey(const Aws::String& value) { SetSearchKey(value); return *this;}

    /**
     * <p>The string indicating the search key to be used.</p>
     */
    inline GetSimilarProfilesRequest& WithSearchKey(Aws::String&& value) { SetSearchKey(std::move(value)); return *this;}

    /**
     * <p>The string indicating the search key to be used.</p>
     */
    inline GetSimilarProfilesRequest& WithSearchKey(const char* value) { SetSearchKey(value); return *this;}


    /**
     * <p>The string based on <code>SearchKey</code> to be searched for similar
     * profiles.</p>
     */
    inline const Aws::String& GetSearchValue() const{ return m_searchValue; }

    /**
     * <p>The string based on <code>SearchKey</code> to be searched for similar
     * profiles.</p>
     */
    inline bool SearchValueHasBeenSet() const { return m_searchValueHasBeenSet; }

    /**
     * <p>The string based on <code>SearchKey</code> to be searched for similar
     * profiles.</p>
     */
    inline void SetSearchValue(const Aws::String& value) { m_searchValueHasBeenSet = true; m_searchValue = value; }

    /**
     * <p>The string based on <code>SearchKey</code> to be searched for similar
     * profiles.</p>
     */
    inline void SetSearchValue(Aws::String&& value) { m_searchValueHasBeenSet = true; m_searchValue = std::move(value); }

    /**
     * <p>The string based on <code>SearchKey</code> to be searched for similar
     * profiles.</p>
     */
    inline void SetSearchValue(const char* value) { m_searchValueHasBeenSet = true; m_searchValue.assign(value); }

    /**
     * <p>The string based on <code>SearchKey</code> to be searched for similar
     * profiles.</p>
     */
    inline GetSimilarProfilesRequest& WithSearchValue(const Aws::String& value) { SetSearchValue(value); return *this;}

    /**
     * <p>The string based on <code>SearchKey</code> to be searched for similar
     * profiles.</p>
     */
    inline GetSimilarProfilesRequest& WithSearchValue(Aws::String&& value) { SetSearchValue(std::move(value)); return *this;}

    /**
     * <p>The string based on <code>SearchKey</code> to be searched for similar
     * profiles.</p>
     */
    inline GetSimilarProfilesRequest& WithSearchValue(const char* value) { SetSearchValue(value); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    MatchType m_matchType;
    bool m_matchTypeHasBeenSet = false;

    Aws::String m_searchKey;
    bool m_searchKeyHasBeenSet = false;

    Aws::String m_searchValue;
    bool m_searchValueHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
