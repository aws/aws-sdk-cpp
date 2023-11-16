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
  class StartResourceStateUpdateResult
  {
  public:
    AWS_IMAGEBUILDER_API StartResourceStateUpdateResult();
    AWS_IMAGEBUILDER_API StartResourceStateUpdateResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IMAGEBUILDER_API StartResourceStateUpdateResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Identifies the lifecycle runtime instance that started the resource state
     * update.</p>
     */
    inline const Aws::String& GetLifecycleExecutionId() const{ return m_lifecycleExecutionId; }

    /**
     * <p>Identifies the lifecycle runtime instance that started the resource state
     * update.</p>
     */
    inline void SetLifecycleExecutionId(const Aws::String& value) { m_lifecycleExecutionId = value; }

    /**
     * <p>Identifies the lifecycle runtime instance that started the resource state
     * update.</p>
     */
    inline void SetLifecycleExecutionId(Aws::String&& value) { m_lifecycleExecutionId = std::move(value); }

    /**
     * <p>Identifies the lifecycle runtime instance that started the resource state
     * update.</p>
     */
    inline void SetLifecycleExecutionId(const char* value) { m_lifecycleExecutionId.assign(value); }

    /**
     * <p>Identifies the lifecycle runtime instance that started the resource state
     * update.</p>
     */
    inline StartResourceStateUpdateResult& WithLifecycleExecutionId(const Aws::String& value) { SetLifecycleExecutionId(value); return *this;}

    /**
     * <p>Identifies the lifecycle runtime instance that started the resource state
     * update.</p>
     */
    inline StartResourceStateUpdateResult& WithLifecycleExecutionId(Aws::String&& value) { SetLifecycleExecutionId(std::move(value)); return *this;}

    /**
     * <p>Identifies the lifecycle runtime instance that started the resource state
     * update.</p>
     */
    inline StartResourceStateUpdateResult& WithLifecycleExecutionId(const char* value) { SetLifecycleExecutionId(value); return *this;}


    /**
     * <p>The requested ARN of the Image Builder resource for the asynchronous
     * update.</p>
     */
    inline const Aws::String& GetResourceArn() const{ return m_resourceArn; }

    /**
     * <p>The requested ARN of the Image Builder resource for the asynchronous
     * update.</p>
     */
    inline void SetResourceArn(const Aws::String& value) { m_resourceArn = value; }

    /**
     * <p>The requested ARN of the Image Builder resource for the asynchronous
     * update.</p>
     */
    inline void SetResourceArn(Aws::String&& value) { m_resourceArn = std::move(value); }

    /**
     * <p>The requested ARN of the Image Builder resource for the asynchronous
     * update.</p>
     */
    inline void SetResourceArn(const char* value) { m_resourceArn.assign(value); }

    /**
     * <p>The requested ARN of the Image Builder resource for the asynchronous
     * update.</p>
     */
    inline StartResourceStateUpdateResult& WithResourceArn(const Aws::String& value) { SetResourceArn(value); return *this;}

    /**
     * <p>The requested ARN of the Image Builder resource for the asynchronous
     * update.</p>
     */
    inline StartResourceStateUpdateResult& WithResourceArn(Aws::String&& value) { SetResourceArn(std::move(value)); return *this;}

    /**
     * <p>The requested ARN of the Image Builder resource for the asynchronous
     * update.</p>
     */
    inline StartResourceStateUpdateResult& WithResourceArn(const char* value) { SetResourceArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StartResourceStateUpdateResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StartResourceStateUpdateResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StartResourceStateUpdateResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_lifecycleExecutionId;

    Aws::String m_resourceArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
