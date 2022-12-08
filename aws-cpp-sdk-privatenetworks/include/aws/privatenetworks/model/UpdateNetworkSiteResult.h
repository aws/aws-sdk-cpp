/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/privatenetworks/PrivateNetworks_EXPORTS.h>
#include <aws/privatenetworks/model/NetworkSite.h>
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
  class UpdateNetworkSiteResult
  {
  public:
    AWS_PRIVATENETWORKS_API UpdateNetworkSiteResult();
    AWS_PRIVATENETWORKS_API UpdateNetworkSiteResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PRIVATENETWORKS_API UpdateNetworkSiteResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the network site.</p>
     */
    inline const NetworkSite& GetNetworkSite() const{ return m_networkSite; }

    /**
     * <p>Information about the network site.</p>
     */
    inline void SetNetworkSite(const NetworkSite& value) { m_networkSite = value; }

    /**
     * <p>Information about the network site.</p>
     */
    inline void SetNetworkSite(NetworkSite&& value) { m_networkSite = std::move(value); }

    /**
     * <p>Information about the network site.</p>
     */
    inline UpdateNetworkSiteResult& WithNetworkSite(const NetworkSite& value) { SetNetworkSite(value); return *this;}

    /**
     * <p>Information about the network site.</p>
     */
    inline UpdateNetworkSiteResult& WithNetworkSite(NetworkSite&& value) { SetNetworkSite(std::move(value)); return *this;}


    /**
     * <p> The network site tags. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p> The network site tags. </p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p> The network site tags. </p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p> The network site tags. </p>
     */
    inline UpdateNetworkSiteResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p> The network site tags. </p>
     */
    inline UpdateNetworkSiteResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p> The network site tags. </p>
     */
    inline UpdateNetworkSiteResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p> The network site tags. </p>
     */
    inline UpdateNetworkSiteResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p> The network site tags. </p>
     */
    inline UpdateNetworkSiteResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p> The network site tags. </p>
     */
    inline UpdateNetworkSiteResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> The network site tags. </p>
     */
    inline UpdateNetworkSiteResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p> The network site tags. </p>
     */
    inline UpdateNetworkSiteResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p> The network site tags. </p>
     */
    inline UpdateNetworkSiteResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    NetworkSite m_networkSite;

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
