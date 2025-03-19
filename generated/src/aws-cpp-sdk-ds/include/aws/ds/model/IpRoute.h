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
    AWS_DIRECTORYSERVICE_API IpRoute() = default;
    AWS_DIRECTORYSERVICE_API IpRoute(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API IpRoute& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_DIRECTORYSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>IP address block using CIDR format, for example 10.0.0.0/24. This is often
     * the address block of the DNS server used for your self-managed domain. For a
     * single IP address use a CIDR address block with /32. For example
     * 10.0.0.0/32.</p>
     */
    inline const Aws::String& GetCidrIp() const { return m_cidrIp; }
    inline bool CidrIpHasBeenSet() const { return m_cidrIpHasBeenSet; }
    template<typename CidrIpT = Aws::String>
    void SetCidrIp(CidrIpT&& value) { m_cidrIpHasBeenSet = true; m_cidrIp = std::forward<CidrIpT>(value); }
    template<typename CidrIpT = Aws::String>
    IpRoute& WithCidrIp(CidrIpT&& value) { SetCidrIp(std::forward<CidrIpT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Description of the address block.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    IpRoute& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_cidrIp;
    bool m_cidrIpHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace DirectoryService
} // namespace Aws
