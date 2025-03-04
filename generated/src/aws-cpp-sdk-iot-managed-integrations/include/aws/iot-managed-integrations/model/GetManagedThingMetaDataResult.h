/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iot-managed-integrations/IoTManagedIntegrations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace IoTManagedIntegrations
{
namespace Model
{
  class GetManagedThingMetaDataResult
  {
  public:
    AWS_IOTMANAGEDINTEGRATIONS_API GetManagedThingMetaDataResult();
    AWS_IOTMANAGEDINTEGRATIONS_API GetManagedThingMetaDataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTMANAGEDINTEGRATIONS_API GetManagedThingMetaDataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The managed thing id.</p>
     */
    inline const Aws::String& GetManagedThingId() const{ return m_managedThingId; }
    inline void SetManagedThingId(const Aws::String& value) { m_managedThingId = value; }
    inline void SetManagedThingId(Aws::String&& value) { m_managedThingId = std::move(value); }
    inline void SetManagedThingId(const char* value) { m_managedThingId.assign(value); }
    inline GetManagedThingMetaDataResult& WithManagedThingId(const Aws::String& value) { SetManagedThingId(value); return *this;}
    inline GetManagedThingMetaDataResult& WithManagedThingId(Aws::String&& value) { SetManagedThingId(std::move(value)); return *this;}
    inline GetManagedThingMetaDataResult& WithManagedThingId(const char* value) { SetManagedThingId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata for the managed thing.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetMetaData() const{ return m_metaData; }
    inline void SetMetaData(const Aws::Map<Aws::String, Aws::String>& value) { m_metaData = value; }
    inline void SetMetaData(Aws::Map<Aws::String, Aws::String>&& value) { m_metaData = std::move(value); }
    inline GetManagedThingMetaDataResult& WithMetaData(const Aws::Map<Aws::String, Aws::String>& value) { SetMetaData(value); return *this;}
    inline GetManagedThingMetaDataResult& WithMetaData(Aws::Map<Aws::String, Aws::String>&& value) { SetMetaData(std::move(value)); return *this;}
    inline GetManagedThingMetaDataResult& AddMetaData(const Aws::String& key, const Aws::String& value) { m_metaData.emplace(key, value); return *this; }
    inline GetManagedThingMetaDataResult& AddMetaData(Aws::String&& key, const Aws::String& value) { m_metaData.emplace(std::move(key), value); return *this; }
    inline GetManagedThingMetaDataResult& AddMetaData(const Aws::String& key, Aws::String&& value) { m_metaData.emplace(key, std::move(value)); return *this; }
    inline GetManagedThingMetaDataResult& AddMetaData(Aws::String&& key, Aws::String&& value) { m_metaData.emplace(std::move(key), std::move(value)); return *this; }
    inline GetManagedThingMetaDataResult& AddMetaData(const char* key, Aws::String&& value) { m_metaData.emplace(key, std::move(value)); return *this; }
    inline GetManagedThingMetaDataResult& AddMetaData(Aws::String&& key, const char* value) { m_metaData.emplace(std::move(key), value); return *this; }
    inline GetManagedThingMetaDataResult& AddMetaData(const char* key, const char* value) { m_metaData.emplace(key, value); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetManagedThingMetaDataResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetManagedThingMetaDataResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetManagedThingMetaDataResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_managedThingId;

    Aws::Map<Aws::String, Aws::String> m_metaData;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
