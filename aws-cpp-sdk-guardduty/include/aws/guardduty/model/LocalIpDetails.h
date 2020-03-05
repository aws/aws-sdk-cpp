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
#include <aws/guardduty/GuardDuty_EXPORTS.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Contains information about the local IP address of the
   * connection.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/LocalIpDetails">AWS
   * API Reference</a></p>
   */
  class AWS_GUARDDUTY_API LocalIpDetails
  {
  public:
    LocalIpDetails();
    LocalIpDetails(Aws::Utils::Json::JsonView jsonValue);
    LocalIpDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>IPV4 remote address of the connection.</p>
     */
    inline const Aws::String& GetIpAddressV4() const{ return m_ipAddressV4; }

    /**
     * <p>IPV4 remote address of the connection.</p>
     */
    inline bool IpAddressV4HasBeenSet() const { return m_ipAddressV4HasBeenSet; }

    /**
     * <p>IPV4 remote address of the connection.</p>
     */
    inline void SetIpAddressV4(const Aws::String& value) { m_ipAddressV4HasBeenSet = true; m_ipAddressV4 = value; }

    /**
     * <p>IPV4 remote address of the connection.</p>
     */
    inline void SetIpAddressV4(Aws::String&& value) { m_ipAddressV4HasBeenSet = true; m_ipAddressV4 = std::move(value); }

    /**
     * <p>IPV4 remote address of the connection.</p>
     */
    inline void SetIpAddressV4(const char* value) { m_ipAddressV4HasBeenSet = true; m_ipAddressV4.assign(value); }

    /**
     * <p>IPV4 remote address of the connection.</p>
     */
    inline LocalIpDetails& WithIpAddressV4(const Aws::String& value) { SetIpAddressV4(value); return *this;}

    /**
     * <p>IPV4 remote address of the connection.</p>
     */
    inline LocalIpDetails& WithIpAddressV4(Aws::String&& value) { SetIpAddressV4(std::move(value)); return *this;}

    /**
     * <p>IPV4 remote address of the connection.</p>
     */
    inline LocalIpDetails& WithIpAddressV4(const char* value) { SetIpAddressV4(value); return *this;}

  private:

    Aws::String m_ipAddressV4;
    bool m_ipAddressV4HasBeenSet;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
