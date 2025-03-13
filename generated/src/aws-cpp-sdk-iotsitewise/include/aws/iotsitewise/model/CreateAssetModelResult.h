/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/AssetModelStatus.h>
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
  class CreateAssetModelResult
  {
  public:
    AWS_IOTSITEWISE_API CreateAssetModelResult() = default;
    AWS_IOTSITEWISE_API CreateAssetModelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API CreateAssetModelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the asset model, in UUID format. You can use this ID when you call
     * other IoT SiteWise API operations.</p>
     */
    inline const Aws::String& GetAssetModelId() const { return m_assetModelId; }
    template<typename AssetModelIdT = Aws::String>
    void SetAssetModelId(AssetModelIdT&& value) { m_assetModelIdHasBeenSet = true; m_assetModelId = std::forward<AssetModelIdT>(value); }
    template<typename AssetModelIdT = Aws::String>
    CreateAssetModelResult& WithAssetModelId(AssetModelIdT&& value) { SetAssetModelId(std::forward<AssetModelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the asset model, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:asset-model/${AssetModelId}</code>
     * </p>
     */
    inline const Aws::String& GetAssetModelArn() const { return m_assetModelArn; }
    template<typename AssetModelArnT = Aws::String>
    void SetAssetModelArn(AssetModelArnT&& value) { m_assetModelArnHasBeenSet = true; m_assetModelArn = std::forward<AssetModelArnT>(value); }
    template<typename AssetModelArnT = Aws::String>
    CreateAssetModelResult& WithAssetModelArn(AssetModelArnT&& value) { SetAssetModelArn(std::forward<AssetModelArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the asset model, which contains a state (<code>CREATING</code>
     * after successfully calling this operation) and any error message.</p>
     */
    inline const AssetModelStatus& GetAssetModelStatus() const { return m_assetModelStatus; }
    template<typename AssetModelStatusT = AssetModelStatus>
    void SetAssetModelStatus(AssetModelStatusT&& value) { m_assetModelStatusHasBeenSet = true; m_assetModelStatus = std::forward<AssetModelStatusT>(value); }
    template<typename AssetModelStatusT = AssetModelStatus>
    CreateAssetModelResult& WithAssetModelStatus(AssetModelStatusT&& value) { SetAssetModelStatus(std::forward<AssetModelStatusT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateAssetModelResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_assetModelId;
    bool m_assetModelIdHasBeenSet = false;

    Aws::String m_assetModelArn;
    bool m_assetModelArnHasBeenSet = false;

    AssetModelStatus m_assetModelStatus;
    bool m_assetModelStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
