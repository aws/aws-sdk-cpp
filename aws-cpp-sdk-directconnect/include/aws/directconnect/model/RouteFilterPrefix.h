/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace DirectConnect
{
namespace Model
{

  /**
   * <p>A route filter prefix that the customer can advertise through Border Gateway
   * Protocol (BGP) over a public virtual interface.</p>
   */
  class AWS_DIRECTCONNECT_API RouteFilterPrefix
  {
  public:
    RouteFilterPrefix();
    RouteFilterPrefix(const Aws::Utils::Json::JsonValue& jsonValue);
    RouteFilterPrefix& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>CIDR notation for the advertised route. Multiple routes are separated by
     * commas.</p> <p>Example: 10.10.10.0/24,10.10.11.0/24</p>
     */
    inline const Aws::String& GetCidr() const{ return m_cidr; }

    /**
     * <p>CIDR notation for the advertised route. Multiple routes are separated by
     * commas.</p> <p>Example: 10.10.10.0/24,10.10.11.0/24</p>
     */
    inline void SetCidr(const Aws::String& value) { m_cidrHasBeenSet = true; m_cidr = value; }

    /**
     * <p>CIDR notation for the advertised route. Multiple routes are separated by
     * commas.</p> <p>Example: 10.10.10.0/24,10.10.11.0/24</p>
     */
    inline void SetCidr(Aws::String&& value) { m_cidrHasBeenSet = true; m_cidr = value; }

    /**
     * <p>CIDR notation for the advertised route. Multiple routes are separated by
     * commas.</p> <p>Example: 10.10.10.0/24,10.10.11.0/24</p>
     */
    inline void SetCidr(const char* value) { m_cidrHasBeenSet = true; m_cidr.assign(value); }

    /**
     * <p>CIDR notation for the advertised route. Multiple routes are separated by
     * commas.</p> <p>Example: 10.10.10.0/24,10.10.11.0/24</p>
     */
    inline RouteFilterPrefix& WithCidr(const Aws::String& value) { SetCidr(value); return *this;}

    /**
     * <p>CIDR notation for the advertised route. Multiple routes are separated by
     * commas.</p> <p>Example: 10.10.10.0/24,10.10.11.0/24</p>
     */
    inline RouteFilterPrefix& WithCidr(Aws::String&& value) { SetCidr(value); return *this;}

    /**
     * <p>CIDR notation for the advertised route. Multiple routes are separated by
     * commas.</p> <p>Example: 10.10.10.0/24,10.10.11.0/24</p>
     */
    inline RouteFilterPrefix& WithCidr(const char* value) { SetCidr(value); return *this;}

  private:
    Aws::String m_cidr;
    bool m_cidrHasBeenSet;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
