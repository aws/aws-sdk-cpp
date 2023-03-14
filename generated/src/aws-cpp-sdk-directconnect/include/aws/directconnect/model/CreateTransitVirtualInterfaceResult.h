/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/directconnect/model/VirtualInterface.h>
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
  class CreateTransitVirtualInterfaceResult
  {
  public:
    AWS_DIRECTCONNECT_API CreateTransitVirtualInterfaceResult();
    AWS_DIRECTCONNECT_API CreateTransitVirtualInterfaceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTCONNECT_API CreateTransitVirtualInterfaceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const VirtualInterface& GetVirtualInterface() const{ return m_virtualInterface; }

    
    inline void SetVirtualInterface(const VirtualInterface& value) { m_virtualInterface = value; }

    
    inline void SetVirtualInterface(VirtualInterface&& value) { m_virtualInterface = std::move(value); }

    
    inline CreateTransitVirtualInterfaceResult& WithVirtualInterface(const VirtualInterface& value) { SetVirtualInterface(value); return *this;}

    
    inline CreateTransitVirtualInterfaceResult& WithVirtualInterface(VirtualInterface&& value) { SetVirtualInterface(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateTransitVirtualInterfaceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateTransitVirtualInterfaceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateTransitVirtualInterfaceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    VirtualInterface m_virtualInterface;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
