/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directory-service-data/DirectoryServiceData_EXPORTS.h>
#include <aws/directory-service-data/DirectoryServiceDataRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class ListGroupsForMemberRequest : public DirectoryServiceDataRequest
  {
  public:
    AWS_DIRECTORYSERVICEDATA_API ListGroupsForMemberRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListGroupsForMember"; }

    AWS_DIRECTORYSERVICEDATA_API Aws::String SerializePayload() const override;

    AWS_DIRECTORYSERVICEDATA_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p> The identifier (ID) of the directory that's associated with the member. </p>
     */
    inline const Aws::String& GetDirectoryId() const { return m_directoryId; }
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }
    template<typename DirectoryIdT = Aws::String>
    void SetDirectoryId(DirectoryIdT&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::forward<DirectoryIdT>(value); }
    template<typename DirectoryIdT = Aws::String>
    ListGroupsForMemberRequest& WithDirectoryId(DirectoryIdT&& value) { SetDirectoryId(std::forward<DirectoryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The maximum number of results to be returned per request. </p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListGroupsForMemberRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The domain name that's associated with the group member. </p>  <p>
     * This parameter is optional, so you can limit your results to the group members
     * in a specific domain. </p> <p> This parameter is case insensitive and defaults
     * to <code>Realm</code> </p> 
     */
    inline const Aws::String& GetMemberRealm() const { return m_memberRealm; }
    inline bool MemberRealmHasBeenSet() const { return m_memberRealmHasBeenSet; }
    template<typename MemberRealmT = Aws::String>
    void SetMemberRealm(MemberRealmT&& value) { m_memberRealmHasBeenSet = true; m_memberRealm = std::forward<MemberRealmT>(value); }
    template<typename MemberRealmT = Aws::String>
    ListGroupsForMemberRequest& WithMemberRealm(MemberRealmT&& value) { SetMemberRealm(std::forward<MemberRealmT>(value)); return *this;}
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
    ListGroupsForMemberRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The domain name that's associated with the group. </p>  <p> This
     * parameter is optional, so you can return groups outside of your Managed
     * Microsoft AD domain. When no value is defined, only your Managed Microsoft AD
     * groups are returned. </p> <p> This value is case insensitive and defaults to
     * your Managed Microsoft AD domain. </p> 
     */
    inline const Aws::String& GetRealm() const { return m_realm; }
    inline bool RealmHasBeenSet() const { return m_realmHasBeenSet; }
    template<typename RealmT = Aws::String>
    void SetRealm(RealmT&& value) { m_realmHasBeenSet = true; m_realm = std::forward<RealmT>(value); }
    template<typename RealmT = Aws::String>
    ListGroupsForMemberRequest& WithRealm(RealmT&& value) { SetRealm(std::forward<RealmT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The <code>SAMAccountName</code> of the user, group, or computer that's a
     * member of the group. </p>
     */
    inline const Aws::String& GetSAMAccountName() const { return m_sAMAccountName; }
    inline bool SAMAccountNameHasBeenSet() const { return m_sAMAccountNameHasBeenSet; }
    template<typename SAMAccountNameT = Aws::String>
    void SetSAMAccountName(SAMAccountNameT&& value) { m_sAMAccountNameHasBeenSet = true; m_sAMAccountName = std::forward<SAMAccountNameT>(value); }
    template<typename SAMAccountNameT = Aws::String>
    ListGroupsForMemberRequest& WithSAMAccountName(SAMAccountNameT&& value) { SetSAMAccountName(std::forward<SAMAccountNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_memberRealm;
    bool m_memberRealmHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_realm;
    bool m_realmHasBeenSet = false;

    Aws::String m_sAMAccountName;
    bool m_sAMAccountNameHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryServiceData
} // namespace Aws
