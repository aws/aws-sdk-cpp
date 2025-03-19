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
  class DeleteAssetModelCompositeModelResult
  {
  public:
    AWS_IOTSITEWISE_API DeleteAssetModelCompositeModelResult() = default;
    AWS_IOTSITEWISE_API DeleteAssetModelCompositeModelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API DeleteAssetModelCompositeModelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const AssetModelStatus& GetAssetModelStatus() const { return m_assetModelStatus; }
    template<typename AssetModelStatusT = AssetModelStatus>
    void SetAssetModelStatus(AssetModelStatusT&& value) { m_assetModelStatusHasBeenSet = true; m_assetModelStatus = std::forward<AssetModelStatusT>(value); }
    template<typename AssetModelStatusT = AssetModelStatus>
    DeleteAssetModelCompositeModelResult& WithAssetModelStatus(AssetModelStatusT&& value) { SetAssetModelStatus(std::forward<AssetModelStatusT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteAssetModelCompositeModelResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AssetModelStatus m_assetModelStatus;
    bool m_assetModelStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
