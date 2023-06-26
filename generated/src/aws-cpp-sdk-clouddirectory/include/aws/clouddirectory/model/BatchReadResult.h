﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/clouddirectory/CloudDirectory_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/clouddirectory/model/BatchReadOperationResponse.h>
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
  class BatchReadResult
  {
  public:
    AWS_CLOUDDIRECTORY_API BatchReadResult();
    AWS_CLOUDDIRECTORY_API BatchReadResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDDIRECTORY_API BatchReadResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of all the responses for each batch read.</p>
     */
    inline const Aws::Vector<BatchReadOperationResponse>& GetResponses() const{ return m_responses; }

    /**
     * <p>A list of all the responses for each batch read.</p>
     */
    inline void SetResponses(const Aws::Vector<BatchReadOperationResponse>& value) { m_responses = value; }

    /**
     * <p>A list of all the responses for each batch read.</p>
     */
    inline void SetResponses(Aws::Vector<BatchReadOperationResponse>&& value) { m_responses = std::move(value); }

    /**
     * <p>A list of all the responses for each batch read.</p>
     */
    inline BatchReadResult& WithResponses(const Aws::Vector<BatchReadOperationResponse>& value) { SetResponses(value); return *this;}

    /**
     * <p>A list of all the responses for each batch read.</p>
     */
    inline BatchReadResult& WithResponses(Aws::Vector<BatchReadOperationResponse>&& value) { SetResponses(std::move(value)); return *this;}

    /**
     * <p>A list of all the responses for each batch read.</p>
     */
    inline BatchReadResult& AddResponses(const BatchReadOperationResponse& value) { m_responses.push_back(value); return *this; }

    /**
     * <p>A list of all the responses for each batch read.</p>
     */
    inline BatchReadResult& AddResponses(BatchReadOperationResponse&& value) { m_responses.push_back(std::move(value)); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline BatchReadResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline BatchReadResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline BatchReadResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<BatchReadOperationResponse> m_responses;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace CloudDirectory
} // namespace Aws
