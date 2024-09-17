/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/InstanceEventWindowState.h>
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
   * <p>The state of the event window.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/InstanceEventWindowStateChange">AWS
   * API Reference</a></p>
   */
  class InstanceEventWindowStateChange
  {
  public:
    AWS_EC2_API InstanceEventWindowStateChange();
    AWS_EC2_API InstanceEventWindowStateChange(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API InstanceEventWindowStateChange& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the event window.</p>
     */
    inline const Aws::String& GetInstanceEventWindowId() const{ return m_instanceEventWindowId; }
    inline bool InstanceEventWindowIdHasBeenSet() const { return m_instanceEventWindowIdHasBeenSet; }
    inline void SetInstanceEventWindowId(const Aws::String& value) { m_instanceEventWindowIdHasBeenSet = true; m_instanceEventWindowId = value; }
    inline void SetInstanceEventWindowId(Aws::String&& value) { m_instanceEventWindowIdHasBeenSet = true; m_instanceEventWindowId = std::move(value); }
    inline void SetInstanceEventWindowId(const char* value) { m_instanceEventWindowIdHasBeenSet = true; m_instanceEventWindowId.assign(value); }
    inline InstanceEventWindowStateChange& WithInstanceEventWindowId(const Aws::String& value) { SetInstanceEventWindowId(value); return *this;}
    inline InstanceEventWindowStateChange& WithInstanceEventWindowId(Aws::String&& value) { SetInstanceEventWindowId(std::move(value)); return *this;}
    inline InstanceEventWindowStateChange& WithInstanceEventWindowId(const char* value) { SetInstanceEventWindowId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The current state of the event window.</p>
     */
    inline const InstanceEventWindowState& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const InstanceEventWindowState& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(InstanceEventWindowState&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline InstanceEventWindowStateChange& WithState(const InstanceEventWindowState& value) { SetState(value); return *this;}
    inline InstanceEventWindowStateChange& WithState(InstanceEventWindowState&& value) { SetState(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_instanceEventWindowId;
    bool m_instanceEventWindowIdHasBeenSet = false;

    InstanceEventWindowState m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
