/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/iotevents/IoTEvents_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace IoTEvents
{
namespace Model
{

  /**
   * <p> The asset model property identifer of the input routed from AWS IoT
   * SiteWise. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/iotevents-2018-07-27/IotSiteWiseAssetModelPropertyIdentifier">AWS
   * API Reference</a></p>
   */
  class IotSiteWiseAssetModelPropertyIdentifier
  {
  public:
    AWS_IOTEVENTS_API IotSiteWiseAssetModelPropertyIdentifier();
    AWS_IOTEVENTS_API IotSiteWiseAssetModelPropertyIdentifier(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API IotSiteWiseAssetModelPropertyIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_IOTEVENTS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The ID of the AWS IoT SiteWise asset model. </p>
     */
    inline const Aws::String& GetAssetModelId() const{ return m_assetModelId; }

    /**
     * <p> The ID of the AWS IoT SiteWise asset model. </p>
     */
    inline bool AssetModelIdHasBeenSet() const { return m_assetModelIdHasBeenSet; }

    /**
     * <p> The ID of the AWS IoT SiteWise asset model. </p>
     */
    inline void SetAssetModelId(const Aws::String& value) { m_assetModelIdHasBeenSet = true; m_assetModelId = value; }

    /**
     * <p> The ID of the AWS IoT SiteWise asset model. </p>
     */
    inline void SetAssetModelId(Aws::String&& value) { m_assetModelIdHasBeenSet = true; m_assetModelId = std::move(value); }

    /**
     * <p> The ID of the AWS IoT SiteWise asset model. </p>
     */
    inline void SetAssetModelId(const char* value) { m_assetModelIdHasBeenSet = true; m_assetModelId.assign(value); }

    /**
     * <p> The ID of the AWS IoT SiteWise asset model. </p>
     */
    inline IotSiteWiseAssetModelPropertyIdentifier& WithAssetModelId(const Aws::String& value) { SetAssetModelId(value); return *this;}

    /**
     * <p> The ID of the AWS IoT SiteWise asset model. </p>
     */
    inline IotSiteWiseAssetModelPropertyIdentifier& WithAssetModelId(Aws::String&& value) { SetAssetModelId(std::move(value)); return *this;}

    /**
     * <p> The ID of the AWS IoT SiteWise asset model. </p>
     */
    inline IotSiteWiseAssetModelPropertyIdentifier& WithAssetModelId(const char* value) { SetAssetModelId(value); return *this;}


    /**
     * <p> The ID of the AWS IoT SiteWise asset property. </p>
     */
    inline const Aws::String& GetPropertyId() const{ return m_propertyId; }

    /**
     * <p> The ID of the AWS IoT SiteWise asset property. </p>
     */
    inline bool PropertyIdHasBeenSet() const { return m_propertyIdHasBeenSet; }

    /**
     * <p> The ID of the AWS IoT SiteWise asset property. </p>
     */
    inline void SetPropertyId(const Aws::String& value) { m_propertyIdHasBeenSet = true; m_propertyId = value; }

    /**
     * <p> The ID of the AWS IoT SiteWise asset property. </p>
     */
    inline void SetPropertyId(Aws::String&& value) { m_propertyIdHasBeenSet = true; m_propertyId = std::move(value); }

    /**
     * <p> The ID of the AWS IoT SiteWise asset property. </p>
     */
    inline void SetPropertyId(const char* value) { m_propertyIdHasBeenSet = true; m_propertyId.assign(value); }

    /**
     * <p> The ID of the AWS IoT SiteWise asset property. </p>
     */
    inline IotSiteWiseAssetModelPropertyIdentifier& WithPropertyId(const Aws::String& value) { SetPropertyId(value); return *this;}

    /**
     * <p> The ID of the AWS IoT SiteWise asset property. </p>
     */
    inline IotSiteWiseAssetModelPropertyIdentifier& WithPropertyId(Aws::String&& value) { SetPropertyId(std::move(value)); return *this;}

    /**
     * <p> The ID of the AWS IoT SiteWise asset property. </p>
     */
    inline IotSiteWiseAssetModelPropertyIdentifier& WithPropertyId(const char* value) { SetPropertyId(value); return *this;}

  private:

    Aws::String m_assetModelId;
    bool m_assetModelIdHasBeenSet = false;

    Aws::String m_propertyId;
    bool m_propertyIdHasBeenSet = false;
  };

} // namespace Model
} // namespace IoTEvents
} // namespace Aws
