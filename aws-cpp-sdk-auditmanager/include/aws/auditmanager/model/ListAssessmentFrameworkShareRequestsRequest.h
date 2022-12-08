/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/auditmanager/AuditManager_EXPORTS.h>
#include <aws/auditmanager/AuditManagerRequest.h>
#include <aws/auditmanager/model/ShareRequestType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace AuditManager
{
namespace Model
{

  /**
   */
  class ListAssessmentFrameworkShareRequestsRequest : public AuditManagerRequest
  {
  public:
    AWS_AUDITMANAGER_API ListAssessmentFrameworkShareRequestsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAssessmentFrameworkShareRequests"; }

    AWS_AUDITMANAGER_API Aws::String SerializePayload() const override;

    AWS_AUDITMANAGER_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p> Specifies whether the share request is a sent request or a received
     * request.</p>
     */
    inline const ShareRequestType& GetRequestType() const{ return m_requestType; }

    /**
     * <p> Specifies whether the share request is a sent request or a received
     * request.</p>
     */
    inline bool RequestTypeHasBeenSet() const { return m_requestTypeHasBeenSet; }

    /**
     * <p> Specifies whether the share request is a sent request or a received
     * request.</p>
     */
    inline void SetRequestType(const ShareRequestType& value) { m_requestTypeHasBeenSet = true; m_requestType = value; }

    /**
     * <p> Specifies whether the share request is a sent request or a received
     * request.</p>
     */
    inline void SetRequestType(ShareRequestType&& value) { m_requestTypeHasBeenSet = true; m_requestType = std::move(value); }

    /**
     * <p> Specifies whether the share request is a sent request or a received
     * request.</p>
     */
    inline ListAssessmentFrameworkShareRequestsRequest& WithRequestType(const ShareRequestType& value) { SetRequestType(value); return *this;}

    /**
     * <p> Specifies whether the share request is a sent request or a received
     * request.</p>
     */
    inline ListAssessmentFrameworkShareRequestsRequest& WithRequestType(ShareRequestType&& value) { SetRequestType(std::move(value)); return *this;}


    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline ListAssessmentFrameworkShareRequestsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline ListAssessmentFrameworkShareRequestsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> The pagination token that's used to fetch the next set of results. </p>
     */
    inline ListAssessmentFrameworkShareRequestsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p> Represents the maximum number of results on a page or for an API request
     * call. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p> Represents the maximum number of results on a page or for an API request
     * call. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p> Represents the maximum number of results on a page or for an API request
     * call. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p> Represents the maximum number of results on a page or for an API request
     * call. </p>
     */
    inline ListAssessmentFrameworkShareRequestsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    ShareRequestType m_requestType;
    bool m_requestTypeHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace AuditManager
} // namespace Aws
