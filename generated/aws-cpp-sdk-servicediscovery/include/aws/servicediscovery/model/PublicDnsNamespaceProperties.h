﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/servicediscovery/model/PublicDnsPropertiesMutable.h>
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
   * <p>DNS properties for the public DNS namespace.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/PublicDnsNamespaceProperties">AWS
   * API Reference</a></p>
   */
  class AWS_SERVICEDISCOVERY_API PublicDnsNamespaceProperties
  {
  public:
    PublicDnsNamespaceProperties();
    PublicDnsNamespaceProperties(Aws::Utils::Json::JsonView jsonValue);
    PublicDnsNamespaceProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>DNS properties for the public DNS namespace.</p>
     */
    inline const PublicDnsPropertiesMutable& GetDnsProperties() const{ return m_dnsProperties; }

    /**
     * <p>DNS properties for the public DNS namespace.</p>
     */
    inline bool DnsPropertiesHasBeenSet() const { return m_dnsPropertiesHasBeenSet; }

    /**
     * <p>DNS properties for the public DNS namespace.</p>
     */
    inline void SetDnsProperties(const PublicDnsPropertiesMutable& value) { m_dnsPropertiesHasBeenSet = true; m_dnsProperties = value; }

    /**
     * <p>DNS properties for the public DNS namespace.</p>
     */
    inline void SetDnsProperties(PublicDnsPropertiesMutable&& value) { m_dnsPropertiesHasBeenSet = true; m_dnsProperties = std::move(value); }

    /**
     * <p>DNS properties for the public DNS namespace.</p>
     */
    inline PublicDnsNamespaceProperties& WithDnsProperties(const PublicDnsPropertiesMutable& value) { SetDnsProperties(value); return *this;}

    /**
     * <p>DNS properties for the public DNS namespace.</p>
     */
    inline PublicDnsNamespaceProperties& WithDnsProperties(PublicDnsPropertiesMutable&& value) { SetDnsProperties(std::move(value)); return *this;}

  private:

    PublicDnsPropertiesMutable m_dnsProperties;
    bool m_dnsPropertiesHasBeenSet;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
