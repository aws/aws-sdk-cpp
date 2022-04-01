/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opensearch/model/ReservedInstance.h>
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
   * <p>Container for results from <code>DescribeReservedInstances</code>
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DescribeReservedInstancesResponse">AWS
   * API Reference</a></p>
   */
  class AWS_OPENSEARCHSERVICE_API DescribeReservedInstancesResult
  {
  public:
    DescribeReservedInstancesResult();
    DescribeReservedInstancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeReservedInstancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline DescribeReservedInstancesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline DescribeReservedInstancesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Provides an identifier to allow retrieval of paginated results.</p>
     */
    inline DescribeReservedInstancesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>List of reserved OpenSearch instances.</p>
     */
    inline const Aws::Vector<ReservedInstance>& GetReservedInstances() const{ return m_reservedInstances; }

    /**
     * <p>List of reserved OpenSearch instances.</p>
     */
    inline void SetReservedInstances(const Aws::Vector<ReservedInstance>& value) { m_reservedInstances = value; }

    /**
     * <p>List of reserved OpenSearch instances.</p>
     */
    inline void SetReservedInstances(Aws::Vector<ReservedInstance>&& value) { m_reservedInstances = std::move(value); }

    /**
     * <p>List of reserved OpenSearch instances.</p>
     */
    inline DescribeReservedInstancesResult& WithReservedInstances(const Aws::Vector<ReservedInstance>& value) { SetReservedInstances(value); return *this;}

    /**
     * <p>List of reserved OpenSearch instances.</p>
     */
    inline DescribeReservedInstancesResult& WithReservedInstances(Aws::Vector<ReservedInstance>&& value) { SetReservedInstances(std::move(value)); return *this;}

    /**
     * <p>List of reserved OpenSearch instances.</p>
     */
    inline DescribeReservedInstancesResult& AddReservedInstances(const ReservedInstance& value) { m_reservedInstances.push_back(value); return *this; }

    /**
     * <p>List of reserved OpenSearch instances.</p>
     */
    inline DescribeReservedInstancesResult& AddReservedInstances(ReservedInstance&& value) { m_reservedInstances.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_nextToken;

    Aws::Vector<ReservedInstance> m_reservedInstances;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
