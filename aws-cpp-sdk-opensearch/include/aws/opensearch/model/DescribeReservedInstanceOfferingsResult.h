/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opensearch/model/ReservedInstanceOffering.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace OpenSearchService
{
namespace Model
{
  /**
   * <p>Container for results of a <code>DescribeReservedInstanceOfferings</code>
   * request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DescribeReservedInstanceOfferingsResponse">AWS
   * API Reference</a></p>
   */
  class DescribeReservedInstanceOfferingsResult
  {
  public:
    AWS_OPENSEARCHSERVICE_API DescribeReservedInstanceOfferingsResult();
    AWS_OPENSEARCHSERVICE_API DescribeReservedInstanceOfferingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API DescribeReservedInstanceOfferingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline DescribeReservedInstanceOfferingsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline DescribeReservedInstanceOfferingsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>When <code>nextToken</code> is returned, there are more results available.
     * The value of <code>nextToken</code> is a unique pagination token for each page.
     * Make the call again using the returned token to retrieve the next page.</p>
     */
    inline DescribeReservedInstanceOfferingsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>List of Reserved Instance offerings.</p>
     */
    inline const Aws::Vector<ReservedInstanceOffering>& GetReservedInstanceOfferings() const{ return m_reservedInstanceOfferings; }

    /**
     * <p>List of Reserved Instance offerings.</p>
     */
    inline void SetReservedInstanceOfferings(const Aws::Vector<ReservedInstanceOffering>& value) { m_reservedInstanceOfferings = value; }

    /**
     * <p>List of Reserved Instance offerings.</p>
     */
    inline void SetReservedInstanceOfferings(Aws::Vector<ReservedInstanceOffering>&& value) { m_reservedInstanceOfferings = std::move(value); }

    /**
     * <p>List of Reserved Instance offerings.</p>
     */
    inline DescribeReservedInstanceOfferingsResult& WithReservedInstanceOfferings(const Aws::Vector<ReservedInstanceOffering>& value) { SetReservedInstanceOfferings(value); return *this;}

    /**
     * <p>List of Reserved Instance offerings.</p>
     */
    inline DescribeReservedInstanceOfferingsResult& WithReservedInstanceOfferings(Aws::Vector<ReservedInstanceOffering>&& value) { SetReservedInstanceOfferings(std::move(value)); return *this;}

    /**
     * <p>List of Reserved Instance offerings.</p>
     */
    inline DescribeReservedInstanceOfferingsResult& AddReservedInstanceOfferings(const ReservedInstanceOffering& value) { m_reservedInstanceOfferings.push_back(value); return *this; }

    /**
     * <p>List of Reserved Instance offerings.</p>
     */
    inline DescribeReservedInstanceOfferingsResult& AddReservedInstanceOfferings(ReservedInstanceOffering&& value) { m_reservedInstanceOfferings.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<ReservedInstanceOffering> m_reservedInstanceOfferings;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
