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
  class AWS_GLUE_API UpdateColumnStatisticsForPartitionResult
  {
  public:
    UpdateColumnStatisticsForPartitionResult();
    UpdateColumnStatisticsForPartitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateColumnStatisticsForPartitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
