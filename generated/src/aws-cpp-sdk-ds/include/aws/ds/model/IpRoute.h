/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * your self-managed domain. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ds-2015-04-16/IpRoute">AWS API
   * Reference</a></p>
   */
  class IpRoute
  {
  public:
    AWS_DIRECTORYSERVICE_API IpRoute();
    AWS_DIRECTORYSERVICE_API IpRoute(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API IpRoute& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>IP address block using CIDR format, for example 10.0.0.0/24. This is often
     * the address block of the DNS server used for your self-managed domain. For a
     * single IP address use a CIDR address block with /32. For example
     * 10.0.0.0/32.</p>
     */
    inline const Aws::String& GetCidrIp() const{ return m_cidrIp; }

    /**
     * <p>IP address block using CIDR format, for example 10.0.0.0/24. This is often
     * the address block of the DNS server used for your self-managed domain. For a
     * single IP address use a CIDR address block with /32. For example
     * 10.0.0.0/32.</p>
     */
    inline bool CidrIpHasBeenSet() const { return m_cidrIpHasBeenSet; }

    /**
     * <p>IP address block using CIDR format, for example 10.0.0.0/24. This is often
     * the address block of the DNS server used for your self-managed domain. For a
     * single IP address use a CIDR address block with /32. For example
     * 10.0.0.0/32.</p>
     */
    inline void SetCidrIp(const Aws::String& value) { m_cidrIpHasBeenSet = true; m_cidrIp = value; }

    /**
     * <p>IP address block using CIDR format, for example 10.0.0.0/24. This is often
     * the address block of the DNS server used for your self-managed domain. For a
     * single IP address use a CIDR address block with /32. For example
     * 10.0.0.0/32.</p>
     */
    inline void SetCidrIp(Aws::String&& value) { m_cidrIpHasBeenSet = true; m_cidrIp = std::move(value); }

    /**
     * <p>IP address block using CIDR format, for example 10.0.0.0/24. This is often
     * the address block of the DNS server used for your self-managed domain. For a
     * single IP address use a CIDR address block with /32. For example
     * 10.0.0.0/32.</p>
     */
    inline void SetCidrIp(const char* value) { m_cidrIpHasBeenSet = true; m_cidrIp.assign(value); }

    /**
     * <p>IP address block using CIDR format, for example 10.0.0.0/24. This is often
     * the address block of the DNS server used for your self-managed domain. For a
     * single IP address use a CIDR address block with /32. For example
     * 10.0.0.0/32.</p>
     */
    inline IpRoute& WithCidrIp(const Aws::String& value) { SetCidrIp(value); return *this;}

    /**
     * <p>IP address block using CIDR format, for example 10.0.0.0/24. This is often
     * the address block of the DNS server used for your self-managed domain. For a
     * single IP address use a CIDR address block with /32. For example
     * 10.0.0.0/32.</p>
     */
    inline IpRoute& WithCidrIp(Aws::String&& value) { SetCidrIp(std::move(value)); return *this;}

    /**
     * <p>IP address block using CIDR format, for example 10.0.0.0/24. This is often
     * the address block of the DNS server used for your self-managed domain. For a
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
    bool m_cidrIpHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
