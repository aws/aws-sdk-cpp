/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/FleetStateCode.h>
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
   * <p>Describes an EC2 Fleet that was successfully deleted.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DeleteFleetSuccessItem">AWS
   * API Reference</a></p>
   */
  class DeleteFleetSuccessItem
  {
  public:
    AWS_EC2_API DeleteFleetSuccessItem() = default;
    AWS_EC2_API DeleteFleetSuccessItem(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API DeleteFleetSuccessItem& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The current state of the EC2 Fleet.</p>
     */
    inline FleetStateCode GetCurrentFleetState() const { return m_currentFleetState; }
    inline bool CurrentFleetStateHasBeenSet() const { return m_currentFleetStateHasBeenSet; }
    inline void SetCurrentFleetState(FleetStateCode value) { m_currentFleetStateHasBeenSet = true; m_currentFleetState = value; }
    inline DeleteFleetSuccessItem& WithCurrentFleetState(FleetStateCode value) { SetCurrentFleetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The previous state of the EC2 Fleet.</p>
     */
    inline FleetStateCode GetPreviousFleetState() const { return m_previousFleetState; }
    inline bool PreviousFleetStateHasBeenSet() const { return m_previousFleetStateHasBeenSet; }
    inline void SetPreviousFleetState(FleetStateCode value) { m_previousFleetStateHasBeenSet = true; m_previousFleetState = value; }
    inline DeleteFleetSuccessItem& WithPreviousFleetState(FleetStateCode value) { SetPreviousFleetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the EC2 Fleet.</p>
     */
    inline const Aws::String& GetFleetId() const { return m_fleetId; }
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }
    template<typename FleetIdT = Aws::String>
    void SetFleetId(FleetIdT&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::forward<FleetIdT>(value); }
    template<typename FleetIdT = Aws::String>
    DeleteFleetSuccessItem& WithFleetId(FleetIdT&& value) { SetFleetId(std::forward<FleetIdT>(value)); return *this;}
    ///@}
  private:

    FleetStateCode m_currentFleetState{FleetStateCode::NOT_SET};
    bool m_currentFleetStateHasBeenSet = false;

    FleetStateCode m_previousFleetState{FleetStateCode::NOT_SET};
    bool m_previousFleetStateHasBeenSet = false;

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
