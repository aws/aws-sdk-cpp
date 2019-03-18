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
#include <aws/elasticmapreduce/EMR_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace EMR
{
namespace Model
{

  /**
   * <p>Custom policy for requesting termination protection or termination of
   * specific instances when shrinking an instance group.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticmapreduce-2009-03-31/InstanceResizePolicy">AWS
   * API Reference</a></p>
   */
  class AWS_EMR_API InstanceResizePolicy
  {
  public:
    InstanceResizePolicy();
    InstanceResizePolicy(Aws::Utils::Json::JsonView jsonValue);
    InstanceResizePolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specific list of instances to be terminated when shrinking an instance
     * group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstancesToTerminate() const{ return m_instancesToTerminate; }

    /**
     * <p>Specific list of instances to be terminated when shrinking an instance
     * group.</p>
     */
    inline bool InstancesToTerminateHasBeenSet() const { return m_instancesToTerminateHasBeenSet; }

    /**
     * <p>Specific list of instances to be terminated when shrinking an instance
     * group.</p>
     */
    inline void SetInstancesToTerminate(const Aws::Vector<Aws::String>& value) { m_instancesToTerminateHasBeenSet = true; m_instancesToTerminate = value; }

    /**
     * <p>Specific list of instances to be terminated when shrinking an instance
     * group.</p>
     */
    inline void SetInstancesToTerminate(Aws::Vector<Aws::String>&& value) { m_instancesToTerminateHasBeenSet = true; m_instancesToTerminate = std::move(value); }

    /**
     * <p>Specific list of instances to be terminated when shrinking an instance
     * group.</p>
     */
    inline InstanceResizePolicy& WithInstancesToTerminate(const Aws::Vector<Aws::String>& value) { SetInstancesToTerminate(value); return *this;}

    /**
     * <p>Specific list of instances to be terminated when shrinking an instance
     * group.</p>
     */
    inline InstanceResizePolicy& WithInstancesToTerminate(Aws::Vector<Aws::String>&& value) { SetInstancesToTerminate(std::move(value)); return *this;}

    /**
     * <p>Specific list of instances to be terminated when shrinking an instance
     * group.</p>
     */
    inline InstanceResizePolicy& AddInstancesToTerminate(const Aws::String& value) { m_instancesToTerminateHasBeenSet = true; m_instancesToTerminate.push_back(value); return *this; }

    /**
     * <p>Specific list of instances to be terminated when shrinking an instance
     * group.</p>
     */
    inline InstanceResizePolicy& AddInstancesToTerminate(Aws::String&& value) { m_instancesToTerminateHasBeenSet = true; m_instancesToTerminate.push_back(std::move(value)); return *this; }

    /**
     * <p>Specific list of instances to be terminated when shrinking an instance
     * group.</p>
     */
    inline InstanceResizePolicy& AddInstancesToTerminate(const char* value) { m_instancesToTerminateHasBeenSet = true; m_instancesToTerminate.push_back(value); return *this; }


    /**
     * <p>Specific list of instances to be protected when shrinking an instance
     * group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstancesToProtect() const{ return m_instancesToProtect; }

    /**
     * <p>Specific list of instances to be protected when shrinking an instance
     * group.</p>
     */
    inline bool InstancesToProtectHasBeenSet() const { return m_instancesToProtectHasBeenSet; }

    /**
     * <p>Specific list of instances to be protected when shrinking an instance
     * group.</p>
     */
    inline void SetInstancesToProtect(const Aws::Vector<Aws::String>& value) { m_instancesToProtectHasBeenSet = true; m_instancesToProtect = value; }

    /**
     * <p>Specific list of instances to be protected when shrinking an instance
     * group.</p>
     */
    inline void SetInstancesToProtect(Aws::Vector<Aws::String>&& value) { m_instancesToProtectHasBeenSet = true; m_instancesToProtect = std::move(value); }

    /**
     * <p>Specific list of instances to be protected when shrinking an instance
     * group.</p>
     */
    inline InstanceResizePolicy& WithInstancesToProtect(const Aws::Vector<Aws::String>& value) { SetInstancesToProtect(value); return *this;}

    /**
     * <p>Specific list of instances to be protected when shrinking an instance
     * group.</p>
     */
    inline InstanceResizePolicy& WithInstancesToProtect(Aws::Vector<Aws::String>&& value) { SetInstancesToProtect(std::move(value)); return *this;}

    /**
     * <p>Specific list of instances to be protected when shrinking an instance
     * group.</p>
     */
    inline InstanceResizePolicy& AddInstancesToProtect(const Aws::String& value) { m_instancesToProtectHasBeenSet = true; m_instancesToProtect.push_back(value); return *this; }

    /**
     * <p>Specific list of instances to be protected when shrinking an instance
     * group.</p>
     */
    inline InstanceResizePolicy& AddInstancesToProtect(Aws::String&& value) { m_instancesToProtectHasBeenSet = true; m_instancesToProtect.push_back(std::move(value)); return *this; }

    /**
     * <p>Specific list of instances to be protected when shrinking an instance
     * group.</p>
     */
    inline InstanceResizePolicy& AddInstancesToProtect(const char* value) { m_instancesToProtectHasBeenSet = true; m_instancesToProtect.push_back(value); return *this; }


    /**
     * <p>Decommissioning timeout override for the specific list of instances to be
     * terminated.</p>
     */
    inline int GetInstanceTerminationTimeout() const{ return m_instanceTerminationTimeout; }

    /**
     * <p>Decommissioning timeout override for the specific list of instances to be
     * terminated.</p>
     */
    inline bool InstanceTerminationTimeoutHasBeenSet() const { return m_instanceTerminationTimeoutHasBeenSet; }

    /**
     * <p>Decommissioning timeout override for the specific list of instances to be
     * terminated.</p>
     */
    inline void SetInstanceTerminationTimeout(int value) { m_instanceTerminationTimeoutHasBeenSet = true; m_instanceTerminationTimeout = value; }

    /**
     * <p>Decommissioning timeout override for the specific list of instances to be
     * terminated.</p>
     */
    inline InstanceResizePolicy& WithInstanceTerminationTimeout(int value) { SetInstanceTerminationTimeout(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_instancesToTerminate;
    bool m_instancesToTerminateHasBeenSet;

    Aws::Vector<Aws::String> m_instancesToProtect;
    bool m_instancesToProtectHasBeenSet;

    int m_instanceTerminationTimeout;
    bool m_instanceTerminationTimeoutHasBeenSet;
  };

} // namespace Model
} // namespace EMR
} // namespace Aws
