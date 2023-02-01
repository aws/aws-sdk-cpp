/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/cleanrooms/CleanRooms_EXPORTS.h>
#include <aws/cleanrooms/CleanRoomsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cleanrooms/model/ProtectedQueryStatus.h>
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
  class ListProtectedQueriesRequest : public CleanRoomsRequest
  {
  public:
    AWS_CLEANROOMS_API ListProtectedQueriesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListProtectedQueries"; }

    AWS_CLEANROOMS_API Aws::String SerializePayload() const override;

    AWS_CLEANROOMS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The identifier for the membership in the collaboration.</p>
     */
    inline const Aws::String& GetMembershipIdentifier() const{ return m_membershipIdentifier; }

    /**
     * <p>The identifier for the membership in the collaboration.</p>
     */
    inline bool MembershipIdentifierHasBeenSet() const { return m_membershipIdentifierHasBeenSet; }

    /**
     * <p>The identifier for the membership in the collaboration.</p>
     */
    inline void SetMembershipIdentifier(const Aws::String& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = value; }

    /**
     * <p>The identifier for the membership in the collaboration.</p>
     */
    inline void SetMembershipIdentifier(Aws::String&& value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier = std::move(value); }

    /**
     * <p>The identifier for the membership in the collaboration.</p>
     */
    inline void SetMembershipIdentifier(const char* value) { m_membershipIdentifierHasBeenSet = true; m_membershipIdentifier.assign(value); }

    /**
     * <p>The identifier for the membership in the collaboration.</p>
     */
    inline ListProtectedQueriesRequest& WithMembershipIdentifier(const Aws::String& value) { SetMembershipIdentifier(value); return *this;}

    /**
     * <p>The identifier for the membership in the collaboration.</p>
     */
    inline ListProtectedQueriesRequest& WithMembershipIdentifier(Aws::String&& value) { SetMembershipIdentifier(std::move(value)); return *this;}

    /**
     * <p>The identifier for the membership in the collaboration.</p>
     */
    inline ListProtectedQueriesRequest& WithMembershipIdentifier(const char* value) { SetMembershipIdentifier(value); return *this;}


    /**
     * <p>A filter on the status of the protected query.</p>
     */
    inline const ProtectedQueryStatus& GetStatus() const{ return m_status; }

    /**
     * <p>A filter on the status of the protected query.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>A filter on the status of the protected query.</p>
     */
    inline void SetStatus(const ProtectedQueryStatus& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>A filter on the status of the protected query.</p>
     */
    inline void SetStatus(ProtectedQueryStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>A filter on the status of the protected query.</p>
     */
    inline ListProtectedQueriesRequest& WithStatus(const ProtectedQueryStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>A filter on the status of the protected query.</p>
     */
    inline ListProtectedQueriesRequest& WithStatus(ProtectedQueryStatus&& value) { SetStatus(std::move(value)); return *this;}


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
    inline ListProtectedQueriesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline ListProtectedQueriesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token value retrieved from a previous call to access the next page of
     * results.</p>
     */
    inline ListProtectedQueriesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The maximum size of the results that is returned per call. Service chooses a
     * default if it has not been set. Service can return a nextToken even if the
     * maximum results has not been met. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum size of the results that is returned per call. Service chooses a
     * default if it has not been set. Service can return a nextToken even if the
     * maximum results has not been met. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum size of the results that is returned per call. Service chooses a
     * default if it has not been set. Service can return a nextToken even if the
     * maximum results has not been met. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum size of the results that is returned per call. Service chooses a
     * default if it has not been set. Service can return a nextToken even if the
     * maximum results has not been met. </p>
     */
    inline ListProtectedQueriesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::String m_membershipIdentifier;
    bool m_membershipIdentifierHasBeenSet = false;

    ProtectedQueryStatus m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace CleanRooms
} // namespace Aws
