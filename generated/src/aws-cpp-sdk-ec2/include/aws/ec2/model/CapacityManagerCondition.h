/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/DimensionCondition.h>
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
   * <p> Represents a filter condition for Capacity Manager queries. Contains
   * dimension-based filtering criteria used to narrow down metric data and dimension
   * results. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CapacityManagerCondition">AWS
   * API Reference</a></p>
   */
  class CapacityManagerCondition
  {
  public:
    AWS_EC2_API CapacityManagerCondition() = default;
    AWS_EC2_API CapacityManagerCondition(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API CapacityManagerCondition& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p> The dimension-based condition that specifies how to filter the data based on
     * dimension values. </p>
     */
    inline const DimensionCondition& GetDimensionCondition() const { return m_dimensionCondition; }
    inline bool DimensionConditionHasBeenSet() const { return m_dimensionConditionHasBeenSet; }
    template<typename DimensionConditionT = DimensionCondition>
    void SetDimensionCondition(DimensionConditionT&& value) { m_dimensionConditionHasBeenSet = true; m_dimensionCondition = std::forward<DimensionConditionT>(value); }
    template<typename DimensionConditionT = DimensionCondition>
    CapacityManagerCondition& WithDimensionCondition(DimensionConditionT&& value) { SetDimensionCondition(std::forward<DimensionConditionT>(value)); return *this;}
    ///@}
  private:

    DimensionCondition m_dimensionCondition;
    bool m_dimensionConditionHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
