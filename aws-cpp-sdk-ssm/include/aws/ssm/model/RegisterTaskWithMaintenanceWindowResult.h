﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
  class AWS_SSM_API RegisterTaskWithMaintenanceWindowResult
  {
  public:
    RegisterTaskWithMaintenanceWindowResult();
    RegisterTaskWithMaintenanceWindowResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    RegisterTaskWithMaintenanceWindowResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The id of the task in the Maintenance Window.</p>
     */
    inline const Aws::String& GetWindowTaskId() const{ return m_windowTaskId; }

    /**
     * <p>The id of the task in the Maintenance Window.</p>
     */
    inline void SetWindowTaskId(const Aws::String& value) { m_windowTaskId = value; }

    /**
     * <p>The id of the task in the Maintenance Window.</p>
     */
    inline void SetWindowTaskId(Aws::String&& value) { m_windowTaskId = value; }

    /**
     * <p>The id of the task in the Maintenance Window.</p>
     */
    inline void SetWindowTaskId(const char* value) { m_windowTaskId.assign(value); }

    /**
     * <p>The id of the task in the Maintenance Window.</p>
     */
    inline RegisterTaskWithMaintenanceWindowResult& WithWindowTaskId(const Aws::String& value) { SetWindowTaskId(value); return *this;}

    /**
     * <p>The id of the task in the Maintenance Window.</p>
     */
    inline RegisterTaskWithMaintenanceWindowResult& WithWindowTaskId(Aws::String&& value) { SetWindowTaskId(value); return *this;}

    /**
     * <p>The id of the task in the Maintenance Window.</p>
     */
    inline RegisterTaskWithMaintenanceWindowResult& WithWindowTaskId(const char* value) { SetWindowTaskId(value); return *this;}

  private:
    Aws::String m_windowTaskId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
