/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   * <p>Container for parameters to
   * <code>DescribeReservedElasticsearchInstanceOfferings</code></p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/es-2015-01-01/DescribeReservedElasticsearchInstanceOfferingsRequest">AWS
   * API Reference</a></p>
   */
  class AWS_ELASTICSEARCHSERVICE_API DescribeReservedElasticsearchInstanceOfferingsRequest : public ElasticsearchServiceRequest
  {
  public:
    DescribeReservedElasticsearchInstanceOfferingsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeReservedElasticsearchInstanceOfferings"; }

    Aws::String SerializePayload() const override;

    void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The offering identifier filter value. Use this parameter to show only the
     * available offering that matches the specified reservation identifier.</p>
     */
    inline const Aws::String& GetReservedElasticsearchInstanceOfferingId() const{ return m_reservedElasticsearchInstanceOfferingId; }

    /**
     * <p>The offering identifier filter value. Use this parameter to show only the
     * available offering that matches the specified reservation identifier.</p>
     */
    inline bool ReservedElasticsearchInstanceOfferingIdHasBeenSet() const { return m_reservedElasticsearchInstanceOfferingIdHasBeenSet; }

    /**
     * <p>The offering identifier filter value. Use this parameter to show only the
     * available offering that matches the specified reservation identifier.</p>
     */
    inline void SetReservedElasticsearchInstanceOfferingId(const Aws::String& value) { m_reservedElasticsearchInstanceOfferingIdHasBeenSet = true; m_reservedElasticsearchInstanceOfferingId = value; }

    /**
     * <p>The offering identifier filter value. Use this parameter to show only the
     * available offering that matches the specified reservation identifier.</p>
     */
    inline void SetReservedElasticsearchInstanceOfferingId(Aws::String&& value) { m_reservedElasticsearchInstanceOfferingIdHasBeenSet = true; m_reservedElasticsearchInstanceOfferingId = std::move(value); }

    /**
     * <p>The offering identifier filter value. Use this parameter to show only the
     * available offering that matches the specified reservation identifier.</p>
     */
    inline void SetReservedElasticsearchInstanceOfferingId(const char* value) { m_reservedElasticsearchInstanceOfferingIdHasBeenSet = true; m_reservedElasticsearchInstanceOfferingId.assign(value); }

    /**
     * <p>The offering identifier filter value. Use this parameter to show only the
     * available offering that matches the specified reservation identifier.</p>
     */
    inline DescribeReservedElasticsearchInstanceOfferingsRequest& WithReservedElasticsearchInstanceOfferingId(const Aws::String& value) { SetReservedElasticsearchInstanceOfferingId(value); return *this;}

    /**
     * <p>The offering identifier filter value. Use this parameter to show only the
     * available offering that matches the specified reservation identifier.</p>
     */
    inline DescribeReservedElasticsearchInstanceOfferingsRequest& WithReservedElasticsearchInstanceOfferingId(Aws::String&& value) { SetReservedElasticsearchInstanceOfferingId(std::move(value)); return *this;}

    /**
     * <p>The offering identifier filter value. Use this parameter to show only the
     * available offering that matches the specified reservation identifier.</p>
     */
    inline DescribeReservedElasticsearchInstanceOfferingsRequest& WithReservedElasticsearchInstanceOfferingId(const char* value) { SetReservedElasticsearchInstanceOfferingId(value); return *this;}


    /**
     * <p>Set this value to limit the number of results returned. If not specified,
     * defaults to 100.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Set this value to limit the number of results returned. If not specified,
     * defaults to 100.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Set this value to limit the number of results returned. If not specified,
     * defaults to 100.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Set this value to limit the number of results returned. If not specified,
     * defaults to 100.</p>
     */
    inline DescribeReservedElasticsearchInstanceOfferingsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>NextToken should be sent in case if earlier API call produced result
     * containing NextToken. It is used for pagination.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>NextToken should be sent in case if earlier API call produced result
     * containing NextToken. It is used for pagination.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>NextToken should be sent in case if earlier API call produced result
     * containing NextToken. It is used for pagination.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>NextToken should be sent in case if earlier API call produced result
     * containing NextToken. It is used for pagination.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>NextToken should be sent in case if earlier API call produced result
     * containing NextToken. It is used for pagination.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>NextToken should be sent in case if earlier API call produced result
     * containing NextToken. It is used for pagination.</p>
     */
    inline DescribeReservedElasticsearchInstanceOfferingsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>NextToken should be sent in case if earlier API call produced result
     * containing NextToken. It is used for pagination.</p>
     */
    inline DescribeReservedElasticsearchInstanceOfferingsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>NextToken should be sent in case if earlier API call produced result
     * containing NextToken. It is used for pagination.</p>
     */
    inline DescribeReservedElasticsearchInstanceOfferingsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_reservedElasticsearchInstanceOfferingId;
    bool m_reservedElasticsearchInstanceOfferingIdHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace ElasticsearchService
} // namespace Aws
