/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/AssetStatus.h>
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
  class UpdateAssetResult
  {
  public:
    AWS_IOTSITEWISE_API UpdateAssetResult() = default;
    AWS_IOTSITEWISE_API UpdateAssetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API UpdateAssetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The status of the asset, which contains a state (<code>UPDATING</code> after
     * successfully calling this operation) and any error message.</p>
     */
    inline const AssetStatus& GetAssetStatus() const { return m_assetStatus; }
    template<typename AssetStatusT = AssetStatus>
    void SetAssetStatus(AssetStatusT&& value) { m_assetStatusHasBeenSet = true; m_assetStatus = std::forward<AssetStatusT>(value); }
    template<typename AssetStatusT = AssetStatus>
    UpdateAssetResult& WithAssetStatus(AssetStatusT&& value) { SetAssetStatus(std::forward<AssetStatusT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateAssetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    AssetStatus m_assetStatus;
    bool m_assetStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
