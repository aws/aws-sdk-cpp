/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>The information about the number of requested, pending, and running tasks for
   * a service revision.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ServiceRevisionSummary">AWS
   * API Reference</a></p>
   */
  class ServiceRevisionSummary
  {
  public:
    AWS_ECS_API ServiceRevisionSummary();
    AWS_ECS_API ServiceRevisionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API ServiceRevisionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ARN of the service revision.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline ServiceRevisionSummary& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline ServiceRevisionSummary& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline ServiceRevisionSummary& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of requested tasks for the service revision.</p>
     */
    inline int GetRequestedTaskCount() const{ return m_requestedTaskCount; }
    inline bool RequestedTaskCountHasBeenSet() const { return m_requestedTaskCountHasBeenSet; }
    inline void SetRequestedTaskCount(int value) { m_requestedTaskCountHasBeenSet = true; m_requestedTaskCount = value; }
    inline ServiceRevisionSummary& WithRequestedTaskCount(int value) { SetRequestedTaskCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of running tasks for the service revision.</p>
     */
    inline int GetRunningTaskCount() const{ return m_runningTaskCount; }
    inline bool RunningTaskCountHasBeenSet() const { return m_runningTaskCountHasBeenSet; }
    inline void SetRunningTaskCount(int value) { m_runningTaskCountHasBeenSet = true; m_runningTaskCount = value; }
    inline ServiceRevisionSummary& WithRunningTaskCount(int value) { SetRunningTaskCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of pending tasks for the service revision.</p>
     */
    inline int GetPendingTaskCount() const{ return m_pendingTaskCount; }
    inline bool PendingTaskCountHasBeenSet() const { return m_pendingTaskCountHasBeenSet; }
    inline void SetPendingTaskCount(int value) { m_pendingTaskCountHasBeenSet = true; m_pendingTaskCount = value; }
    inline ServiceRevisionSummary& WithPendingTaskCount(int value) { SetPendingTaskCount(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    int m_requestedTaskCount;
    bool m_requestedTaskCountHasBeenSet = false;

    int m_runningTaskCount;
    bool m_runningTaskCountHasBeenSet = false;

    int m_pendingTaskCount;
    bool m_pendingTaskCountHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
