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
#include <aws/opsworks/OpsWorks_EXPORTS.h>
#include <aws/opsworks/model/ShutdownEventConfiguration.h>
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
namespace OpsWorks
{
namespace Model
{

  /**
   * <p>Specifies the lifecycle event configuration</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opsworks-2013-02-18/LifecycleEventConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_OPSWORKS_API LifecycleEventConfiguration
  {
  public:
    LifecycleEventConfiguration();
    LifecycleEventConfiguration(Aws::Utils::Json::JsonView jsonValue);
    LifecycleEventConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A <code>ShutdownEventConfiguration</code> object that specifies the Shutdown
     * event configuration.</p>
     */
    inline const ShutdownEventConfiguration& GetShutdown() const{ return m_shutdown; }

    /**
     * <p>A <code>ShutdownEventConfiguration</code> object that specifies the Shutdown
     * event configuration.</p>
     */
    inline bool ShutdownHasBeenSet() const { return m_shutdownHasBeenSet; }

    /**
     * <p>A <code>ShutdownEventConfiguration</code> object that specifies the Shutdown
     * event configuration.</p>
     */
    inline void SetShutdown(const ShutdownEventConfiguration& value) { m_shutdownHasBeenSet = true; m_shutdown = value; }

    /**
     * <p>A <code>ShutdownEventConfiguration</code> object that specifies the Shutdown
     * event configuration.</p>
     */
    inline void SetShutdown(ShutdownEventConfiguration&& value) { m_shutdownHasBeenSet = true; m_shutdown = std::move(value); }

    /**
     * <p>A <code>ShutdownEventConfiguration</code> object that specifies the Shutdown
     * event configuration.</p>
     */
    inline LifecycleEventConfiguration& WithShutdown(const ShutdownEventConfiguration& value) { SetShutdown(value); return *this;}

    /**
     * <p>A <code>ShutdownEventConfiguration</code> object that specifies the Shutdown
     * event configuration.</p>
     */
    inline LifecycleEventConfiguration& WithShutdown(ShutdownEventConfiguration&& value) { SetShutdown(std::move(value)); return *this;}

  private:

    ShutdownEventConfiguration m_shutdown;
    bool m_shutdownHasBeenSet;
  };

} // namespace Model
} // namespace OpsWorks
} // namespace Aws
