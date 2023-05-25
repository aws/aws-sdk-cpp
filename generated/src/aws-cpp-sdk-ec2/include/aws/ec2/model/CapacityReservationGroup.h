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
   * <p>Describes a resource group to which a Capacity Reservation has been
   * added.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CapacityReservationGroup">AWS
   * API Reference</a></p>
   */
  class CapacityReservationGroup
  {
  public:
    AWS_EC2_API CapacityReservationGroup();
    AWS_EC2_API CapacityReservationGroup(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API CapacityReservationGroup& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ARN of the resource group.</p>
     */
    inline const Aws::String& GetGroupArn() const{ return m_groupArn; }

    /**
     * <p>The ARN of the resource group.</p>
     */
    inline bool GroupArnHasBeenSet() const { return m_groupArnHasBeenSet; }

    /**
     * <p>The ARN of the resource group.</p>
     */
    inline void SetGroupArn(const Aws::String& value) { m_groupArnHasBeenSet = true; m_groupArn = value; }

    /**
     * <p>The ARN of the resource group.</p>
     */
    inline void SetGroupArn(Aws::String&& value) { m_groupArnHasBeenSet = true; m_groupArn = std::move(value); }

    /**
     * <p>The ARN of the resource group.</p>
     */
    inline void SetGroupArn(const char* value) { m_groupArnHasBeenSet = true; m_groupArn.assign(value); }

    /**
     * <p>The ARN of the resource group.</p>
     */
    inline CapacityReservationGroup& WithGroupArn(const Aws::String& value) { SetGroupArn(value); return *this;}

    /**
     * <p>The ARN of the resource group.</p>
     */
    inline CapacityReservationGroup& WithGroupArn(Aws::String&& value) { SetGroupArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the resource group.</p>
     */
    inline CapacityReservationGroup& WithGroupArn(const char* value) { SetGroupArn(value); return *this;}


    /**
     * <p>The ID of the Amazon Web Services account that owns the resource group.</p>
     */
    inline const Aws::String& GetOwnerId() const{ return m_ownerId; }

    /**
     * <p>The ID of the Amazon Web Services account that owns the resource group.</p>
     */
    inline bool OwnerIdHasBeenSet() const { return m_ownerIdHasBeenSet; }

    /**
     * <p>The ID of the Amazon Web Services account that owns the resource group.</p>
     */
    inline void SetOwnerId(const Aws::String& value) { m_ownerIdHasBeenSet = true; m_ownerId = value; }

    /**
     * <p>The ID of the Amazon Web Services account that owns the resource group.</p>
     */
    inline void SetOwnerId(Aws::String&& value) { m_ownerIdHasBeenSet = true; m_ownerId = std::move(value); }

    /**
     * <p>The ID of the Amazon Web Services account that owns the resource group.</p>
     */
    inline void SetOwnerId(const char* value) { m_ownerIdHasBeenSet = true; m_ownerId.assign(value); }

    /**
     * <p>The ID of the Amazon Web Services account that owns the resource group.</p>
     */
    inline CapacityReservationGroup& WithOwnerId(const Aws::String& value) { SetOwnerId(value); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that owns the resource group.</p>
     */
    inline CapacityReservationGroup& WithOwnerId(Aws::String&& value) { SetOwnerId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Amazon Web Services account that owns the resource group.</p>
     */
    inline CapacityReservationGroup& WithOwnerId(const char* value) { SetOwnerId(value); return *this;}

  private:

    Aws::String m_groupArn;
    bool m_groupArnHasBeenSet = false;

    Aws::String m_ownerId;
    bool m_ownerIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
