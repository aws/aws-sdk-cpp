﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace MainframeModernization
{
namespace Model
{
  class StartBatchJobResult
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API StartBatchJobResult();
    AWS_MAINFRAMEMODERNIZATION_API StartBatchJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAINFRAMEMODERNIZATION_API StartBatchJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier of this execution of the batch job.</p>
     */
    inline const Aws::String& GetExecutionId() const{ return m_executionId; }

    /**
     * <p>The unique identifier of this execution of the batch job.</p>
     */
    inline void SetExecutionId(const Aws::String& value) { m_executionId = value; }

    /**
     * <p>The unique identifier of this execution of the batch job.</p>
     */
    inline void SetExecutionId(Aws::String&& value) { m_executionId = std::move(value); }

    /**
     * <p>The unique identifier of this execution of the batch job.</p>
     */
    inline void SetExecutionId(const char* value) { m_executionId.assign(value); }

    /**
     * <p>The unique identifier of this execution of the batch job.</p>
     */
    inline StartBatchJobResult& WithExecutionId(const Aws::String& value) { SetExecutionId(value); return *this;}

    /**
     * <p>The unique identifier of this execution of the batch job.</p>
     */
    inline StartBatchJobResult& WithExecutionId(Aws::String&& value) { SetExecutionId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of this execution of the batch job.</p>
     */
    inline StartBatchJobResult& WithExecutionId(const char* value) { SetExecutionId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StartBatchJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StartBatchJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StartBatchJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_executionId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
