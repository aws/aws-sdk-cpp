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
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/KernelCapabilities.h>
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
namespace ECS
{
namespace Model
{

  /**
   * <p>Linux-specific options that are applied to the container, such as Linux
   * <a>KernelCapabilities</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/LinuxParameters">AWS
   * API Reference</a></p>
   */
  class AWS_ECS_API LinuxParameters
  {
  public:
    LinuxParameters();
    LinuxParameters(const Aws::Utils::Json::JsonValue& jsonValue);
    LinuxParameters& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Linux capabilities for the container that are added to or dropped from
     * the default configuration provided by Docker.</p>
     */
    inline const KernelCapabilities& GetCapabilities() const{ return m_capabilities; }

    /**
     * <p>The Linux capabilities for the container that are added to or dropped from
     * the default configuration provided by Docker.</p>
     */
    inline void SetCapabilities(const KernelCapabilities& value) { m_capabilitiesHasBeenSet = true; m_capabilities = value; }

    /**
     * <p>The Linux capabilities for the container that are added to or dropped from
     * the default configuration provided by Docker.</p>
     */
    inline void SetCapabilities(KernelCapabilities&& value) { m_capabilitiesHasBeenSet = true; m_capabilities = std::move(value); }

    /**
     * <p>The Linux capabilities for the container that are added to or dropped from
     * the default configuration provided by Docker.</p>
     */
    inline LinuxParameters& WithCapabilities(const KernelCapabilities& value) { SetCapabilities(value); return *this;}

    /**
     * <p>The Linux capabilities for the container that are added to or dropped from
     * the default configuration provided by Docker.</p>
     */
    inline LinuxParameters& WithCapabilities(KernelCapabilities&& value) { SetCapabilities(std::move(value)); return *this;}

  private:

    KernelCapabilities m_capabilities;
    bool m_capabilitiesHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
