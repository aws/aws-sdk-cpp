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
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/model/DedicatedTenancySupportResultEnum.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace WorkSpaces
{
namespace Model
{
  class AWS_WORKSPACES_API DescribeAccountResult
  {
  public:
    DescribeAccountResult();
    DescribeAccountResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeAccountResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The status of BYOL (whether BYOL is enabled or disabled).</p>
     */
    inline const DedicatedTenancySupportResultEnum& GetDedicatedTenancySupport() const{ return m_dedicatedTenancySupport; }

    /**
     * <p>The status of BYOL (whether BYOL is enabled or disabled).</p>
     */
    inline void SetDedicatedTenancySupport(const DedicatedTenancySupportResultEnum& value) { m_dedicatedTenancySupport = value; }

    /**
     * <p>The status of BYOL (whether BYOL is enabled or disabled).</p>
     */
    inline void SetDedicatedTenancySupport(DedicatedTenancySupportResultEnum&& value) { m_dedicatedTenancySupport = std::move(value); }

    /**
     * <p>The status of BYOL (whether BYOL is enabled or disabled).</p>
     */
    inline DescribeAccountResult& WithDedicatedTenancySupport(const DedicatedTenancySupportResultEnum& value) { SetDedicatedTenancySupport(value); return *this;}

    /**
     * <p>The status of BYOL (whether BYOL is enabled or disabled).</p>
     */
    inline DescribeAccountResult& WithDedicatedTenancySupport(DedicatedTenancySupportResultEnum&& value) { SetDedicatedTenancySupport(std::move(value)); return *this;}


    /**
     * <p>The IP address range, specified as an IPv4 CIDR block, used for the
     * management network interface.</p> <p>The management network interface is
     * connected to a secure Amazon WorkSpaces management network. It is used for
     * interactive streaming of the WorkSpace desktop to Amazon WorkSpaces clients, and
     * to allow Amazon WorkSpaces to manage the WorkSpace.</p>
     */
    inline const Aws::String& GetDedicatedTenancyManagementCidrRange() const{ return m_dedicatedTenancyManagementCidrRange; }

    /**
     * <p>The IP address range, specified as an IPv4 CIDR block, used for the
     * management network interface.</p> <p>The management network interface is
     * connected to a secure Amazon WorkSpaces management network. It is used for
     * interactive streaming of the WorkSpace desktop to Amazon WorkSpaces clients, and
     * to allow Amazon WorkSpaces to manage the WorkSpace.</p>
     */
    inline void SetDedicatedTenancyManagementCidrRange(const Aws::String& value) { m_dedicatedTenancyManagementCidrRange = value; }

    /**
     * <p>The IP address range, specified as an IPv4 CIDR block, used for the
     * management network interface.</p> <p>The management network interface is
     * connected to a secure Amazon WorkSpaces management network. It is used for
     * interactive streaming of the WorkSpace desktop to Amazon WorkSpaces clients, and
     * to allow Amazon WorkSpaces to manage the WorkSpace.</p>
     */
    inline void SetDedicatedTenancyManagementCidrRange(Aws::String&& value) { m_dedicatedTenancyManagementCidrRange = std::move(value); }

    /**
     * <p>The IP address range, specified as an IPv4 CIDR block, used for the
     * management network interface.</p> <p>The management network interface is
     * connected to a secure Amazon WorkSpaces management network. It is used for
     * interactive streaming of the WorkSpace desktop to Amazon WorkSpaces clients, and
     * to allow Amazon WorkSpaces to manage the WorkSpace.</p>
     */
    inline void SetDedicatedTenancyManagementCidrRange(const char* value) { m_dedicatedTenancyManagementCidrRange.assign(value); }

    /**
     * <p>The IP address range, specified as an IPv4 CIDR block, used for the
     * management network interface.</p> <p>The management network interface is
     * connected to a secure Amazon WorkSpaces management network. It is used for
     * interactive streaming of the WorkSpace desktop to Amazon WorkSpaces clients, and
     * to allow Amazon WorkSpaces to manage the WorkSpace.</p>
     */
    inline DescribeAccountResult& WithDedicatedTenancyManagementCidrRange(const Aws::String& value) { SetDedicatedTenancyManagementCidrRange(value); return *this;}

    /**
     * <p>The IP address range, specified as an IPv4 CIDR block, used for the
     * management network interface.</p> <p>The management network interface is
     * connected to a secure Amazon WorkSpaces management network. It is used for
     * interactive streaming of the WorkSpace desktop to Amazon WorkSpaces clients, and
     * to allow Amazon WorkSpaces to manage the WorkSpace.</p>
     */
    inline DescribeAccountResult& WithDedicatedTenancyManagementCidrRange(Aws::String&& value) { SetDedicatedTenancyManagementCidrRange(std::move(value)); return *this;}

    /**
     * <p>The IP address range, specified as an IPv4 CIDR block, used for the
     * management network interface.</p> <p>The management network interface is
     * connected to a secure Amazon WorkSpaces management network. It is used for
     * interactive streaming of the WorkSpace desktop to Amazon WorkSpaces clients, and
     * to allow Amazon WorkSpaces to manage the WorkSpace.</p>
     */
    inline DescribeAccountResult& WithDedicatedTenancyManagementCidrRange(const char* value) { SetDedicatedTenancyManagementCidrRange(value); return *this;}

  private:

    DedicatedTenancySupportResultEnum m_dedicatedTenancySupport;

    Aws::String m_dedicatedTenancyManagementCidrRange;
  };

} // namespace Model
} // namespace WorkSpaces
} // namespace Aws
