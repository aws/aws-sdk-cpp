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
    AWS_IOTSITEWISE_API CreateAssetResult();
    AWS_IOTSITEWISE_API CreateAssetResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_IOTSITEWISE_API CreateAssetResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ID of the asset. This ID uniquely identifies the asset within IoT
     * SiteWise and can be used with other IoT SiteWise APIs.</p>
     */
    inline const Aws::String& GetAssetId() const{ return m_assetId; }

    /**
     * <p>The ID of the asset. This ID uniquely identifies the asset within IoT
     * SiteWise and can be used with other IoT SiteWise APIs.</p>
     */
    inline void SetAssetId(const Aws::String& value) { m_assetId = value; }

    /**
     * <p>The ID of the asset. This ID uniquely identifies the asset within IoT
     * SiteWise and can be used with other IoT SiteWise APIs.</p>
     */
    inline void SetAssetId(Aws::String&& value) { m_assetId = std::move(value); }

    /**
     * <p>The ID of the asset. This ID uniquely identifies the asset within IoT
     * SiteWise and can be used with other IoT SiteWise APIs.</p>
     */
    inline void SetAssetId(const char* value) { m_assetId.assign(value); }

    /**
     * <p>The ID of the asset. This ID uniquely identifies the asset within IoT
     * SiteWise and can be used with other IoT SiteWise APIs.</p>
     */
    inline CreateAssetResult& WithAssetId(const Aws::String& value) { SetAssetId(value); return *this;}

    /**
     * <p>The ID of the asset. This ID uniquely identifies the asset within IoT
     * SiteWise and can be used with other IoT SiteWise APIs.</p>
     */
    inline CreateAssetResult& WithAssetId(Aws::String&& value) { SetAssetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the asset. This ID uniquely identifies the asset within IoT
     * SiteWise and can be used with other IoT SiteWise APIs.</p>
     */
    inline CreateAssetResult& WithAssetId(const char* value) { SetAssetId(value); return *this;}


    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the asset, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:asset/${AssetId}</code>
     * </p>
     */
    inline const Aws::String& GetAssetArn() const{ return m_assetArn; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the asset, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:asset/${AssetId}</code>
     * </p>
     */
    inline void SetAssetArn(const Aws::String& value) { m_assetArn = value; }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the asset, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:asset/${AssetId}</code>
     * </p>
     */
    inline void SetAssetArn(Aws::String&& value) { m_assetArn = std::move(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the asset, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:asset/${AssetId}</code>
     * </p>
     */
    inline void SetAssetArn(const char* value) { m_assetArn.assign(value); }

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the asset, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:asset/${AssetId}</code>
     * </p>
     */
    inline CreateAssetResult& WithAssetArn(const Aws::String& value) { SetAssetArn(value); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the asset, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:asset/${AssetId}</code>
     * </p>
     */
    inline CreateAssetResult& WithAssetArn(Aws::String&& value) { SetAssetArn(std::move(value)); return *this;}

    /**
     * <p>The <a
     * href="https://docs.aws.amazon.com/general/latest/gr/aws-arns-and-namespaces.html">ARN</a>
     * of the asset, which has the following format.</p> <p>
     * <code>arn:${Partition}:iotsitewise:${Region}:${Account}:asset/${AssetId}</code>
     * </p>
     */
    inline CreateAssetResult& WithAssetArn(const char* value) { SetAssetArn(value); return *this;}


    /**
     * <p>The status of the asset, which contains a state (<code>CREATING</code> after
     * successfully calling this operation) and any error message.</p>
     */
    inline const AssetStatus& GetAssetStatus() const{ return m_assetStatus; }

    /**
     * <p>The status of the asset, which contains a state (<code>CREATING</code> after
     * successfully calling this operation) and any error message.</p>
     */
    inline void SetAssetStatus(const AssetStatus& value) { m_assetStatus = value; }

    /**
     * <p>The status of the asset, which contains a state (<code>CREATING</code> after
     * successfully calling this operation) and any error message.</p>
     */
    inline void SetAssetStatus(AssetStatus&& value) { m_assetStatus = std::move(value); }

    /**
     * <p>The status of the asset, which contains a state (<code>CREATING</code> after
     * successfully calling this operation) and any error message.</p>
     */
    inline CreateAssetResult& WithAssetStatus(const AssetStatus& value) { SetAssetStatus(value); return *this;}

    /**
     * <p>The status of the asset, which contains a state (<code>CREATING</code> after
     * successfully calling this operation) and any error message.</p>
     */
    inline CreateAssetResult& WithAssetStatus(AssetStatus&& value) { SetAssetStatus(std::move(value)); return *this;}

  private:

    Aws::String m_assetId;

    Aws::String m_assetArn;

    AssetStatus m_assetStatus;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
