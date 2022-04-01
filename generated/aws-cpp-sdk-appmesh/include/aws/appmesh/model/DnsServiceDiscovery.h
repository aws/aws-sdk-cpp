﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appmesh/AppMesh_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class AWS_APPMESH_API DnsServiceDiscovery
  {
  public:
    DnsServiceDiscovery();
    DnsServiceDiscovery(Aws::Utils::Json::JsonView jsonValue);
    DnsServiceDiscovery& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


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
    bool m_hostnameHasBeenSet;

    DnsResponseType m_responseType;
    bool m_responseTypeHasBeenSet;
  };

} // namespace Model
} // namespace AppMesh
} // namespace Aws
