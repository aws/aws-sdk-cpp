/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/DataRepositoryTaskLifecycle.h>
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
namespace FSx
{
namespace Model
{
  class CancelDataRepositoryTaskResult
  {
  public:
    AWS_FSX_API CancelDataRepositoryTaskResult();
    AWS_FSX_API CancelDataRepositoryTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_FSX_API CancelDataRepositoryTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The lifecycle status of the data repository task, as follows:</p> <ul> <li>
     * <p> <code>PENDING</code> - Amazon FSx has not started the task.</p> </li> <li>
     * <p> <code>EXECUTING</code> - Amazon FSx is processing the task.</p> </li> <li>
     * <p> <code>FAILED</code> - Amazon FSx was not able to complete the task. For
     * example, there may be files the task failed to process. The
     * <a>DataRepositoryTaskFailureDetails</a> property provides more information about
     * task failures.</p> </li> <li> <p> <code>SUCCEEDED</code> - FSx completed the
     * task successfully.</p> </li> <li> <p> <code>CANCELED</code> - Amazon FSx
     * canceled the task and it did not complete.</p> </li> <li> <p>
     * <code>CANCELING</code> - FSx is in process of canceling the task.</p> </li>
     * </ul>
     */
    inline const DataRepositoryTaskLifecycle& GetLifecycle() const{ return m_lifecycle; }

    /**
     * <p>The lifecycle status of the data repository task, as follows:</p> <ul> <li>
     * <p> <code>PENDING</code> - Amazon FSx has not started the task.</p> </li> <li>
     * <p> <code>EXECUTING</code> - Amazon FSx is processing the task.</p> </li> <li>
     * <p> <code>FAILED</code> - Amazon FSx was not able to complete the task. For
     * example, there may be files the task failed to process. The
     * <a>DataRepositoryTaskFailureDetails</a> property provides more information about
     * task failures.</p> </li> <li> <p> <code>SUCCEEDED</code> - FSx completed the
     * task successfully.</p> </li> <li> <p> <code>CANCELED</code> - Amazon FSx
     * canceled the task and it did not complete.</p> </li> <li> <p>
     * <code>CANCELING</code> - FSx is in process of canceling the task.</p> </li>
     * </ul>
     */
    inline void SetLifecycle(const DataRepositoryTaskLifecycle& value) { m_lifecycle = value; }

    /**
     * <p>The lifecycle status of the data repository task, as follows:</p> <ul> <li>
     * <p> <code>PENDING</code> - Amazon FSx has not started the task.</p> </li> <li>
     * <p> <code>EXECUTING</code> - Amazon FSx is processing the task.</p> </li> <li>
     * <p> <code>FAILED</code> - Amazon FSx was not able to complete the task. For
     * example, there may be files the task failed to process. The
     * <a>DataRepositoryTaskFailureDetails</a> property provides more information about
     * task failures.</p> </li> <li> <p> <code>SUCCEEDED</code> - FSx completed the
     * task successfully.</p> </li> <li> <p> <code>CANCELED</code> - Amazon FSx
     * canceled the task and it did not complete.</p> </li> <li> <p>
     * <code>CANCELING</code> - FSx is in process of canceling the task.</p> </li>
     * </ul>
     */
    inline void SetLifecycle(DataRepositoryTaskLifecycle&& value) { m_lifecycle = std::move(value); }

    /**
     * <p>The lifecycle status of the data repository task, as follows:</p> <ul> <li>
     * <p> <code>PENDING</code> - Amazon FSx has not started the task.</p> </li> <li>
     * <p> <code>EXECUTING</code> - Amazon FSx is processing the task.</p> </li> <li>
     * <p> <code>FAILED</code> - Amazon FSx was not able to complete the task. For
     * example, there may be files the task failed to process. The
     * <a>DataRepositoryTaskFailureDetails</a> property provides more information about
     * task failures.</p> </li> <li> <p> <code>SUCCEEDED</code> - FSx completed the
     * task successfully.</p> </li> <li> <p> <code>CANCELED</code> - Amazon FSx
     * canceled the task and it did not complete.</p> </li> <li> <p>
     * <code>CANCELING</code> - FSx is in process of canceling the task.</p> </li>
     * </ul>
     */
    inline CancelDataRepositoryTaskResult& WithLifecycle(const DataRepositoryTaskLifecycle& value) { SetLifecycle(value); return *this;}

    /**
     * <p>The lifecycle status of the data repository task, as follows:</p> <ul> <li>
     * <p> <code>PENDING</code> - Amazon FSx has not started the task.</p> </li> <li>
     * <p> <code>EXECUTING</code> - Amazon FSx is processing the task.</p> </li> <li>
     * <p> <code>FAILED</code> - Amazon FSx was not able to complete the task. For
     * example, there may be files the task failed to process. The
     * <a>DataRepositoryTaskFailureDetails</a> property provides more information about
     * task failures.</p> </li> <li> <p> <code>SUCCEEDED</code> - FSx completed the
     * task successfully.</p> </li> <li> <p> <code>CANCELED</code> - Amazon FSx
     * canceled the task and it did not complete.</p> </li> <li> <p>
     * <code>CANCELING</code> - FSx is in process of canceling the task.</p> </li>
     * </ul>
     */
    inline CancelDataRepositoryTaskResult& WithLifecycle(DataRepositoryTaskLifecycle&& value) { SetLifecycle(std::move(value)); return *this;}


    /**
     * <p>The ID of the task being canceled.</p>
     */
    inline const Aws::String& GetTaskId() const{ return m_taskId; }

    /**
     * <p>The ID of the task being canceled.</p>
     */
    inline void SetTaskId(const Aws::String& value) { m_taskId = value; }

    /**
     * <p>The ID of the task being canceled.</p>
     */
    inline void SetTaskId(Aws::String&& value) { m_taskId = std::move(value); }

    /**
     * <p>The ID of the task being canceled.</p>
     */
    inline void SetTaskId(const char* value) { m_taskId.assign(value); }

    /**
     * <p>The ID of the task being canceled.</p>
     */
    inline CancelDataRepositoryTaskResult& WithTaskId(const Aws::String& value) { SetTaskId(value); return *this;}

    /**
     * <p>The ID of the task being canceled.</p>
     */
    inline CancelDataRepositoryTaskResult& WithTaskId(Aws::String&& value) { SetTaskId(std::move(value)); return *this;}

    /**
     * <p>The ID of the task being canceled.</p>
     */
    inline CancelDataRepositoryTaskResult& WithTaskId(const char* value) { SetTaskId(value); return *this;}

  private:

    DataRepositoryTaskLifecycle m_lifecycle;

    Aws::String m_taskId;
  };

} // namespace Model
} // namespace FSx
} // namespace Aws
