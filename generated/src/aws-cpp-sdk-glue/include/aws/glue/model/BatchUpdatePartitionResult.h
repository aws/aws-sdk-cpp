﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/glue/model/BatchUpdatePartitionFailureEntry.h>
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
  class BatchUpdatePartitionResult
  {
  public:
    AWS_GLUE_API BatchUpdatePartitionResult();
    AWS_GLUE_API BatchUpdatePartitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API BatchUpdatePartitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The errors encountered when trying to update the requested partitions. A list
     * of <code>BatchUpdatePartitionFailureEntry</code> objects.</p>
     */
    inline const Aws::Vector<BatchUpdatePartitionFailureEntry>& GetErrors() const{ return m_errors; }
    inline void SetErrors(const Aws::Vector<BatchUpdatePartitionFailureEntry>& value) { m_errors = value; }
    inline void SetErrors(Aws::Vector<BatchUpdatePartitionFailureEntry>&& value) { m_errors = std::move(value); }
    inline BatchUpdatePartitionResult& WithErrors(const Aws::Vector<BatchUpdatePartitionFailureEntry>& value) { SetErrors(value); return *this;}
    inline BatchUpdatePartitionResult& WithErrors(Aws::Vector<BatchUpdatePartitionFailureEntry>&& value) { SetErrors(std::move(value)); return *this;}
    inline BatchUpdatePartitionResult& AddErrors(const BatchUpdatePartitionFailureEntry& value) { m_errors.push_back(value); return *this; }
    inline BatchUpdatePartitionResult& AddErrors(BatchUpdatePartitionFailureEntry&& value) { m_errors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchUpdatePartitionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchUpdatePartitionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchUpdatePartitionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<BatchUpdatePartitionFailureEntry> m_errors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
