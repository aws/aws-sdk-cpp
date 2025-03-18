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
    AWS_IOTMANAGEDINTEGRATIONS_API GetManagedThingMetaDataResult() = default;
    AWS_IOTMANAGEDINTEGRATIONS_API GetManagedThingMetaDataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTMANAGEDINTEGRATIONS_API GetManagedThingMetaDataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The managed thing id.</p>
     */
    inline const Aws::String& GetManagedThingId() const { return m_managedThingId; }
    template<typename ManagedThingIdT = Aws::String>
    void SetManagedThingId(ManagedThingIdT&& value) { m_managedThingIdHasBeenSet = true; m_managedThingId = std::forward<ManagedThingIdT>(value); }
    template<typename ManagedThingIdT = Aws::String>
    GetManagedThingMetaDataResult& WithManagedThingId(ManagedThingIdT&& value) { SetManagedThingId(std::forward<ManagedThingIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The metadata for the managed thing.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetMetaData() const { return m_metaData; }
    template<typename MetaDataT = Aws::Map<Aws::String, Aws::String>>
    void SetMetaData(MetaDataT&& value) { m_metaDataHasBeenSet = true; m_metaData = std::forward<MetaDataT>(value); }
    template<typename MetaDataT = Aws::Map<Aws::String, Aws::String>>
    GetManagedThingMetaDataResult& WithMetaData(MetaDataT&& value) { SetMetaData(std::forward<MetaDataT>(value)); return *this;}
    template<typename MetaDataKeyT = Aws::String, typename MetaDataValueT = Aws::String>
    GetManagedThingMetaDataResult& AddMetaData(MetaDataKeyT&& key, MetaDataValueT&& value) {
      m_metaDataHasBeenSet = true; m_metaData.emplace(std::forward<MetaDataKeyT>(key), std::forward<MetaDataValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetManagedThingMetaDataResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_managedThingId;
    bool m_managedThingIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_metaData;
    bool m_metaDataHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTManagedIntegrations
} // namespace Aws
