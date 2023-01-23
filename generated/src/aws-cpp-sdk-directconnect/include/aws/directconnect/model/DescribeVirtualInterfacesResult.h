/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/directconnect/model/VirtualInterface.h>
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
namespace DirectConnect
{
namespace Model
{
  class DescribeVirtualInterfacesResult
  {
  public:
    AWS_DIRECTCONNECT_API DescribeVirtualInterfacesResult();
    AWS_DIRECTCONNECT_API DescribeVirtualInterfacesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTCONNECT_API DescribeVirtualInterfacesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The virtual interfaces</p>
     */
    inline const Aws::Vector<VirtualInterface>& GetVirtualInterfaces() const{ return m_virtualInterfaces; }

    /**
     * <p>The virtual interfaces</p>
     */
    inline void SetVirtualInterfaces(const Aws::Vector<VirtualInterface>& value) { m_virtualInterfaces = value; }

    /**
     * <p>The virtual interfaces</p>
     */
    inline void SetVirtualInterfaces(Aws::Vector<VirtualInterface>&& value) { m_virtualInterfaces = std::move(value); }

    /**
     * <p>The virtual interfaces</p>
     */
    inline DescribeVirtualInterfacesResult& WithVirtualInterfaces(const Aws::Vector<VirtualInterface>& value) { SetVirtualInterfaces(value); return *this;}

    /**
     * <p>The virtual interfaces</p>
     */
    inline DescribeVirtualInterfacesResult& WithVirtualInterfaces(Aws::Vector<VirtualInterface>&& value) { SetVirtualInterfaces(std::move(value)); return *this;}

    /**
     * <p>The virtual interfaces</p>
     */
    inline DescribeVirtualInterfacesResult& AddVirtualInterfaces(const VirtualInterface& value) { m_virtualInterfaces.push_back(value); return *this; }

    /**
     * <p>The virtual interfaces</p>
     */
    inline DescribeVirtualInterfacesResult& AddVirtualInterfaces(VirtualInterface&& value) { m_virtualInterfaces.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<VirtualInterface> m_virtualInterfaces;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
