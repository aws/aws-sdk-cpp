/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/privatenetworks/PrivateNetworks_EXPORTS.h>
#include <aws/privatenetworks/model/DeviceIdentifier.h>
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
  class GetDeviceIdentifierResult
  {
  public:
    AWS_PRIVATENETWORKS_API GetDeviceIdentifierResult();
    AWS_PRIVATENETWORKS_API GetDeviceIdentifierResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PRIVATENETWORKS_API GetDeviceIdentifierResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the device identifier.</p>
     */
    inline const DeviceIdentifier& GetDeviceIdentifier() const{ return m_deviceIdentifier; }

    /**
     * <p>Information about the device identifier.</p>
     */
    inline void SetDeviceIdentifier(const DeviceIdentifier& value) { m_deviceIdentifier = value; }

    /**
     * <p>Information about the device identifier.</p>
     */
    inline void SetDeviceIdentifier(DeviceIdentifier&& value) { m_deviceIdentifier = std::move(value); }

    /**
     * <p>Information about the device identifier.</p>
     */
    inline GetDeviceIdentifierResult& WithDeviceIdentifier(const DeviceIdentifier& value) { SetDeviceIdentifier(value); return *this;}

    /**
     * <p>Information about the device identifier.</p>
     */
    inline GetDeviceIdentifierResult& WithDeviceIdentifier(DeviceIdentifier&& value) { SetDeviceIdentifier(std::move(value)); return *this;}


    /**
     * <p> The device identifier tags. </p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p> The device identifier tags. </p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p> The device identifier tags. </p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p> The device identifier tags. </p>
     */
    inline GetDeviceIdentifierResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p> The device identifier tags. </p>
     */
    inline GetDeviceIdentifierResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p> The device identifier tags. </p>
     */
    inline GetDeviceIdentifierResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p> The device identifier tags. </p>
     */
    inline GetDeviceIdentifierResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p> The device identifier tags. </p>
     */
    inline GetDeviceIdentifierResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p> The device identifier tags. </p>
     */
    inline GetDeviceIdentifierResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p> The device identifier tags. </p>
     */
    inline GetDeviceIdentifierResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p> The device identifier tags. </p>
     */
    inline GetDeviceIdentifierResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p> The device identifier tags. </p>
     */
    inline GetDeviceIdentifierResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }

  private:

    DeviceIdentifier m_deviceIdentifier;

    Aws::Map<Aws::String, Aws::String> m_tags;
  };

} // namespace Model
} // namespace PrivateNetworks
} // namespace Aws
