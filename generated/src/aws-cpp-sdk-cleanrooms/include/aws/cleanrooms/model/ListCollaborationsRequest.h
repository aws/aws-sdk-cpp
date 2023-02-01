/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/CleanRoomsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanrooms/model/FilterableMemberStatus.h>
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
  class ListCollaborationsRequest : public CleanRoomsRequest
  {
  public:
    AWS_CLEANROOMS_API ListCollaborationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListCollaborations"; }

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
    inline ListCollaborationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline ListCollaborationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline ListCollaborationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum size of the results that is returned per call. Service chooses a
     * default if it has not been set. Service may return a nextToken even if the
     * maximum results has not been met.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum size of the results that is returned per call. Service chooses a
     * default if it has not been set. Service may return a nextToken even if the
     * maximum results has not been met.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum size of the results that is returned per call. Service chooses a
     * default if it has not been set. Service may return a nextToken even if the
     * maximum results has not been met.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum size of the results that is returned per call. Service chooses a
     * default if it has not been set. Service may return a nextToken even if the
     * maximum results has not been met.</p>
     */
    inline ListCollaborationsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The caller's status in a collaboration.</p>
     */
    inline const FilterableMemberStatus& GetMemberStatus() const{ return m_memberStatus; }

    /**
     * <p>The caller's status in a collaboration.</p>
     */
    inline bool MemberStatusHasBeenSet() const { return m_memberStatusHasBeenSet; }

    /**
     * <p>The caller's status in a collaboration.</p>
     */
    inline void SetMemberStatus(const FilterableMemberStatus& value) { m_memberStatusHasBeenSet = true; m_memberStatus = value; }

    /**
     * <p>The caller's status in a collaboration.</p>
     */
    inline void SetMemberStatus(FilterableMemberStatus&& value) { m_memberStatusHasBeenSet = true; m_memberStatus = std::move(value); }

    /**
     * <p>The caller's status in a collaboration.</p>
     */
    inline ListCollaborationsRequest& WithMemberStatus(const FilterableMemberStatus& value) { SetMemberStatus(value); return *this;}

    /**
     * <p>The caller's status in a collaboration.</p>
     */
    inline ListCollaborationsRequest& WithMemberStatus(FilterableMemberStatus&& value) { SetMemberStatus(std::move(value)); return *this;}

  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    FilterableMemberStatus m_memberStatus;
    bool m_memberStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
