/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ECS
{
namespace Model
{

  /**
   * <p>An object representing the protection status details for a task. You can set
   * the protection status with the <a>UpdateTaskProtection</a> API and get the
   * status of tasks with the <a>GetTaskProtection</a> API.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ProtectedTask">AWS
   * API Reference</a></p>
   */
  class ProtectedTask
  {
  public:
    AWS_ECS_API ProtectedTask();
    AWS_ECS_API ProtectedTask(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API ProtectedTask& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The task ARN.</p>
     */
    inline const Aws::String& GetTaskArn() const{ return m_taskArn; }

    /**
     * <p>The task ARN.</p>
     */
    inline bool TaskArnHasBeenSet() const { return m_taskArnHasBeenSet; }

    /**
     * <p>The task ARN.</p>
     */
    inline void SetTaskArn(const Aws::String& value) { m_taskArnHasBeenSet = true; m_taskArn = value; }

    /**
     * <p>The task ARN.</p>
     */
    inline void SetTaskArn(Aws::String&& value) { m_taskArnHasBeenSet = true; m_taskArn = std::move(value); }

    /**
     * <p>The task ARN.</p>
     */
    inline void SetTaskArn(const char* value) { m_taskArnHasBeenSet = true; m_taskArn.assign(value); }

    /**
     * <p>The task ARN.</p>
     */
    inline ProtectedTask& WithTaskArn(const Aws::String& value) { SetTaskArn(value); return *this;}

    /**
     * <p>The task ARN.</p>
     */
    inline ProtectedTask& WithTaskArn(Aws::String&& value) { SetTaskArn(std::move(value)); return *this;}

    /**
     * <p>The task ARN.</p>
     */
    inline ProtectedTask& WithTaskArn(const char* value) { SetTaskArn(value); return *this;}


    /**
     * <p>The protection status of the task. If scale-in protection is enabled for a
     * task, the value is <code>true</code>. Otherwise, it is <code>false</code>.</p>
     */
    inline bool GetProtectionEnabled() const{ return m_protectionEnabled; }

    /**
     * <p>The protection status of the task. If scale-in protection is enabled for a
     * task, the value is <code>true</code>. Otherwise, it is <code>false</code>.</p>
     */
    inline bool ProtectionEnabledHasBeenSet() const { return m_protectionEnabledHasBeenSet; }

    /**
     * <p>The protection status of the task. If scale-in protection is enabled for a
     * task, the value is <code>true</code>. Otherwise, it is <code>false</code>.</p>
     */
    inline void SetProtectionEnabled(bool value) { m_protectionEnabledHasBeenSet = true; m_protectionEnabled = value; }

    /**
     * <p>The protection status of the task. If scale-in protection is enabled for a
     * task, the value is <code>true</code>. Otherwise, it is <code>false</code>.</p>
     */
    inline ProtectedTask& WithProtectionEnabled(bool value) { SetProtectionEnabled(value); return *this;}


    /**
     * <p>The epoch time when protection for the task will expire.</p>
     */
    inline const Aws::Utils::DateTime& GetExpirationDate() const{ return m_expirationDate; }

    /**
     * <p>The epoch time when protection for the task will expire.</p>
     */
    inline bool ExpirationDateHasBeenSet() const { return m_expirationDateHasBeenSet; }

    /**
     * <p>The epoch time when protection for the task will expire.</p>
     */
    inline void SetExpirationDate(const Aws::Utils::DateTime& value) { m_expirationDateHasBeenSet = true; m_expirationDate = value; }

    /**
     * <p>The epoch time when protection for the task will expire.</p>
     */
    inline void SetExpirationDate(Aws::Utils::DateTime&& value) { m_expirationDateHasBeenSet = true; m_expirationDate = std::move(value); }

    /**
     * <p>The epoch time when protection for the task will expire.</p>
     */
    inline ProtectedTask& WithExpirationDate(const Aws::Utils::DateTime& value) { SetExpirationDate(value); return *this;}

    /**
     * <p>The epoch time when protection for the task will expire.</p>
     */
    inline ProtectedTask& WithExpirationDate(Aws::Utils::DateTime&& value) { SetExpirationDate(std::move(value)); return *this;}

  private:

    Aws::String m_taskArn;
    bool m_taskArnHasBeenSet = false;

    bool m_protectionEnabled;
    bool m_protectionEnabledHasBeenSet = false;

    Aws::Utils::DateTime m_expirationDate;
    bool m_expirationDateHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
