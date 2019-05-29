/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_SSM_API DeregisterTargetFromMaintenanceWindowResult
  {
  public:
    DeregisterTargetFromMaintenanceWindowResult();
    DeregisterTargetFromMaintenanceWindowResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DeregisterTargetFromMaintenanceWindowResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the maintenance window the target was removed from.</p>
     */
    inline const Aws::String& GetWindowId() const{ return m_windowId; }

    /**
     * <p>The ID of the maintenance window the target was removed from.</p>
     */
    inline void SetWindowId(const Aws::String& value) { m_windowId = value; }

    /**
     * <p>The ID of the maintenance window the target was removed from.</p>
     */
    inline void SetWindowId(Aws::String&& value) { m_windowId = std::move(value); }

    /**
     * <p>The ID of the maintenance window the target was removed from.</p>
     */
    inline void SetWindowId(const char* value) { m_windowId.assign(value); }

    /**
     * <p>The ID of the maintenance window the target was removed from.</p>
     */
    inline DeregisterTargetFromMaintenanceWindowResult& WithWindowId(const Aws::String& value) { SetWindowId(value); return *this;}

    /**
     * <p>The ID of the maintenance window the target was removed from.</p>
     */
    inline DeregisterTargetFromMaintenanceWindowResult& WithWindowId(Aws::String&& value) { SetWindowId(std::move(value)); return *this;}

    /**
     * <p>The ID of the maintenance window the target was removed from.</p>
     */
    inline DeregisterTargetFromMaintenanceWindowResult& WithWindowId(const char* value) { SetWindowId(value); return *this;}


    /**
     * <p>The ID of the removed target definition.</p>
     */
    inline const Aws::String& GetWindowTargetId() const{ return m_windowTargetId; }

    /**
     * <p>The ID of the removed target definition.</p>
     */
    inline void SetWindowTargetId(const Aws::String& value) { m_windowTargetId = value; }

    /**
     * <p>The ID of the removed target definition.</p>
     */
    inline void SetWindowTargetId(Aws::String&& value) { m_windowTargetId = std::move(value); }

    /**
     * <p>The ID of the removed target definition.</p>
     */
    inline void SetWindowTargetId(const char* value) { m_windowTargetId.assign(value); }

    /**
     * <p>The ID of the removed target definition.</p>
     */
    inline DeregisterTargetFromMaintenanceWindowResult& WithWindowTargetId(const Aws::String& value) { SetWindowTargetId(value); return *this;}

    /**
     * <p>The ID of the removed target definition.</p>
     */
    inline DeregisterTargetFromMaintenanceWindowResult& WithWindowTargetId(Aws::String&& value) { SetWindowTargetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the removed target definition.</p>
     */
    inline DeregisterTargetFromMaintenanceWindowResult& WithWindowTargetId(const char* value) { SetWindowTargetId(value); return *this;}

  private:

    Aws::String m_windowId;

    Aws::String m_windowTargetId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
