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
  class AWS_DIRECTCONNECT_API StartBgpFailoverTestResult
  {
  public:
    StartBgpFailoverTestResult();
    StartBgpFailoverTestResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    StartBgpFailoverTestResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
