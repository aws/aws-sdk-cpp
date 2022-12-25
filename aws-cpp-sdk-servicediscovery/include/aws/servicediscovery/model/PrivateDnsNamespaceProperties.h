/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/servicediscovery/model/PrivateDnsPropertiesMutable.h>
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
namespace ServiceDiscovery
{
namespace Model
{

  /**
   * <p>DNS properties for the private DNS namespace.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/PrivateDnsNamespaceProperties">AWS
   * API Reference</a></p>
   */
  class PrivateDnsNamespaceProperties
  {
  public:
    AWS_SERVICEDISCOVERY_API PrivateDnsNamespaceProperties();
    AWS_SERVICEDISCOVERY_API PrivateDnsNamespaceProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEDISCOVERY_API PrivateDnsNamespaceProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>DNS properties for the private DNS namespace.</p>
     */
    inline const PrivateDnsPropertiesMutable& GetDnsProperties() const{ return m_dnsProperties; }

    /**
     * <p>DNS properties for the private DNS namespace.</p>
     */
    inline bool DnsPropertiesHasBeenSet() const { return m_dnsPropertiesHasBeenSet; }

    /**
     * <p>DNS properties for the private DNS namespace.</p>
     */
    inline void SetDnsProperties(const PrivateDnsPropertiesMutable& value) { m_dnsPropertiesHasBeenSet = true; m_dnsProperties = value; }

    /**
     * <p>DNS properties for the private DNS namespace.</p>
     */
    inline void SetDnsProperties(PrivateDnsPropertiesMutable&& value) { m_dnsPropertiesHasBeenSet = true; m_dnsProperties = std::move(value); }

    /**
     * <p>DNS properties for the private DNS namespace.</p>
     */
    inline PrivateDnsNamespaceProperties& WithDnsProperties(const PrivateDnsPropertiesMutable& value) { SetDnsProperties(value); return *this;}

    /**
     * <p>DNS properties for the private DNS namespace.</p>
     */
    inline PrivateDnsNamespaceProperties& WithDnsProperties(PrivateDnsPropertiesMutable&& value) { SetDnsProperties(std::move(value)); return *this;}

  private:

    PrivateDnsPropertiesMutable m_dnsProperties;
    bool m_dnsPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
