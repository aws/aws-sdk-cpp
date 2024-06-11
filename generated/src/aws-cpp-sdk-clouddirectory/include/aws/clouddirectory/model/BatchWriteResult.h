﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/clouddirectory/model/BatchWriteOperationResponse.h>
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
namespace CloudDirectory
{
namespace Model
{
  class BatchWriteResult
  {
  public:
    AWS_CLOUDDIRECTORY_API BatchWriteResult();
    AWS_CLOUDDIRECTORY_API BatchWriteResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDDIRECTORY_API BatchWriteResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of all the responses for each batch write.</p>
     */
    inline const Aws::Vector<BatchWriteOperationResponse>& GetResponses() const{ return m_responses; }
    inline void SetResponses(const Aws::Vector<BatchWriteOperationResponse>& value) { m_responses = value; }
    inline void SetResponses(Aws::Vector<BatchWriteOperationResponse>&& value) { m_responses = std::move(value); }
    inline BatchWriteResult& WithResponses(const Aws::Vector<BatchWriteOperationResponse>& value) { SetResponses(value); return *this;}
    inline BatchWriteResult& WithResponses(Aws::Vector<BatchWriteOperationResponse>&& value) { SetResponses(std::move(value)); return *this;}
    inline BatchWriteResult& AddResponses(const BatchWriteOperationResponse& value) { m_responses.push_back(value); return *this; }
    inline BatchWriteResult& AddResponses(BatchWriteOperationResponse&& value) { m_responses.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline BatchWriteResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline BatchWriteResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline BatchWriteResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<BatchWriteOperationResponse> m_responses;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
