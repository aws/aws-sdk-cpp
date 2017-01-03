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
   * <p>The response received when DeleteBGPPeer is called.</p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/directconnect-2012-10-25/DeleteBGPPeerResponse">AWS
   * API Reference</a></p>
   */
  class AWS_DIRECTCONNECT_API DeleteBGPPeerResult
  {
  public:
    DeleteBGPPeerResult();
    DeleteBGPPeerResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DeleteBGPPeerResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    
    inline const VirtualInterface& GetVirtualInterface() const{ return m_virtualInterface; }

    
    inline void SetVirtualInterface(const VirtualInterface& value) { m_virtualInterface = value; }

    
    inline void SetVirtualInterface(VirtualInterface&& value) { m_virtualInterface = value; }

    
    inline DeleteBGPPeerResult& WithVirtualInterface(const VirtualInterface& value) { SetVirtualInterface(value); return *this;}

    
    inline DeleteBGPPeerResult& WithVirtualInterface(VirtualInterface&& value) { SetVirtualInterface(value); return *this;}

  private:
    VirtualInterface m_virtualInterface;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
