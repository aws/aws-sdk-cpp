/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/directconnect/DirectConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/directconnect/model/MacSecKey.h>
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
  class AssociateMacSecKeyResult
  {
  public:
    AWS_DIRECTCONNECT_API AssociateMacSecKeyResult();
    AWS_DIRECTCONNECT_API AssociateMacSecKeyResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_DIRECTCONNECT_API AssociateMacSecKeyResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the dedicated connection (dxcon-xxxx), or the ID of the LAG
     * (dxlag-xxxx).</p>
     */
    inline const Aws::String& GetConnectionId() const{ return m_connectionId; }

    /**
     * <p>The ID of the dedicated connection (dxcon-xxxx), or the ID of the LAG
     * (dxlag-xxxx).</p>
     */
    inline void SetConnectionId(const Aws::String& value) { m_connectionId = value; }

    /**
     * <p>The ID of the dedicated connection (dxcon-xxxx), or the ID of the LAG
     * (dxlag-xxxx).</p>
     */
    inline void SetConnectionId(Aws::String&& value) { m_connectionId = std::move(value); }

    /**
     * <p>The ID of the dedicated connection (dxcon-xxxx), or the ID of the LAG
     * (dxlag-xxxx).</p>
     */
    inline void SetConnectionId(const char* value) { m_connectionId.assign(value); }

    /**
     * <p>The ID of the dedicated connection (dxcon-xxxx), or the ID of the LAG
     * (dxlag-xxxx).</p>
     */
    inline AssociateMacSecKeyResult& WithConnectionId(const Aws::String& value) { SetConnectionId(value); return *this;}

    /**
     * <p>The ID of the dedicated connection (dxcon-xxxx), or the ID of the LAG
     * (dxlag-xxxx).</p>
     */
    inline AssociateMacSecKeyResult& WithConnectionId(Aws::String&& value) { SetConnectionId(std::move(value)); return *this;}

    /**
     * <p>The ID of the dedicated connection (dxcon-xxxx), or the ID of the LAG
     * (dxlag-xxxx).</p>
     */
    inline AssociateMacSecKeyResult& WithConnectionId(const char* value) { SetConnectionId(value); return *this;}


    /**
     * <p>The MAC Security (MACsec) security keys associated with the dedicated
     * connection.</p>
     */
    inline const Aws::Vector<MacSecKey>& GetMacSecKeys() const{ return m_macSecKeys; }

    /**
     * <p>The MAC Security (MACsec) security keys associated with the dedicated
     * connection.</p>
     */
    inline void SetMacSecKeys(const Aws::Vector<MacSecKey>& value) { m_macSecKeys = value; }

    /**
     * <p>The MAC Security (MACsec) security keys associated with the dedicated
     * connection.</p>
     */
    inline void SetMacSecKeys(Aws::Vector<MacSecKey>&& value) { m_macSecKeys = std::move(value); }

    /**
     * <p>The MAC Security (MACsec) security keys associated with the dedicated
     * connection.</p>
     */
    inline AssociateMacSecKeyResult& WithMacSecKeys(const Aws::Vector<MacSecKey>& value) { SetMacSecKeys(value); return *this;}

    /**
     * <p>The MAC Security (MACsec) security keys associated with the dedicated
     * connection.</p>
     */
    inline AssociateMacSecKeyResult& WithMacSecKeys(Aws::Vector<MacSecKey>&& value) { SetMacSecKeys(std::move(value)); return *this;}

    /**
     * <p>The MAC Security (MACsec) security keys associated with the dedicated
     * connection.</p>
     */
    inline AssociateMacSecKeyResult& AddMacSecKeys(const MacSecKey& value) { m_macSecKeys.push_back(value); return *this; }

    /**
     * <p>The MAC Security (MACsec) security keys associated with the dedicated
     * connection.</p>
     */
    inline AssociateMacSecKeyResult& AddMacSecKeys(MacSecKey&& value) { m_macSecKeys.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_connectionId;

    Aws::Vector<MacSecKey> m_macSecKeys;
  };

} // namespace Model
} // namespace DirectConnect
} // namespace Aws
