/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/networkmanager/NetworkManager_EXPORTS.h>
#include <aws/networkmanager/NetworkManagerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/networkmanager/model/AWSLocation.h>
#include <aws/networkmanager/model/Location.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/networkmanager/model/Tag.h>
#include <utility>

namespace Aws
{
namespace NetworkManager
{
namespace Model
{

  /**
   */
  class CreateDeviceRequest : public NetworkManagerRequest
  {
  public:
    AWS_NETWORKMANAGER_API CreateDeviceRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateDevice"; }

    AWS_NETWORKMANAGER_API Aws::String SerializePayload() const override;


    /**
     * <p>The ID of the global network.</p>
     */
    inline const Aws::String& GetGlobalNetworkId() const{ return m_globalNetworkId; }

    /**
     * <p>The ID of the global network.</p>
     */
    inline bool GlobalNetworkIdHasBeenSet() const { return m_globalNetworkIdHasBeenSet; }

    /**
     * <p>The ID of the global network.</p>
     */
    inline void SetGlobalNetworkId(const Aws::String& value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId = value; }

    /**
     * <p>The ID of the global network.</p>
     */
    inline void SetGlobalNetworkId(Aws::String&& value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId = std::move(value); }

    /**
     * <p>The ID of the global network.</p>
     */
    inline void SetGlobalNetworkId(const char* value) { m_globalNetworkIdHasBeenSet = true; m_globalNetworkId.assign(value); }

    /**
     * <p>The ID of the global network.</p>
     */
    inline CreateDeviceRequest& WithGlobalNetworkId(const Aws::String& value) { SetGlobalNetworkId(value); return *this;}

    /**
     * <p>The ID of the global network.</p>
     */
    inline CreateDeviceRequest& WithGlobalNetworkId(Aws::String&& value) { SetGlobalNetworkId(std::move(value)); return *this;}

    /**
     * <p>The ID of the global network.</p>
     */
    inline CreateDeviceRequest& WithGlobalNetworkId(const char* value) { SetGlobalNetworkId(value); return *this;}


    /**
     * <p>The Amazon Web Services location of the device, if applicable. For an
     * on-premises device, you can omit this parameter.</p>
     */
    inline const AWSLocation& GetAWSLocation() const{ return m_aWSLocation; }

    /**
     * <p>The Amazon Web Services location of the device, if applicable. For an
     * on-premises device, you can omit this parameter.</p>
     */
    inline bool AWSLocationHasBeenSet() const { return m_aWSLocationHasBeenSet; }

    /**
     * <p>The Amazon Web Services location of the device, if applicable. For an
     * on-premises device, you can omit this parameter.</p>
     */
    inline void SetAWSLocation(const AWSLocation& value) { m_aWSLocationHasBeenSet = true; m_aWSLocation = value; }

    /**
     * <p>The Amazon Web Services location of the device, if applicable. For an
     * on-premises device, you can omit this parameter.</p>
     */
    inline void SetAWSLocation(AWSLocation&& value) { m_aWSLocationHasBeenSet = true; m_aWSLocation = std::move(value); }

    /**
     * <p>The Amazon Web Services location of the device, if applicable. For an
     * on-premises device, you can omit this parameter.</p>
     */
    inline CreateDeviceRequest& WithAWSLocation(const AWSLocation& value) { SetAWSLocation(value); return *this;}

    /**
     * <p>The Amazon Web Services location of the device, if applicable. For an
     * on-premises device, you can omit this parameter.</p>
     */
    inline CreateDeviceRequest& WithAWSLocation(AWSLocation&& value) { SetAWSLocation(std::move(value)); return *this;}


    /**
     * <p>A description of the device.</p> <p>Constraints: Maximum length of 256
     * characters.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }

    /**
     * <p>A description of the device.</p> <p>Constraints: Maximum length of 256
     * characters.</p>
     */
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }

    /**
     * <p>A description of the device.</p> <p>Constraints: Maximum length of 256
     * characters.</p>
     */
    inline void SetDescription(const Aws::String& value) { m_descriptionHasBeenSet = true; m_description = value; }

    /**
     * <p>A description of the device.</p> <p>Constraints: Maximum length of 256
     * characters.</p>
     */
    inline void SetDescription(Aws::String&& value) { m_descriptionHasBeenSet = true; m_description = std::move(value); }

    /**
     * <p>A description of the device.</p> <p>Constraints: Maximum length of 256
     * characters.</p>
     */
    inline void SetDescription(const char* value) { m_descriptionHasBeenSet = true; m_description.assign(value); }

    /**
     * <p>A description of the device.</p> <p>Constraints: Maximum length of 256
     * characters.</p>
     */
    inline CreateDeviceRequest& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}

