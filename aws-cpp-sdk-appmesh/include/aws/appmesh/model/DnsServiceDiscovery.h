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
    AWS_APPMESH_API DnsServiceDiscovery();
    AWS_APPMESH_API DnsServiceDiscovery(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API DnsServiceDiscovery& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPMESH_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies the DNS service discovery hostname for the virtual node. </p>
     */
    inline const Aws::String& GetHostname() const{ return m_hostname; }

    /**
     * <p>Specifies the DNS service discovery hostname for the virtual node. </p>
     */
    inline bool HostnameHasBeenSet() const { return m_hostnameHasBeenSet; }

    /**
     * <p>Specifies the DNS service discovery hostname for the virtual node. </p>
     */
    inline void SetHostname(const Aws::String& value) { m_hostnameHasBeenSet = true; m_hostname = value; }

    /**
     * <p>Specifies the DNS service discovery hostname for the virtual node. </p>
     */
    inline void SetHostname(Aws::String&& value) { m_hostnameHasBeenSet = true; m_hostname = std::move(value); }

    /**
     * <p>Specifies the DNS service discovery hostname for the virtual node. </p>
     */
    inline void SetHostname(const char* value) { m_hostnameHasBeenSet = true; m_hostname.assign(value); }

    /**
     * <p>Specifies the DNS service discovery hostname for the virtual node. </p>
     */
    inline DnsServiceDiscovery& WithHostname(const Aws::String& value) { SetHostname(value); return *this;}

    /**
     * <p>Specifies the DNS service discovery hostname for the virtual node. </p>
     */
    inline DnsServiceDiscovery& WithHostname(Aws::String&& value) { SetHostname(std::move(value)); return *this;}

    /**
     * <p>Specifies the DNS service discovery hostname for the virtual node. </p>
     */
    inline DnsServiceDiscovery& WithHostname(const char* value) { SetHostname(value); return *this;}


    /**
     * <p>The preferred IP version that this virtual node uses. Setting the IP
     * preference on the virtual node only overrides the IP preference set for the mesh
     * on this specific node.</p>
     */
    inline const IpPreference& GetIpPreference() const{ return m_ipPreference; }

    /**
     * <p>The preferred IP version that this virtual node uses. Setting the IP
     * preference on the virtual node only overrides the IP preference set for the mesh
     * on this specific node.</p>
     */
    inline bool IpPreferenceHasBeenSet() const { return m_ipPreferenceHasBeenSet; }

    /**
     * <p>The preferred IP version that this virtual node uses. Setting the IP
     * preference on the virtual node only overrides the IP preference set for the mesh
     * on this specific node.</p>
     */
    inline void SetIpPreference(const IpPreference& value) { m_ipPreferenceHasBeenSet = true; m_ipPreference = value; }

    /**
     * <p>The preferred IP version that this virtual node uses. Setting the IP
     * preference on the virtual node only overrides the IP preference set for the mesh
     * on this specific node.</p>
     */
    inline void SetIpPreference(IpPreference&& value) { m_ipPreferenceHasBeenSet = true; m_ipPreference = std::move(value); }

    /**
     * <p>The preferred IP version that this virtual node uses. Setting the IP
     * preference on the virtual node only overrides the IP preference set for the mesh
     * on this specific node.</p>
     */
    inline DnsServiceDiscovery& WithIpPreference(const IpPreference& value) { SetIpPreference(value); return *this;}

    /**
     * <p>The preferred IP version that this virtual node uses. Setting the IP
     * preference on the virtual node only overrides the IP preference set for the mesh
     * on this specific node.</p>
     */
    inline DnsServiceDiscovery& WithIpPreference(IpPreference&& value) { SetIpPreference(std::move(value)); return *this;}


    /**
     * <p>Specifies the DNS response type for the virtual node.</p>
     */
    inline const DnsResponseType& GetResponseType() const{ return m_responseType; }

    /**
     * <p>Specifies the DNS response type for the virtual node.</p>
     */
    inline bool ResponseTypeHasBeenSet() const { return m_responseTypeHasBeenSet; }

    /**
     * <p>Specifies the DNS response type for the virtual node.</p>
     */
    inline void SetResponseType(const DnsResponseType& value) { m_responseTypeHasBeenSet = true; m_responseType = value; }

    /**
     * <p>Specifies the DNS response type for the virtual node.</p>
     */
    inline void SetResponseType(DnsResponseType&& value) { m_responseTypeHasBeenSet = true; m_responseType = std::move(value); }

    /**
     * <p>Specifies the DNS response type for the virtual node.</p>
     */
    inline DnsServiceDiscovery& WithResponseType(const DnsResponseType& value) { SetResponseType(value); return *this;}

    /**
     * <p>Specifies the DNS response type for the virtual node.</p>
     */
    inline DnsServiceDiscovery& WithResponseType(DnsResponseType&& value) { SetResponseType(std::move(value)); return *this;}

  private:

    Aws::String m_hostname;
    bool m_hostnameHasBeenSet = false;

    IpPreference m_ipPreference;
    bool m_ipPreferenceHasBeenSet = false;

    DnsResponseType m_responseType;
    bool m_responseTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
