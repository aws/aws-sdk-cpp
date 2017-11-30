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
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/InstanceHealthState.h>
#include <aws/lightsail/model/InstanceHealthReason.h>
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
namespace Lightsail
{
namespace Model
{

  /**
   * <p>Describes information about the health of the instance.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/lightsail-2016-11-28/InstanceHealthSummary">AWS
   * API Reference</a></p>
   */
  class AWS_LIGHTSAIL_API InstanceHealthSummary
  {
  public:
    InstanceHealthSummary();
    InstanceHealthSummary(const Aws::Utils::Json::JsonValue& jsonValue);
    InstanceHealthSummary& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the Lightsail instance for which you are requesting health check
     * data.</p>
     */
    inline const Aws::String& GetInstanceName() const{ return m_instanceName; }

    /**
     * <p>The name of the Lightsail instance for which you are requesting health check
     * data.</p>
     */
    inline void SetInstanceName(const Aws::String& value) { m_instanceNameHasBeenSet = true; m_instanceName = value; }

    /**
     * <p>The name of the Lightsail instance for which you are requesting health check
     * data.</p>
     */
    inline void SetInstanceName(Aws::String&& value) { m_instanceNameHasBeenSet = true; m_instanceName = std::move(value); }

    /**
     * <p>The name of the Lightsail instance for which you are requesting health check
     * data.</p>
     */
    inline void SetInstanceName(const char* value) { m_instanceNameHasBeenSet = true; m_instanceName.assign(value); }

    /**
     * <p>The name of the Lightsail instance for which you are requesting health check
     * data.</p>
     */
    inline InstanceHealthSummary& WithInstanceName(const Aws::String& value) { SetInstanceName(value); return *this;}

    /**
     * <p>The name of the Lightsail instance for which you are requesting health check
     * data.</p>
     */
    inline InstanceHealthSummary& WithInstanceName(Aws::String&& value) { SetInstanceName(std::move(value)); return *this;}

    /**
     * <p>The name of the Lightsail instance for which you are requesting health check
     * data.</p>
     */
    inline InstanceHealthSummary& WithInstanceName(const char* value) { SetInstanceName(value); return *this;}


    /**
     * <p>Describes the overall instance health. Valid values are below.</p>
     */
    inline const InstanceHealthState& GetInstanceHealth() const{ return m_instanceHealth; }

    /**
     * <p>Describes the overall instance health. Valid values are below.</p>
     */
    inline void SetInstanceHealth(const InstanceHealthState& value) { m_instanceHealthHasBeenSet = true; m_instanceHealth = value; }

    /**
     * <p>Describes the overall instance health. Valid values are below.</p>
     */
    inline void SetInstanceHealth(InstanceHealthState&& value) { m_instanceHealthHasBeenSet = true; m_instanceHealth = std::move(value); }

    /**
     * <p>Describes the overall instance health. Valid values are below.</p>
     */
    inline InstanceHealthSummary& WithInstanceHealth(const InstanceHealthState& value) { SetInstanceHealth(value); return *this;}

    /**
     * <p>Describes the overall instance health. Valid values are below.</p>
     */
    inline InstanceHealthSummary& WithInstanceHealth(InstanceHealthState&& value) { SetInstanceHealth(std::move(value)); return *this;}


    /**
     * <p>More information about the instance health. Valid values are below.</p>
     */
    inline const InstanceHealthReason& GetInstanceHealthReason() const{ return m_instanceHealthReason; }

    /**
     * <p>More information about the instance health. Valid values are below.</p>
     */
    inline void SetInstanceHealthReason(const InstanceHealthReason& value) { m_instanceHealthReasonHasBeenSet = true; m_instanceHealthReason = value; }

    /**
     * <p>More information about the instance health. Valid values are below.</p>
     */
    inline void SetInstanceHealthReason(InstanceHealthReason&& value) { m_instanceHealthReasonHasBeenSet = true; m_instanceHealthReason = std::move(value); }

    /**
     * <p>More information about the instance health. Valid values are below.</p>
     */
    inline InstanceHealthSummary& WithInstanceHealthReason(const InstanceHealthReason& value) { SetInstanceHealthReason(value); return *this;}

    /**
     * <p>More information about the instance health. Valid values are below.</p>
     */
    inline InstanceHealthSummary& WithInstanceHealthReason(InstanceHealthReason&& value) { SetInstanceHealthReason(std::move(value)); return *this;}

  private:

    Aws::String m_instanceName;
    bool m_instanceNameHasBeenSet;

    InstanceHealthState m_instanceHealth;
    bool m_instanceHealthHasBeenSet;

    InstanceHealthReason m_instanceHealthReason;
    bool m_instanceHealthReasonHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
