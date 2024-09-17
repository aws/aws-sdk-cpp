/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/lightsail/Lightsail_EXPORTS.h>
#include <aws/lightsail/LightsailRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/lightsail/model/IpAddressType.h>
#include <aws/lightsail/model/Tag.h>
#include <aws/lightsail/model/AddOnRequest.h>
#include <utility>

namespace Aws
{
namespace Lightsail
{
namespace Model
{

  /**
   */
  class CreateInstancesRequest : public LightsailRequest
  {
  public:
    AWS_LIGHTSAIL_API CreateInstancesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateInstances"; }

    AWS_LIGHTSAIL_API Aws::String SerializePayload() const override;

    AWS_LIGHTSAIL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The names to use for your new Lightsail instances. Separate multiple values
     * using quotation marks and commas, for example:
     * <code>["MyFirstInstance","MySecondInstance"]</code> </p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceNames() const{ return m_instanceNames; }
    inline bool InstanceNamesHasBeenSet() const { return m_instanceNamesHasBeenSet; }
    inline void SetInstanceNames(const Aws::Vector<Aws::String>& value) { m_instanceNamesHasBeenSet = true; m_instanceNames = value; }
    inline void SetInstanceNames(Aws::Vector<Aws::String>&& value) { m_instanceNamesHasBeenSet = true; m_instanceNames = std::move(value); }
    inline CreateInstancesRequest& WithInstanceNames(const Aws::Vector<Aws::String>& value) { SetInstanceNames(value); return *this;}
    inline CreateInstancesRequest& WithInstanceNames(Aws::Vector<Aws::String>&& value) { SetInstanceNames(std::move(value)); return *this;}
    inline CreateInstancesRequest& AddInstanceNames(const Aws::String& value) { m_instanceNamesHasBeenSet = true; m_instanceNames.push_back(value); return *this; }
    inline CreateInstancesRequest& AddInstanceNames(Aws::String&& value) { m_instanceNamesHasBeenSet = true; m_instanceNames.push_back(std::move(value)); return *this; }
    inline CreateInstancesRequest& AddInstanceNames(const char* value) { m_instanceNamesHasBeenSet = true; m_instanceNames.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Availability Zone in which to create your instance. Use the following
     * format: <code>us-east-2a</code> (case sensitive). You can get a list of
     * Availability Zones by using the <a
     * href="http://docs.aws.amazon.com/lightsail/2016-11-28/api-reference/API_GetRegions.html">get
     * regions</a> operation. Be sure to add the <code>include Availability
     * Zones</code> parameter to your request.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }
    inline CreateInstancesRequest& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}
    inline CreateInstancesRequest& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}
    inline CreateInstancesRequest& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID for a virtual private server image (<code>app_wordpress_x_x</code> or
     * <code>app_lamp_x_x</code>). Use the <code>get blueprints</code> operation to
     * return a list of available images (or <i>blueprints</i>).</p>  <p>Use
     * active blueprints when creating new instances. Inactive blueprints are listed to
     * support customers with existing instances and are not necessarily available to
     * create new instances. Blueprints are marked inactive when they become outdated
     * due to operating system updates or new application releases.</p> 
     */
    inline const Aws::String& GetBlueprintId() const{ return m_blueprintId; }
    inline bool BlueprintIdHasBeenSet() const { return m_blueprintIdHasBeenSet; }
    inline void SetBlueprintId(const Aws::String& value) { m_blueprintIdHasBeenSet = true; m_blueprintId = value; }
    inline void SetBlueprintId(Aws::String&& value) { m_blueprintIdHasBeenSet = true; m_blueprintId = std::move(value); }
    inline void SetBlueprintId(const char* value) { m_blueprintIdHasBeenSet = true; m_blueprintId.assign(value); }
    inline CreateInstancesRequest& WithBlueprintId(const Aws::String& value) { SetBlueprintId(value); return *this;}
    inline CreateInstancesRequest& WithBlueprintId(Aws::String&& value) { SetBlueprintId(std::move(value)); return *this;}
    inline CreateInstancesRequest& WithBlueprintId(const char* value) { SetBlueprintId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The bundle of specification information for your virtual private server (or
     * <i>instance</i>), including the pricing plan (<code>medium_x_x</code>).</p>
     */
    inline const Aws::String& GetBundleId() const{ return m_bundleId; }
    inline bool BundleIdHasBeenSet() const { return m_bundleIdHasBeenSet; }
    inline void SetBundleId(const Aws::String& value) { m_bundleIdHasBeenSet = true; m_bundleId = value; }
    inline void SetBundleId(Aws::String&& value) { m_bundleIdHasBeenSet = true; m_bundleId = std::move(value); }
    inline void SetBundleId(const char* value) { m_bundleIdHasBeenSet = true; m_bundleId.assign(value); }
    inline CreateInstancesRequest& WithBundleId(const Aws::String& value) { SetBundleId(value); return *this;}
    inline CreateInstancesRequest& WithBundleId(Aws::String&& value) { SetBundleId(std::move(value)); return *this;}
    inline CreateInstancesRequest& WithBundleId(const char* value) { SetBundleId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A launch script you can create that configures a server with additional user
     * data. For example, you might want to run <code>apt-get -y update</code>.</p>
     *  <p>Depending on the machine image you choose, the command to get software
     * on your instance varies. Amazon Linux and CentOS use <code>yum</code>, Debian
     * and Ubuntu use <code>apt-get</code>, and FreeBSD uses <code>pkg</code>. For a
     * complete list, see the <a
     * href="https://lightsail.aws.amazon.com/ls/docs/en_us/articles/compare-options-choose-lightsail-instance-image">Amazon
     * Lightsail Developer Guide</a>.</p> 
     */
    inline const Aws::String& GetUserData() const{ return m_userData; }
    inline bool UserDataHasBeenSet() const { return m_userDataHasBeenSet; }
    inline void SetUserData(const Aws::String& value) { m_userDataHasBeenSet = true; m_userData = value; }
    inline void SetUserData(Aws::String&& value) { m_userDataHasBeenSet = true; m_userData = std::move(value); }
    inline void SetUserData(const char* value) { m_userDataHasBeenSet = true; m_userData.assign(value); }
    inline CreateInstancesRequest& WithUserData(const Aws::String& value) { SetUserData(value); return *this;}
    inline CreateInstancesRequest& WithUserData(Aws::String&& value) { SetUserData(std::move(value)); return *this;}
    inline CreateInstancesRequest& WithUserData(const char* value) { SetUserData(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of your key pair.</p>
     */
    inline const Aws::String& GetKeyPairName() const{ return m_keyPairName; }
    inline bool KeyPairNameHasBeenSet() const { return m_keyPairNameHasBeenSet; }
    inline void SetKeyPairName(const Aws::String& value) { m_keyPairNameHasBeenSet = true; m_keyPairName = value; }
    inline void SetKeyPairName(Aws::String&& value) { m_keyPairNameHasBeenSet = true; m_keyPairName = std::move(value); }
    inline void SetKeyPairName(const char* value) { m_keyPairNameHasBeenSet = true; m_keyPairName.assign(value); }
    inline CreateInstancesRequest& WithKeyPairName(const Aws::String& value) { SetKeyPairName(value); return *this;}
    inline CreateInstancesRequest& WithKeyPairName(Aws::String&& value) { SetKeyPairName(std::move(value)); return *this;}
    inline CreateInstancesRequest& WithKeyPairName(const char* value) { SetKeyPairName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tag keys and optional values to add to the resource during create.</p>
     * <p>Use the <code>TagResource</code> action to tag a resource after it's
     * created.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreateInstancesRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreateInstancesRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreateInstancesRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreateInstancesRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of objects representing the add-ons to enable for the new
     * instance.</p>
     */
    inline const Aws::Vector<AddOnRequest>& GetAddOns() const{ return m_addOns; }
    inline bool AddOnsHasBeenSet() const { return m_addOnsHasBeenSet; }
    inline void SetAddOns(const Aws::Vector<AddOnRequest>& value) { m_addOnsHasBeenSet = true; m_addOns = value; }
    inline void SetAddOns(Aws::Vector<AddOnRequest>&& value) { m_addOnsHasBeenSet = true; m_addOns = std::move(value); }
    inline CreateInstancesRequest& WithAddOns(const Aws::Vector<AddOnRequest>& value) { SetAddOns(value); return *this;}
    inline CreateInstancesRequest& WithAddOns(Aws::Vector<AddOnRequest>&& value) { SetAddOns(std::move(value)); return *this;}
    inline CreateInstancesRequest& AddAddOns(const AddOnRequest& value) { m_addOnsHasBeenSet = true; m_addOns.push_back(value); return *this; }
    inline CreateInstancesRequest& AddAddOns(AddOnRequest&& value) { m_addOnsHasBeenSet = true; m_addOns.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IP address type for the instance.</p> <p>The possible values are
     * <code>ipv4</code> for IPv4 only, <code>ipv6</code> for IPv6 only, and
     * <code>dualstack</code> for IPv4 and IPv6.</p> <p>The default value is
     * <code>dualstack</code>.</p>
     */
    inline const IpAddressType& GetIpAddressType() const{ return m_ipAddressType; }
    inline bool IpAddressTypeHasBeenSet() const { return m_ipAddressTypeHasBeenSet; }
    inline void SetIpAddressType(const IpAddressType& value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = value; }
    inline void SetIpAddressType(IpAddressType&& value) { m_ipAddressTypeHasBeenSet = true; m_ipAddressType = std::move(value); }
    inline CreateInstancesRequest& WithIpAddressType(const IpAddressType& value) { SetIpAddressType(value); return *this;}
    inline CreateInstancesRequest& WithIpAddressType(IpAddressType&& value) { SetIpAddressType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_instanceNames;
    bool m_instanceNamesHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    Aws::String m_blueprintId;
    bool m_blueprintIdHasBeenSet = false;

    Aws::String m_bundleId;
    bool m_bundleIdHasBeenSet = false;

    Aws::String m_userData;
    bool m_userDataHasBeenSet = false;

    Aws::String m_keyPairName;
    bool m_keyPairNameHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::Vector<AddOnRequest> m_addOns;
    bool m_addOnsHasBeenSet = false;

    IpAddressType m_ipAddressType;
    bool m_ipAddressTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Lightsail
} // namespace Aws
