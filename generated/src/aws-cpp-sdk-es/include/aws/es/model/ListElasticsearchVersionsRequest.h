/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/es/ElasticsearchService_EXPORTS.h>
#include <aws/es/ElasticsearchServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace ElasticsearchService
{
namespace Model
{

  /**
   * <p> Container for the parameters to the <code> <a>ListElasticsearchVersions</a>
   * </code> operation. <p> Use <code> <a>MaxResults</a> </code> to control the
   * maximum number of results to retrieve in a single call. </p> <p> Use <code>
   * <a>NextToken</a> </code> in response to retrieve more results. If the received
   * response does not contain a NextToken, then there are no more results to
   * retrieve. </p> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/ListElasticsearchVersionsRequest">AWS
   * API Reference</a></p>
   */
  class ListElasticsearchVersionsRequest : public ElasticsearchServiceRequest
  {
  public:
    AWS_ELASTICSEARCHSERVICE_API ListElasticsearchVersionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListElasticsearchVersions"; }

    AWS_ELASTICSEARCHSERVICE_API Aws::String SerializePayload() const override;

    AWS_ELASTICSEARCHSERVICE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p> Set this value to limit the number of results returned. Value provided must
     * be greater than 10 else it wont be honored. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p> Set this value to limit the number of results returned. Value provided must
     * be greater than 10 else it wont be honored. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p> Set this value to limit the number of results returned. Value provided must
     * be greater than 10 else it wont be honored. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p> Set this value to limit the number of results returned. Value provided must
     * be greater than 10 else it wont be honored. </p>
     */
    inline ListElasticsearchVersionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    
    inline ListElasticsearchVersionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ListElasticsearchVersionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ListElasticsearchVersionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
