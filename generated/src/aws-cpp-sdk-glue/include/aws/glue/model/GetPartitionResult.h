/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
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
  class GetPartitionResult
  {
  public:
    AWS_GLUE_API GetPartitionResult();
    AWS_GLUE_API GetPartitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API GetPartitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The requested information, in the form of a <code>Partition</code>
     * object.</p>
     */
    inline const Partition& GetPartition() const{ return m_partition; }

    /**
     * <p>The requested information, in the form of a <code>Partition</code>
     * object.</p>
     */
    inline void SetPartition(const Partition& value) { m_partition = value; }

    /**
     * <p>The requested information, in the form of a <code>Partition</code>
     * object.</p>
     */
    inline void SetPartition(Partition&& value) { m_partition = std::move(value); }

    /**
     * <p>The requested information, in the form of a <code>Partition</code>
     * object.</p>
     */
    inline GetPartitionResult& WithPartition(const Partition& value) { SetPartition(value); return *this;}

    /**
     * <p>The requested information, in the form of a <code>Partition</code>
     * object.</p>
     */
    inline GetPartitionResult& WithPartition(Partition&& value) { SetPartition(std::move(value)); return *this;}

  private:

    Partition m_partition;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
