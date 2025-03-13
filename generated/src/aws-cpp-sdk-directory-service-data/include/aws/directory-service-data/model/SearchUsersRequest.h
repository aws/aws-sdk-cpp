/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directory-service-data/DirectoryServiceData_EXPORTS.h>
#include <aws/directory-service-data/DirectoryServiceDataRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace DirectoryServiceData
{
namespace Model
{

  /**
   */
  class SearchUsersRequest : public DirectoryServiceDataRequest
  {
  public:
    AWS_DIRECTORYSERVICEDATA_API SearchUsersRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SearchUsers"; }

    AWS_DIRECTORYSERVICEDATA_API Aws::String SerializePayload() const override;

    AWS_DIRECTORYSERVICEDATA_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p> The identifier (ID) of the directory that's associated with the user. </p>
     */
    inline const Aws::String& GetDirectoryId() const { return m_directoryId; }
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }
    template<typename DirectoryIdT = Aws::String>
    void SetDirectoryId(DirectoryIdT&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::forward<DirectoryIdT>(value); }
    template<typename DirectoryIdT = Aws::String>
    SearchUsersRequest& WithDirectoryId(DirectoryIdT&& value) { SetDirectoryId(std::forward<DirectoryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The maximum number of results to be returned per request. </p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline SearchUsersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> An encoded paging token for paginated calls that can be passed back to
     * retrieve the next page. </p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    SearchUsersRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The domain name that's associated with the user. </p>  <p> This
     * parameter is optional, so you can return users outside of your Managed Microsoft
     * AD domain. When no value is defined, only your Managed Microsoft AD users are
     * returned. </p> <p> This value is case insensitive. </p> 
     */
    inline const Aws::String& GetRealm() const { return m_realm; }
    inline bool RealmHasBeenSet() const { return m_realmHasBeenSet; }
    template<typename RealmT = Aws::String>
    void SetRealm(RealmT&& value) { m_realmHasBeenSet = true; m_realm = std::forward<RealmT>(value); }
    template<typename RealmT = Aws::String>
    SearchUsersRequest& WithRealm(RealmT&& value) { SetRealm(std::forward<RealmT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> One or more data attributes that are used to search for a user. For a list
     * of supported attributes, see <a
     * href="https://docs.aws.amazon.com/directoryservice/latest/admin-guide/ad_data_attributes.html">Directory
     * Service Data Attributes</a>. </p>
     */
    inline const Aws::Vector<Aws::String>& GetSearchAttributes() const { return m_searchAttributes; }
    inline bool SearchAttributesHasBeenSet() const { return m_searchAttributesHasBeenSet; }
    template<typename SearchAttributesT = Aws::Vector<Aws::String>>
    void SetSearchAttributes(SearchAttributesT&& value) { m_searchAttributesHasBeenSet = true; m_searchAttributes = std::forward<SearchAttributesT>(value); }
    template<typename SearchAttributesT = Aws::Vector<Aws::String>>
    SearchUsersRequest& WithSearchAttributes(SearchAttributesT&& value) { SetSearchAttributes(std::forward<SearchAttributesT>(value)); return *this;}
    template<typename SearchAttributesT = Aws::String>
    SearchUsersRequest& AddSearchAttributes(SearchAttributesT&& value) { m_searchAttributesHasBeenSet = true; m_searchAttributes.emplace_back(std::forward<SearchAttributesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The attribute value that you want to search for. </p>  <p> Wildcard
     * <code>(*)</code> searches aren't supported. For a list of supported attributes,
     * see <a
     * href="https://docs.aws.amazon.com/directoryservice/latest/admin-guide/ad_data_attributes.html">Directory
     * Service Data Attributes</a>. </p> 
     */
    inline const Aws::String& GetSearchString() const { return m_searchString; }
    inline bool SearchStringHasBeenSet() const { return m_searchStringHasBeenSet; }
    template<typename SearchStringT = Aws::String>
    void SetSearchString(SearchStringT&& value) { m_searchStringHasBeenSet = true; m_searchString = std::forward<SearchStringT>(value); }
    template<typename SearchStringT = Aws::String>
    SearchUsersRequest& WithSearchString(SearchStringT&& value) { SetSearchString(std::forward<SearchStringT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_realm;
    bool m_realmHasBeenSet = false;

    Aws::Vector<Aws::String> m_searchAttributes;
    bool m_searchAttributesHasBeenSet = false;

    Aws::String m_searchString;
    bool m_searchStringHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryServiceData
} // namespace Aws
