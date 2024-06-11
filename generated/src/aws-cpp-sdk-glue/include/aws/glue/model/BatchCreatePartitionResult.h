﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/glue/Glue_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class BatchCreatePartitionResult
  {
  public:
    AWS_GLUE_API BatchCreatePartitionResult();
    AWS_GLUE_API BatchCreatePartitionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GLUE_API BatchCreatePartitionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The errors encountered when trying to create the requested partitions.</p>
     */
    inline const Aws::Vector<PartitionError>& GetErrors() const{ return m_errors; }
    inline void SetErrors(const Aws::Vector<PartitionError>& value) { m_errors = value; }
    inline void SetErrors(Aws::Vector<PartitionError>&& value) { m_errors = std::move(value); }
    inline BatchCreatePartitionResult& WithErrors(const Aws::Vector<PartitionError>& value) { SetErrors(value); return *this;}
    inline BatchCreatePartitionResult& WithErrors(Aws::Vector<PartitionError>&& value) { SetErrors(std::move(value)); return *this;}
    inline BatchCreatePartitionResult& AddErrors(const PartitionError& value) { m_errors.push_back(value); return *this; }
    inline BatchCreatePartitionResult& AddErrors(PartitionError&& value) { m_errors.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchCreatePartitionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchCreatePartitionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchCreatePartitionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<PartitionError> m_errors;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Glue
} // namespace Aws
