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
  class DeleteAssetModelInterfaceRelationshipResult
  {
  public:
    AWS_IOTSITEWISE_API DeleteAssetModelInterfaceRelationshipResult() = default;
    AWS_IOTSITEWISE_API DeleteAssetModelInterfaceRelationshipResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API DeleteAssetModelInterfaceRelationshipResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the asset model.</p>
     */
    inline const Aws::String& GetAssetModelId() const { return m_assetModelId; }
    template<typename AssetModelIdT = Aws::String>
    void SetAssetModelId(AssetModelIdT&& value) { m_assetModelIdHasBeenSet = true; m_assetModelId = std::forward<AssetModelIdT>(value); }
    template<typename AssetModelIdT = Aws::String>
    DeleteAssetModelInterfaceRelationshipResult& WithAssetModelId(AssetModelIdT&& value) { SetAssetModelId(std::forward<AssetModelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the interface asset model.</p>
     */
    inline const Aws::String& GetInterfaceAssetModelId() const { return m_interfaceAssetModelId; }
    template<typename InterfaceAssetModelIdT = Aws::String>
    void SetInterfaceAssetModelId(InterfaceAssetModelIdT&& value) { m_interfaceAssetModelIdHasBeenSet = true; m_interfaceAssetModelId = std::forward<InterfaceAssetModelIdT>(value); }
    template<typename InterfaceAssetModelIdT = Aws::String>
    DeleteAssetModelInterfaceRelationshipResult& WithInterfaceAssetModelId(InterfaceAssetModelIdT&& value) { SetInterfaceAssetModelId(std::forward<InterfaceAssetModelIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of the asset model, which has the following format.
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:asset-model/${AssetModelId}</code>
     * </p>
     */
    inline const Aws::String& GetAssetModelArn() const { return m_assetModelArn; }
    template<typename AssetModelArnT = Aws::String>
    void SetAssetModelArn(AssetModelArnT&& value) { m_assetModelArnHasBeenSet = true; m_assetModelArn = std::forward<AssetModelArnT>(value); }
    template<typename AssetModelArnT = Aws::String>
    DeleteAssetModelInterfaceRelationshipResult& WithAssetModelArn(AssetModelArnT&& value) { SetAssetModelArn(std::forward<AssetModelArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const AssetModelStatus& GetAssetModelStatus() const { return m_assetModelStatus; }
    template<typename AssetModelStatusT = AssetModelStatus>
    void SetAssetModelStatus(AssetModelStatusT&& value) { m_assetModelStatusHasBeenSet = true; m_assetModelStatus = std::forward<AssetModelStatusT>(value); }
    template<typename AssetModelStatusT = AssetModelStatus>
    DeleteAssetModelInterfaceRelationshipResult& WithAssetModelStatus(AssetModelStatusT&& value) { SetAssetModelStatus(std::forward<AssetModelStatusT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DeleteAssetModelInterfaceRelationshipResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_assetModelId;
    bool m_assetModelIdHasBeenSet = false;

    Aws::String m_interfaceAssetModelId;
    bool m_interfaceAssetModelIdHasBeenSet = false;

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