    /**
     * <p>A description of the device.</p> <p>Constraints: Maximum length of 256
     * characters.</p>
     */
    inline CreateDeviceRequest& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}

    /**
     * <p>A description of the device.</p> <p>Constraints: Maximum length of 256
     * characters.</p>
     */
    inline CreateDeviceRequest& WithDescription(const char* value) { SetDescription(value); return *this;}


    /**
     * <p>The type of the device.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>The type of the device.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of the device.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of the device.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of the device.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>The type of the device.</p>
     */
    inline CreateDeviceRequest& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>The type of the device.</p>
     */
    inline CreateDeviceRequest& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>The type of the device.</p>
     */
    inline CreateDeviceRequest& WithType(const char* value) { SetType(value); return *this;}


    /**
     * <p>The vendor of the device.</p> <p>Constraints: Maximum length of 128
     * characters.</p>
     */
    inline const Aws::String& GetVendor() const{ return m_vendor; }

    /**
     * <p>The vendor of the device.</p> <p>Constraints: Maximum length of 128
     * characters.</p>
     */
    inline bool VendorHasBeenSet() const { return m_vendorHasBeenSet; }

    /**
     * <p>The vendor of the device.</p> <p>Constraints: Maximum length of 128
     * characters.</p>
     */
    inline void SetVendor(const Aws::String& value) { m_vendorHasBeenSet = true; m_vendor = value; }

    /**
     * <p>The vendor of the device.</p> <p>Constraints: Maximum length of 128
     * characters.</p>
     */
    inline void SetVendor(Aws::String&& value) { m_vendorHasBeenSet = true; m_vendor = std::move(value); }

    /**
     * <p>The vendor of the device.</p> <p>Constraints: Maximum length of 128
     * characters.</p>
     */
    inline void SetVendor(const char* value) { m_vendorHasBeenSet = true; m_vendor.assign(value); }

    /**
     * <p>The vendor of the device.</p> <p>Constraints: Maximum length of 128
     * characters.</p>
     */
    inline CreateDeviceRequest& WithVendor(const Aws::String& value) { SetVendor(value); return *this;}

    /**
     * <p>The vendor of the device.</p> <p>Constraints: Maximum length of 128
     * characters.</p>
     */
    inline CreateDeviceRequest& WithVendor(Aws::String&& value) { SetVendor(std::move(value)); return *this;}

    /**
     * <p>The vendor of the device.</p> <p>Constraints: Maximum length of 128
     * characters.</p>
     */
    inline CreateDeviceRequest& WithVendor(const char* value) { SetVendor(value); return *this;}


    /**
     * <p>The model of the device.</p> <p>Constraints: Maximum length of 128
     * characters.</p>
     */
    inline const Aws::String& GetModel() const{ return m_model; }

    /**
     * <p>The model of the device.</p> <p>Constraints: Maximum length of 128
     * characters.</p>
     */
    inline bool ModelHasBeenSet() const { return m_modelHasBeenSet; }

    /**
     * <p>The model of the device.</p> <p>Constraints: Maximum length of 128
     * characters.</p>
     */
    inline void SetModel(const Aws::String& value) { m_modelHasBeenSet = true; m_model = value; }

    /**
     * <p>The model of the device.</p> <p>Constraints: Maximum length of 128
     * characters.</p>
     */
    inline void SetModel(Aws::String&& value) { m_modelHasBeenSet = true; m_model = std::move(value); }

    /**
     * <p>The model of the device.</p> <p>Constraints: Maximum length of 128
     * characters.</p>
     */
    inline void SetModel(const char* value) { m_modelHasBeenSet = true; m_model.assign(value); }

    /**
     * <p>The model of the device.</p> <p>Constraints: Maximum length of 128
     * characters.</p>
     */
    inline CreateDeviceRequest& WithModel(const Aws::String& value) { SetModel(value); return *this;}

    /**
     * <p>The model of the device.</p> <p>Constraints: Maximum length of 128
     * characters.</p>
     */
    inline CreateDeviceRequest& WithModel(Aws::String&& value) { SetModel(std::move(value)); return *this;}

    /**
     * <p>The model of the device.</p> <p>Constraints: Maximum length of 128
     * characters.</p>
     */
    inline CreateDeviceRequest& WithModel(const char* value) { SetModel(value); return *this;}


    /**
     * <p>The serial number of the device.</p> <p>Constraints: Maximum length of 128
     * characters.</p>
     */
    inline const Aws::String& GetSerialNumber() const{ return m_serialNumber; }

    /**
     * <p>The serial number of the device.</p> <p>Constraints: Maximum length of 128
     * characters.</p>
     */
    inline bool SerialNumberHasBeenSet() const { return m_serialNumberHasBeenSet; }

