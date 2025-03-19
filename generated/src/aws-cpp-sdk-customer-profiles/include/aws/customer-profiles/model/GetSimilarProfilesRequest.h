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
    AWS_CUSTOMERPROFILES_API GetSimilarProfilesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetSimilarProfiles"; }

    AWS_CUSTOMERPROFILES_API Aws::String SerializePayload() const override;

    AWS_CUSTOMERPROFILES_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The pagination token from the previous <code>GetSimilarProfiles</code> API
     * call.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    GetSimilarProfilesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of objects returned per page.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline GetSimilarProfilesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique name of the domain.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    GetSimilarProfilesRequest& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specify the type of matching to get similar profiles for.</p>
     */
    inline MatchType GetMatchType() const { return m_matchType; }
    inline bool MatchTypeHasBeenSet() const { return m_matchTypeHasBeenSet; }
    inline void SetMatchType(MatchType value) { m_matchTypeHasBeenSet = true; m_matchType = value; }
    inline GetSimilarProfilesRequest& WithMatchType(MatchType value) { SetMatchType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The string indicating the search key to be used.</p>
     */
    inline const Aws::String& GetSearchKey() const { return m_searchKey; }
    inline bool SearchKeyHasBeenSet() const { return m_searchKeyHasBeenSet; }
    template<typename SearchKeyT = Aws::String>
    void SetSearchKey(SearchKeyT&& value) { m_searchKeyHasBeenSet = true; m_searchKey = std::forward<SearchKeyT>(value); }
    template<typename SearchKeyT = Aws::String>
    GetSimilarProfilesRequest& WithSearchKey(SearchKeyT&& value) { SetSearchKey(std::forward<SearchKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The string based on <code>SearchKey</code> to be searched for similar
     * profiles.</p>
     */
    inline const Aws::String& GetSearchValue() const { return m_searchValue; }
    inline bool SearchValueHasBeenSet() const { return m_searchValueHasBeenSet; }
    template<typename SearchValueT = Aws::String>
    void SetSearchValue(SearchValueT&& value) { m_searchValueHasBeenSet = true; m_searchValue = std::forward<SearchValueT>(value); }
    template<typename SearchValueT = Aws::String>
    GetSimilarProfilesRequest& WithSearchValue(SearchValueT&& value) { SetSearchValue(std::forward<SearchValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    MatchType m_matchType{MatchType::NOT_SET};
    bool m_matchTypeHasBeenSet = false;

    Aws::String m_searchKey;
    bool m_searchKeyHasBeenSet = false;

    Aws::String m_searchValue;
    bool m_searchValueHasBeenSet = false;
  };

} // namespace Model
} // namespace CustomerProfiles
} // namespace Aws
