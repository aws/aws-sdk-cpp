/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/model/ProtectedTask.h>
#include <aws/ecs/model/Failure.h>
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
namespace ECS
{
namespace Model
{
  class GetTaskProtectionResult
  {
  public:
    AWS_ECS_API GetTaskProtectionResult();
    AWS_ECS_API GetTaskProtectionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECS_API GetTaskProtectionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of tasks with the following information.</p> <ul> <li> <p>
     * <code>taskArn</code>: The task ARN.</p> </li> <li> <p>
     * <code>protectionEnabled</code>: The protection status of the task. If scale-in
     * protection is enabled for a task, the value is <code>true</code>. Otherwise, it
     * is <code>false</code>.</p> </li> <li> <p> <code>expirationDate</code>: The epoch
     * time when protection for the task will expire.</p> </li> </ul>
     */
    inline const Aws::Vector<ProtectedTask>& GetProtectedTasks() const{ return m_protectedTasks; }

    /**
     * <p>A list of tasks with the following information.</p> <ul> <li> <p>
     * <code>taskArn</code>: The task ARN.</p> </li> <li> <p>
     * <code>protectionEnabled</code>: The protection status of the task. If scale-in
     * protection is enabled for a task, the value is <code>true</code>. Otherwise, it
     * is <code>false</code>.</p> </li> <li> <p> <code>expirationDate</code>: The epoch
     * time when protection for the task will expire.</p> </li> </ul>
     */
    inline void SetProtectedTasks(const Aws::Vector<ProtectedTask>& value) { m_protectedTasks = value; }

    /**
     * <p>A list of tasks with the following information.</p> <ul> <li> <p>
     * <code>taskArn</code>: The task ARN.</p> </li> <li> <p>
     * <code>protectionEnabled</code>: The protection status of the task. If scale-in
     * protection is enabled for a task, the value is <code>true</code>. Otherwise, it
     * is <code>false</code>.</p> </li> <li> <p> <code>expirationDate</code>: The epoch
     * time when protection for the task will expire.</p> </li> </ul>
     */
    inline void SetProtectedTasks(Aws::Vector<ProtectedTask>&& value) { m_protectedTasks = std::move(value); }

    /**
     * <p>A list of tasks with the following information.</p> <ul> <li> <p>
     * <code>taskArn</code>: The task ARN.</p> </li> <li> <p>
     * <code>protectionEnabled</code>: The protection status of the task. If scale-in
     * protection is enabled for a task, the value is <code>true</code>. Otherwise, it
     * is <code>false</code>.</p> </li> <li> <p> <code>expirationDate</code>: The epoch
     * time when protection for the task will expire.</p> </li> </ul>
     */
    inline GetTaskProtectionResult& WithProtectedTasks(const Aws::Vector<ProtectedTask>& value) { SetProtectedTasks(value); return *this;}

    /**
     * <p>A list of tasks with the following information.</p> <ul> <li> <p>
     * <code>taskArn</code>: The task ARN.</p> </li> <li> <p>
     * <code>protectionEnabled</code>: The protection status of the task. If scale-in
     * protection is enabled for a task, the value is <code>true</code>. Otherwise, it
     * is <code>false</code>.</p> </li> <li> <p> <code>expirationDate</code>: The epoch
     * time when protection for the task will expire.</p> </li> </ul>
     */
    inline GetTaskProtectionResult& WithProtectedTasks(Aws::Vector<ProtectedTask>&& value) { SetProtectedTasks(std::move(value)); return *this;}

    /**
     * <p>A list of tasks with the following information.</p> <ul> <li> <p>
     * <code>taskArn</code>: The task ARN.</p> </li> <li> <p>
     * <code>protectionEnabled</code>: The protection status of the task. If scale-in
     * protection is enabled for a task, the value is <code>true</code>. Otherwise, it
     * is <code>false</code>.</p> </li> <li> <p> <code>expirationDate</code>: The epoch
     * time when protection for the task will expire.</p> </li> </ul>
     */
    inline GetTaskProtectionResult& AddProtectedTasks(const ProtectedTask& value) { m_protectedTasks.push_back(value); return *this; }

    /**
     * <p>A list of tasks with the following information.</p> <ul> <li> <p>
     * <code>taskArn</code>: The task ARN.</p> </li> <li> <p>
     * <code>protectionEnabled</code>: The protection status of the task. If scale-in
     * protection is enabled for a task, the value is <code>true</code>. Otherwise, it
     * is <code>false</code>.</p> </li> <li> <p> <code>expirationDate</code>: The epoch
     * time when protection for the task will expire.</p> </li> </ul>
     */
    inline GetTaskProtectionResult& AddProtectedTasks(ProtectedTask&& value) { m_protectedTasks.push_back(std::move(value)); return *this; }


    /**
     * <p>Any failures associated with the call.</p>
     */
    inline const Aws::Vector<Failure>& GetFailures() const{ return m_failures; }

    /**
     * <p>Any failures associated with the call.</p>
     */
    inline void SetFailures(const Aws::Vector<Failure>& value) { m_failures = value; }

    /**
     * <p>Any failures associated with the call.</p>
     */
    inline void SetFailures(Aws::Vector<Failure>&& value) { m_failures = std::move(value); }

    /**
     * <p>Any failures associated with the call.</p>
     */
    inline GetTaskProtectionResult& WithFailures(const Aws::Vector<Failure>& value) { SetFailures(value); return *this;}

    /**
     * <p>Any failures associated with the call.</p>
     */
    inline GetTaskProtectionResult& WithFailures(Aws::Vector<Failure>&& value) { SetFailures(std::move(value)); return *this;}

    /**
     * <p>Any failures associated with the call.</p>
     */
    inline GetTaskProtectionResult& AddFailures(const Failure& value) { m_failures.push_back(value); return *this; }

    /**
     * <p>Any failures associated with the call.</p>
     */
    inline GetTaskProtectionResult& AddFailures(Failure&& value) { m_failures.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<ProtectedTask> m_protectedTasks;

    Aws::Vector<Failure> m_failures;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
