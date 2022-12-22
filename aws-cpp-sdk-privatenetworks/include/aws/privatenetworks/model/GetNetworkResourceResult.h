/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/privatenetworks/PrivateNetworks_EXPORTS.h>
#include <aws/privatenetworks/model/NetworkResource.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace PrivateNetworks
{
namespace Model
{
  class GetNetworkResourceResult
  {
  public:
    AWS_PRIVATENETWORKS_API GetNetworkResourceResult();
    AWS_PRIVATENETWORKS_API GetNetworkResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PRIVATENETWORKS_API GetNetworkResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the network resource.</p>
     */
    inline const NetworkResource& GetNetworkResource() const{ return m_networkResource; }

    /**
     * <p>Information about the network resource.</p>
     */
    inline void SetNetworkResource(const NetworkResource& value) { m_networkResource = value; }

    /**
     * <p>Information about the network resource.</p>
     */
    inline void SetNetworkResource(NetworkResource&& value) { m_networkResource = std::move(value); }

    /**
     * <p>Information about the network resource.</p>
     */
    inline GetNetworkResourceResult& WithNetworkResource(const NetworkResource& value) { SetNetworkResource(value); return *this;}

    /**
     * <p>Information about the network resource.</p>
     */
    inline GetNetworkResourceResult& WithNetworkResource(NetworkResource&& value) { SetNetworkResource(std::move(value)); return *this;}


    /**
     * <p> The network resource tags. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p> The network resource tags. </p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p> The network resource tags. </p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p> The network resource tags. </p>
     */
    inline GetNetworkResourceResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p> The network resource tags. </p>
     */
    inline GetNetworkResourceResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p> The network resource tags. </p>
     */
    inline GetNetworkResourceResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p> The network resource tags. </p>
     */
    inline GetNetworkResourceResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p> The network resource tags. </p>
     */
    inline GetNetworkResourceResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p> The network resource tags. </p>
     */
    inline GetNetworkResourceResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> The network resource tags. </p>
     */
    inline GetNetworkResourceResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p> The network resource tags. </p>
     */
    inline GetNetworkResourceResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p> The network resource tags. </p>
     */
    inline GetNetworkResourceResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    NetworkResource m_networkResource;

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
