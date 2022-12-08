/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/servicediscovery/model/PublicDnsPropertiesMutableChange.h>
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
   * <p>Updated properties for the public DNS namespace.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/PublicDnsNamespacePropertiesChange">AWS
   * API Reference</a></p>
   */
  class PublicDnsNamespacePropertiesChange
  {
  public:
    AWS_SERVICEDISCOVERY_API PublicDnsNamespacePropertiesChange();
    AWS_SERVICEDISCOVERY_API PublicDnsNamespacePropertiesChange(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEDISCOVERY_API PublicDnsNamespacePropertiesChange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICEDISCOVERY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Updated DNS properties for the hosted zone for the public DNS namespace.</p>
     */
    inline const PublicDnsPropertiesMutableChange& GetDnsProperties() const{ return m_dnsProperties; }

    /**
     * <p>Updated DNS properties for the hosted zone for the public DNS namespace.</p>
     */
    inline bool DnsPropertiesHasBeenSet() const { return m_dnsPropertiesHasBeenSet; }

    /**
     * <p>Updated DNS properties for the hosted zone for the public DNS namespace.</p>
     */
    inline void SetDnsProperties(const PublicDnsPropertiesMutableChange& value) { m_dnsPropertiesHasBeenSet = true; m_dnsProperties = value; }

    /**
     * <p>Updated DNS properties for the hosted zone for the public DNS namespace.</p>
     */
    inline void SetDnsProperties(PublicDnsPropertiesMutableChange&& value) { m_dnsPropertiesHasBeenSet = true; m_dnsProperties = std::move(value); }

    /**
     * <p>Updated DNS properties for the hosted zone for the public DNS namespace.</p>
     */
    inline PublicDnsNamespacePropertiesChange& WithDnsProperties(const PublicDnsPropertiesMutableChange& value) { SetDnsProperties(value); return *this;}

    /**
     * <p>Updated DNS properties for the hosted zone for the public DNS namespace.</p>
     */
    inline PublicDnsNamespacePropertiesChange& WithDnsProperties(PublicDnsPropertiesMutableChange&& value) { SetDnsProperties(std::move(value)); return *this;}

  private:

    PublicDnsPropertiesMutableChange m_dnsProperties;
    bool m_dnsPropertiesHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
