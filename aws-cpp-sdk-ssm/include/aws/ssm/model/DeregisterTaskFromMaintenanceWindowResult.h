﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
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
namespace SSM
{
namespace Model
{
  class AWS_SSM_API DeregisterTaskFromMaintenanceWindowResult
  {
  public:
    DeregisterTaskFromMaintenanceWindowResult();
    DeregisterTaskFromMaintenanceWindowResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DeregisterTaskFromMaintenanceWindowResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the maintenance window the task was removed from.</p>
     */
    inline const Aws::String& GetWindowId() const{ return m_windowId; }

    /**
     * <p>The ID of the maintenance window the task was removed from.</p>
     */
    inline void SetWindowId(const Aws::String& value) { m_windowId = value; }

    /**
     * <p>The ID of the maintenance window the task was removed from.</p>
     */
    inline void SetWindowId(Aws::String&& value) { m_windowId = std::move(value); }

    /**
     * <p>The ID of the maintenance window the task was removed from.</p>
     */
    inline void SetWindowId(const char* value) { m_windowId.assign(value); }

    /**
     * <p>The ID of the maintenance window the task was removed from.</p>
     */
    inline DeregisterTaskFromMaintenanceWindowResult& WithWindowId(const Aws::String& value) { SetWindowId(value); return *this;}

    /**
     * <p>The ID of the maintenance window the task was removed from.</p>
     */
    inline DeregisterTaskFromMaintenanceWindowResult& WithWindowId(Aws::String&& value) { SetWindowId(std::move(value)); return *this;}

    /**
     * <p>The ID of the maintenance window the task was removed from.</p>
     */
    inline DeregisterTaskFromMaintenanceWindowResult& WithWindowId(const char* value) { SetWindowId(value); return *this;}


    /**
     * <p>The ID of the task removed from the maintenance window.</p>
     */
    inline const Aws::String& GetWindowTaskId() const{ return m_windowTaskId; }

    /**
     * <p>The ID of the task removed from the maintenance window.</p>
     */
    inline void SetWindowTaskId(const Aws::String& value) { m_windowTaskId = value; }

    /**
     * <p>The ID of the task removed from the maintenance window.</p>
     */
    inline void SetWindowTaskId(Aws::String&& value) { m_windowTaskId = std::move(value); }

    /**
     * <p>The ID of the task removed from the maintenance window.</p>
     */
    inline void SetWindowTaskId(const char* value) { m_windowTaskId.assign(value); }

    /**
     * <p>The ID of the task removed from the maintenance window.</p>
     */
    inline DeregisterTaskFromMaintenanceWindowResult& WithWindowTaskId(const Aws::String& value) { SetWindowTaskId(value); return *this;}

    /**
     * <p>The ID of the task removed from the maintenance window.</p>
     */
    inline DeregisterTaskFromMaintenanceWindowResult& WithWindowTaskId(Aws::String&& value) { SetWindowTaskId(std::move(value)); return *this;}

    /**
     * <p>The ID of the task removed from the maintenance window.</p>
     */
    inline DeregisterTaskFromMaintenanceWindowResult& WithWindowTaskId(const char* value) { SetWindowTaskId(value); return *this;}

  private:

    Aws::String m_windowId;

    Aws::String m_windowTaskId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
