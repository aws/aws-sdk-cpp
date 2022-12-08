/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/glue/model/ColumnStatisticsError.h>
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
  class UpdateColumnStatisticsForPartitionResult
  {
  public:
    AWS_GLUE_API UpdateColumnStatisticsForPartitionResult();
    AWS_GLUE_API UpdateColumnStatisticsForPartitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API UpdateColumnStatisticsForPartitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Error occurred during updating column statistics data.</p>
     */
    inline const Aws::Vector<ColumnStatisticsError>& GetErrors() const{ return m_errors; }

    /**
     * <p>Error occurred during updating column statistics data.</p>
     */
    inline void SetErrors(const Aws::Vector<ColumnStatisticsError>& value) { m_errors = value; }

    /**
     * <p>Error occurred during updating column statistics data.</p>
     */
    inline void SetErrors(Aws::Vector<ColumnStatisticsError>&& value) { m_errors = std::move(value); }

    /**
     * <p>Error occurred during updating column statistics data.</p>
     */
    inline UpdateColumnStatisticsForPartitionResult& WithErrors(const Aws::Vector<ColumnStatisticsError>& value) { SetErrors(value); return *this;}

    /**
     * <p>Error occurred during updating column statistics data.</p>
     */
    inline UpdateColumnStatisticsForPartitionResult& WithErrors(Aws::Vector<ColumnStatisticsError>&& value) { SetErrors(std::move(value)); return *this;}

    /**
     * <p>Error occurred during updating column statistics data.</p>
     */
    inline UpdateColumnStatisticsForPartitionResult& AddErrors(const ColumnStatisticsError& value) { m_errors.push_back(value); return *this; }

    /**
     * <p>Error occurred during updating column statistics data.</p>
     */
    inline UpdateColumnStatisticsForPartitionResult& AddErrors(ColumnStatisticsError&& value) { m_errors.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ColumnStatisticsError> m_errors;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
