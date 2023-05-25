/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/autoscaling/AutoScaling_EXPORTS.h>
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
namespace AutoScaling
{
namespace Model
{

  /**
   * <p>Describes a policy adjustment type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/autoscaling-2011-01-01/AdjustmentType">AWS
   * API Reference</a></p>
   */
  class AdjustmentType
  {
  public:
    AWS_AUTOSCALING_API AdjustmentType();
    AWS_AUTOSCALING_API AdjustmentType(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API AdjustmentType& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The policy adjustment type. The valid values are
     * <code>ChangeInCapacity</code>, <code>ExactCapacity</code>, and
     * <code>PercentChangeInCapacity</code>.</p>
     */
    inline const Aws::String& GetAdjustmentType() const{ return m_adjustmentType; }

    /**
     * <p>The policy adjustment type. The valid values are
     * <code>ChangeInCapacity</code>, <code>ExactCapacity</code>, and
     * <code>PercentChangeInCapacity</code>.</p>
     */
    inline bool AdjustmentTypeHasBeenSet() const { return m_adjustmentTypeHasBeenSet; }

    /**
     * <p>The policy adjustment type. The valid values are
     * <code>ChangeInCapacity</code>, <code>ExactCapacity</code>, and
     * <code>PercentChangeInCapacity</code>.</p>
     */
    inline void SetAdjustmentType(const Aws::String& value) { m_adjustmentTypeHasBeenSet = true; m_adjustmentType = value; }

    /**
     * <p>The policy adjustment type. The valid values are
     * <code>ChangeInCapacity</code>, <code>ExactCapacity</code>, and
     * <code>PercentChangeInCapacity</code>.</p>
     */
    inline void SetAdjustmentType(Aws::String&& value) { m_adjustmentTypeHasBeenSet = true; m_adjustmentType = std::move(value); }

    /**
     * <p>The policy adjustment type. The valid values are
     * <code>ChangeInCapacity</code>, <code>ExactCapacity</code>, and
     * <code>PercentChangeInCapacity</code>.</p>
     */
    inline void SetAdjustmentType(const char* value) { m_adjustmentTypeHasBeenSet = true; m_adjustmentType.assign(value); }

    /**
     * <p>The policy adjustment type. The valid values are
     * <code>ChangeInCapacity</code>, <code>ExactCapacity</code>, and
     * <code>PercentChangeInCapacity</code>.</p>
     */
    inline AdjustmentType& WithAdjustmentType(const Aws::String& value) { SetAdjustmentType(value); return *this;}

    /**
     * <p>The policy adjustment type. The valid values are
     * <code>ChangeInCapacity</code>, <code>ExactCapacity</code>, and
     * <code>PercentChangeInCapacity</code>.</p>
     */
    inline AdjustmentType& WithAdjustmentType(Aws::String&& value) { SetAdjustmentType(std::move(value)); return *this;}

    /**
     * <p>The policy adjustment type. The valid values are
     * <code>ChangeInCapacity</code>, <code>ExactCapacity</code>, and
     * <code>PercentChangeInCapacity</code>.</p>
     */
    inline AdjustmentType& WithAdjustmentType(const char* value) { SetAdjustmentType(value); return *this;}

  private:

    Aws::String m_adjustmentType;
    bool m_adjustmentTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
