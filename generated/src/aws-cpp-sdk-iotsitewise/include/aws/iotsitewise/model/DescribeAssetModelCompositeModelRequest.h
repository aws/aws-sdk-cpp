/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/IoTSiteWiseRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace IoTSiteWise
{
namespace Model
{

  /**
   */
  class DescribeAssetModelCompositeModelRequest : public IoTSiteWiseRequest
  {
  public:
    AWS_IOTSITEWISE_API DescribeAssetModelCompositeModelRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeAssetModelCompositeModel"; }

    AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;

    AWS_IOTSITEWISE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The ID of the asset model. This can be either the actual ID in UUID format,
     * or else <code>externalId:</code> followed by the external ID, if it has one. For
     * more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/object-ids.html#external-id-references">Referencing
     * objects with external IDs</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline const Aws::String& GetAssetModelId() const{ return m_assetModelId; }
    inline bool AssetModelIdHasBeenSet() const { return m_assetModelIdHasBeenSet; }
    inline void SetAssetModelId(const Aws::String& value) { m_assetModelIdHasBeenSet = true; m_assetModelId = value; }
    inline void SetAssetModelId(Aws::String&& value) { m_assetModelIdHasBeenSet = true; m_assetModelId = std::move(value); }
    inline void SetAssetModelId(const char* value) { m_assetModelIdHasBeenSet = true; m_assetModelId.assign(value); }
    inline DescribeAssetModelCompositeModelRequest& WithAssetModelId(const Aws::String& value) { SetAssetModelId(value); return *this;}
    inline DescribeAssetModelCompositeModelRequest& WithAssetModelId(Aws::String&& value) { SetAssetModelId(std::move(value)); return *this;}
    inline DescribeAssetModelCompositeModelRequest& WithAssetModelId(const char* value) { SetAssetModelId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of a composite model on this asset model. This can be either the
     * actual ID in UUID format, or else <code>externalId:</code> followed by the
     * external ID, if it has one. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/object-ids.html#external-id-references">Referencing
     * objects with external IDs</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline const Aws::String& GetAssetModelCompositeModelId() const{ return m_assetModelCompositeModelId; }
    inline bool AssetModelCompositeModelIdHasBeenSet() const { return m_assetModelCompositeModelIdHasBeenSet; }
    inline void SetAssetModelCompositeModelId(const Aws::String& value) { m_assetModelCompositeModelIdHasBeenSet = true; m_assetModelCompositeModelId = value; }
    inline void SetAssetModelCompositeModelId(Aws::String&& value) { m_assetModelCompositeModelIdHasBeenSet = true; m_assetModelCompositeModelId = std::move(value); }
    inline void SetAssetModelCompositeModelId(const char* value) { m_assetModelCompositeModelIdHasBeenSet = true; m_assetModelCompositeModelId.assign(value); }
    inline DescribeAssetModelCompositeModelRequest& WithAssetModelCompositeModelId(const Aws::String& value) { SetAssetModelCompositeModelId(value); return *this;}
    inline DescribeAssetModelCompositeModelRequest& WithAssetModelCompositeModelId(Aws::String&& value) { SetAssetModelCompositeModelId(std::move(value)); return *this;}
    inline DescribeAssetModelCompositeModelRequest& WithAssetModelCompositeModelId(const char* value) { SetAssetModelCompositeModelId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version alias that specifies the latest or active version of the asset
     * model. The details are returned in the response. The default value is
     * <code>LATEST</code>. See <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/model-active-version.html">
     * Asset model versions</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline const Aws::String& GetAssetModelVersion() const{ return m_assetModelVersion; }
    inline bool AssetModelVersionHasBeenSet() const { return m_assetModelVersionHasBeenSet; }
    inline void SetAssetModelVersion(const Aws::String& value) { m_assetModelVersionHasBeenSet = true; m_assetModelVersion = value; }
    inline void SetAssetModelVersion(Aws::String&& value) { m_assetModelVersionHasBeenSet = true; m_assetModelVersion = std::move(value); }
    inline void SetAssetModelVersion(const char* value) { m_assetModelVersionHasBeenSet = true; m_assetModelVersion.assign(value); }
    inline DescribeAssetModelCompositeModelRequest& WithAssetModelVersion(const Aws::String& value) { SetAssetModelVersion(value); return *this;}
    inline DescribeAssetModelCompositeModelRequest& WithAssetModelVersion(Aws::String&& value) { SetAssetModelVersion(std::move(value)); return *this;}
    inline DescribeAssetModelCompositeModelRequest& WithAssetModelVersion(const char* value) { SetAssetModelVersion(value); return *this;}
    ///@}
  private:

    Aws::String m_assetModelId;
    bool m_assetModelIdHasBeenSet = false;

    Aws::String m_assetModelCompositeModelId;
    bool m_assetModelCompositeModelIdHasBeenSet = false;

    Aws::String m_assetModelVersion;
    bool m_assetModelVersionHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
