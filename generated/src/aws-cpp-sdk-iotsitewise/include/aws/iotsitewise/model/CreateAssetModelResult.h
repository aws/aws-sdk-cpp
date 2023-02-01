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
    AWS_IOTSITEWISE_API CreateAssetModelResult();
    AWS_IOTSITEWISE_API CreateAssetModelResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API CreateAssetModelResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the asset model. You can use this ID when you call other IoT
     * SiteWise APIs.</p>
     */
    inline const Aws::String& GetAssetModelId() const{ return m_assetModelId; }

    /**
     * <p>The ID of the asset model. You can use this ID when you call other IoT
     * SiteWise APIs.</p>
     */
    inline void SetAssetModelId(const Aws::String& value) { m_assetModelId = value; }

    /**
     * <p>The ID of the asset model. You can use this ID when you call other IoT
     * SiteWise APIs.</p>
     */
    inline void SetAssetModelId(Aws::String&& value) { m_assetModelId = std::move(value); }

    /**
     * <p>The ID of the asset model. You can use this ID when you call other IoT
     * SiteWise APIs.</p>
     */
    inline void SetAssetModelId(const char* value) { m_assetModelId.assign(value); }

    /**
     * <p>The ID of the asset model. You can use this ID when you call other IoT
     * SiteWise APIs.</p>
     */
    inline CreateAssetModelResult& WithAssetModelId(const Aws::String& value) { SetAssetModelId(value); return *this;}

    /**
     * <p>The ID of the asset model. You can use this ID when you call other IoT
     * SiteWise APIs.</p>
     */
    inline CreateAssetModelResult& WithAssetModelId(Aws::String&& value) { SetAssetModelId(std::move(value)); return *this;}

    /**
     * <p>The ID of the asset model. You can use this ID when you call other IoT
     * SiteWise APIs.</p>
     */
    inline CreateAssetModelResult& WithAssetModelId(const char* value) { SetAssetModelId(value); return *this;}


    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the asset model, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:asset-model/${AssetModelId}</code>
     * </p>
     */
    inline const Aws::String& GetAssetModelArn() const{ return m_assetModelArn; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the asset model, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:asset-model/${AssetModelId}</code>
     * </p>
     */
    inline void SetAssetModelArn(const Aws::String& value) { m_assetModelArn = value; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the asset model, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:asset-model/${AssetModelId}</code>
     * </p>
     */
    inline void SetAssetModelArn(Aws::String&& value) { m_assetModelArn = std::move(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the asset model, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:asset-model/${AssetModelId}</code>
     * </p>
     */
    inline void SetAssetModelArn(const char* value) { m_assetModelArn.assign(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the asset model, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:asset-model/${AssetModelId}</code>
     * </p>
     */
    inline CreateAssetModelResult& WithAssetModelArn(const Aws::String& value) { SetAssetModelArn(value); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the asset model, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:asset-model/${AssetModelId}</code>
     * </p>
     */
    inline CreateAssetModelResult& WithAssetModelArn(Aws::String&& value) { SetAssetModelArn(std::move(value)); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the asset model, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:asset-model/${AssetModelId}</code>
     * </p>
     */
    inline CreateAssetModelResult& WithAssetModelArn(const char* value) { SetAssetModelArn(value); return *this;}


    /**
     * <p>The status of the asset model, which contains a state (<code>CREATING</code>
     * after successfully calling this operation) and any error message.</p>
     */
    inline const AssetModelStatus& GetAssetModelStatus() const{ return m_assetModelStatus; }

    /**
     * <p>The status of the asset model, which contains a state (<code>CREATING</code>
     * after successfully calling this operation) and any error message.</p>
     */
    inline void SetAssetModelStatus(const AssetModelStatus& value) { m_assetModelStatus = value; }

    /**
     * <p>The status of the asset model, which contains a state (<code>CREATING</code>
     * after successfully calling this operation) and any error message.</p>
     */
    inline void SetAssetModelStatus(AssetModelStatus&& value) { m_assetModelStatus = std::move(value); }

    /**
     * <p>The status of the asset model, which contains a state (<code>CREATING</code>
     * after successfully calling this operation) and any error message.</p>
     */
    inline CreateAssetModelResult& WithAssetModelStatus(const AssetModelStatus& value) { SetAssetModelStatus(value); return *this;}

    /**
     * <p>The status of the asset model, which contains a state (<code>CREATING</code>
     * after successfully calling this operation) and any error message.</p>
     */
    inline CreateAssetModelResult& WithAssetModelStatus(AssetModelStatus&& value) { SetAssetModelStatus(std::move(value)); return *this;}

  private:

    Aws::String m_assetModelId;

    Aws::String m_assetModelArn;

    AssetModelStatus m_assetModelStatus;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
