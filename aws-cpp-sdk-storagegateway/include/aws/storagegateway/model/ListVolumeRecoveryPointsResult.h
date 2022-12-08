/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/storagegateway/model/VolumeRecoveryPointInfo.h>
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
namespace StorageGateway
{
namespace Model
{
  class ListVolumeRecoveryPointsResult
  {
  public:
    AWS_STORAGEGATEWAY_API ListVolumeRecoveryPointsResult();
    AWS_STORAGEGATEWAY_API ListVolumeRecoveryPointsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API ListVolumeRecoveryPointsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }

    
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARN = value; }

    
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARN = std::move(value); }

    
    inline void SetGatewayARN(const char* value) { m_gatewayARN.assign(value); }

    
    inline ListVolumeRecoveryPointsResult& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}

    
    inline ListVolumeRecoveryPointsResult& WithGatewayARN(Aws::String&& value) { SetGatewayARN(std::move(value)); return *this;}

    
    inline ListVolumeRecoveryPointsResult& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}


    /**
     * <p>An array of <a>VolumeRecoveryPointInfo</a> objects.</p>
     */
    inline const Aws::Vector<VolumeRecoveryPointInfo>& GetVolumeRecoveryPointInfos() const{ return m_volumeRecoveryPointInfos; }

    /**
     * <p>An array of <a>VolumeRecoveryPointInfo</a> objects.</p>
     */
    inline void SetVolumeRecoveryPointInfos(const Aws::Vector<VolumeRecoveryPointInfo>& value) { m_volumeRecoveryPointInfos = value; }

    /**
     * <p>An array of <a>VolumeRecoveryPointInfo</a> objects.</p>
     */
    inline void SetVolumeRecoveryPointInfos(Aws::Vector<VolumeRecoveryPointInfo>&& value) { m_volumeRecoveryPointInfos = std::move(value); }

    /**
     * <p>An array of <a>VolumeRecoveryPointInfo</a> objects.</p>
     */
    inline ListVolumeRecoveryPointsResult& WithVolumeRecoveryPointInfos(const Aws::Vector<VolumeRecoveryPointInfo>& value) { SetVolumeRecoveryPointInfos(value); return *this;}

    /**
     * <p>An array of <a>VolumeRecoveryPointInfo</a> objects.</p>
     */
    inline ListVolumeRecoveryPointsResult& WithVolumeRecoveryPointInfos(Aws::Vector<VolumeRecoveryPointInfo>&& value) { SetVolumeRecoveryPointInfos(std::move(value)); return *this;}

    /**
     * <p>An array of <a>VolumeRecoveryPointInfo</a> objects.</p>
     */
    inline ListVolumeRecoveryPointsResult& AddVolumeRecoveryPointInfos(const VolumeRecoveryPointInfo& value) { m_volumeRecoveryPointInfos.push_back(value); return *this; }

    /**
     * <p>An array of <a>VolumeRecoveryPointInfo</a> objects.</p>
     */
    inline ListVolumeRecoveryPointsResult& AddVolumeRecoveryPointInfos(VolumeRecoveryPointInfo&& value) { m_volumeRecoveryPointInfos.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_gatewayARN;

    Aws::Vector<VolumeRecoveryPointInfo> m_volumeRecoveryPointInfos;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
