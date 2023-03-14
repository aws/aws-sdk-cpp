/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/directconnect/model/VirtualInterfaceTestHistory.h>
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
namespace DirectConnect
{
namespace Model
{
  class StopBgpFailoverTestResult
  {
  public:
    AWS_DIRECTCONNECT_API StopBgpFailoverTestResult();
    AWS_DIRECTCONNECT_API StopBgpFailoverTestResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTCONNECT_API StopBgpFailoverTestResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline StopBgpFailoverTestResult& WithVirtualInterfaceTest(const VirtualInterfaceTestHistory& value) { SetVirtualInterfaceTest(value); return *this;}

    /**
     * <p>Information about the virtual interface failover test.</p>
     */
    inline StopBgpFailoverTestResult& WithVirtualInterfaceTest(VirtualInterfaceTestHistory&& value) { SetVirtualInterfaceTest(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StopBgpFailoverTestResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StopBgpFailoverTestResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StopBgpFailoverTestResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    VirtualInterfaceTestHistory m_virtualInterfaceTest;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
