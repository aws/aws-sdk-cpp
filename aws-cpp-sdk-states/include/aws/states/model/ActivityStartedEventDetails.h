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
#include <aws/states/SFN_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SFN
{
namespace Model
{

  class AWS_SFN_API ActivityStartedEventDetails
  {
  public:
    ActivityStartedEventDetails();
    ActivityStartedEventDetails(const Aws::Utils::Json::JsonValue& jsonValue);
    ActivityStartedEventDetails& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The name of the worker that the task was assigned to. These names are
     * provided by the workers when calling <a>GetActivityTask</a>.</p>
     */
    inline const Aws::String& GetWorkerName() const{ return m_workerName; }

    /**
     * <p>The name of the worker that the task was assigned to. These names are
     * provided by the workers when calling <a>GetActivityTask</a>.</p>
     */
    inline void SetWorkerName(const Aws::String& value) { m_workerNameHasBeenSet = true; m_workerName = value; }

    /**
     * <p>The name of the worker that the task was assigned to. These names are
     * provided by the workers when calling <a>GetActivityTask</a>.</p>
     */
    inline void SetWorkerName(Aws::String&& value) { m_workerNameHasBeenSet = true; m_workerName = std::move(value); }

    /**
     * <p>The name of the worker that the task was assigned to. These names are
     * provided by the workers when calling <a>GetActivityTask</a>.</p>
     */
    inline void SetWorkerName(const char* value) { m_workerNameHasBeenSet = true; m_workerName.assign(value); }

    /**
     * <p>The name of the worker that the task was assigned to. These names are
     * provided by the workers when calling <a>GetActivityTask</a>.</p>
     */
    inline ActivityStartedEventDetails& WithWorkerName(const Aws::String& value) { SetWorkerName(value); return *this;}

    /**
     * <p>The name of the worker that the task was assigned to. These names are
     * provided by the workers when calling <a>GetActivityTask</a>.</p>
     */
    inline ActivityStartedEventDetails& WithWorkerName(Aws::String&& value) { SetWorkerName(std::move(value)); return *this;}

    /**
     * <p>The name of the worker that the task was assigned to. These names are
     * provided by the workers when calling <a>GetActivityTask</a>.</p>
     */
    inline ActivityStartedEventDetails& WithWorkerName(const char* value) { SetWorkerName(value); return *this;}

  private:
    Aws::String m_workerName;
    bool m_workerNameHasBeenSet;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
