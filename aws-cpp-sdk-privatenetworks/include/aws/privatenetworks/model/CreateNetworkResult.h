/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/privatenetworks/PrivateNetworks_EXPORTS.h>
#include <aws/privatenetworks/model/Network.h>
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
  class CreateNetworkResult
  {
  public:
    AWS_PRIVATENETWORKS_API CreateNetworkResult();
    AWS_PRIVATENETWORKS_API CreateNetworkResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PRIVATENETWORKS_API CreateNetworkResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the network.</p>
     */
    inline const Network& GetNetwork() const{ return m_network; }

    /**
     * <p>Information about the network.</p>
     */
    inline void SetNetwork(const Network& value) { m_network = value; }

    /**
     * <p>Information about the network.</p>
     */
    inline void SetNetwork(Network&& value) { m_network = std::move(value); }

    /**
     * <p>Information about the network.</p>
     */
    inline CreateNetworkResult& WithNetwork(const Network& value) { SetNetwork(value); return *this;}

    /**
     * <p>Information about the network.</p>
     */
    inline CreateNetworkResult& WithNetwork(Network&& value) { SetNetwork(std::move(value)); return *this;}


    /**
     * <p> The network tags. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p> The network tags. </p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p> The network tags. </p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p> The network tags. </p>
     */
    inline CreateNetworkResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p> The network tags. </p>
     */
    inline CreateNetworkResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p> The network tags. </p>
     */
    inline CreateNetworkResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p> The network tags. </p>
     */
    inline CreateNetworkResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p> The network tags. </p>
     */
    inline CreateNetworkResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p> The network tags. </p>
     */
    inline CreateNetworkResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> The network tags. </p>
     */
    inline CreateNetworkResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p> The network tags. </p>
     */
    inline CreateNetworkResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p> The network tags. </p>
     */
    inline CreateNetworkResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    Network m_network;

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
