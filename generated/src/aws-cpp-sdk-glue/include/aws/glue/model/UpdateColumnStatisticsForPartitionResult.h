﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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


    ///@{
    /**
     * <p>Error occurred during updating column statistics data.</p>
     */
    inline const Aws::Vector<ColumnStatisticsError>& GetErrors() const{ return m_errors; }
    inline void SetErrors(const Aws::Vector<ColumnStatisticsError>& value) { m_errors = value; }
    inline void SetErrors(Aws::Vector<ColumnStatisticsError>&& value) { m_errors = std::move(value); }
    inline UpdateColumnStatisticsForPartitionResult& WithErrors(const Aws::Vector<ColumnStatisticsError>& value) { SetErrors(value); return *this;}
    inline UpdateColumnStatisticsForPartitionResult& WithErrors(Aws::Vector<ColumnStatisticsError>&& value) { SetErrors(std::move(value)); return *this;}
    inline UpdateColumnStatisticsForPartitionResult& AddErrors(const ColumnStatisticsError& value) { m_errors.push_back(value); return *this; }
    inline UpdateColumnStatisticsForPartitionResult& AddErrors(ColumnStatisticsError&& value) { m_errors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateColumnStatisticsForPartitionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateColumnStatisticsForPartitionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateColumnStatisticsForPartitionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<ColumnStatisticsError> m_errors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
