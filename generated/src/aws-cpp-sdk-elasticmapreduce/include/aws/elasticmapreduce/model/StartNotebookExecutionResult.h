/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
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
namespace EMR
{
namespace Model
{
  class StartNotebookExecutionResult
  {
  public:
    AWS_EMR_API StartNotebookExecutionResult();
    AWS_EMR_API StartNotebookExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_EMR_API StartNotebookExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier of the notebook execution.</p>
     */
    inline const Aws::String& GetNotebookExecutionId() const{ return m_notebookExecutionId; }

    /**
     * <p>The unique identifier of the notebook execution.</p>
     */
    inline void SetNotebookExecutionId(const Aws::String& value) { m_notebookExecutionId = value; }

    /**
     * <p>The unique identifier of the notebook execution.</p>
     */
    inline void SetNotebookExecutionId(Aws::String&& value) { m_notebookExecutionId = std::move(value); }

    /**
     * <p>The unique identifier of the notebook execution.</p>
     */
    inline void SetNotebookExecutionId(const char* value) { m_notebookExecutionId.assign(value); }

    /**
     * <p>The unique identifier of the notebook execution.</p>
     */
    inline StartNotebookExecutionResult& WithNotebookExecutionId(const Aws::String& value) { SetNotebookExecutionId(value); return *this;}

    /**
     * <p>The unique identifier of the notebook execution.</p>
     */
    inline StartNotebookExecutionResult& WithNotebookExecutionId(Aws::String&& value) { SetNotebookExecutionId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the notebook execution.</p>
     */
    inline StartNotebookExecutionResult& WithNotebookExecutionId(const char* value) { SetNotebookExecutionId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StartNotebookExecutionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StartNotebookExecutionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StartNotebookExecutionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_notebookExecutionId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
