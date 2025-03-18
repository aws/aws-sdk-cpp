/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/appmesh/model/IpPreference.h>
#include <aws/appmesh/model/DnsResponseType.h>
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
namespace AppMesh
{
namespace Model
{

  /**
   * <p>An object that represents the DNS service discovery information for your
   * virtual node.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/appmesh-2019-01-25/DnsServiceDiscovery">AWS
   * API Reference</a></p>
   */
  class DnsServiceDiscovery
  {
  public:
    AWS_APPMESH_API DnsServiceDiscovery() = default;
    AWS_APPMESH_API DnsServiceDiscovery(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API DnsServiceDiscovery& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies the DNS service discovery hostname for the virtual node. </p>
     */
    inline const Aws::String& GetHostname() const { return m_hostname; }
    inline bool HostnameHasBeenSet() const { return m_hostnameHasBeenSet; }
    template<typename HostnameT = Aws::String>
    void SetHostname(HostnameT&& value) { m_hostnameHasBeenSet = true; m_hostname = std::forward<HostnameT>(value); }
    template<typename HostnameT = Aws::String>
    DnsServiceDiscovery& WithHostname(HostnameT&& value) { SetHostname(std::forward<HostnameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The preferred IP version that this virtual node uses. Setting the IP
     * preference on the virtual node only overrides the IP preference set for the mesh
     * on this specific node.</p>
     */
    inline IpPreference GetIpPreference() const { return m_ipPreference; }
    inline bool IpPreferenceHasBeenSet() const { return m_ipPreferenceHasBeenSet; }
    inline void SetIpPreference(IpPreference value) { m_ipPreferenceHasBeenSet = true; m_ipPreference = value; }
    inline DnsServiceDiscovery& WithIpPreference(IpPreference value) { SetIpPreference(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the DNS response type for the virtual node.</p>
     */
    inline DnsResponseType GetResponseType() const { return m_responseType; }
    inline bool ResponseTypeHasBeenSet() const { return m_responseTypeHasBeenSet; }
    inline void SetResponseType(DnsResponseType value) { m_responseTypeHasBeenSet = true; m_responseType = value; }
    inline DnsServiceDiscovery& WithResponseType(DnsResponseType value) { SetResponseType(value); return *this;}
    ///@}
  private:

    Aws::String m_hostname;
    bool m_hostnameHasBeenSet = false;

    IpPreference m_ipPreference{IpPreference::NOT_SET};
    bool m_ipPreferenceHasBeenSet = false;

    DnsResponseType m_responseType{DnsResponseType::NOT_SET};
    bool m_responseTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
