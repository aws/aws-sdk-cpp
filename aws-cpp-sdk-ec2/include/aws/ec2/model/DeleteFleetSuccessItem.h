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
  class AWS_EC2_API DeleteFleetSuccessItem
  {
  public:
    DeleteFleetSuccessItem();
    DeleteFleetSuccessItem(const Aws::Utils::Xml::XmlNode& xmlNode);
    DeleteFleetSuccessItem& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The current state of the EC2 Fleet.</p>
     */
    inline const FleetStateCode& GetCurrentFleetState() const{ return m_currentFleetState; }

    /**
     * <p>The current state of the EC2 Fleet.</p>
     */
    inline void SetCurrentFleetState(const FleetStateCode& value) { m_currentFleetStateHasBeenSet = true; m_currentFleetState = value; }

    /**
     * <p>The current state of the EC2 Fleet.</p>
     */
    inline void SetCurrentFleetState(FleetStateCode&& value) { m_currentFleetStateHasBeenSet = true; m_currentFleetState = std::move(value); }

    /**
     * <p>The current state of the EC2 Fleet.</p>
     */
    inline DeleteFleetSuccessItem& WithCurrentFleetState(const FleetStateCode& value) { SetCurrentFleetState(value); return *this;}

    /**
     * <p>The current state of the EC2 Fleet.</p>
     */
    inline DeleteFleetSuccessItem& WithCurrentFleetState(FleetStateCode&& value) { SetCurrentFleetState(std::move(value)); return *this;}


    /**
     * <p>The previous state of the EC2 Fleet.</p>
     */
    inline const FleetStateCode& GetPreviousFleetState() const{ return m_previousFleetState; }

    /**
     * <p>The previous state of the EC2 Fleet.</p>
     */
    inline void SetPreviousFleetState(const FleetStateCode& value) { m_previousFleetStateHasBeenSet = true; m_previousFleetState = value; }

    /**
     * <p>The previous state of the EC2 Fleet.</p>
     */
    inline void SetPreviousFleetState(FleetStateCode&& value) { m_previousFleetStateHasBeenSet = true; m_previousFleetState = std::move(value); }

    /**
     * <p>The previous state of the EC2 Fleet.</p>
     */
    inline DeleteFleetSuccessItem& WithPreviousFleetState(const FleetStateCode& value) { SetPreviousFleetState(value); return *this;}

    /**
     * <p>The previous state of the EC2 Fleet.</p>
     */
    inline DeleteFleetSuccessItem& WithPreviousFleetState(FleetStateCode&& value) { SetPreviousFleetState(std::move(value)); return *this;}


    /**
     * <p>The ID of the EC2 Fleet.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>The ID of the EC2 Fleet.</p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }

    /**
     * <p>The ID of the EC2 Fleet.</p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::move(value); }

    /**
     * <p>The ID of the EC2 Fleet.</p>
     */
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }

    /**
     * <p>The ID of the EC2 Fleet.</p>
     */
    inline DeleteFleetSuccessItem& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>The ID of the EC2 Fleet.</p>
     */
    inline DeleteFleetSuccessItem& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the EC2 Fleet.</p>
     */
    inline DeleteFleetSuccessItem& WithFleetId(const char* value) { SetFleetId(value); return *this;}

  private:

    FleetStateCode m_currentFleetState;
    bool m_currentFleetStateHasBeenSet;

    FleetStateCode m_previousFleetState;
    bool m_previousFleetStateHasBeenSet;

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
