/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/InstanceState.h>
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
    AWS_EC2_API InstanceStateChange() = default;
    AWS_EC2_API InstanceStateChange(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API InstanceStateChange& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the instance.</p>
     */
    inline const Aws::String& GetInstanceId() const { return m_instanceId; }
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }
    template<typename InstanceIdT = Aws::String>
    void SetInstanceId(InstanceIdT&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::forward<InstanceIdT>(value); }
    template<typename InstanceIdT = Aws::String>
    InstanceStateChange& WithInstanceId(InstanceIdT&& value) { SetInstanceId(std::forward<InstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the instance.</p>
     */
    inline const InstanceState& GetCurrentState() const { return m_currentState; }
    inline bool CurrentStateHasBeenSet() const { return m_currentStateHasBeenSet; }
    template<typename CurrentStateT = InstanceState>
    void SetCurrentState(CurrentStateT&& value) { m_currentStateHasBeenSet = true; m_currentState = std::forward<CurrentStateT>(value); }
    template<typename CurrentStateT = InstanceState>
    InstanceStateChange& WithCurrentState(CurrentStateT&& value) { SetCurrentState(std::forward<CurrentStateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The previous state of the instance.</p>
     */
    inline const InstanceState& GetPreviousState() const { return m_previousState; }
    inline bool PreviousStateHasBeenSet() const { return m_previousStateHasBeenSet; }
    template<typename PreviousStateT = InstanceState>
    void SetPreviousState(PreviousStateT&& value) { m_previousStateHasBeenSet = true; m_previousState = std::forward<PreviousStateT>(value); }
    template<typename PreviousStateT = InstanceState>
    InstanceStateChange& WithPreviousState(PreviousStateT&& value) { SetPreviousState(std::forward<PreviousStateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet = false;

    InstanceState m_currentState;
    bool m_currentStateHasBeenSet = false;

    InstanceState m_previousState;
    bool m_previousStateHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
