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
  class AWS_SSM_API RegisterTargetWithMaintenanceWindowResult
  {
  public:
    RegisterTargetWithMaintenanceWindowResult();
    RegisterTargetWithMaintenanceWindowResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    RegisterTargetWithMaintenanceWindowResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The ID of the target definition in this Maintenance Window.</p>
     */
    inline const Aws::String& GetWindowTargetId() const{ return m_windowTargetId; }

    /**
     * <p>The ID of the target definition in this Maintenance Window.</p>
     */
    inline void SetWindowTargetId(const Aws::String& value) { m_windowTargetId = value; }

    /**
     * <p>The ID of the target definition in this Maintenance Window.</p>
     */
    inline void SetWindowTargetId(Aws::String&& value) { m_windowTargetId = value; }

    /**
     * <p>The ID of the target definition in this Maintenance Window.</p>
     */
    inline void SetWindowTargetId(const char* value) { m_windowTargetId.assign(value); }

    /**
     * <p>The ID of the target definition in this Maintenance Window.</p>
     */
    inline RegisterTargetWithMaintenanceWindowResult& WithWindowTargetId(const Aws::String& value) { SetWindowTargetId(value); return *this;}

    /**
     * <p>The ID of the target definition in this Maintenance Window.</p>
     */
    inline RegisterTargetWithMaintenanceWindowResult& WithWindowTargetId(Aws::String&& value) { SetWindowTargetId(value); return *this;}

    /**
     * <p>The ID of the target definition in this Maintenance Window.</p>
     */
    inline RegisterTargetWithMaintenanceWindowResult& WithWindowTargetId(const char* value) { SetWindowTargetId(value); return *this;}

  private:
    Aws::String m_windowTargetId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
