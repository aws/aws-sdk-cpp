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
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SFN
{
namespace Model
{

  /**
   * <p>Contains details about a task scheduled during an execution.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/states-2016-11-23/TaskScheduledEventDetails">AWS
   * API Reference</a></p>
   */
  class AWS_SFN_API TaskScheduledEventDetails
  {
  public:
    TaskScheduledEventDetails();
    TaskScheduledEventDetails(Aws::Utils::Json::JsonView jsonValue);
    TaskScheduledEventDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The action of the resource called by a task state.</p>
     */
    inline const Aws::String& GetResourceType() const{ return m_resourceType; }

    /**
     * <p>The action of the resource called by a task state.</p>
     */
    inline bool ResourceTypeHasBeenSet() const { return m_resourceTypeHasBeenSet; }

    /**
     * <p>The action of the resource called by a task state.</p>
     */
    inline void SetResourceType(const Aws::String& value) { m_resourceTypeHasBeenSet = true; m_resourceType = value; }

    /**
     * <p>The action of the resource called by a task state.</p>
     */
    inline void SetResourceType(Aws::String&& value) { m_resourceTypeHasBeenSet = true; m_resourceType = std::move(value); }

    /**
     * <p>The action of the resource called by a task state.</p>
     */
    inline void SetResourceType(const char* value) { m_resourceTypeHasBeenSet = true; m_resourceType.assign(value); }

    /**
     * <p>The action of the resource called by a task state.</p>
     */
    inline TaskScheduledEventDetails& WithResourceType(const Aws::String& value) { SetResourceType(value); return *this;}

    /**
     * <p>The action of the resource called by a task state.</p>
     */
    inline TaskScheduledEventDetails& WithResourceType(Aws::String&& value) { SetResourceType(std::move(value)); return *this;}

    /**
     * <p>The action of the resource called by a task state.</p>
     */
    inline TaskScheduledEventDetails& WithResourceType(const char* value) { SetResourceType(value); return *this;}


    /**
     * <p>The service name of the resource in a task state.</p>
     */
    inline const Aws::String& GetResource() const{ return m_resource; }

    /**
     * <p>The service name of the resource in a task state.</p>
     */
    inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }

    /**
     * <p>The service name of the resource in a task state.</p>
     */
    inline void SetResource(const Aws::String& value) { m_resourceHasBeenSet = true; m_resource = value; }

    /**
     * <p>The service name of the resource in a task state.</p>
     */
    inline void SetResource(Aws::String&& value) { m_resourceHasBeenSet = true; m_resource = std::move(value); }

    /**
     * <p>The service name of the resource in a task state.</p>
     */
    inline void SetResource(const char* value) { m_resourceHasBeenSet = true; m_resource.assign(value); }

    /**
     * <p>The service name of the resource in a task state.</p>
     */
    inline TaskScheduledEventDetails& WithResource(const Aws::String& value) { SetResource(value); return *this;}

    /**
     * <p>The service name of the resource in a task state.</p>
     */
    inline TaskScheduledEventDetails& WithResource(Aws::String&& value) { SetResource(std::move(value)); return *this;}

    /**
     * <p>The service name of the resource in a task state.</p>
     */
    inline TaskScheduledEventDetails& WithResource(const char* value) { SetResource(value); return *this;}


    /**
     * <p>The region of the scheduled task</p>
     */
    inline const Aws::String& GetRegion() const{ return m_region; }

    /**
     * <p>The region of the scheduled task</p>
     */
    inline bool RegionHasBeenSet() const { return m_regionHasBeenSet; }

    /**
     * <p>The region of the scheduled task</p>
     */
    inline void SetRegion(const Aws::String& value) { m_regionHasBeenSet = true; m_region = value; }

    /**
     * <p>The region of the scheduled task</p>
     */
    inline void SetRegion(Aws::String&& value) { m_regionHasBeenSet = true; m_region = std::move(value); }

    /**
     * <p>The region of the scheduled task</p>
     */
    inline void SetRegion(const char* value) { m_regionHasBeenSet = true; m_region.assign(value); }

    /**
     * <p>The region of the scheduled task</p>
     */
    inline TaskScheduledEventDetails& WithRegion(const Aws::String& value) { SetRegion(value); return *this;}

    /**
     * <p>The region of the scheduled task</p>
     */
    inline TaskScheduledEventDetails& WithRegion(Aws::String&& value) { SetRegion(std::move(value)); return *this;}

    /**
     * <p>The region of the scheduled task</p>
     */
    inline TaskScheduledEventDetails& WithRegion(const char* value) { SetRegion(value); return *this;}


    /**
     * <p>The JSON data passed to the resource referenced in a task state.</p>
     */
    inline const Aws::String& GetParameters() const{ return m_parameters; }

    /**
     * <p>The JSON data passed to the resource referenced in a task state.</p>
     */
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }

    /**
     * <p>The JSON data passed to the resource referenced in a task state.</p>
     */
    inline void SetParameters(const Aws::String& value) { m_parametersHasBeenSet = true; m_parameters = value; }

    /**
     * <p>The JSON data passed to the resource referenced in a task state.</p>
     */
    inline void SetParameters(Aws::String&& value) { m_parametersHasBeenSet = true; m_parameters = std::move(value); }

    /**
     * <p>The JSON data passed to the resource referenced in a task state.</p>
     */
    inline void SetParameters(const char* value) { m_parametersHasBeenSet = true; m_parameters.assign(value); }

    /**
     * <p>The JSON data passed to the resource referenced in a task state.</p>
     */
    inline TaskScheduledEventDetails& WithParameters(const Aws::String& value) { SetParameters(value); return *this;}

    /**
     * <p>The JSON data passed to the resource referenced in a task state.</p>
     */
    inline TaskScheduledEventDetails& WithParameters(Aws::String&& value) { SetParameters(std::move(value)); return *this;}

    /**
     * <p>The JSON data passed to the resource referenced in a task state.</p>
     */
    inline TaskScheduledEventDetails& WithParameters(const char* value) { SetParameters(value); return *this;}


    /**
     * <p>The maximum allowed duration of the task.</p>
     */
    inline long long GetTimeoutInSeconds() const{ return m_timeoutInSeconds; }

    /**
     * <p>The maximum allowed duration of the task.</p>
     */
    inline bool TimeoutInSecondsHasBeenSet() const { return m_timeoutInSecondsHasBeenSet; }

    /**
     * <p>The maximum allowed duration of the task.</p>
     */
    inline void SetTimeoutInSeconds(long long value) { m_timeoutInSecondsHasBeenSet = true; m_timeoutInSeconds = value; }

    /**
     * <p>The maximum allowed duration of the task.</p>
     */
    inline TaskScheduledEventDetails& WithTimeoutInSeconds(long long value) { SetTimeoutInSeconds(value); return *this;}

  private:

    Aws::String m_resourceType;
    bool m_resourceTypeHasBeenSet;

    Aws::String m_resource;
    bool m_resourceHasBeenSet;

    Aws::String m_region;
    bool m_regionHasBeenSet;

    Aws::String m_parameters;
    bool m_parametersHasBeenSet;

    long long m_timeoutInSeconds;
    bool m_timeoutInSecondsHasBeenSet;
  };

} // namespace Model
} // namespace SFN
} // namespace Aws
