/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/AssetModelStatus.h>
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
namespace IoTSiteWise
{
namespace Model
{
  class UpdateAssetModelResult
  {
  public:
    AWS_IOTSITEWISE_API UpdateAssetModelResult();
    AWS_IOTSITEWISE_API UpdateAssetModelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API UpdateAssetModelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The status of the asset model, which contains a state (<code>UPDATING</code>
     * after successfully calling this operation) and any error message.</p>
     */
    inline const AssetModelStatus& GetAssetModelStatus() const{ return m_assetModelStatus; }

    /**
     * <p>The status of the asset model, which contains a state (<code>UPDATING</code>
     * after successfully calling this operation) and any error message.</p>
     */
    inline void SetAssetModelStatus(const AssetModelStatus& value) { m_assetModelStatus = value; }

    /**
     * <p>The status of the asset model, which contains a state (<code>UPDATING</code>
     * after successfully calling this operation) and any error message.</p>
     */
    inline void SetAssetModelStatus(AssetModelStatus&& value) { m_assetModelStatus = std::move(value); }

    /**
     * <p>The status of the asset model, which contains a state (<code>UPDATING</code>
     * after successfully calling this operation) and any error message.</p>
     */
    inline UpdateAssetModelResult& WithAssetModelStatus(const AssetModelStatus& value) { SetAssetModelStatus(value); return *this;}

    /**
     * <p>The status of the asset model, which contains a state (<code>UPDATING</code>
     * after successfully calling this operation) and any error message.</p>
     */
    inline UpdateAssetModelResult& WithAssetModelStatus(AssetModelStatus&& value) { SetAssetModelStatus(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateAssetModelResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateAssetModelResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateAssetModelResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    AssetModelStatus m_assetModelStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
