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
#include <aws/ds/DirectoryService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace DirectoryService
{
namespace Model
{

  /**
   * <p>IP address block. This is often the address block of the DNS server used for
   * your on-premises domain. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/IpRoute">AWS API
   * Reference</a></p>
   */
  class AWS_DIRECTORYSERVICE_API IpRoute
  {
  public:
    IpRoute();
    IpRoute(Aws::Utils::Json::JsonView jsonValue);
    IpRoute& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>IP address block using CIDR format, for example 10.0.0.0/24. This is often
     * the address block of the DNS server used for your on-premises domain. For a
     * single IP address use a CIDR address block with /32. For example
     * 10.0.0.0/32.</p>
     */
    inline const Aws::String& GetCidrIp() const{ return m_cidrIp; }

    /**
     * <p>IP address block using CIDR format, for example 10.0.0.0/24. This is often
     * the address block of the DNS server used for your on-premises domain. For a
     * single IP address use a CIDR address block with /32. For example
     * 10.0.0.0/32.</p>
     */
    inline bool CidrIpHasBeenSet() const { return m_cidrIpHasBeenSet; }

    /**
     * <p>IP address block using CIDR format, for example 10.0.0.0/24. This is often
     * the address block of the DNS server used for your on-premises domain. For a
     * single IP address use a CIDR address block with /32. For example
     * 10.0.0.0/32.</p>
     */
    inline void SetCidrIp(const Aws::String& value) { m_cidrIpHasBeenSet = true; m_cidrIp = value; }

    /**
     * <p>IP address block using CIDR format, for example 10.0.0.0/24. This is often
     * the address block of the DNS server used for your on-premises domain. For a
     * single IP address use a CIDR address block with /32. For example
     * 10.0.0.0/32.</p>
     */
    inline void SetCidrIp(Aws::String&& value) { m_cidrIpHasBeenSet = true; m_cidrIp = std::move(value); }

    /**
     * <p>IP address block using CIDR format, for example 10.0.0.0/24. This is often
     * the address block of the DNS server used for your on-premises domain. For a
     * single IP address use a CIDR address block with /32. For example
     * 10.0.0.0/32.</p>
     */
    inline void SetCidrIp(const char* value) { m_cidrIpHasBeenSet = true; m_cidrIp.assign(value); }

    /**
     * <p>IP address block using CIDR format, for example 10.0.0.0/24. This is often
     * the address block of the DNS server used for your on-premises domain. For a
     * single IP address use a CIDR address block with /32. For example
     * 10.0.0.0/32.</p>
     */
    inline IpRoute& WithCidrIp(const Aws::String& value) { SetCidrIp(value); return *this;}

    /**
     * <p>IP address block using CIDR format, for example 10.0.0.0/24. This is often
     * the address block of the DNS server used for your on-premises domain. For a
     * single IP address use a CIDR address block with /32. For example
     * 10.0.0.0/32.</p>
     */
    inline IpRoute& WithCidrIp(Aws::String&& value) { SetCidrIp(std::move(value)); return *this;}

    /**
     * <p>IP address block using CIDR format, for example 10.0.0.0/24. This is often
     * the address block of the DNS server used for your on-premises domain. For a
     * single IP address use a CIDR address block with /32. For example
     * 10.0.0.0/32.</p>
     */
    inline IpRoute& WithCidrIp(const char* value) { SetCidrIp(value); return *this;}


    /**
     * <p>Description of the address block.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>Description of the address block.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>Description of the address block.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>Description of the address block.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>Description of the address block.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>Description of the address block.</p>
     */
    inline IpRoute& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>Description of the address block.</p>
     */
    inline IpRoute& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>Description of the address block.</p>
     */
    inline IpRoute& WithDescription(const char* value) { SetDescription(value); return *this;}

  private:

    Aws::String m_cidrIp;
    bool m_cidrIpHasBeenSet;

    Aws::String m_description;
    bool m_descriptionHasBeenSet;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
