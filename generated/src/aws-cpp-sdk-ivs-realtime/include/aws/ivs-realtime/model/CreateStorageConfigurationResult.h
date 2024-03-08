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
  class CreateStorageConfigurationResult
  {
  public:
    AWS_IVSREALTIME_API CreateStorageConfigurationResult();
    AWS_IVSREALTIME_API CreateStorageConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IVSREALTIME_API CreateStorageConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The StorageConfiguration that was created.</p>
     */
    inline const StorageConfiguration& GetStorageConfiguration() const{ return m_storageConfiguration; }

    /**
     * <p>The StorageConfiguration that was created.</p>
     */
    inline void SetStorageConfiguration(const StorageConfiguration& value) { m_storageConfiguration = value; }

    /**
     * <p>The StorageConfiguration that was created.</p>
     */
    inline void SetStorageConfiguration(StorageConfiguration&& value) { m_storageConfiguration = std::move(value); }

    /**
     * <p>The StorageConfiguration that was created.</p>
     */
    inline CreateStorageConfigurationResult& WithStorageConfiguration(const StorageConfiguration& value) { SetStorageConfiguration(value); return *this;}

    /**
     * <p>The StorageConfiguration that was created.</p>
     */
    inline CreateStorageConfigurationResult& WithStorageConfiguration(StorageConfiguration&& value) { SetStorageConfiguration(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateStorageConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateStorageConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateStorageConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    StorageConfiguration m_storageConfiguration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace ivsrealtime
} // namespace Aws
