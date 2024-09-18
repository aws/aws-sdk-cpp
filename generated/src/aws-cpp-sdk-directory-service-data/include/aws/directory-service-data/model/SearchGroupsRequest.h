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
  class SearchGroupsRequest : public DirectoryServiceDataRequest
  {
  public:
    AWS_DIRECTORYSERVICEDATA_API SearchGroupsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SearchGroups"; }

    AWS_DIRECTORYSERVICEDATA_API Aws::String SerializePayload() const override;

    AWS_DIRECTORYSERVICEDATA_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p> The identifier (ID) of the directory that's associated with the group. </p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }
    inline SearchGroupsRequest& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}
    inline SearchGroupsRequest& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}
    inline SearchGroupsRequest& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The maximum number of results to be returned per request. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline SearchGroupsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> An encoded paging token for paginated calls that can be passed back to
     * retrieve the next page. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline SearchGroupsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline SearchGroupsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline SearchGroupsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The domain name that's associated with the group. </p>  <p> This
     * parameter is optional, so you can return groups outside of your Managed
     * Microsoft AD domain. When no value is defined, only your Managed Microsoft AD
     * groups are returned. </p> <p> This value is case insensitive. </p> 
     */
    inline const Aws::String& GetRealm() const{ return m_realm; }
    inline bool RealmHasBeenSet() const { return m_realmHasBeenSet; }
    inline void SetRealm(const Aws::String& value) { m_realmHasBeenSet = true; m_realm = value; }
    inline void SetRealm(Aws::String&& value) { m_realmHasBeenSet = true; m_realm = std::move(value); }
    inline void SetRealm(const char* value) { m_realmHasBeenSet = true; m_realm.assign(value); }
    inline SearchGroupsRequest& WithRealm(const Aws::String& value) { SetRealm(value); return *this;}
    inline SearchGroupsRequest& WithRealm(Aws::String&& value) { SetRealm(std::move(value)); return *this;}
    inline SearchGroupsRequest& WithRealm(const char* value) { SetRealm(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> One or more data attributes that are used to search for a group. For a list
     * of supported attributes, see <a
     * href="https://docs.aws.amazon.com/directoryservice/latest/admin-guide/ad_data_attributes.html">Directory
     * Service Data Attributes</a>. </p>
     */
    inline const Aws::Vector<Aws::String>& GetSearchAttributes() const{ return m_searchAttributes; }
    inline bool SearchAttributesHasBeenSet() const { return m_searchAttributesHasBeenSet; }
    inline void SetSearchAttributes(const Aws::Vector<Aws::String>& value) { m_searchAttributesHasBeenSet = true; m_searchAttributes = value; }
    inline void SetSearchAttributes(Aws::Vector<Aws::String>&& value) { m_searchAttributesHasBeenSet = true; m_searchAttributes = std::move(value); }
    inline SearchGroupsRequest& WithSearchAttributes(const Aws::Vector<Aws::String>& value) { SetSearchAttributes(value); return *this;}
    inline SearchGroupsRequest& WithSearchAttributes(Aws::Vector<Aws::String>&& value) { SetSearchAttributes(std::move(value)); return *this;}
    inline SearchGroupsRequest& AddSearchAttributes(const Aws::String& value) { m_searchAttributesHasBeenSet = true; m_searchAttributes.push_back(value); return *this; }
    inline SearchGroupsRequest& AddSearchAttributes(Aws::String&& value) { m_searchAttributesHasBeenSet = true; m_searchAttributes.push_back(std::move(value)); return *this; }
    inline SearchGroupsRequest& AddSearchAttributes(const char* value) { m_searchAttributesHasBeenSet = true; m_searchAttributes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> The attribute value that you want to search for. </p>  <p> Wildcard
     * <code>(*)</code> searches aren't supported. For a list of supported attributes,
     * see <a
     * href="https://docs.aws.amazon.com/directoryservice/latest/admin-guide/ad_data_attributes.html">Directory
     * Service Data Attributes</a>. </p> 
     */
    inline const Aws::String& GetSearchString() const{ return m_searchString; }
    inline bool SearchStringHasBeenSet() const { return m_searchStringHasBeenSet; }
    inline void SetSearchString(const Aws::String& value) { m_searchStringHasBeenSet = true; m_searchString = value; }
    inline void SetSearchString(Aws::String&& value) { m_searchStringHasBeenSet = true; m_searchString = std::move(value); }
    inline void SetSearchString(const char* value) { m_searchStringHasBeenSet = true; m_searchString.assign(value); }
    inline SearchGroupsRequest& WithSearchString(const Aws::String& value) { SetSearchString(value); return *this;}
    inline SearchGroupsRequest& WithSearchString(Aws::String&& value) { SetSearchString(std::move(value)); return *this;}
    inline SearchGroupsRequest& WithSearchString(const char* value) { SetSearchString(value); return *this;}
    ///@}
  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    int m_maxResults;
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
