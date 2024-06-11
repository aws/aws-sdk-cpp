﻿/**
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
  class DescribeTimeSeriesRequest : public IoTSiteWiseRequest
  {
  public:
    AWS_IOTSITEWISE_API DescribeTimeSeriesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeTimeSeries"; }

    AWS_IOTSITEWISE_API Aws::String SerializePayload() const override;

    AWS_IOTSITEWISE_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    /**
     * <p>The alias that identifies the time series.</p>
     */
    inline const Aws::String& GetAlias() const{ return m_alias; }
    inline bool AliasHasBeenSet() const { return m_aliasHasBeenSet; }
    inline void SetAlias(const Aws::String& value) { m_aliasHasBeenSet = true; m_alias = value; }
    inline void SetAlias(Aws::String&& value) { m_aliasHasBeenSet = true; m_alias = std::move(value); }
    inline void SetAlias(const char* value) { m_aliasHasBeenSet = true; m_alias.assign(value); }
    inline DescribeTimeSeriesRequest& WithAlias(const Aws::String& value) { SetAlias(value); return *this;}
    inline DescribeTimeSeriesRequest& WithAlias(Aws::String&& value) { SetAlias(std::move(value)); return *this;}
    inline DescribeTimeSeriesRequest& WithAlias(const char* value) { SetAlias(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the asset in which the asset property was created. This can be
     * either the actual ID in UUID format, or else <code>externalId:</code> followed
     * by the external ID, if it has one. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/object-ids.html#external-id-references">Referencing
     * objects with external IDs</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline const Aws::String& GetAssetId() const{ return m_assetId; }
    inline bool AssetIdHasBeenSet() const { return m_assetIdHasBeenSet; }
    inline void SetAssetId(const Aws::String& value) { m_assetIdHasBeenSet = true; m_assetId = value; }
    inline void SetAssetId(Aws::String&& value) { m_assetIdHasBeenSet = true; m_assetId = std::move(value); }
    inline void SetAssetId(const char* value) { m_assetIdHasBeenSet = true; m_assetId.assign(value); }
    inline DescribeTimeSeriesRequest& WithAssetId(const Aws::String& value) { SetAssetId(value); return *this;}
    inline DescribeTimeSeriesRequest& WithAssetId(Aws::String&& value) { SetAssetId(std::move(value)); return *this;}
    inline DescribeTimeSeriesRequest& WithAssetId(const char* value) { SetAssetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the asset property. This can be either the actual ID in UUID
     * format, or else <code>externalId:</code> followed by the external ID, if it has
     * one. For more information, see <a
     * href="https://docs.aws.amazon.com/iot-sitewise/latest/userguide/object-ids.html#external-id-references">Referencing
     * objects with external IDs</a> in the <i>IoT SiteWise User Guide</i>.</p>
     */
    inline const Aws::String& GetPropertyId() const{ return m_propertyId; }
    inline bool PropertyIdHasBeenSet() const { return m_propertyIdHasBeenSet; }
    inline void SetPropertyId(const Aws::String& value) { m_propertyIdHasBeenSet = true; m_propertyId = value; }
    inline void SetPropertyId(Aws::String&& value) { m_propertyIdHasBeenSet = true; m_propertyId = std::move(value); }
    inline void SetPropertyId(const char* value) { m_propertyIdHasBeenSet = true; m_propertyId.assign(value); }
    inline DescribeTimeSeriesRequest& WithPropertyId(const Aws::String& value) { SetPropertyId(value); return *this;}
    inline DescribeTimeSeriesRequest& WithPropertyId(Aws::String&& value) { SetPropertyId(std::move(value)); return *this;}
    inline DescribeTimeSeriesRequest& WithPropertyId(const char* value) { SetPropertyId(value); return *this;}
    ///@}
  private:

    Aws::String m_alias;
    bool m_aliasHasBeenSet = false;

    Aws::String m_assetId;
    bool m_assetIdHasBeenSet = false;

    Aws::String m_propertyId;
    bool m_propertyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTSiteWise
} // namespace Aws
