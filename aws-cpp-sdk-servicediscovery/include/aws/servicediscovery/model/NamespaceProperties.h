/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/servicediscovery/model/DnsProperties.h>
#include <aws/servicediscovery/model/HttpProperties.h>
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
   * <p>A complex type that contains information that's specific to the namespace
   * type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/NamespaceProperties">AWS
   * API Reference</a></p>
   */
  class NamespaceProperties
  {
  public:
    AWS_SERVICEDISCOVERY_API NamespaceProperties();
    AWS_SERVICEDISCOVERY_API NamespaceProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEDISCOVERY_API NamespaceProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A complex type that contains the ID for the Route 53 hosted zone that Cloud
     * Map creates when you create a namespace.</p>
     */
    inline const DnsProperties& GetDnsProperties() const{ return m_dnsProperties; }

    /**
     * <p>A complex type that contains the ID for the Route 53 hosted zone that Cloud
     * Map creates when you create a namespace.</p>
     */
    inline bool DnsPropertiesHasBeenSet() const { return m_dnsPropertiesHasBeenSet; }

    /**
     * <p>A complex type that contains the ID for the Route 53 hosted zone that Cloud
     * Map creates when you create a namespace.</p>
     */
    inline void SetDnsProperties(const DnsProperties& value) { m_dnsPropertiesHasBeenSet = true; m_dnsProperties = value; }

    /**
     * <p>A complex type that contains the ID for the Route 53 hosted zone that Cloud
     * Map creates when you create a namespace.</p>
     */
    inline void SetDnsProperties(DnsProperties&& value) { m_dnsPropertiesHasBeenSet = true; m_dnsProperties = std::move(value); }

    /**
     * <p>A complex type that contains the ID for the Route 53 hosted zone that Cloud
     * Map creates when you create a namespace.</p>
     */
    inline NamespaceProperties& WithDnsProperties(const DnsProperties& value) { SetDnsProperties(value); return *this;}

    /**
     * <p>A complex type that contains the ID for the Route 53 hosted zone that Cloud
     * Map creates when you create a namespace.</p>
     */
    inline NamespaceProperties& WithDnsProperties(DnsProperties&& value) { SetDnsProperties(std::move(value)); return *this;}


    /**
     * <p>A complex type that contains the name of an HTTP namespace.</p>
     */
    inline const HttpProperties& GetHttpProperties() const{ return m_httpProperties; }

    /**
     * <p>A complex type that contains the name of an HTTP namespace.</p>
     */
    inline bool HttpPropertiesHasBeenSet() const { return m_httpPropertiesHasBeenSet; }

    /**
     * <p>A complex type that contains the name of an HTTP namespace.</p>
     */
    inline void SetHttpProperties(const HttpProperties& value) { m_httpPropertiesHasBeenSet = true; m_httpProperties = value; }

    /**
     * <p>A complex type that contains the name of an HTTP namespace.</p>
     */
    inline void SetHttpProperties(HttpProperties&& value) { m_httpPropertiesHasBeenSet = true; m_httpProperties = std::move(value); }

    /**
     * <p>A complex type that contains the name of an HTTP namespace.</p>
     */
    inline NamespaceProperties& WithHttpProperties(const HttpProperties& value) { SetHttpProperties(value); return *this;}

    /**
     * <p>A complex type that contains the name of an HTTP namespace.</p>
     */
    inline NamespaceProperties& WithHttpProperties(HttpProperties&& value) { SetHttpProperties(std::move(value)); return *this;}

  private:

    DnsProperties m_dnsProperties;
    bool m_dnsPropertiesHasBeenSet = false;

    HttpProperties m_httpProperties;
    bool m_httpPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
