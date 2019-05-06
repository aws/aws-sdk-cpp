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
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class AWS_LIGHTSAIL_API StopInstanceRequest : public LightsailRequest
  {
  public:
    StopInstanceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StopInstance"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the instance (a virtual private server) to stop.</p>
     */
    inline const Aws::String& GetInstanceName() const{ return m_instanceName; }

    /**
     * <p>The name of the instance (a virtual private server) to stop.</p>
     */
    inline bool InstanceNameHasBeenSet() const { return m_instanceNameHasBeenSet; }

    /**
     * <p>The name of the instance (a virtual private server) to stop.</p>
     */
    inline void SetInstanceName(const Aws::String& value) { m_instanceNameHasBeenSet = true; m_instanceName = value; }

    /**
     * <p>The name of the instance (a virtual private server) to stop.</p>
     */
    inline void SetInstanceName(Aws::String&& value) { m_instanceNameHasBeenSet = true; m_instanceName = std::move(value); }

    /**
     * <p>The name of the instance (a virtual private server) to stop.</p>
     */
    inline void SetInstanceName(const char* value) { m_instanceNameHasBeenSet = true; m_instanceName.assign(value); }

    /**
     * <p>The name of the instance (a virtual private server) to stop.</p>
     */
    inline StopInstanceRequest& WithInstanceName(const Aws::String& value) { SetInstanceName(value); return *this;}

    /**
     * <p>The name of the instance (a virtual private server) to stop.</p>
     */
    inline StopInstanceRequest& WithInstanceName(Aws::String&& value) { SetInstanceName(std::move(value)); return *this;}

    /**
     * <p>The name of the instance (a virtual private server) to stop.</p>
     */
    inline StopInstanceRequest& WithInstanceName(const char* value) { SetInstanceName(value); return *this;}


    /**
     * <p>When set to <code>True</code>, forces a Lightsail instance that is stuck in a
     * <code>stopping</code> state to stop.</p> <important> <p>Only use the
     * <code>force</code> parameter if your instance is stuck in the
     * <code>stopping</code> state. In any other state, your instance should stop
     * normally without adding this parameter to your API request.</p> </important>
     */
    inline bool GetForce() const{ return m_force; }

    /**
     * <p>When set to <code>True</code>, forces a Lightsail instance that is stuck in a
     * <code>stopping</code> state to stop.</p> <important> <p>Only use the
     * <code>force</code> parameter if your instance is stuck in the
     * <code>stopping</code> state. In any other state, your instance should stop
     * normally without adding this parameter to your API request.</p> </important>
     */
    inline bool ForceHasBeenSet() const { return m_forceHasBeenSet; }

    /**
     * <p>When set to <code>True</code>, forces a Lightsail instance that is stuck in a
     * <code>stopping</code> state to stop.</p> <important> <p>Only use the
     * <code>force</code> parameter if your instance is stuck in the
     * <code>stopping</code> state. In any other state, your instance should stop
     * normally without adding this parameter to your API request.</p> </important>
     */
    inline void SetForce(bool value) { m_forceHasBeenSet = true; m_force = value; }

    /**
     * <p>When set to <code>True</code>, forces a Lightsail instance that is stuck in a
     * <code>stopping</code> state to stop.</p> <important> <p>Only use the
     * <code>force</code> parameter if your instance is stuck in the
     * <code>stopping</code> state. In any other state, your instance should stop
     * normally without adding this parameter to your API request.</p> </important>
     */
    inline StopInstanceRequest& WithForce(bool value) { SetForce(value); return *this;}

  private:

    Aws::String m_instanceName;
    bool m_instanceNameHasBeenSet;

    bool m_force;
    bool m_forceHasBeenSet;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
