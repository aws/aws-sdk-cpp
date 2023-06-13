/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codeguru-security/CodeGuruSecurity_EXPORTS.h>
#include <aws/codeguru-security/CodeGuruSecurityRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class ListScansRequest : public CodeGuruSecurityRequest
  {
  public:
    AWS_CODEGURUSECURITY_API ListScansRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListScans"; }

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
    inline ListScansRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


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
    inline ListScansRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token to use for paginating results that are returned in the response. Set
     * the value of this parameter to null for the first request. For subsequent calls,
     * use the <code>nextToken</code> value returned from the previous request to
     * continue listing results after the first page.</p>
     */
    inline ListScansRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token to use for paginating results that are returned in the response. Set
     * the value of this parameter to null for the first request. For subsequent calls,
     * use the <code>nextToken</code> value returned from the previous request to
     * continue listing results after the first page.</p>
     */
    inline ListScansRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeGuruSecurity
} // namespace Aws
