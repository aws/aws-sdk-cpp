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
  class AWS_SSM_API CancelMaintenanceWindowExecutionResult
  {
  public:
    CancelMaintenanceWindowExecutionResult();
    CancelMaintenanceWindowExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    CancelMaintenanceWindowExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the maintenance window execution that has been stopped.</p>
     */
    inline const Aws::String& GetWindowExecutionId() const{ return m_windowExecutionId; }

    /**
     * <p>The ID of the maintenance window execution that has been stopped.</p>
     */
    inline void SetWindowExecutionId(const Aws::String& value) { m_windowExecutionId = value; }

    /**
     * <p>The ID of the maintenance window execution that has been stopped.</p>
     */
    inline void SetWindowExecutionId(Aws::String&& value) { m_windowExecutionId = std::move(value); }

    /**
     * <p>The ID of the maintenance window execution that has been stopped.</p>
     */
    inline void SetWindowExecutionId(const char* value) { m_windowExecutionId.assign(value); }

    /**
     * <p>The ID of the maintenance window execution that has been stopped.</p>
     */
    inline CancelMaintenanceWindowExecutionResult& WithWindowExecutionId(const Aws::String& value) { SetWindowExecutionId(value); return *this;}

    /**
     * <p>The ID of the maintenance window execution that has been stopped.</p>
     */
    inline CancelMaintenanceWindowExecutionResult& WithWindowExecutionId(Aws::String&& value) { SetWindowExecutionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the maintenance window execution that has been stopped.</p>
     */
    inline CancelMaintenanceWindowExecutionResult& WithWindowExecutionId(const char* value) { SetWindowExecutionId(value); return *this;}

  private:

    Aws::String m_windowExecutionId;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
