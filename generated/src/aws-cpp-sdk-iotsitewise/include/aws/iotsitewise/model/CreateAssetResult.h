/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/iotsitewise/model/AssetStatus.h>
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
  class CreateAssetResult
  {
  public:
    AWS_IOTSITEWISE_API CreateAssetResult() = default;
    AWS_IOTSITEWISE_API CreateAssetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API CreateAssetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the asset, in UUID format. This ID uniquely identifies the asset
     * within IoT SiteWise and can be used with other IoT SiteWise API operations.</p>
     */
    inline const Aws::String& GetAssetId() const { return m_assetId; }
    template<typename AssetIdT = Aws::String>
    void SetAssetId(AssetIdT&& value) { m_assetIdHasBeenSet = true; m_assetId = std::forward<AssetIdT>(value); }
    template<typename AssetIdT = Aws::String>
    CreateAssetResult& WithAssetId(AssetIdT&& value) { SetAssetId(std::forward<AssetIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the asset, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:asset/${AssetId}</code>
     * </p>
     */
    inline const Aws::String& GetAssetArn() const { return m_assetArn; }
    template<typename AssetArnT = Aws::String>
    void SetAssetArn(AssetArnT&& value) { m_assetArnHasBeenSet = true; m_assetArn = std::forward<AssetArnT>(value); }
    template<typename AssetArnT = Aws::String>
    CreateAssetResult& WithAssetArn(AssetArnT&& value) { SetAssetArn(std::forward<AssetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the asset, which contains a state (<code>CREATING</code> after
     * successfully calling this operation) and any error message.</p>
     */
    inline const AssetStatus& GetAssetStatus() const { return m_assetStatus; }
    template<typename AssetStatusT = AssetStatus>
    void SetAssetStatus(AssetStatusT&& value) { m_assetStatusHasBeenSet = true; m_assetStatus = std::forward<AssetStatusT>(value); }
    template<typename AssetStatusT = AssetStatus>
    CreateAssetResult& WithAssetStatus(AssetStatusT&& value) { SetAssetStatus(std::forward<AssetStatusT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateAssetResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_assetId;
    bool m_assetIdHasBeenSet = false;

    Aws::String m_assetArn;
    bool m_assetArnHasBeenSet = false;

    AssetStatus m_assetStatus;
    bool m_assetStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
