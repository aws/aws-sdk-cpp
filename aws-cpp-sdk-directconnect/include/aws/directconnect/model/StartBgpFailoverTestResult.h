/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/directconnect/model/VirtualInterfaceTestHistory.h>
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
  class StartBgpFailoverTestResult
  {
  public:
    AWS_DIRECTCONNECT_API StartBgpFailoverTestResult();
    AWS_DIRECTCONNECT_API StartBgpFailoverTestResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTCONNECT_API StartBgpFailoverTestResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the virtual interface failover test.</p>
     */
    inline const VirtualInterfaceTestHistory& GetVirtualInterfaceTest() const{ return m_virtualInterfaceTest; }

    /**
     * <p>Information about the virtual interface failover test.</p>
     */
    inline void SetVirtualInterfaceTest(const VirtualInterfaceTestHistory& value) { m_virtualInterfaceTest = value; }

    /**
     * <p>Information about the virtual interface failover test.</p>
     */
    inline void SetVirtualInterfaceTest(VirtualInterfaceTestHistory&& value) { m_virtualInterfaceTest = std::move(value); }

    /**
     * <p>Information about the virtual interface failover test.</p>
     */
    inline StartBgpFailoverTestResult& WithVirtualInterfaceTest(const VirtualInterfaceTestHistory& value) { SetVirtualInterfaceTest(value); return *this;}

    /**
     * <p>Information about the virtual interface failover test.</p>
     */
    inline StartBgpFailoverTestResult& WithVirtualInterfaceTest(VirtualInterfaceTestHistory&& value) { SetVirtualInterfaceTest(std::move(value)); return *this;}

  private:

    VirtualInterfaceTestHistory m_virtualInterfaceTest;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
