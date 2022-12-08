/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/Partition.h>
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
namespace Glue
{
namespace Model
{
  class GetPartitionsResult
  {
  public:
    AWS_GLUE_API GetPartitionsResult();
    AWS_GLUE_API GetPartitionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetPartitionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of requested partitions.</p>
     */
    inline const Aws::Vector<Partition>& GetPartitions() const{ return m_partitions; }

    /**
     * <p>A list of requested partitions.</p>
     */
    inline void SetPartitions(const Aws::Vector<Partition>& value) { m_partitions = value; }

    /**
     * <p>A list of requested partitions.</p>
     */
    inline void SetPartitions(Aws::Vector<Partition>&& value) { m_partitions = std::move(value); }

    /**
     * <p>A list of requested partitions.</p>
     */
    inline GetPartitionsResult& WithPartitions(const Aws::Vector<Partition>& value) { SetPartitions(value); return *this;}

    /**
     * <p>A list of requested partitions.</p>
     */
    inline GetPartitionsResult& WithPartitions(Aws::Vector<Partition>&& value) { SetPartitions(std::move(value)); return *this;}

    /**
     * <p>A list of requested partitions.</p>
     */
    inline GetPartitionsResult& AddPartitions(const Partition& value) { m_partitions.push_back(value); return *this; }

    /**
     * <p>A list of requested partitions.</p>
     */
    inline GetPartitionsResult& AddPartitions(Partition&& value) { m_partitions.push_back(std::move(value)); return *this; }


    /**
     * <p>A continuation token, if the returned list of partitions does not include the
     * last one.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A continuation token, if the returned list of partitions does not include the
     * last one.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A continuation token, if the returned list of partitions does not include the
     * last one.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A continuation token, if the returned list of partitions does not include the
     * last one.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A continuation token, if the returned list of partitions does not include the
     * last one.</p>
     */
    inline GetPartitionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A continuation token, if the returned list of partitions does not include the
     * last one.</p>
     */
    inline GetPartitionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A continuation token, if the returned list of partitions does not include the
     * last one.</p>
     */
    inline GetPartitionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Partition> m_partitions;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
