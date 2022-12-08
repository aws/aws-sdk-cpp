/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/PartitionError.h>
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
  class BatchDeletePartitionResult
  {
  public:
    AWS_GLUE_API BatchDeletePartitionResult();
    AWS_GLUE_API BatchDeletePartitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API BatchDeletePartitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The errors encountered when trying to delete the requested partitions.</p>
     */
    inline const Aws::Vector<PartitionError>& GetErrors() const{ return m_errors; }

    /**
     * <p>The errors encountered when trying to delete the requested partitions.</p>
     */
    inline void SetErrors(const Aws::Vector<PartitionError>& value) { m_errors = value; }

    /**
     * <p>The errors encountered when trying to delete the requested partitions.</p>
     */
    inline void SetErrors(Aws::Vector<PartitionError>&& value) { m_errors = std::move(value); }

    /**
     * <p>The errors encountered when trying to delete the requested partitions.</p>
     */
    inline BatchDeletePartitionResult& WithErrors(const Aws::Vector<PartitionError>& value) { SetErrors(value); return *this;}

    /**
     * <p>The errors encountered when trying to delete the requested partitions.</p>
     */
    inline BatchDeletePartitionResult& WithErrors(Aws::Vector<PartitionError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>The errors encountered when trying to delete the requested partitions.</p>
     */
    inline BatchDeletePartitionResult& AddErrors(const PartitionError& value) { m_errors.push_back(value); return *this; }

    /**
     * <p>The errors encountered when trying to delete the requested partitions.</p>
     */
    inline BatchDeletePartitionResult& AddErrors(PartitionError&& value) { m_errors.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<PartitionError> m_errors;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
