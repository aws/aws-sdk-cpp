/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
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
   * <p>Describes a target Capacity Reservation or Capacity Reservation
   * group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CapacityReservationTargetResponse">AWS
   * API Reference</a></p>
   */
  class CapacityReservationTargetResponse
  {
  public:
    AWS_EC2_API CapacityReservationTargetResponse();
    AWS_EC2_API CapacityReservationTargetResponse(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API CapacityReservationTargetResponse& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the targeted Capacity Reservation.</p>
     */
    inline const Aws::String& GetCapacityReservationId() const{ return m_capacityReservationId; }

    /**
     * <p>The ID of the targeted Capacity Reservation.</p>
     */
    inline bool CapacityReservationIdHasBeenSet() const { return m_capacityReservationIdHasBeenSet; }

    /**
     * <p>The ID of the targeted Capacity Reservation.</p>
     */
    inline void SetCapacityReservationId(const Aws::String& value) { m_capacityReservationIdHasBeenSet = true; m_capacityReservationId = value; }

    /**
     * <p>The ID of the targeted Capacity Reservation.</p>
     */
    inline void SetCapacityReservationId(Aws::String&& value) { m_capacityReservationIdHasBeenSet = true; m_capacityReservationId = std::move(value); }

    /**
     * <p>The ID of the targeted Capacity Reservation.</p>
     */
    inline void SetCapacityReservationId(const char* value) { m_capacityReservationIdHasBeenSet = true; m_capacityReservationId.assign(value); }

    /**
     * <p>The ID of the targeted Capacity Reservation.</p>
     */
    inline CapacityReservationTargetResponse& WithCapacityReservationId(const Aws::String& value) { SetCapacityReservationId(value); return *this;}

    /**
     * <p>The ID of the targeted Capacity Reservation.</p>
     */
    inline CapacityReservationTargetResponse& WithCapacityReservationId(Aws::String&& value) { SetCapacityReservationId(std::move(value)); return *this;}

    /**
     * <p>The ID of the targeted Capacity Reservation.</p>
     */
    inline CapacityReservationTargetResponse& WithCapacityReservationId(const char* value) { SetCapacityReservationId(value); return *this;}


    /**
     * <p>The ARN of the targeted Capacity Reservation group.</p>
     */
    inline const Aws::String& GetCapacityReservationResourceGroupArn() const{ return m_capacityReservationResourceGroupArn; }

    /**
     * <p>The ARN of the targeted Capacity Reservation group.</p>
     */
    inline bool CapacityReservationResourceGroupArnHasBeenSet() const { return m_capacityReservationResourceGroupArnHasBeenSet; }

    /**
     * <p>The ARN of the targeted Capacity Reservation group.</p>
     */
    inline void SetCapacityReservationResourceGroupArn(const Aws::String& value) { m_capacityReservationResourceGroupArnHasBeenSet = true; m_capacityReservationResourceGroupArn = value; }

    /**
     * <p>The ARN of the targeted Capacity Reservation group.</p>
     */
    inline void SetCapacityReservationResourceGroupArn(Aws::String&& value) { m_capacityReservationResourceGroupArnHasBeenSet = true; m_capacityReservationResourceGroupArn = std::move(value); }

    /**
     * <p>The ARN of the targeted Capacity Reservation group.</p>
     */
    inline void SetCapacityReservationResourceGroupArn(const char* value) { m_capacityReservationResourceGroupArnHasBeenSet = true; m_capacityReservationResourceGroupArn.assign(value); }

    /**
     * <p>The ARN of the targeted Capacity Reservation group.</p>
     */
    inline CapacityReservationTargetResponse& WithCapacityReservationResourceGroupArn(const Aws::String& value) { SetCapacityReservationResourceGroupArn(value); return *this;}

    /**
     * <p>The ARN of the targeted Capacity Reservation group.</p>
     */
    inline CapacityReservationTargetResponse& WithCapacityReservationResourceGroupArn(Aws::String&& value) { SetCapacityReservationResourceGroupArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the targeted Capacity Reservation group.</p>
     */
    inline CapacityReservationTargetResponse& WithCapacityReservationResourceGroupArn(const char* value) { SetCapacityReservationResourceGroupArn(value); return *this;}

  private:

    Aws::String m_capacityReservationId;
    bool m_capacityReservationIdHasBeenSet = false;

    Aws::String m_capacityReservationResourceGroupArn;
    bool m_capacityReservationResourceGroupArnHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
