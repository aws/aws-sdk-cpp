/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/awstransfer/Transfer_EXPORTS.h>
#include <aws/awstransfer/TransferRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/awstransfer/model/ProfileType.h>
#include <utility>

namespace Aws
{
namespace Transfer
{
namespace Model
{

  /**
   */
  class ListProfilesRequest : public TransferRequest
  {
  public:
    AWS_TRANSFER_API ListProfilesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListProfiles"; }

    AWS_TRANSFER_API Aws::String SerializePayload() const override;

    AWS_TRANSFER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The maximum number of profiles to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of profiles to return.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of profiles to return.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of profiles to return.</p>
     */
    inline ListProfilesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>When there are additional results that were not returned, a
     * <code>NextToken</code> parameter is returned. You can use that value for a
     * subsequent call to <code>ListProfiles</code> to continue listing results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>When there are additional results that were not returned, a
     * <code>NextToken</code> parameter is returned. You can use that value for a
     * subsequent call to <code>ListProfiles</code> to continue listing results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>When there are additional results that were not returned, a
     * <code>NextToken</code> parameter is returned. You can use that value for a
     * subsequent call to <code>ListProfiles</code> to continue listing results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>When there are additional results that were not returned, a
     * <code>NextToken</code> parameter is returned. You can use that value for a
     * subsequent call to <code>ListProfiles</code> to continue listing results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>When there are additional results that were not returned, a
     * <code>NextToken</code> parameter is returned. You can use that value for a
     * subsequent call to <code>ListProfiles</code> to continue listing results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>When there are additional results that were not returned, a
     * <code>NextToken</code> parameter is returned. You can use that value for a
     * subsequent call to <code>ListProfiles</code> to continue listing results.</p>
     */
    inline ListProfilesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>When there are additional results that were not returned, a
     * <code>NextToken</code> parameter is returned. You can use that value for a
     * subsequent call to <code>ListProfiles</code> to continue listing results.</p>
     */
    inline ListProfilesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>When there are additional results that were not returned, a
     * <code>NextToken</code> parameter is returned. You can use that value for a
     * subsequent call to <code>ListProfiles</code> to continue listing results.</p>
     */
    inline ListProfilesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>Indicates whether to list only <code>LOCAL</code> type profiles or only
     * <code>PARTNER</code> type profiles. If not supplied in the request, the command
     * lists all types of profiles.</p>
     */
    inline const ProfileType& GetProfileType() const{ return m_profileType; }

    /**
     * <p>Indicates whether to list only <code>LOCAL</code> type profiles or only
     * <code>PARTNER</code> type profiles. If not supplied in the request, the command
     * lists all types of profiles.</p>
     */
    inline bool ProfileTypeHasBeenSet() const { return m_profileTypeHasBeenSet; }

    /**
     * <p>Indicates whether to list only <code>LOCAL</code> type profiles or only
     * <code>PARTNER</code> type profiles. If not supplied in the request, the command
     * lists all types of profiles.</p>
     */
    inline void SetProfileType(const ProfileType& value) { m_profileTypeHasBeenSet = true; m_profileType = value; }

    /**
     * <p>Indicates whether to list only <code>LOCAL</code> type profiles or only
     * <code>PARTNER</code> type profiles. If not supplied in the request, the command
     * lists all types of profiles.</p>
     */
    inline void SetProfileType(ProfileType&& value) { m_profileTypeHasBeenSet = true; m_profileType = std::move(value); }

    /**
     * <p>Indicates whether to list only <code>LOCAL</code> type profiles or only
     * <code>PARTNER</code> type profiles. If not supplied in the request, the command
     * lists all types of profiles.</p>
     */
    inline ListProfilesRequest& WithProfileType(const ProfileType& value) { SetProfileType(value); return *this;}

    /**
     * <p>Indicates whether to list only <code>LOCAL</code> type profiles or only
     * <code>PARTNER</code> type profiles. If not supplied in the request, the command
     * lists all types of profiles.</p>
     */
    inline ListProfilesRequest& WithProfileType(ProfileType&& value) { SetProfileType(std::move(value)); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ProfileType m_profileType;
    bool m_profileTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Transfer
} // namespace Aws
