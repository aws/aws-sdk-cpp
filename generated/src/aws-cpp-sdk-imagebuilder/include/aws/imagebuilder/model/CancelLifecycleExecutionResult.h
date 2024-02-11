/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
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
namespace imagebuilder
{
namespace Model
{
  class CancelLifecycleExecutionResult
  {
  public:
    AWS_IMAGEBUILDER_API CancelLifecycleExecutionResult();
    AWS_IMAGEBUILDER_API CancelLifecycleExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IMAGEBUILDER_API CancelLifecycleExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier for the image lifecycle runtime instance that was
     * canceled.</p>
     */
    inline const Aws::String& GetLifecycleExecutionId() const{ return m_lifecycleExecutionId; }

    /**
     * <p>The unique identifier for the image lifecycle runtime instance that was
     * canceled.</p>
     */
    inline void SetLifecycleExecutionId(const Aws::String& value) { m_lifecycleExecutionId = value; }

    /**
     * <p>The unique identifier for the image lifecycle runtime instance that was
     * canceled.</p>
     */
    inline void SetLifecycleExecutionId(Aws::String&& value) { m_lifecycleExecutionId = std::move(value); }

    /**
     * <p>The unique identifier for the image lifecycle runtime instance that was
     * canceled.</p>
     */
    inline void SetLifecycleExecutionId(const char* value) { m_lifecycleExecutionId.assign(value); }

    /**
     * <p>The unique identifier for the image lifecycle runtime instance that was
     * canceled.</p>
     */
    inline CancelLifecycleExecutionResult& WithLifecycleExecutionId(const Aws::String& value) { SetLifecycleExecutionId(value); return *this;}

    /**
     * <p>The unique identifier for the image lifecycle runtime instance that was
     * canceled.</p>
     */
    inline CancelLifecycleExecutionResult& WithLifecycleExecutionId(Aws::String&& value) { SetLifecycleExecutionId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the image lifecycle runtime instance that was
     * canceled.</p>
     */
    inline CancelLifecycleExecutionResult& WithLifecycleExecutionId(const char* value) { SetLifecycleExecutionId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CancelLifecycleExecutionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CancelLifecycleExecutionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CancelLifecycleExecutionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_lifecycleExecutionId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
