/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/imagebuilder/Imagebuilder_EXPORTS.h>
#include <aws/imagebuilder/model/LifecycleExecution.h>
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
  class GetLifecycleExecutionResult
  {
  public:
    AWS_IMAGEBUILDER_API GetLifecycleExecutionResult();
    AWS_IMAGEBUILDER_API GetLifecycleExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IMAGEBUILDER_API GetLifecycleExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Runtime details for the specified runtime instance of the lifecycle
     * policy.</p>
     */
    inline const LifecycleExecution& GetLifecycleExecution() const{ return m_lifecycleExecution; }

    /**
     * <p>Runtime details for the specified runtime instance of the lifecycle
     * policy.</p>
     */
    inline void SetLifecycleExecution(const LifecycleExecution& value) { m_lifecycleExecution = value; }

    /**
     * <p>Runtime details for the specified runtime instance of the lifecycle
     * policy.</p>
     */
    inline void SetLifecycleExecution(LifecycleExecution&& value) { m_lifecycleExecution = std::move(value); }

    /**
     * <p>Runtime details for the specified runtime instance of the lifecycle
     * policy.</p>
     */
    inline GetLifecycleExecutionResult& WithLifecycleExecution(const LifecycleExecution& value) { SetLifecycleExecution(value); return *this;}

    /**
     * <p>Runtime details for the specified runtime instance of the lifecycle
     * policy.</p>
     */
    inline GetLifecycleExecutionResult& WithLifecycleExecution(LifecycleExecution&& value) { SetLifecycleExecution(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetLifecycleExecutionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetLifecycleExecutionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetLifecycleExecutionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    LifecycleExecution m_lifecycleExecution;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace imagebuilder
} // namespace Aws
