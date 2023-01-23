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

  private:

    Aws::String m_notebookExecutionId;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
