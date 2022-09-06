/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/OpenSearchServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p> Container for the parameters to the <code> <a>ListVersions</a> </code>
   * operation. <p> Use <code> <a>MaxResults</a> </code> to control the maximum
   * number of results to retrieve in a single call. </p> <p> Use <code>
   * <a>NextToken</a> </code> in response to retrieve more results. If the received
   * response does not contain a NextToken, there are no more results to retrieve.
   * </p> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/ListVersionsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_OPENSEARCHSERVICE_API ListVersionsRequest : public OpenSearchServiceRequest
  {
  public:
    ListVersionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListVersions"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p> Set this value to limit the number of results returned. Value must be
     * greater than 10 or it won't be honored. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p> Set this value to limit the number of results returned. Value must be
     * greater than 10 or it won't be honored. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p> Set this value to limit the number of results returned. Value must be
     * greater than 10 or it won't be honored. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p> Set this value to limit the number of results returned. Value must be
     * greater than 10 or it won't be honored. </p>
     */
    inline ListVersionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    
    inline ListVersionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListVersionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListVersionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
