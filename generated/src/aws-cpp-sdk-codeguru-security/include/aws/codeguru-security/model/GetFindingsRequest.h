/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-security/CodeGuruSecurity_EXPORTS.h>
#include <aws/codeguru-security/CodeGuruSecurityRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codeguru-security/model/Status.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace CodeGuruSecurity
{
namespace Model
{

  /**
   */
  class GetFindingsRequest : public CodeGuruSecurityRequest
  {
  public:
    AWS_CODEGURUSECURITY_API GetFindingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetFindings"; }

    AWS_CODEGURUSECURITY_API Aws::String SerializePayload() const override;

    AWS_CODEGURUSECURITY_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The maximum number of results to return in the response. Use this parameter
     * when paginating results. If additional results exist beyond the number you
     * specify, the <code>nextToken</code> element is returned in the response. Use
     * <code>nextToken</code> in a subsequent request to retrieve additional
     * results.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return in the response. Use this parameter
     * when paginating results. If additional results exist beyond the number you
     * specify, the <code>nextToken</code> element is returned in the response. Use
     * <code>nextToken</code> in a subsequent request to retrieve additional
     * results.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return in the response. Use this parameter
     * when paginating results. If additional results exist beyond the number you
     * specify, the <code>nextToken</code> element is returned in the response. Use
     * <code>nextToken</code> in a subsequent request to retrieve additional
     * results.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return in the response. Use this parameter
     * when paginating results. If additional results exist beyond the number you
     * specify, the <code>nextToken</code> element is returned in the response. Use
     * <code>nextToken</code> in a subsequent request to retrieve additional
     * results.</p>
     */
    inline GetFindingsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>A token to use for paginating results that are returned in the response. Set
     * the value of this parameter to null for the first request. For subsequent calls,
     * use the <code>nextToken</code> value returned from the previous request to
     * continue listing results after the first page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token to use for paginating results that are returned in the response. Set
     * the value of this parameter to null for the first request. For subsequent calls,
     * use the <code>nextToken</code> value returned from the previous request to
     * continue listing results after the first page.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token to use for paginating results that are returned in the response. Set
     * the value of this parameter to null for the first request. For subsequent calls,
     * use the <code>nextToken</code> value returned from the previous request to
     * continue listing results after the first page.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token to use for paginating results that are returned in the response. Set
     * the value of this parameter to null for the first request. For subsequent calls,
     * use the <code>nextToken</code> value returned from the previous request to
     * continue listing results after the first page.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token to use for paginating results that are returned in the response. Set
     * the value of this parameter to null for the first request. For subsequent calls,
     * use the <code>nextToken</code> value returned from the previous request to
     * continue listing results after the first page.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token to use for paginating results that are returned in the response. Set
     * the value of this parameter to null for the first request. For subsequent calls,
     * use the <code>nextToken</code> value returned from the previous request to
     * continue listing results after the first page.</p>
     */
    inline GetFindingsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token to use for paginating results that are returned in the response. Set
     * the value of this parameter to null for the first request. For subsequent calls,
     * use the <code>nextToken</code> value returned from the previous request to
     * continue listing results after the first page.</p>
     */
    inline GetFindingsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token to use for paginating results that are returned in the response. Set
     * the value of this parameter to null for the first request. For subsequent calls,
     * use the <code>nextToken</code> value returned from the previous request to
     * continue listing results after the first page.</p>
     */
    inline GetFindingsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The name of the scan you want to retrieve findings from.</p>
     */
    inline const Aws::String& GetScanName() const{ return m_scanName; }

    /**
     * <p>The name of the scan you want to retrieve findings from.</p>
     */
    inline bool ScanNameHasBeenSet() const { return m_scanNameHasBeenSet; }

    /**
     * <p>The name of the scan you want to retrieve findings from.</p>
     */
    inline void SetScanName(const Aws::String& value) { m_scanNameHasBeenSet = true; m_scanName = value; }

    /**
     * <p>The name of the scan you want to retrieve findings from.</p>
     */
    inline void SetScanName(Aws::String&& value) { m_scanNameHasBeenSet = true; m_scanName = std::move(value); }

    /**
     * <p>The name of the scan you want to retrieve findings from.</p>
     */
    inline void SetScanName(const char* value) { m_scanNameHasBeenSet = true; m_scanName.assign(value); }

    /**
     * <p>The name of the scan you want to retrieve findings from.</p>
     */
    inline GetFindingsRequest& WithScanName(const Aws::String& value) { SetScanName(value); return *this;}

    /**
     * <p>The name of the scan you want to retrieve findings from.</p>
     */
    inline GetFindingsRequest& WithScanName(Aws::String&& value) { SetScanName(std::move(value)); return *this;}

    /**
     * <p>The name of the scan you want to retrieve findings from.</p>
     */
    inline GetFindingsRequest& WithScanName(const char* value) { SetScanName(value); return *this;}


    /**
     * <p>The status of the findings you want to get. Pass either <code>Open</code>,
     * <code>Closed</code>, or <code>All</code>.</p>
     */
    inline const Status& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the findings you want to get. Pass either <code>Open</code>,
     * <code>Closed</code>, or <code>All</code>.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the findings you want to get. Pass either <code>Open</code>,
     * <code>Closed</code>, or <code>All</code>.</p>
     */
    inline void SetStatus(const Status& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the findings you want to get. Pass either <code>Open</code>,
     * <code>Closed</code>, or <code>All</code>.</p>
     */
    inline void SetStatus(Status&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the findings you want to get. Pass either <code>Open</code>,
     * <code>Closed</code>, or <code>All</code>.</p>
     */
    inline GetFindingsRequest& WithStatus(const Status& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the findings you want to get. Pass either <code>Open</code>,
     * <code>Closed</code>, or <code>All</code>.</p>
     */
    inline GetFindingsRequest& WithStatus(Status&& value) { SetStatus(std::move(value)); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_scanName;
    bool m_scanNameHasBeenSet = false;

    Status m_status;
    bool m_statusHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruSecurity
} // namespace Aws
