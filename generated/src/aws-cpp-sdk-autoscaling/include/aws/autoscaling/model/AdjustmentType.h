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
    AWS_AUTOSCALING_API AdjustmentType() = default;
    AWS_AUTOSCALING_API AdjustmentType(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_AUTOSCALING_API AdjustmentType& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_AUTOSCALING_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The policy adjustment type. The valid values are
     * <code>ChangeInCapacity</code>, <code>ExactCapacity</code>, and
     * <code>PercentChangeInCapacity</code>.</p>
     */
    inline const Aws::String& GetAdjustmentType() const { return m_adjustmentType; }
    inline bool AdjustmentTypeHasBeenSet() const { return m_adjustmentTypeHasBeenSet; }
    template<typename AdjustmentTypeT = Aws::String>
    void SetAdjustmentType(AdjustmentTypeT&& value) { m_adjustmentTypeHasBeenSet = true; m_adjustmentType = std::forward<AdjustmentTypeT>(value); }
    template<typename AdjustmentTypeT = Aws::String>
    AdjustmentType& WithAdjustmentType(AdjustmentTypeT&& value) { SetAdjustmentType(std::forward<AdjustmentTypeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_adjustmentType;
    bool m_adjustmentTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
