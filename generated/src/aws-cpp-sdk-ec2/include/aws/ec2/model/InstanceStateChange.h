/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class InstanceStateChange
  {
  public:
    AWS_EC2_API InstanceStateChange();
    AWS_EC2_API InstanceStateChange(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API InstanceStateChange& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The current state of the instance.</p>
     */
    inline const InstanceState& GetCurrentState() const{ return m_currentState; }

    /**
     * <p>The current state of the instance.</p>
     */
    inline bool CurrentStateHasBeenSet() const { return m_currentStateHasBeenSet; }

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
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

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
    inline bool PreviousStateHasBeenSet() const { return m_previousStateHasBeenSet; }

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
    bool m_currentStateHasBeenSet = false;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    InstanceState m_previousState;
    bool m_previousStateHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
