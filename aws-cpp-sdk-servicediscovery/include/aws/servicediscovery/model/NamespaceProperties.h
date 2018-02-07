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
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/servicediscovery/model/DnsProperties.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ServiceDiscovery
{
namespace Model
{

  /**
   * <p>A complex type that contains information that is specific to the namespace
   * type.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/NamespaceProperties">AWS
   * API Reference</a></p>
   */
  class AWS_SERVICEDISCOVERY_API NamespaceProperties
  {
  public:
    NamespaceProperties();
    NamespaceProperties(const Aws::Utils::Json::JsonValue& jsonValue);
    NamespaceProperties& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A complex type that contains the ID for the hosted zone that Route 53 creates
     * when you create a namespace.</p>
     */
    inline const DnsProperties& GetDnsProperties() const{ return m_dnsProperties; }

    /**
     * <p>A complex type that contains the ID for the hosted zone that Route 53 creates
     * when you create a namespace.</p>
     */
    inline void SetDnsProperties(const DnsProperties& value) { m_dnsPropertiesHasBeenSet = true; m_dnsProperties = value; }

    /**
     * <p>A complex type that contains the ID for the hosted zone that Route 53 creates
     * when you create a namespace.</p>
     */
    inline void SetDnsProperties(DnsProperties&& value) { m_dnsPropertiesHasBeenSet = true; m_dnsProperties = std::move(value); }

    /**
     * <p>A complex type that contains the ID for the hosted zone that Route 53 creates
     * when you create a namespace.</p>
     */
    inline NamespaceProperties& WithDnsProperties(const DnsProperties& value) { SetDnsProperties(value); return *this;}

    /**
     * <p>A complex type that contains the ID for the hosted zone that Route 53 creates
     * when you create a namespace.</p>
     */
    inline NamespaceProperties& WithDnsProperties(DnsProperties&& value) { SetDnsProperties(std::move(value)); return *this;}

  private:

    DnsProperties m_dnsProperties;
    bool m_dnsPropertiesHasBeenSet;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws
