/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace IoTSiteWise
{
namespace Model
{

  /**
   */
  class ExecuteQueryRequest : public IoTSiteWiseRequest
  {
  public:
    AWS_IOTSITEWISE_API ExecuteQueryRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ExecuteQuery"; }

    AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The IoT SiteWise query statement.</p>
     */
    inline const Aws::String& GetQueryStatement() const{ return m_queryStatement; }
    inline bool QueryStatementHasBeenSet() const { return m_queryStatementHasBeenSet; }
    inline void SetQueryStatement(const Aws::String& value) { m_queryStatementHasBeenSet = true; m_queryStatement = value; }
    inline void SetQueryStatement(Aws::String&& value) { m_queryStatementHasBeenSet = true; m_queryStatement = std::move(value); }
    inline void SetQueryStatement(const char* value) { m_queryStatementHasBeenSet = true; m_queryStatement.assign(value); }
    inline ExecuteQueryRequest& WithQueryStatement(const Aws::String& value) { SetQueryStatement(value); return *this;}
    inline ExecuteQueryRequest& WithQueryStatement(Aws::String&& value) { SetQueryStatement(std::move(value)); return *this;}
    inline ExecuteQueryRequest& WithQueryStatement(const char* value) { SetQueryStatement(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The string that specifies the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ExecuteQueryRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ExecuteQueryRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ExecuteQueryRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return at one time. The default is 25.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ExecuteQueryRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique case-sensitive identifier that you can provide to ensure the
     * idempotency of the request. Don't reuse this client token if a new idempotent
     * request is required.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline ExecuteQueryRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline ExecuteQueryRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline ExecuteQueryRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}
  private:

    Aws::String m_queryStatement;
    bool m_queryStatementHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
