/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/TaskStatus.h>
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
namespace Omics
{
namespace Model
{
  class GetRunTaskResult
  {
  public:
    AWS_OMICS_API GetRunTaskResult();
    AWS_OMICS_API GetRunTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API GetRunTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The task's CPU usage.</p>
     */
    inline int GetCpus() const{ return m_cpus; }

    /**
     * <p>The task's CPU usage.</p>
     */
    inline void SetCpus(int value) { m_cpus = value; }

    /**
     * <p>The task's CPU usage.</p>
     */
    inline GetRunTaskResult& WithCpus(int value) { SetCpus(value); return *this;}


    /**
     * <p>When the task was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>When the task was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>When the task was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>When the task was created.</p>
     */
    inline GetRunTaskResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>When the task was created.</p>
     */
    inline GetRunTaskResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The task's log stream.</p>
     */
    inline const Aws::String& GetLogStream() const{ return m_logStream; }

    /**
     * <p>The task's log stream.</p>
     */
    inline void SetLogStream(const Aws::String& value) { m_logStream = value; }

    /**
     * <p>The task's log stream.</p>
     */
    inline void SetLogStream(Aws::String&& value) { m_logStream = std::move(value); }

    /**
     * <p>The task's log stream.</p>
     */
    inline void SetLogStream(const char* value) { m_logStream.assign(value); }

    /**
     * <p>The task's log stream.</p>
     */
    inline GetRunTaskResult& WithLogStream(const Aws::String& value) { SetLogStream(value); return *this;}

    /**
     * <p>The task's log stream.</p>
     */
    inline GetRunTaskResult& WithLogStream(Aws::String&& value) { SetLogStream(std::move(value)); return *this;}

    /**
     * <p>The task's log stream.</p>
     */
    inline GetRunTaskResult& WithLogStream(const char* value) { SetLogStream(value); return *this;}


    /**
     * <p>The task's memory setting.</p>
     */
    inline int GetMemory() const{ return m_memory; }

    /**
     * <p>The task's memory setting.</p>
     */
    inline void SetMemory(int value) { m_memory = value; }

    /**
     * <p>The task's memory setting.</p>
     */
    inline GetRunTaskResult& WithMemory(int value) { SetMemory(value); return *this;}


    /**
     * <p>The task's name.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The task's name.</p>
     */
    inline void SetName(const Aws::String& value) { m_name = value; }

    /**
     * <p>The task's name.</p>
     */
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }

    /**
     * <p>The task's name.</p>
     */
    inline void SetName(const char* value) { m_name.assign(value); }

    /**
     * <p>The task's name.</p>
     */
    inline GetRunTaskResult& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The task's name.</p>
     */
    inline GetRunTaskResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The task's name.</p>
     */
    inline GetRunTaskResult& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The task's start time.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The task's start time.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTime = value; }

    /**
     * <p>The task's start time.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTime = std::move(value); }

    /**
     * <p>The task's start time.</p>
     */
    inline GetRunTaskResult& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The task's start time.</p>
     */
    inline GetRunTaskResult& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The task's status.</p>
     */
    inline const TaskStatus& GetStatus() const{ return m_status; }

    /**
     * <p>The task's status.</p>
     */
    inline void SetStatus(const TaskStatus& value) { m_status = value; }

    /**
     * <p>The task's status.</p>
     */
    inline void SetStatus(TaskStatus&& value) { m_status = std::move(value); }

    /**
     * <p>The task's status.</p>
     */
    inline GetRunTaskResult& WithStatus(const TaskStatus& value) { SetStatus(value); return *this;}

    /**
     * <p>The task's status.</p>
     */
    inline GetRunTaskResult& WithStatus(TaskStatus&& value) { SetStatus(std::move(value)); return *this;}


    /**
     * <p>The task's status message.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }

    /**
     * <p>The task's status message.</p>
     */
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessage = value; }

    /**
     * <p>The task's status message.</p>
     */
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessage = std::move(value); }

    /**
     * <p>The task's status message.</p>
     */
    inline void SetStatusMessage(const char* value) { m_statusMessage.assign(value); }

    /**
     * <p>The task's status message.</p>
     */
    inline GetRunTaskResult& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}

    /**
     * <p>The task's status message.</p>
     */
    inline GetRunTaskResult& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}

    /**
     * <p>The task's status message.</p>
     */
    inline GetRunTaskResult& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}


    /**
     * <p>The task's stop time.</p>
     */
    inline const Aws::Utils::DateTime& GetStopTime() const{ return m_stopTime; }

    /**
     * <p>The task's stop time.</p>
     */
    inline void SetStopTime(const Aws::Utils::DateTime& value) { m_stopTime = value; }

    /**
     * <p>The task's stop time.</p>
     */
    inline void SetStopTime(Aws::Utils::DateTime&& value) { m_stopTime = std::move(value); }

    /**
     * <p>The task's stop time.</p>
     */
    inline GetRunTaskResult& WithStopTime(const Aws::Utils::DateTime& value) { SetStopTime(value); return *this;}

    /**
     * <p>The task's stop time.</p>
     */
    inline GetRunTaskResult& WithStopTime(Aws::Utils::DateTime&& value) { SetStopTime(std::move(value)); return *this;}


    /**
     * <p>The task's ID.</p>
     */
    inline const Aws::String& GetTaskId() const{ return m_taskId; }

    /**
     * <p>The task's ID.</p>
     */
    inline void SetTaskId(const Aws::String& value) { m_taskId = value; }

    /**
     * <p>The task's ID.</p>
     */
    inline void SetTaskId(Aws::String&& value) { m_taskId = std::move(value); }

    /**
     * <p>The task's ID.</p>
     */
    inline void SetTaskId(const char* value) { m_taskId.assign(value); }

    /**
     * <p>The task's ID.</p>
     */
    inline GetRunTaskResult& WithTaskId(const Aws::String& value) { SetTaskId(value); return *this;}

    /**
     * <p>The task's ID.</p>
     */
    inline GetRunTaskResult& WithTaskId(Aws::String&& value) { SetTaskId(std::move(value)); return *this;}

    /**
     * <p>The task's ID.</p>
     */
    inline GetRunTaskResult& WithTaskId(const char* value) { SetTaskId(value); return *this;}

  private:

    int m_cpus;

    Aws::Utils::DateTime m_creationTime;

    Aws::String m_logStream;

    int m_memory;

    Aws::String m_name;

    Aws::Utils::DateTime m_startTime;

    TaskStatus m_status;

    Aws::String m_statusMessage;

    Aws::Utils::DateTime m_stopTime;

    Aws::String m_taskId;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
