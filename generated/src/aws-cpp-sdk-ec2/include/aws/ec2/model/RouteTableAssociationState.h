/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/RouteTableAssociationStateCode.h>
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
   * <p>Describes the state of an association between a route table and a subnet or
   * gateway.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/RouteTableAssociationState">AWS
   * API Reference</a></p>
   */
  class RouteTableAssociationState
  {
  public:
    AWS_EC2_API RouteTableAssociationState();
    AWS_EC2_API RouteTableAssociationState(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API RouteTableAssociationState& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The state of the association.</p>
     */
    inline const RouteTableAssociationStateCode& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const RouteTableAssociationStateCode& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(RouteTableAssociationStateCode&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline RouteTableAssociationState& WithState(const RouteTableAssociationStateCode& value) { SetState(value); return *this;}
    inline RouteTableAssociationState& WithState(RouteTableAssociationStateCode&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status message, if applicable.</p>
     */
    inline const Aws::String& GetStatusMessage() const{ return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    inline void SetStatusMessage(const Aws::String& value) { m_statusMessageHasBeenSet = true; m_statusMessage = value; }
    inline void SetStatusMessage(Aws::String&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::move(value); }
    inline void SetStatusMessage(const char* value) { m_statusMessageHasBeenSet = true; m_statusMessage.assign(value); }
    inline RouteTableAssociationState& WithStatusMessage(const Aws::String& value) { SetStatusMessage(value); return *this;}
    inline RouteTableAssociationState& WithStatusMessage(Aws::String&& value) { SetStatusMessage(std::move(value)); return *this;}
    inline RouteTableAssociationState& WithStatusMessage(const char* value) { SetStatusMessage(value); return *this;}
    ///@}
  private:

    RouteTableAssociationStateCode m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
