/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
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
  class CreateBGPPeerResult
  {
  public:
    AWS_DIRECTCONNECT_API CreateBGPPeerResult();
    AWS_DIRECTCONNECT_API CreateBGPPeerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTCONNECT_API CreateBGPPeerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The virtual interface.</p>
     */
    inline const VirtualInterface& GetVirtualInterface() const{ return m_virtualInterface; }

    /**
     * <p>The virtual interface.</p>
     */
    inline void SetVirtualInterface(const VirtualInterface& value) { m_virtualInterface = value; }

    /**
     * <p>The virtual interface.</p>
     */
    inline void SetVirtualInterface(VirtualInterface&& value) { m_virtualInterface = std::move(value); }

    /**
     * <p>The virtual interface.</p>
     */
    inline CreateBGPPeerResult& WithVirtualInterface(const VirtualInterface& value) { SetVirtualInterface(value); return *this;}

    /**
     * <p>The virtual interface.</p>
     */
    inline CreateBGPPeerResult& WithVirtualInterface(VirtualInterface&& value) { SetVirtualInterface(std::move(value)); return *this;}

  private:

    VirtualInterface m_virtualInterface;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