    /**
     * <p>The serial number of the device.</p> <p>Constraints: Maximum length of 128
     * characters.</p>
     */
    inline void SetSerialNumber(const Aws::String& value) { m_serialNumberHasBeenSet = true; m_serialNumber = value; }

    /**
     * <p>The serial number of the device.</p> <p>Constraints: Maximum length of 128
     * characters.</p>
     */
    inline void SetSerialNumber(Aws::String&& value) { m_serialNumberHasBeenSet = true; m_serialNumber = std::move(value); }

    /**
     * <p>The serial number of the device.</p> <p>Constraints: Maximum length of 128
     * characters.</p>
     */
    inline void SetSerialNumber(const char* value) { m_serialNumberHasBeenSet = true; m_serialNumber.assign(value); }

    /**
     * <p>The serial number of the device.</p> <p>Constraints: Maximum length of 128
     * characters.</p>
     */
    inline CreateDeviceRequest& WithSerialNumber(const Aws::String& value) { SetSerialNumber(value); return *this;}

    /**
     * <p>The serial number of the device.</p> <p>Constraints: Maximum length of 128
     * characters.</p>
     */
    inline CreateDeviceRequest& WithSerialNumber(Aws::String&& value) { SetSerialNumber(std::move(value)); return *this;}

    /**
     * <p>The serial number of the device.</p> <p>Constraints: Maximum length of 128
     * characters.</p>
     */
    inline CreateDeviceRequest& WithSerialNumber(const char* value) { SetSerialNumber(value); return *this;}


    /**
     * <p>The location of the device.</p>
     */
    inline const Location& GetLocation() const{ return m_location; }

    /**
     * <p>The location of the device.</p>
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * <p>The location of the device.</p>
     */
    inline void SetLocation(const Location& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p>The location of the device.</p>
     */
    inline void SetLocation(Location&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p>The location of the device.</p>
     */
    inline CreateDeviceRequest& WithLocation(const Location& value) { SetLocation(value); return *this;}

    /**
     * <p>The location of the device.</p>
     */
    inline CreateDeviceRequest& WithLocation(Location&& value) { SetLocation(std::move(value)); return *this;}


    /**
     * <p>The ID of the site.</p>
     */
    inline const Aws::String& GetSiteId() const{ return m_siteId; }

    /**
     * <p>The ID of the site.</p>
     */
    inline bool SiteIdHasBeenSet() const { return m_siteIdHasBeenSet; }

    /**
     * <p>The ID of the site.</p>
     */
    inline void SetSiteId(const Aws::String& value) { m_siteIdHasBeenSet = true; m_siteId = value; }

    /**
     * <p>The ID of the site.</p>
     */
    inline void SetSiteId(Aws::String&& value) { m_siteIdHasBeenSet = true; m_siteId = std::move(value); }

    /**
     * <p>The ID of the site.</p>
     */
    inline void SetSiteId(const char* value) { m_siteIdHasBeenSet = true; m_siteId.assign(value); }

    /**
     * <p>The ID of the site.</p>
     */
    inline CreateDeviceRequest& WithSiteId(const Aws::String& value) { SetSiteId(value); return *this;}

    /**
     * <p>The ID of the site.</p>
     */
    inline CreateDeviceRequest& WithSiteId(Aws::String&& value) { SetSiteId(std::move(value)); return *this;}

    /**
     * <p>The ID of the site.</p>
     */
    inline CreateDeviceRequest& WithSiteId(const char* value) { SetSiteId(value); return *this;}


    /**
     * <p>The tags to apply to the resource during creation.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The tags to apply to the resource during creation.</p>
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The tags to apply to the resource during creation.</p>
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The tags to apply to the resource during creation.</p>
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The tags to apply to the resource during creation.</p>
     */
    inline CreateDeviceRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The tags to apply to the resource during creation.</p>
     */
    inline CreateDeviceRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The tags to apply to the resource during creation.</p>
     */
    inline CreateDeviceRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The tags to apply to the resource during creation.</p>
     */
    inline CreateDeviceRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_globalNetworkId;
    bool m_globalNetworkIdHasBeenSet = false;

    AWSLocation m_aWSLocation;
    bool m_aWSLocationHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_vendor;
    bool m_vendorHasBeenSet = false;

    Aws::String m_model;
    bool m_modelHasBeenSet = false;

    Aws::String m_serialNumber;
    bool m_serialNumberHasBeenSet = false;

    Location m_location;
    bool m_locationHasBeenSet = false;

    Aws::String m_siteId;
    bool m_siteIdHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace NetworkManager
} // namespace Aws
