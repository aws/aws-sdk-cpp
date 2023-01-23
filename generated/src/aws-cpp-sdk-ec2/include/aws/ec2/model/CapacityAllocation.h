/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/AllocationType.h>
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
   * <p>Information about instance capacity usage for a Capacity
   * Reservation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CapacityAllocation">AWS
   * API Reference</a></p>
   */
  class CapacityAllocation
  {
  public:
    AWS_EC2_API CapacityAllocation();
    AWS_EC2_API CapacityAllocation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API CapacityAllocation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The usage type. <code>used</code> indicates that the instance capacity is in
     * use by instances that are running in the Capacity Reservation.</p>
     */
    inline const AllocationType& GetAllocationType() const{ return m_allocationType; }

    /**
     * <p>The usage type. <code>used</code> indicates that the instance capacity is in
     * use by instances that are running in the Capacity Reservation.</p>
     */
    inline bool AllocationTypeHasBeenSet() const { return m_allocationTypeHasBeenSet; }

    /**
     * <p>The usage type. <code>used</code> indicates that the instance capacity is in
     * use by instances that are running in the Capacity Reservation.</p>
     */
    inline void SetAllocationType(const AllocationType& value) { m_allocationTypeHasBeenSet = true; m_allocationType = value; }

    /**
     * <p>The usage type. <code>used</code> indicates that the instance capacity is in
     * use by instances that are running in the Capacity Reservation.</p>
     */
    inline void SetAllocationType(AllocationType&& value) { m_allocationTypeHasBeenSet = true; m_allocationType = std::move(value); }

    /**
     * <p>The usage type. <code>used</code> indicates that the instance capacity is in
     * use by instances that are running in the Capacity Reservation.</p>
     */
    inline CapacityAllocation& WithAllocationType(const AllocationType& value) { SetAllocationType(value); return *this;}

    /**
     * <p>The usage type. <code>used</code> indicates that the instance capacity is in
     * use by instances that are running in the Capacity Reservation.</p>
     */
    inline CapacityAllocation& WithAllocationType(AllocationType&& value) { SetAllocationType(std::move(value)); return *this;}


    /**
     * <p>The amount of instance capacity associated with the usage. For example a
     * value of <code>4</code> indicates that instance capacity for 4 instances is
     * currently in use.</p>
     */
    inline int GetCount() const{ return m_count; }

    /**
     * <p>The amount of instance capacity associated with the usage. For example a
     * value of <code>4</code> indicates that instance capacity for 4 instances is
     * currently in use.</p>
     */
    inline bool CountHasBeenSet() const { return m_countHasBeenSet; }

    /**
     * <p>The amount of instance capacity associated with the usage. For example a
     * value of <code>4</code> indicates that instance capacity for 4 instances is
     * currently in use.</p>
     */
    inline void SetCount(int value) { m_countHasBeenSet = true; m_count = value; }

    /**
     * <p>The amount of instance capacity associated with the usage. For example a
     * value of <code>4</code> indicates that instance capacity for 4 instances is
     * currently in use.</p>
     */
    inline CapacityAllocation& WithCount(int value) { SetCount(value); return *this;}

  private:

    AllocationType m_allocationType;
    bool m_allocationTypeHasBeenSet = false;

    int m_count;
    bool m_countHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
