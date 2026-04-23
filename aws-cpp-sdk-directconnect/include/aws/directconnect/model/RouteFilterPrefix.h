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
#include <aws/directconnect/DirectConnect_EXPORTS.h>
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
namespace DirectConnect
{
namespace Model
{

  /**
   * <p>Information about a route filter prefix that a customer can advertise through
   * Border Gateway Protocol (BGP) over a public virtual interface.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/RouteFilterPrefix">AWS
   * API Reference</a></p>
   */
  class AWS_DIRECTCONNECT_API RouteFilterPrefix
  {
  public:
    RouteFilterPrefix();
    RouteFilterPrefix(Aws::Utils::Json::JsonView jsonValue);
    RouteFilterPrefix& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The CIDR block for the advertised route. Separate multiple routes using
     * commas. An IPv6 CIDR must use /64 or shorter.</p>
     */
    inline const Aws::String& GetCidr() const{ return m_cidr; }

    /**
     * <p>The CIDR block for the advertised route. Separate multiple routes using
     * commas. An IPv6 CIDR must use /64 or shorter.</p>
     */
    inline bool CidrHasBeenSet() const { return m_cidrHasBeenSet; }

    /**
     * <p>The CIDR block for the advertised route. Separate multiple routes using
     * commas. An IPv6 CIDR must use /64 or shorter.</p>
     */
    inline void SetCidr(const Aws::String& value) { m_cidrHasBeenSet = true; m_cidr = value; }

    /**
     * <p>The CIDR block for the advertised route. Separate multiple routes using
     * commas. An IPv6 CIDR must use /64 or shorter.</p>
     */
    inline void SetCidr(Aws::String&& value) { m_cidrHasBeenSet = true; m_cidr = std::move(value); }

    /**
     * <p>The CIDR block for the advertised route. Separate multiple routes using
     * commas. An IPv6 CIDR must use /64 or shorter.</p>
     */
    inline void SetCidr(const char* value) { m_cidrHasBeenSet = true; m_cidr.assign(value); }

    /**
     * <p>The CIDR block for the advertised route. Separate multiple routes using
     * commas. An IPv6 CIDR must use /64 or shorter.</p>
     */
    inline RouteFilterPrefix& WithCidr(const Aws::String& value) { SetCidr(value); return *this;}

    /**
     * <p>The CIDR block for the advertised route. Separate multiple routes using
     * commas. An IPv6 CIDR must use /64 or shorter.</p>
     */
    inline RouteFilterPrefix& WithCidr(Aws::String&& value) { SetCidr(std::move(value)); return *this;}

    /**
     * <p>The CIDR block for the advertised route. Separate multiple routes using
     * commas. An IPv6 CIDR must use /64 or shorter.</p>
     */
    inline RouteFilterPrefix& WithCidr(const char* value) { SetCidr(value); return *this;}

  private:

    Aws::String m_cidr;
    bool m_cidrHasBeenSet;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
