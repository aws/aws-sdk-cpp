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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/InstanceState.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes an instance state change.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/InstanceStateChange">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API InstanceStateChange
  {
  public:
    InstanceStateChange();
    InstanceStateChange(const Aws::Utils::Xml::XmlNode& xmlNode);
    InstanceStateChange& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The current state of the instance.</p>
     */
    inline const InstanceState& GetCurrentState() const{ return m_currentState; }

    /**
     * <p>The current state of the instance.</p>
     */
    inline void SetCurrentState(const InstanceState& value) { m_currentStateHasBeenSet = true; m_currentState = value; }

    /**
     * <p>The current state of the instance.</p>
     */
    inline void SetCurrentState(InstanceState&& value) { m_currentStateHasBeenSet = true; m_currentState = std::move(value); }

    /**
     * <p>The current state of the instance.</p>
     */
    inline InstanceStateChange& WithCurrentState(const InstanceState& value) { SetCurrentState(value); return *this;}

    /**
     * <p>The current state of the instance.</p>
     */
    inline InstanceStateChange& WithCurrentState(InstanceState&& value) { SetCurrentState(std::move(value)); return *this;}


    /**
     * <p>The ID of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>The ID of the instance.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>The ID of the instance.</p>
     */
    inline InstanceStateChange& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>The ID of the instance.</p>
     */
    inline InstanceStateChange& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the instance.</p>
     */
    inline InstanceStateChange& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


    /**
     * <p>The previous state of the instance.</p>
     */
    inline const InstanceState& GetPreviousState() const{ return m_previousState; }

    /**
     * <p>The previous state of the instance.</p>
     */
    inline void SetPreviousState(const InstanceState& value) { m_previousStateHasBeenSet = true; m_previousState = value; }

    /**
     * <p>The previous state of the instance.</p>
     */
    inline void SetPreviousState(InstanceState&& value) { m_previousStateHasBeenSet = true; m_previousState = std::move(value); }

    /**
     * <p>The previous state of the instance.</p>
     */
    inline InstanceStateChange& WithPreviousState(const InstanceState& value) { SetPreviousState(value); return *this;}

    /**
     * <p>The previous state of the instance.</p>
     */
    inline InstanceStateChange& WithPreviousState(InstanceState&& value) { SetPreviousState(std::move(value)); return *this;}

  private:

    InstanceState m_currentState;
    bool m_currentStateHasBeenSet;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;

    InstanceState m_previousState;
    bool m_previousStateHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
