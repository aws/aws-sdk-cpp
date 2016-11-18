﻿/*
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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/directconnect/model/VirtualInterface.h>

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
namespace DirectConnect
{
namespace Model
{
  /**
   * <p>A structure containing a list of virtual interfaces.</p>
   */
  class AWS_DIRECTCONNECT_API DescribeVirtualInterfacesResult
  {
  public:
    DescribeVirtualInterfacesResult();
    DescribeVirtualInterfacesResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeVirtualInterfacesResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>A list of virtual interfaces.</p>
     */
    inline const Aws::Vector<VirtualInterface>& GetVirtualInterfaces() const{ return m_virtualInterfaces; }

    /**
     * <p>A list of virtual interfaces.</p>
     */
    inline void SetVirtualInterfaces(const Aws::Vector<VirtualInterface>& value) { m_virtualInterfaces = value; }

    /**
     * <p>A list of virtual interfaces.</p>
     */
    inline void SetVirtualInterfaces(Aws::Vector<VirtualInterface>&& value) { m_virtualInterfaces = value; }

    /**
     * <p>A list of virtual interfaces.</p>
     */
    inline DescribeVirtualInterfacesResult& WithVirtualInterfaces(const Aws::Vector<VirtualInterface>& value) { SetVirtualInterfaces(value); return *this;}

    /**
     * <p>A list of virtual interfaces.</p>
     */
    inline DescribeVirtualInterfacesResult& WithVirtualInterfaces(Aws::Vector<VirtualInterface>&& value) { SetVirtualInterfaces(value); return *this;}

    /**
     * <p>A list of virtual interfaces.</p>
     */
    inline DescribeVirtualInterfacesResult& AddVirtualInterfaces(const VirtualInterface& value) { m_virtualInterfaces.push_back(value); return *this; }

    /**
     * <p>A list of virtual interfaces.</p>
     */
    inline DescribeVirtualInterfacesResult& AddVirtualInterfaces(VirtualInterface&& value) { m_virtualInterfaces.push_back(value); return *this; }

  private:
    Aws::Vector<VirtualInterface> m_virtualInterfaces;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
