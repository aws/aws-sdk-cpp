/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/ServiceType.h>
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
   * <p>Describes the type of service for a VPC endpoint.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ServiceTypeDetail">AWS
   * API Reference</a></p>
   */
  class ServiceTypeDetail
  {
  public:
    AWS_EC2_API ServiceTypeDetail() = default;
    AWS_EC2_API ServiceTypeDetail(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ServiceTypeDetail& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The type of service.</p>
     */
    inline ServiceType GetServiceType() const { return m_serviceType; }
    inline bool ServiceTypeHasBeenSet() const { return m_serviceTypeHasBeenSet; }
    inline void SetServiceType(ServiceType value) { m_serviceTypeHasBeenSet = true; m_serviceType = value; }
    inline ServiceTypeDetail& WithServiceType(ServiceType value) { SetServiceType(value); return *this;}
    ///@}
  private:

    ServiceType m_serviceType{ServiceType::NOT_SET};
    bool m_serviceTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
