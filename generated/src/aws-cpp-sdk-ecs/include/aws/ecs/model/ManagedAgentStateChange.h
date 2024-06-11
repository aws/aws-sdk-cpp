﻿/**
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
  class ManagedAgentStateChange
  {
  public:
    AWS_ECS_API ManagedAgentStateChange();
    AWS_ECS_API ManagedAgentStateChange(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API ManagedAgentStateChange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the container that's associated with the managed agent.</p>
     */
    inline const Aws::String& GetContainerName() const{ return m_containerName; }
    inline bool ContainerNameHasBeenSet() const { return m_containerNameHasBeenSet; }
    inline void SetContainerName(const Aws::String& value) { m_containerNameHasBeenSet = true; m_containerName = value; }
    inline void SetContainerName(Aws::String&& value) { m_containerNameHasBeenSet = true; m_containerName = std::move(value); }
    inline void SetContainerName(const char* value) { m_containerNameHasBeenSet = true; m_containerName.assign(value); }
    inline ManagedAgentStateChange& WithContainerName(const Aws::String& value) { SetContainerName(value); return *this;}
    inline ManagedAgentStateChange& WithContainerName(Aws::String&& value) { SetContainerName(std::move(value)); return *this;}
    inline ManagedAgentStateChange& WithContainerName(const char* value) { SetContainerName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the managed agent.</p>
     */
    inline const ManagedAgentName& GetManagedAgentName() const{ return m_managedAgentName; }
    inline bool ManagedAgentNameHasBeenSet() const { return m_managedAgentNameHasBeenSet; }
    inline void SetManagedAgentName(const ManagedAgentName& value) { m_managedAgentNameHasBeenSet = true; m_managedAgentName = value; }
    inline void SetManagedAgentName(ManagedAgentName&& value) { m_managedAgentNameHasBeenSet = true; m_managedAgentName = std::move(value); }
    inline ManagedAgentStateChange& WithManagedAgentName(const ManagedAgentName& value) { SetManagedAgentName(value); return *this;}
    inline ManagedAgentStateChange& WithManagedAgentName(ManagedAgentName&& value) { SetManagedAgentName(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the managed agent.</p>
     */
    inline const Aws::String& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const Aws::String& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(Aws::String&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline void SetStatus(const char* value) { m_statusHasBeenSet = true; m_status.assign(value); }
    inline ManagedAgentStateChange& WithStatus(const Aws::String& value) { SetStatus(value); return *this;}
    inline ManagedAgentStateChange& WithStatus(Aws::String&& value) { SetStatus(std::move(value)); return *this;}
    inline ManagedAgentStateChange& WithStatus(const char* value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reason for the status of the managed agent.</p>
     */
    inline const Aws::String& GetReason() const{ return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    inline void SetReason(const Aws::String& value) { m_reasonHasBeenSet = true; m_reason = value; }
    inline void SetReason(Aws::String&& value) { m_reasonHasBeenSet = true; m_reason = std::move(value); }
    inline void SetReason(const char* value) { m_reasonHasBeenSet = true; m_reason.assign(value); }
    inline ManagedAgentStateChange& WithReason(const Aws::String& value) { SetReason(value); return *this;}
    inline ManagedAgentStateChange& WithReason(Aws::String&& value) { SetReason(std::move(value)); return *this;}
    inline ManagedAgentStateChange& WithReason(const char* value) { SetReason(value); return *this;}
    ///@}
  private:

    Aws::String m_containerName;
    bool m_containerNameHasBeenSet = false;

    ManagedAgentName m_managedAgentName;
    bool m_managedAgentNameHasBeenSet = false;

    Aws::String m_status;
    bool m_statusHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
