/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/managedblockchain/ManagedBlockchain_EXPORTS.h>
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
namespace ManagedBlockchain
{
namespace Model
{
  class CreateNetworkResult
  {
  public:
    AWS_MANAGEDBLOCKCHAIN_API CreateNetworkResult();
    AWS_MANAGEDBLOCKCHAIN_API CreateNetworkResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MANAGEDBLOCKCHAIN_API CreateNetworkResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier for the network.</p>
     */
    inline const Aws::String& GetNetworkId() const{ return m_networkId; }

    /**
     * <p>The unique identifier for the network.</p>
     */
    inline void SetNetworkId(const Aws::String& value) { m_networkId = value; }

    /**
     * <p>The unique identifier for the network.</p>
     */
    inline void SetNetworkId(Aws::String&& value) { m_networkId = std::move(value); }

    /**
     * <p>The unique identifier for the network.</p>
     */
    inline void SetNetworkId(const char* value) { m_networkId.assign(value); }

    /**
     * <p>The unique identifier for the network.</p>
     */
    inline CreateNetworkResult& WithNetworkId(const Aws::String& value) { SetNetworkId(value); return *this;}

    /**
     * <p>The unique identifier for the network.</p>
     */
    inline CreateNetworkResult& WithNetworkId(Aws::String&& value) { SetNetworkId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the network.</p>
     */
    inline CreateNetworkResult& WithNetworkId(const char* value) { SetNetworkId(value); return *this;}


    /**
     * <p>The unique identifier for the first member within the network.</p>
     */
    inline const Aws::String& GetMemberId() const{ return m_memberId; }

    /**
     * <p>The unique identifier for the first member within the network.</p>
     */
    inline void SetMemberId(const Aws::String& value) { m_memberId = value; }

    /**
     * <p>The unique identifier for the first member within the network.</p>
     */
    inline void SetMemberId(Aws::String&& value) { m_memberId = std::move(value); }

    /**
     * <p>The unique identifier for the first member within the network.</p>
     */
    inline void SetMemberId(const char* value) { m_memberId.assign(value); }

    /**
     * <p>The unique identifier for the first member within the network.</p>
     */
    inline CreateNetworkResult& WithMemberId(const Aws::String& value) { SetMemberId(value); return *this;}

    /**
     * <p>The unique identifier for the first member within the network.</p>
     */
    inline CreateNetworkResult& WithMemberId(Aws::String&& value) { SetMemberId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier for the first member within the network.</p>
     */
    inline CreateNetworkResult& WithMemberId(const char* value) { SetMemberId(value); return *this;}

  private:

    Aws::String m_networkId;

    Aws::String m_memberId;
  };

} // namespace Model
} // namespace ManagedBlockchain
} // namespace Aws
