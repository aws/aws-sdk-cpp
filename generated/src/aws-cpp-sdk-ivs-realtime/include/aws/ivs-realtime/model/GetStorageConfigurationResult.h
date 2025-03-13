/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ivs-realtime/Ivsrealtime_EXPORTS.h>
#include <aws/ivs-realtime/model/StorageConfiguration.h>
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
namespace ivsrealtime
{
namespace Model
{
  class GetStorageConfigurationResult
  {
  public:
    AWS_IVSREALTIME_API GetStorageConfigurationResult() = default;
    AWS_IVSREALTIME_API GetStorageConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IVSREALTIME_API GetStorageConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The StorageConfiguration that was returned.</p>
     */
    inline const StorageConfiguration& GetStorageConfiguration() const { return m_storageConfiguration; }
    template<typename StorageConfigurationT = StorageConfiguration>
    void SetStorageConfiguration(StorageConfigurationT&& value) { m_storageConfigurationHasBeenSet = true; m_storageConfiguration = std::forward<StorageConfigurationT>(value); }
    template<typename StorageConfigurationT = StorageConfiguration>
    GetStorageConfigurationResult& WithStorageConfiguration(StorageConfigurationT&& value) { SetStorageConfiguration(std::forward<StorageConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetStorageConfigurationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    StorageConfiguration m_storageConfiguration;
    bool m_storageConfigurationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
