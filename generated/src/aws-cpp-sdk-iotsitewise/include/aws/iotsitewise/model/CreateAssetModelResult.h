﻿/**
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
    AWS_IOTSITEWISE_API CreateAssetModelResult();
    AWS_IOTSITEWISE_API CreateAssetModelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API CreateAssetModelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ID of the asset model, in UUID format. You can use this ID when you call
     * other IoT SiteWise API operations.</p>
     */
    inline const Aws::String& GetAssetModelId() const{ return m_assetModelId; }
    inline void SetAssetModelId(const Aws::String& value) { m_assetModelId = value; }
    inline void SetAssetModelId(Aws::String&& value) { m_assetModelId = std::move(value); }
    inline void SetAssetModelId(const char* value) { m_assetModelId.assign(value); }
    inline CreateAssetModelResult& WithAssetModelId(const Aws::String& value) { SetAssetModelId(value); return *this;}
    inline CreateAssetModelResult& WithAssetModelId(Aws::String&& value) { SetAssetModelId(std::move(value)); return *this;}
    inline CreateAssetModelResult& WithAssetModelId(const char* value) { SetAssetModelId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the asset model, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:asset-model/${AssetModelId}</code>
     * </p>
     */
    inline const Aws::String& GetAssetModelArn() const{ return m_assetModelArn; }
    inline void SetAssetModelArn(const Aws::String& value) { m_assetModelArn = value; }
    inline void SetAssetModelArn(Aws::String&& value) { m_assetModelArn = std::move(value); }
    inline void SetAssetModelArn(const char* value) { m_assetModelArn.assign(value); }
    inline CreateAssetModelResult& WithAssetModelArn(const Aws::String& value) { SetAssetModelArn(value); return *this;}
    inline CreateAssetModelResult& WithAssetModelArn(Aws::String&& value) { SetAssetModelArn(std::move(value)); return *this;}
    inline CreateAssetModelResult& WithAssetModelArn(const char* value) { SetAssetModelArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the asset model, which contains a state (<code>CREATING</code>
     * after successfully calling this operation) and any error message.</p>
     */
    inline const AssetModelStatus& GetAssetModelStatus() const{ return m_assetModelStatus; }
    inline void SetAssetModelStatus(const AssetModelStatus& value) { m_assetModelStatus = value; }
    inline void SetAssetModelStatus(AssetModelStatus&& value) { m_assetModelStatus = std::move(value); }
    inline CreateAssetModelResult& WithAssetModelStatus(const AssetModelStatus& value) { SetAssetModelStatus(value); return *this;}
    inline CreateAssetModelResult& WithAssetModelStatus(AssetModelStatus&& value) { SetAssetModelStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateAssetModelResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateAssetModelResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateAssetModelResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_assetModelId;

    Aws::String m_assetModelArn;

    AssetModelStatus m_assetModelStatus;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
