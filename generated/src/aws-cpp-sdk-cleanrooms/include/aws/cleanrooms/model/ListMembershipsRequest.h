/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/CleanRoomsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanrooms/model/MembershipStatus.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace CleanRooms
{
namespace Model
{

  /**
   */
  class ListMembershipsRequest : public CleanRoomsRequest
  {
  public:
    AWS_CLEANROOMS_API ListMembershipsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListMemberships"; }

    AWS_CLEANROOMS_API Aws::String SerializePayload() const override;

    AWS_CLEANROOMS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline ListMembershipsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline ListMembershipsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline ListMembershipsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum size of the results that is returned per call.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum size of the results that is returned per call.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum size of the results that is returned per call.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum size of the results that is returned per call.</p>
     */
    inline ListMembershipsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>A filter which will return only memberships in the specified status.</p>
     */
    inline const MembershipStatus& GetStatus() const{ return m_status; }

    /**
     * <p>A filter which will return only memberships in the specified status.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>A filter which will return only memberships in the specified status.</p>
     */
    inline void SetStatus(const MembershipStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>A filter which will return only memberships in the specified status.</p>
     */
    inline void SetStatus(MembershipStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>A filter which will return only memberships in the specified status.</p>
     */
    inline ListMembershipsRequest& WithStatus(const MembershipStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>A filter which will return only memberships in the specified status.</p>
     */
    inline ListMembershipsRequest& WithStatus(MembershipStatus&& value) { SetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    MembershipStatus m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
