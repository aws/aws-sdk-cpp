/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/drs/Drs_EXPORTS.h>
#include <aws/drs/DrsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace drs
{
namespace Model
{

  /**
   */
  class ListExtensibleSourceServersRequest : public DrsRequest
  {
  public:
    AWS_DRS_API ListExtensibleSourceServersRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListExtensibleSourceServers"; }

    AWS_DRS_API Aws::String SerializePayload() const override;


    /**
     * <p>The maximum number of extensible source servers to retrieve.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of extensible source servers to retrieve.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of extensible source servers to retrieve.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of extensible source servers to retrieve.</p>
     */
    inline ListExtensibleSourceServersRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token of the next extensible source server to retrieve.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token of the next extensible source server to retrieve.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token of the next extensible source server to retrieve.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token of the next extensible source server to retrieve.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token of the next extensible source server to retrieve.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token of the next extensible source server to retrieve.</p>
     */
    inline ListExtensibleSourceServersRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token of the next extensible source server to retrieve.</p>
     */
    inline ListExtensibleSourceServersRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token of the next extensible source server to retrieve.</p>
     */
    inline ListExtensibleSourceServersRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The Id of the staging Account to retrieve extensible source servers from.</p>
     */
    inline const Aws::String& GetStagingAccountID() const{ return m_stagingAccountID; }

    /**
     * <p>The Id of the staging Account to retrieve extensible source servers from.</p>
     */
    inline bool StagingAccountIDHasBeenSet() const { return m_stagingAccountIDHasBeenSet; }

    /**
     * <p>The Id of the staging Account to retrieve extensible source servers from.</p>
     */
    inline void SetStagingAccountID(const Aws::String& value) { m_stagingAccountIDHasBeenSet = true; m_stagingAccountID = value; }

    /**
     * <p>The Id of the staging Account to retrieve extensible source servers from.</p>
     */
    inline void SetStagingAccountID(Aws::String&& value) { m_stagingAccountIDHasBeenSet = true; m_stagingAccountID = std::move(value); }

    /**
     * <p>The Id of the staging Account to retrieve extensible source servers from.</p>
     */
    inline void SetStagingAccountID(const char* value) { m_stagingAccountIDHasBeenSet = true; m_stagingAccountID.assign(value); }

    /**
     * <p>The Id of the staging Account to retrieve extensible source servers from.</p>
     */
    inline ListExtensibleSourceServersRequest& WithStagingAccountID(const Aws::String& value) { SetStagingAccountID(value); return *this;}

    /**
     * <p>The Id of the staging Account to retrieve extensible source servers from.</p>
     */
    inline ListExtensibleSourceServersRequest& WithStagingAccountID(Aws::String&& value) { SetStagingAccountID(std::move(value)); return *this;}

    /**
     * <p>The Id of the staging Account to retrieve extensible source servers from.</p>
     */
    inline ListExtensibleSourceServersRequest& WithStagingAccountID(const char* value) { SetStagingAccountID(value); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_stagingAccountID;
    bool m_stagingAccountIDHasBeenSet = false;
  };

} // namespace Model
} // namespace drs
} // namespace Aws
