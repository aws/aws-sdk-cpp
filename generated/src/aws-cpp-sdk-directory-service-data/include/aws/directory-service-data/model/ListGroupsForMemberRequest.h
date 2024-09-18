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
    AWS_DIRECTORYSERVICEDATA_API ListGroupsForMemberRequest();

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
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }
    inline ListGroupsForMemberRequest& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}
    inline ListGroupsForMemberRequest& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}
    inline ListGroupsForMemberRequest& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The maximum number of results to be returned per request. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
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
    inline const Aws::String& GetMemberRealm() const{ return m_memberRealm; }
    inline bool MemberRealmHasBeenSet() const { return m_memberRealmHasBeenSet; }
    inline void SetMemberRealm(const Aws::String& value) { m_memberRealmHasBeenSet = true; m_memberRealm = value; }
    inline void SetMemberRealm(Aws::String&& value) { m_memberRealmHasBeenSet = true; m_memberRealm = std::move(value); }
    inline void SetMemberRealm(const char* value) { m_memberRealmHasBeenSet = true; m_memberRealm.assign(value); }
    inline ListGroupsForMemberRequest& WithMemberRealm(const Aws::String& value) { SetMemberRealm(value); return *this;}
    inline ListGroupsForMemberRequest& WithMemberRealm(Aws::String&& value) { SetMemberRealm(std::move(value)); return *this;}
    inline ListGroupsForMemberRequest& WithMemberRealm(const char* value) { SetMemberRealm(value); return *this;}
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
    inline ListGroupsForMemberRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListGroupsForMemberRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListGroupsForMemberRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The domain name that's associated with the group. </p>  <p> This
     * parameter is optional, so you can return groups outside of your Managed
     * Microsoft AD domain. When no value is defined, only your Managed Microsoft AD
     * groups are returned. </p> <p> This value is case insensitive and defaults to
     * your Managed Microsoft AD domain. </p> 
     */
    inline const Aws::String& GetRealm() const{ return m_realm; }
    inline bool RealmHasBeenSet() const { return m_realmHasBeenSet; }
    inline void SetRealm(const Aws::String& value) { m_realmHasBeenSet = true; m_realm = value; }
    inline void SetRealm(Aws::String&& value) { m_realmHasBeenSet = true; m_realm = std::move(value); }
    inline void SetRealm(const char* value) { m_realmHasBeenSet = true; m_realm.assign(value); }
    inline ListGroupsForMemberRequest& WithRealm(const Aws::String& value) { SetRealm(value); return *this;}
    inline ListGroupsForMemberRequest& WithRealm(Aws::String&& value) { SetRealm(std::move(value)); return *this;}
    inline ListGroupsForMemberRequest& WithRealm(const char* value) { SetRealm(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The <code>SAMAccountName</code> of the user, group, or computer that's a
     * member of the group. </p>
     */
    inline const Aws::String& GetSAMAccountName() const{ return m_sAMAccountName; }
    inline bool SAMAccountNameHasBeenSet() const { return m_sAMAccountNameHasBeenSet; }
    inline void SetSAMAccountName(const Aws::String& value) { m_sAMAccountNameHasBeenSet = true; m_sAMAccountName = value; }
    inline void SetSAMAccountName(Aws::String&& value) { m_sAMAccountNameHasBeenSet = true; m_sAMAccountName = std::move(value); }
    inline void SetSAMAccountName(const char* value) { m_sAMAccountNameHasBeenSet = true; m_sAMAccountName.assign(value); }
    inline ListGroupsForMemberRequest& WithSAMAccountName(const Aws::String& value) { SetSAMAccountName(value); return *this;}
    inline ListGroupsForMemberRequest& WithSAMAccountName(Aws::String&& value) { SetSAMAccountName(std::move(value)); return *this;}
    inline ListGroupsForMemberRequest& WithSAMAccountName(const char* value) { SetSAMAccountName(value); return *this;}
    ///@}
  private:

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    int m_maxResults;
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
