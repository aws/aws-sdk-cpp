﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/apprunner/AppRunnerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace AppRunner
{
namespace Model
{

  /**
   */
  class ListServicesRequest : public AppRunnerRequest
  {
  public:
    AWS_APPRUNNER_API ListServicesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListServices"; }

    AWS_APPRUNNER_API Aws::String SerializePayload() const override;

    AWS_APPRUNNER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>A token from a previous result page. Used for a paginated request. The
     * request retrieves the next result page. All other parameter values must be
     * identical to the ones specified in the initial request.</p> <p>If you don't
     * specify <code>NextToken</code>, the request retrieves the first result page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListServicesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListServicesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListServicesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to include in each response (result page). It's
     * used for a paginated request.</p> <p>If you don't specify
     * <code>MaxResults</code>, the request retrieves all available results in a single
     * response.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListServicesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
