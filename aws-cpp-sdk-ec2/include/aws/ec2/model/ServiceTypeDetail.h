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
  class AWS_EC2_API ServiceTypeDetail
  {
  public:
    ServiceTypeDetail();
    ServiceTypeDetail(const Aws::Utils::Xml::XmlNode& xmlNode);
    ServiceTypeDetail& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The type of service.</p>
     */
    inline const ServiceType& GetServiceType() const{ return m_serviceType; }

    /**
     * <p>The type of service.</p>
     */
    inline void SetServiceType(const ServiceType& value) { m_serviceTypeHasBeenSet = true; m_serviceType = value; }

    /**
     * <p>The type of service.</p>
     */
    inline void SetServiceType(ServiceType&& value) { m_serviceTypeHasBeenSet = true; m_serviceType = std::move(value); }

    /**
     * <p>The type of service.</p>
     */
    inline ServiceTypeDetail& WithServiceType(const ServiceType& value) { SetServiceType(value); return *this;}

    /**
     * <p>The type of service.</p>
     */
    inline ServiceTypeDetail& WithServiceType(ServiceType&& value) { SetServiceType(std::move(value)); return *this;}

  private:

    ServiceType m_serviceType;
    bool m_serviceTypeHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
