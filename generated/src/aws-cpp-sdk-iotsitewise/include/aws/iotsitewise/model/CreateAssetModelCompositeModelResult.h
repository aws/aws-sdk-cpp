/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotsitewise/model/AssetModelStatus.h>
#include <aws/iotsitewise/model/AssetModelCompositeModelPathSegment.h>
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
namespace IoTSiteWise
{
namespace Model
{
  class CreateAssetModelCompositeModelResult
  {
  public:
    AWS_IOTSITEWISE_API CreateAssetModelCompositeModelResult();
    AWS_IOTSITEWISE_API CreateAssetModelCompositeModelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API CreateAssetModelCompositeModelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the composed asset model. You can use this ID when you call other
     * IoT SiteWise APIs.</p>
     */
    inline const Aws::String& GetAssetModelCompositeModelId() const{ return m_assetModelCompositeModelId; }

    /**
     * <p>The ID of the composed asset model. You can use this ID when you call other
     * IoT SiteWise APIs.</p>
     */
    inline void SetAssetModelCompositeModelId(const Aws::String& value) { m_assetModelCompositeModelId = value; }

    /**
     * <p>The ID of the composed asset model. You can use this ID when you call other
     * IoT SiteWise APIs.</p>
     */
    inline void SetAssetModelCompositeModelId(Aws::String&& value) { m_assetModelCompositeModelId = std::move(value); }

    /**
     * <p>The ID of the composed asset model. You can use this ID when you call other
     * IoT SiteWise APIs.</p>
     */
    inline void SetAssetModelCompositeModelId(const char* value) { m_assetModelCompositeModelId.assign(value); }

    /**
     * <p>The ID of the composed asset model. You can use this ID when you call other
     * IoT SiteWise APIs.</p>
     */
    inline CreateAssetModelCompositeModelResult& WithAssetModelCompositeModelId(const Aws::String& value) { SetAssetModelCompositeModelId(value); return *this;}

    /**
     * <p>The ID of the composed asset model. You can use this ID when you call other
     * IoT SiteWise APIs.</p>
     */
    inline CreateAssetModelCompositeModelResult& WithAssetModelCompositeModelId(Aws::String&& value) { SetAssetModelCompositeModelId(std::move(value)); return *this;}

    /**
     * <p>The ID of the composed asset model. You can use this ID when you call other
     * IoT SiteWise APIs.</p>
     */
    inline CreateAssetModelCompositeModelResult& WithAssetModelCompositeModelId(const char* value) { SetAssetModelCompositeModelId(value); return *this;}


    /**
     * <p>The path to the composite model listing the parent composite models.</p>
     */
    inline const Aws::Vector<AssetModelCompositeModelPathSegment>& GetAssetModelCompositeModelPath() const{ return m_assetModelCompositeModelPath; }

    /**
     * <p>The path to the composite model listing the parent composite models.</p>
     */
    inline void SetAssetModelCompositeModelPath(const Aws::Vector<AssetModelCompositeModelPathSegment>& value) { m_assetModelCompositeModelPath = value; }

    /**
     * <p>The path to the composite model listing the parent composite models.</p>
     */
    inline void SetAssetModelCompositeModelPath(Aws::Vector<AssetModelCompositeModelPathSegment>&& value) { m_assetModelCompositeModelPath = std::move(value); }

    /**
     * <p>The path to the composite model listing the parent composite models.</p>
     */
    inline CreateAssetModelCompositeModelResult& WithAssetModelCompositeModelPath(const Aws::Vector<AssetModelCompositeModelPathSegment>& value) { SetAssetModelCompositeModelPath(value); return *this;}

    /**
     * <p>The path to the composite model listing the parent composite models.</p>
     */
    inline CreateAssetModelCompositeModelResult& WithAssetModelCompositeModelPath(Aws::Vector<AssetModelCompositeModelPathSegment>&& value) { SetAssetModelCompositeModelPath(std::move(value)); return *this;}

    /**
     * <p>The path to the composite model listing the parent composite models.</p>
     */
    inline CreateAssetModelCompositeModelResult& AddAssetModelCompositeModelPath(const AssetModelCompositeModelPathSegment& value) { m_assetModelCompositeModelPath.push_back(value); return *this; }

    /**
     * <p>The path to the composite model listing the parent composite models.</p>
     */
    inline CreateAssetModelCompositeModelResult& AddAssetModelCompositeModelPath(AssetModelCompositeModelPathSegment&& value) { m_assetModelCompositeModelPath.push_back(std::move(value)); return *this; }


    
    inline const AssetModelStatus& GetAssetModelStatus() const{ return m_assetModelStatus; }

    
    inline void SetAssetModelStatus(const AssetModelStatus& value) { m_assetModelStatus = value; }

    
    inline void SetAssetModelStatus(AssetModelStatus&& value) { m_assetModelStatus = std::move(value); }

    
    inline CreateAssetModelCompositeModelResult& WithAssetModelStatus(const AssetModelStatus& value) { SetAssetModelStatus(value); return *this;}

    
    inline CreateAssetModelCompositeModelResult& WithAssetModelStatus(AssetModelStatus&& value) { SetAssetModelStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateAssetModelCompositeModelResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateAssetModelCompositeModelResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateAssetModelCompositeModelResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_assetModelCompositeModelId;

    Aws::Vector<AssetModelCompositeModelPathSegment> m_assetModelCompositeModelPath;

    AssetModelStatus m_assetModelStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
