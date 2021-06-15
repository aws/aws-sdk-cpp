/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/model/ManagedAgentName.h>
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
   * <p>An object representing a change in state for a managed agent.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/ManagedAgentStateChange">AWS
   * API Reference</a></p>
   */
  class AWS_ECS_API ManagedAgentStateChange
  {
  public:
    ManagedAgentStateChange();
    ManagedAgentStateChange(Aws::Utils::Json::JsonView jsonValue);
    ManagedAgentStateChange& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the container associated with the managed agent.</p>
     */
    inline const Aws::String& GetContainerName() const{ return m_containerName; }

    /**
     * <p>The name of the container associated with the managed agent.</p>
     */
    inline bool ContainerNameHasBeenSet() const { return m_containerNameHasBeenSet; }

    /**
     * <p>The name of the container associated with the managed agent.</p>
     */
    inline void SetContainerName(const Aws::String& value) { m_containerNameHasBeenSet = true; m_containerName = value; }

    /**
     * <p>The name of the container associated with the managed agent.</p>
     */
    inline void SetContainerName(Aws::String&& value) { m_containerNameHasBeenSet = true; m_containerName = std::move(value); }

    /**
     * <p>The name of the container associated with the managed agent.</p>
     */
    inline void SetContainerName(const char* value) { m_containerNameHasBeenSet = true; m_containerName.assign(value); }

    /**
     * <p>The name of the container associated with the managed agent.</p>
     */
    inline ManagedAgentStateChange& WithContainerName(const Aws::String& value) { SetContainerName(value); return *this;}

    /**
     * <p>The name of the container associated with the managed agent.</p>
     */
    inline ManagedAgentStateChange& WithContainerName(Aws::String&& value) { SetContainerName(std::move(value)); return *this;}

    /**
     * <p>The name of the container associated with the managed agent.</p>
     */
    inline ManagedAgentStateChange& WithContainerName(const char* value) { SetContainerName(value); return *this;}


    /**
     * <p>The name of the managed agent.</p>
     */
    inline const ManagedAgentName& GetManagedAgentName() const{ return m_managedAgentName; }

    /**
     * <p>The name of the managed agent.</p>
     */
    inline bool ManagedAgentNameHasBeenSet() const { return m_managedAgentNameHasBeenSet; }

    /**
     * <p>The name of the managed agent.</p>
     */
    inline void SetManagedAgentName(const ManagedAgentName& value) { m_managedAgentNameHasBeenSet = true; m_managedAgentName = value; }

    /**
     * <p>The name of the managed agent.</p>
     */
    inline void SetManagedAgentName(ManagedAgentName&& value) { m_managedAgentNameHasBeenSet = true; m_managedAgentName = std::move(value); }

    /**
     * <p>The name of the managed agent.</p>
     */
    inline ManagedAgentStateChange& WithManagedAgentName(const ManagedAgentName& value) { SetManagedAgentName(value); return *this;}

    /**
     * <p>The name of the managed agent.</p>
     */
    inline ManagedAgentStateChange& WithManagedAgentName(ManagedAgentName&& value) { SetManagedAgentName(std::move(value)); return *this;}


    /**
     * <p>The status of the managed agent.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }

    /**
     * <p>The status of the managed agent.</p>
     */
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }

    /**
     * <p>The status of the managed agent.</p>
     */
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }

    /**
     * <p>The status of the managed agent.</p>
     */
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }

    /**
     * <p>The status of the managed agent.</p>
     */
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }

    /**
     * <p>The status of the managed agent.</p>
     */
    inline ManagedAgentStateChange& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}

    /**
     * <p>The status of the managed agent.</p>
     */
    inline ManagedAgentStateChange& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}

    /**
     * <p>The status of the managed agent.</p>
     */
    inline ManagedAgentStateChange& WithStatus(const char* value) { SetStatus(value); return *this;}


    /**
     * <p>The reason for the status of the managed agent.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }

    /**
     * <p>The reason for the status of the managed agent.</p>
     */
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }

    /**
     * <p>The reason for the status of the managed agent.</p>
     */
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }

    /**
     * <p>The reason for the status of the managed agent.</p>
     */
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }

    /**
     * <p>The reason for the status of the managed agent.</p>
     */
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }

    /**
     * <p>The reason for the status of the managed agent.</p>
     */
    inline ManagedAgentStateChange& WithReason(const Aws::String& value) { SetReason(value); return *this;}

    /**
     * <p>The reason for the status of the managed agent.</p>
     */
    inline ManagedAgentStateChange& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}

    /**
     * <p>The reason for the status of the managed agent.</p>
     */
    inline ManagedAgentStateChange& WithReason(const char* value) { SetReason(value); return *this;}

  private:

    Aws::String m_containerName;
    bool m_containerNameHasBeenSet;

    ManagedAgentName m_managedAgentName;
    bool m_managedAgentNameHasBeenSet;

    Aws::String m_status;
    bool m_statusHasBeenSet;

    Aws::String m_reason;
    bool m_reasonHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
