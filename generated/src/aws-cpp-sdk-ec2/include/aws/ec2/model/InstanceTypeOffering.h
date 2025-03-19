/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/InstanceType.h>
#include <aws/ec2/model/LocationType.h>
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
   * <p>The instance types offered.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/InstanceTypeOffering">AWS
   * API Reference</a></p>
   */
  class InstanceTypeOffering
  {
  public:
    AWS_EC2_API InstanceTypeOffering() = default;
    AWS_EC2_API InstanceTypeOffering(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API InstanceTypeOffering& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The instance type. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/instance-types.html">Instance
     * types</a> in the <i>Amazon EC2 User Guide</i>.</p>
     */
    inline InstanceType GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(InstanceType value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline InstanceTypeOffering& WithInstanceType(InstanceType value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location type.</p>
     */
    inline LocationType GetLocationType() const { return m_locationType; }
    inline bool LocationTypeHasBeenSet() const { return m_locationTypeHasBeenSet; }
    inline void SetLocationType(LocationType value) { m_locationTypeHasBeenSet = true; m_locationType = value; }
    inline InstanceTypeOffering& WithLocationType(LocationType value) { SetLocationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the location. This depends on the location type. For
     * example, if the location type is <code>region</code>, the location is the Region
     * code (for example, <code>us-east-2</code>.)</p>
     */
    inline const Aws::String& GetLocation() const { return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    template<typename LocationT = Aws::String>
    void SetLocation(LocationT&& value) { m_locationHasBeenSet = true; m_location = std::forward<LocationT>(value); }
    template<typename LocationT = Aws::String>
    InstanceTypeOffering& WithLocation(LocationT&& value) { SetLocation(std::forward<LocationT>(value)); return *this;}
    ///@}
  private:

    InstanceType m_instanceType{InstanceType::NOT_SET};
    bool m_instanceTypeHasBeenSet = false;

    LocationType m_locationType{LocationType::NOT_SET};
    bool m_locationTypeHasBeenSet = false;

    Aws::String m_location;
    bool m_locationHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
