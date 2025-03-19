/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotsitewise/model/AssetModelStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class UpdateAssetModelCompositeModelResult
  {
  public:
    AWS_IOTSITEWISE_API UpdateAssetModelCompositeModelResult() = default;
    AWS_IOTSITEWISE_API UpdateAssetModelCompositeModelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API UpdateAssetModelCompositeModelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The path to the composite model listing the parent composite models.</p>
     */
    inline const Aws::Vector<AssetModelCompositeModelPathSegment>& GetAssetModelCompositeModelPath() const { return m_assetModelCompositeModelPath; }
    template<typename AssetModelCompositeModelPathT = Aws::Vector<AssetModelCompositeModelPathSegment>>
    void SetAssetModelCompositeModelPath(AssetModelCompositeModelPathT&& value) { m_assetModelCompositeModelPathHasBeenSet = true; m_assetModelCompositeModelPath = std::forward<AssetModelCompositeModelPathT>(value); }
    template<typename AssetModelCompositeModelPathT = Aws::Vector<AssetModelCompositeModelPathSegment>>
    UpdateAssetModelCompositeModelResult& WithAssetModelCompositeModelPath(AssetModelCompositeModelPathT&& value) { SetAssetModelCompositeModelPath(std::forward<AssetModelCompositeModelPathT>(value)); return *this;}
    template<typename AssetModelCompositeModelPathT = AssetModelCompositeModelPathSegment>
    UpdateAssetModelCompositeModelResult& AddAssetModelCompositeModelPath(AssetModelCompositeModelPathT&& value) { m_assetModelCompositeModelPathHasBeenSet = true; m_assetModelCompositeModelPath.emplace_back(std::forward<AssetModelCompositeModelPathT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const AssetModelStatus& GetAssetModelStatus() const { return m_assetModelStatus; }
    template<typename AssetModelStatusT = AssetModelStatus>
    void SetAssetModelStatus(AssetModelStatusT&& value) { m_assetModelStatusHasBeenSet = true; m_assetModelStatus = std::forward<AssetModelStatusT>(value); }
    template<typename AssetModelStatusT = AssetModelStatus>
    UpdateAssetModelCompositeModelResult& WithAssetModelStatus(AssetModelStatusT&& value) { SetAssetModelStatus(std::forward<AssetModelStatusT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateAssetModelCompositeModelResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AssetModelCompositeModelPathSegment> m_assetModelCompositeModelPath;
    bool m_assetModelCompositeModelPathHasBeenSet = false;

    AssetModelStatus m_assetModelStatus;
    bool m_assetModelStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
