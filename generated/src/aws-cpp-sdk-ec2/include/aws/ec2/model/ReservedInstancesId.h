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
   * <p>Describes the ID of a Reserved Instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ReservedInstancesId">AWS
   * API Reference</a></p>
   */
  class ReservedInstancesId
  {
  public:
    AWS_EC2_API ReservedInstancesId() = default;
    AWS_EC2_API ReservedInstancesId(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ReservedInstancesId& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the Reserved Instance.</p>
     */
    inline const Aws::String& GetReservedInstancesId() const { return m_reservedInstancesId; }
    inline bool ReservedInstancesIdHasBeenSet() const { return m_reservedInstancesIdHasBeenSet; }
    template<typename ReservedInstancesIdT = Aws::String>
    void SetReservedInstancesId(ReservedInstancesIdT&& value) { m_reservedInstancesIdHasBeenSet = true; m_reservedInstancesId = std::forward<ReservedInstancesIdT>(value); }
    template<typename ReservedInstancesIdT = Aws::String>
    ReservedInstancesId& WithReservedInstancesId(ReservedInstancesIdT&& value) { SetReservedInstancesId(std::forward<ReservedInstancesIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_reservedInstancesId;
    bool m_reservedInstancesIdHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
