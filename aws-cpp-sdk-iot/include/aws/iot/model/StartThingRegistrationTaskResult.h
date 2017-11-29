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
#include <aws/iot/IoT_EXPORTS.h>
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
namespace IoT
{
namespace Model
{
  class AWS_IOT_API StartThingRegistrationTaskResult
  {
  public:
    StartThingRegistrationTaskResult();
    StartThingRegistrationTaskResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    StartThingRegistrationTaskResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The bulk thing provisioning task ID.</p>
     */
    inline const Aws::String& GetTaskId() const{ return m_taskId; }

    /**
     * <p>The bulk thing provisioning task ID.</p>
     */
    inline void SetTaskId(const Aws::String& value) { m_taskId = value; }

    /**
     * <p>The bulk thing provisioning task ID.</p>
     */
    inline void SetTaskId(Aws::String&& value) { m_taskId = std::move(value); }

    /**
     * <p>The bulk thing provisioning task ID.</p>
     */
    inline void SetTaskId(const char* value) { m_taskId.assign(value); }

    /**
     * <p>The bulk thing provisioning task ID.</p>
     */
    inline StartThingRegistrationTaskResult& WithTaskId(const Aws::String& value) { SetTaskId(value); return *this;}

    /**
     * <p>The bulk thing provisioning task ID.</p>
     */
    inline StartThingRegistrationTaskResult& WithTaskId(Aws::String&& value) { SetTaskId(std::move(value)); return *this;}

    /**
     * <p>The bulk thing provisioning task ID.</p>
     */
    inline StartThingRegistrationTaskResult& WithTaskId(const char* value) { SetTaskId(value); return *this;}

  private:

    Aws::String m_taskId;
  };

} // namespace Model
} // namespace IoT
} // namespace Aws
